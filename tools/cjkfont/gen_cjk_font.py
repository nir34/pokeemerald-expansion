#!/usr/bin/env python3
"""Generate 12x12 1bpp CJK glyph table and append CJK mappings to charmap.txt."""
import os
from PIL import Image, ImageDraw, ImageFont

FONT_PATH = '/tmp/wqy/WenQuanYi-Bitmap-Song-TTF-master/WenQuanYi Bitmap Song 12px.ttf'
CHARMAP_PATH = 'charmap.txt'
OUT_H = 'src/data/text/cjk_font_12x12.h'

# Collect GB2312 characters + common CJK punctuation
chars = []
seen = set()

existing = set()
import re
for line in open(CHARMAP_PATH, encoding='utf-8'):
    if line.strip() == '@ === CJK 12x12 ===': break
    m = re.match(r"\s*'([^']+)'\s*=", line)
    if m: existing.add(m.group(1))

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

font = ImageFont.truetype(FONT_PATH, 12)

os.makedirs(os.path.dirname(OUT_H), exist_ok=True)
with open(OUT_H, 'w', encoding='utf-8') as f:
    f.write('#ifndef GUARD_CJK_FONT_12X12_H\n#define GUARD_CJK_FONT_12X12_H\n\n')
    f.write(f'#define CJK_FONT_COUNT {len(chars)}\n')
    f.write('static const u8 gFontCjk12_Glyphs[][24] = {\n')
    for idx, ch in enumerate(chars):
        img = Image.new('1', (12, 12), 0)
        draw = ImageDraw.Draw(img)
        draw.text((0, 0), ch, font=font, fill=1)
        row_bytes = []
        for y in range(12):
            bits = 0
            for x in range(12):
                if img.getpixel((x, y)):
                    bits |= (1 << (11 - x))
            row_bytes.append(f'0x{(bits >> 4) & 0xFF:02X}, 0x{(bits & 0xF) << 4:02X}')
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
