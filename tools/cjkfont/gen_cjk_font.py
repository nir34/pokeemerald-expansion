#!/usr/bin/env python3
"""Generate 12x12 1bpp CJK glyph table and append CJK mappings to charmap.txt.

Source font: Fusion Pixel Font 12px (缝合像素字体), SIL OFL 1.1
(see tools/cjkfont/fonts/LICENSE-OFL.txt). It is a real 12x12 pixel font, so
every glyph rasterises onto an exact pixel grid: strokes are always a whole
pixel wide, unlike the old WenQuanYi outline/bitmap-song source whose thin
serif strokes had to be thresholded out of an antialiased render.

Glyphs are written out with FreeType's monochrome renderer (mask mode "1"), not
by drawing into a mode-"1" image, so Pillow never antialiases and then re-
thresholds the shape.
"""
import os
import re
import sys
from PIL import ImageFont

HERE = os.path.dirname(os.path.abspath(__file__))
FONT_PATH = os.path.join(HERE, 'fonts', 'fusion-pixel-12px-sc.ttf')
CHARMAP_PATH = 'charmap.txt'
OUT_H = 'src/data/text/cjk_font_12x12.h'

GLYPH_W = 12
GLYPH_H = 12

# Collect GB2312 characters + common CJK punctuation
chars = []
seen = set()

existing = set()
for line in open(CHARMAP_PATH, encoding='utf-8'):
    if line.strip() == '@ === CJK 12x12 ===':
        break
    m = re.match(r"\s*'([^']+)'\s*=", line)
    if m:
        existing.add(m.group(1))


def add_ch(c):
    if c not in seen and c not in existing and len(c) == 1:
        seen.add(c)
        chars.append(c)


for c in '，。！？：；“”‘’（）【】《》、…—·～％＋－×÷＝「」『』':
    add_ch(c)

# GB2312 level 1 & 2 (0xB0-0xF7, 0xA1-0xFE)
for b1 in range(0xB0, 0xF8):
    for b2 in range(0xA1, 0xFF):
        try:
            ch = bytes([b1, b2]).decode('gb2312')
            add_ch(ch)
        except UnicodeDecodeError:
            pass

font = ImageFont.truetype(FONT_PATH, GLYPH_W)


def render_bits(ch):
    """Rasterise one character to GLYPH_H rows of GLYPH_W bits.

    Uses the monochrome FreeType mask so each pixel is either fully on or off.
    """
    mask = font.getmask(ch, mode='1')
    w, h = mask.size
    raw = bytes(mask)  # one byte per pixel, 0 or 255
    rows = [0] * GLYPH_H
    for y in range(min(h, GLYPH_H)):
        bits = 0
        base = y * w
        for x in range(min(w, GLYPH_W)):
            if raw[base + x]:
                bits |= 1 << (GLYPH_W - 1 - x)
        rows[y] = bits
    return rows, (w, h)


os.makedirs(os.path.dirname(OUT_H), exist_ok=True)
blank = []
too_wide = []
with open(OUT_H, 'w', encoding='utf-8') as f:
    f.write('#ifndef GUARD_CJK_FONT_12X12_H\n#define GUARD_CJK_FONT_12X12_H\n\n')
    f.write(f'#define CJK_FONT_COUNT {len(chars)}\n')
    f.write('static const u8 gFontCjk12_Glyphs[][24] = {\n')
    for idx, ch in enumerate(chars):
        rows, size = render_bits(ch)
        if not any(rows):
            blank.append(ch)
        if size[0] > GLYPH_W:
            too_wide.append(ch)
        row_bytes = [f'0x{(bits >> 4) & 0xFF:02X}, 0x{(bits & 0xF) << 4:02X}' for bits in rows]
        f.write(f'    /* {idx}: {ch} */ {{ {", ".join(row_bytes)} }},\n')
    f.write('};\n\n#endif // GUARD_CJK_FONT_12X12_H\n')

# Append to charmap.txt (remove old CJK block if any)
lines = open(CHARMAP_PATH, encoding='utf-8').read().splitlines()
marker = '@ === CJK 12x12 ==='
if marker in lines:
    lines = lines[:lines.index(marker)]
lines.append(marker)
for idx, ch in enumerate(chars):
    hi = 0x21 + (idx // 247)
    lo = idx % 247
    lines.append(f"'{ch}' = FC {hi:02X} {lo:02X}")
open(CHARMAP_PATH, 'w', encoding='utf-8').write('\n'.join(lines) + '\n')

print(f'Generated {len(chars)} glyphs -> {OUT_H} and updated {CHARMAP_PATH}')
if blank:
    print(f'warning: {len(blank)} blank glyphs: {"".join(blank[:40])}', file=sys.stderr)
if too_wide:
    print(f'warning: {len(too_wide)} glyphs wider than {GLYPH_W}px: {"".join(too_wide[:40])}', file=sys.stderr)
