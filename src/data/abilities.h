const struct Ability gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special ability."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("恶臭"),
        .description = COMPOUND_STRING("May cause a foe to flinch."),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("降雨"),
        .description = COMPOUND_STRING("Summons Rain for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("加速"),
        .description = COMPOUND_STRING("Gradually boosts Speed."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("战斗盔甲"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("结实"),
        .description = COMPOUND_STRING("Cannot be knocked out with\none hit."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("湿气"),
        .description = COMPOUND_STRING("Prevents self-destruction."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("柔软"),
        .description = COMPOUND_STRING("Prevents paralysis."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("沙隐"),
        .description = COMPOUND_STRING("Ups evasion in Sand."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("静电"),
        .description = COMPOUND_STRING("Can paralyze on contact."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("蓄电"),
        .description = COMPOUND_STRING("Absorbs Electric moves\nto heal HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("储水"),
        .description = COMPOUND_STRING("Absorbs Water moves\nto heal HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("迟钝"),
        .description = COMPOUND_STRING("Prevents attraction and\nIntimidate."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("无关天气"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("复眼"),
        .description = COMPOUND_STRING("Raises accuracy by 30%."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("不眠"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("变色"),
        .description = COMPOUND_STRING("Changes type to foe's move."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("免疫"),
        .description = COMPOUND_STRING("Prevents poisoning."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("引火"),
        .description = COMPOUND_STRING("Powers up if hit by Fire."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("鳞粉"),
        .description = COMPOUND_STRING("Prevents added effects and\nentry hazard damage."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("我行我素"),
        .description = COMPOUND_STRING("Prevents confusion and\nIntimidate."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("吸盘"),
        .description = COMPOUND_STRING("Firmly anchors the body."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("威吓"),
        .description = COMPOUND_STRING("Lowers the foe's Attack."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("踩影"),
        .description = COMPOUND_STRING("Prevents the foe's escape."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("粗糙皮肤"),
        .description = COMPOUND_STRING("Hurts to touch."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("神奇守护"),
        .description = COMPOUND_STRING("“Supereffective” hits."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("飘浮"),
        .description = COMPOUND_STRING("Not hit by Ground attacks."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MOUNTAINEER] =
    {
        .name = _("Mountaineer"),
        .description = COMPOUND_STRING("Not hit by Rock attacks\nand avoids Stealth Rocks."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("孢子"),
        .description = COMPOUND_STRING("Leaves spores on contact."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("同步"),
        .description = COMPOUND_STRING("Passes on status problems."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("恒净之躯"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("自然回复"),
        .description = COMPOUND_STRING("Heals status upon switching\nout."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("避雷针"),
        .description = COMPOUND_STRING("Draws electrical moves."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("天恩"),
        .description = COMPOUND_STRING("Promotes added effects."),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("悠游自如"),
        .description = COMPOUND_STRING("Doubles Speed in Rain."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("叶绿素"),
        .description = COMPOUND_STRING("Doubles Speed in Sun."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("发光"),
        .description = COMPOUND_STRING("Raises accuracy by 20%."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("复制"),
        .description = COMPOUND_STRING("Copies special ability."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("大力士"),
        .description = COMPOUND_STRING("Raises Attack."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("毒刺"),
        .description = COMPOUND_STRING("Can poison on contact."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("精神力"),
        .description = COMPOUND_STRING("Prevents flinching and\nIntimidate."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("熔岩铠甲"),
        .description = COMPOUND_STRING("Prevents frostbite."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("水幕"),
        .description = COMPOUND_STRING("Prevents burns."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("磁力"),
        .description = COMPOUND_STRING("Traps Steel-type Pokémon."),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("隔音"),
        .description = COMPOUND_STRING("Avoids sound-based moves."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("雨盘"),
        .description = COMPOUND_STRING("Slight HP recovery in Rain."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("扬沙"),
        .description = COMPOUND_STRING("Summons Sand for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("压迫感"),
        .description = COMPOUND_STRING("Raises foe's PP usage."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("厚脂肪"),
        .description = COMPOUND_STRING("Ups resistance to Fire and\nIce moves by 50%."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("早起"),
        .description = COMPOUND_STRING("Awakens quickly from sleep."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("火焰之躯"),
        .description = COMPOUND_STRING("Can burn on contact."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("逃跑"),
        .description = COMPOUND_STRING("Makes escaping easier."),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("锐利目光"),
        .description = COMPOUND_STRING("Prevents loss of accuracy."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("怪力钳"),
        .description = COMPOUND_STRING("Prevents Attack reduction."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("捡拾"),
        .description = COMPOUND_STRING("May pick up items."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("懒惰"),
        .description = COMPOUND_STRING("Moves only every two turns."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("活力"),
        .description = COMPOUND_STRING("Reduces accuracy by 20% but\nboosts Atk by 50%."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("迷人之躯"),
        .description = COMPOUND_STRING("Has a 30% chance to\ninfatuate on contact."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("正电"),
        .description = COMPOUND_STRING("Boosts Sp. Atk by 50%\nwith Minus."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("负电"),
        .description = COMPOUND_STRING("Boosts Sp. Atk by 50%\nwith Plus."),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("阴晴不定"),
        .description = COMPOUND_STRING("Changes with the weather."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("黏着"),
        .description = COMPOUND_STRING("Prevents item theft."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("蜕皮"),
        .description = COMPOUND_STRING("Has a 30% chance to heal\nits own status problem."),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("毅力"),
        .description = COMPOUND_STRING("Boosts Attack by 50%\nif statused."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("神奇鳞片"),
        .description = COMPOUND_STRING("Boosts Defense by 50%\nif statused."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("污泥浆"),
        .description = COMPOUND_STRING("Draining causes injury."),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("茂盛"),
        .description = COMPOUND_STRING("Boosts Grass moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("猛火"),
        .description = COMPOUND_STRING("Boosts Fire moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("激流"),
        .description = COMPOUND_STRING("Boosts Water moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("虫之预感"),
        .description = COMPOUND_STRING("Boosts Bug moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("坚硬脑袋"),
        .description = COMPOUND_STRING("Prevents recoil damage."),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("日照"),
        .description = COMPOUND_STRING("Summons Sun for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("沙穴"),
        .description = COMPOUND_STRING("Prevents fleeing."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("干劲"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("白色烟雾"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("瑜伽之力"),
        .description = COMPOUND_STRING("Raises Attack."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("硬壳盔甲"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("气闸"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("蹒跚"),
        .description = COMPOUND_STRING("Ups evasion if confused."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("电气引擎"),
        .description = COMPOUND_STRING("Raises Speed if hit by\nan Electric-type move."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("斗争心"),
        .description = COMPOUND_STRING("Boosts moves by 1.25x if\nfoe is of same gender."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("不屈之心"),
        .description = COMPOUND_STRING("Being flinched raises Speed."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("雪隐"),
        .description = COMPOUND_STRING("Ups evasion in Hail or Snow."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("贪吃鬼"),
        .description = COMPOUND_STRING("Eats Berries early."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("愤怒穴位"),
        .description = COMPOUND_STRING("Maxes Attack after a\ncritical hit."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("轻装"),
        .description = COMPOUND_STRING("Doubles Speed if item\nis lost."),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("耐热"),
        .description = COMPOUND_STRING("Weakens the power of\nFire-type moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("单纯"),
        .description = COMPOUND_STRING("Doubles stat changes."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("干燥皮肤"),
        .description = COMPOUND_STRING("Heat reduces HP.\nWater restores HP."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("下载"),
        .description = COMPOUND_STRING("Adjusts power based on\nthe foe's stats."),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("铁拳"),
        .description = COMPOUND_STRING("Boosts punching moves\nby 30%."),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("毒疗"),
        .description = COMPOUND_STRING("Restores 1/8 max HP\nif poisoned."),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("适应力"),
        .description = COMPOUND_STRING("Boosts same type attacks\nby 2x instead of 1.5x."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("连续攻击"),
        .description = COMPOUND_STRING("Multi-hit moves hit 5 times."),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("湿润之躯"),
        .description = COMPOUND_STRING("Cures status in rain."),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("太阳之力"),
        .description = COMPOUND_STRING("Boosts Sp. Atk by 50% in Sun\nat cost of some HP."),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("飞毛腿"),
        .description = COMPOUND_STRING("Doubles Speed if it has\na status condition."),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("一般皮肤"),
        .description = COMPOUND_STRING("Moves become Normal-type."),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("狙击手"),
        .description = COMPOUND_STRING("Critical hits deal 2.25x\ninstead of 1.5x."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("魔法防守"),
        .description = COMPOUND_STRING("Only damaged by attacks."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("无防守"),
        .description = COMPOUND_STRING("Ensures that all moves hit."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("慢出"),
        .description = COMPOUND_STRING("Always moves last."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("技术高手"),
        .description = COMPOUND_STRING("Boosts moves with less\nthan 60 BP by 50%."),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("叶子防守"),
        .description = COMPOUND_STRING("Protects from status\nin sunshine."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("笨拙"),
        .description = COMPOUND_STRING("Can't use hold items."),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("破格"),
        .description = COMPOUND_STRING("Moves ignore most\nabilities."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("超幸运"),
        .description = COMPOUND_STRING("Critical hits land often."),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("诱爆"),
        .description = COMPOUND_STRING("Fainting damages the foe by\n1/4 its max HP."),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("危险预知"),
        .description = COMPOUND_STRING("Senses dangerous moves."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("预知梦"),
        .description = COMPOUND_STRING("Warns of the foe's\nstrongest move."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("纯朴"),
        .description = COMPOUND_STRING("Ignores foe's stat changes."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("有色眼镜"),
        .description = COMPOUND_STRING("Doubles the damage of\nnot very effective moves."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("过滤"),
        .description = COMPOUND_STRING("Weakens super effective moves\nby 25%."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("慢启动"),
        .description = COMPOUND_STRING("Takes a while to get going."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("胆量"),
        .description = COMPOUND_STRING("Can hit Ghost-types\nand prevents Intimidate."),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("引水"),
        .description = COMPOUND_STRING("Immune to & draws in Water moves\nto boost SpAtk."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("冰冻之躯"),
        .description = COMPOUND_STRING("HP recovery in Snow, can\nleave frostbite on hit."),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("坚硬岩石"),
        .description = COMPOUND_STRING("Weakens super effective moves\nby 25%."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("降雪"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("Summons Snow for 5 turns."),
    #else
        .description = COMPOUND_STRING("Summons Hail for 5 turns."),
    #endif
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("采蜜"),
        .description = COMPOUND_STRING("May gather Honey."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("察觉"),
        .description = COMPOUND_STRING("Reveals the foe's held\nitem."),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("舍身"),
        .description = COMPOUND_STRING("Boosts moves with recoil\nby 20%."),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("多属性"),
        .description = COMPOUND_STRING("Changes type to its Plate."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("花之礼"),
        .description = COMPOUND_STRING("Boosts Atk and Speed by\n50% in Sun."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("梦魇"),
        .description = COMPOUND_STRING("Reduces sleeping foe's HP\nby 1/8 at end of turn."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("顺手牵羊"),
        .description = COMPOUND_STRING("Steals the foe's held item."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("强行"),
        .description = COMPOUND_STRING("Removes added effects to\nboost damage by 30%."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("唱反调"),
        .description = COMPOUND_STRING("Reverses stat changes."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("紧张感"),
        .description = COMPOUND_STRING("Stops foes from eating\nBerries."),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("不服输"),
        .description = COMPOUND_STRING("Gets +2 Attack when its\nstats are lowered."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("软弱"),
        .description = COMPOUND_STRING("Halves Atk/SpAtk when its\nHP is at 1/3 or less."),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("咒术之躯"),
        .description = COMPOUND_STRING("Disables moves on contact."),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("治愈之心"),
        .description = COMPOUND_STRING("Heals partner Pokémon."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("友情防守"),
        .description = COMPOUND_STRING("Reduces damage done to\nallies."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("碎裂铠甲"),
        .description = COMPOUND_STRING("Being hit by phyiscal moves\ndrops Def but Raises Speed."),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("重金属"),
        .description = COMPOUND_STRING("Doubles weight."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("轻金属"),
        .description = COMPOUND_STRING("Halves weight."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("多重鳞片"),
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("中毒激升"),
        .description = COMPOUND_STRING("Boosts Attack by 50%\nif poisoned."),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("受热激升"),
        .description = COMPOUND_STRING("Boosts SpAtk by 50%\nif burned."),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("收获"),
        .description = COMPOUND_STRING("50% chance to restore\na used Berry."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("心灵感应"),
        .description = COMPOUND_STRING("Protects from allies' moves."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("心情不定"),
        .description = COMPOUND_STRING("Stats change gradually."),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("防尘"),
        .description = COMPOUND_STRING("Immune to weather and powder."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("毒手"),
        .description = COMPOUND_STRING("30% chance to poison foe\non contact."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("再生力"),
        .description = COMPOUND_STRING("Heals 1/3 HP when\nswitching out."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("健壮胸肌"),
        .description = COMPOUND_STRING("Prevents Defense loss."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("拨沙"),
        .description = COMPOUND_STRING("Doubles Speed in Sand."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("奇迹皮肤"),
        .description = COMPOUND_STRING("Ups status move evasion."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("分析"),
        .description = COMPOUND_STRING("Moving last boosts power\nby 30%."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("幻觉"),
        .description = COMPOUND_STRING("Enters disguised and deals\n30% more damage."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("变身者"),
        .description = COMPOUND_STRING("Transforms into the foe\nupon entering battle."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("穿透"),
        .description = COMPOUND_STRING("Passes through the foe's\nbarriers."),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("木乃伊"),
        .description = COMPOUND_STRING("Contact with this Pokémon\nspreads this Ability."),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("自信过度"),
        .description = COMPOUND_STRING("Boosts Attack after knocking\nout a Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("正义之心"),
        .description = COMPOUND_STRING("Dark-type hits raise\nAttack."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("胆怯"),
        .description = COMPOUND_STRING("Raises Speed when scared."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("魔法镜"),
        .description = COMPOUND_STRING("Reflects status moves."),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("食草"),
        .description = COMPOUND_STRING("Boosts attack if hit by\na Grass-type move."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("恶作剧之心"),
        .description = COMPOUND_STRING("Gives +1 priority to\nstatus moves."),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("沙之力"),
        .description = COMPOUND_STRING("Boosts Rock, Ground, and\nSteel moves in Sand."),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("铁刺"),
        .description = COMPOUND_STRING("Inflicts damage (1/8 HP)\nto a foe on contact."),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("达摩模式"),
        .description = COMPOUND_STRING("Transforms into Zen Mode."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("胜利之星"),
        .description = COMPOUND_STRING("Raises own and ally's\naccuracy by 10%."),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("涡轮火焰"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("兆级电压"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("芳香幕"),
        .description = COMPOUND_STRING("Protects against mental\nproblems."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("花幕"),
        .description = COMPOUND_STRING("Protects Grass-types."),
        .aiRating = 0,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("颊囊"),
        .description = COMPOUND_STRING("Eating Berries restores HP\nby 1/3."),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("变幻自如"),
        .description = COMPOUND_STRING("Changes type to match move."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("毛皮大衣"),
        .description = COMPOUND_STRING("Halves physical damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("魔术师"),
        .description = COMPOUND_STRING("Can steal foe's held\nitem after an attack."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("防弹"),
        .description = COMPOUND_STRING("Immune to some ball and\nbomb moves."),
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("好胜"),
        .description = COMPOUND_STRING("Gets +2 SpAtk when its\nstats are lowered."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("强壮之颚"),
        .description = COMPOUND_STRING("Boosts biting moves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("冰冻皮肤"),
        .description = COMPOUND_STRING("Normal moves become Ice\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("甜幕"),
        .description = COMPOUND_STRING("Keeps user and allies awake."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("战斗切换"),
        .description = COMPOUND_STRING("Switches form when\nattacking."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("疾风之翼"),
        .description = COMPOUND_STRING("Gives +1 priority to\nFlying moves at full HP."),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("超级发射器"),
        .description = COMPOUND_STRING("Boosts aura and pulse moves\nby 50%."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("草之毛皮"),
        .description = COMPOUND_STRING("Ups Defense by 50% in\nGrassy Terrain."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("共生"),
        .description = COMPOUND_STRING("Passes its item to an ally."),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("硬爪"),
        .description = COMPOUND_STRING("Boosts moves that make\ncontact by 30%."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("妖精皮肤"),
        .description = COMPOUND_STRING("Normal moves become Fairy\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("黏滑"),
        .description = COMPOUND_STRING("Lowers the foe's Speed if\nhit by a contact move."),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("飞行皮肤"),
        .description = COMPOUND_STRING("Normal moves become Flying\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("亲子爱"),
        .description = COMPOUND_STRING("Moves hit a second time\nfor 25% damage."),
        .aiRating = 10,
    },

    [ABILITY_ORAORAORAORA] =
    {
        .name = _("ORAORAORAORA!"),
        .description = COMPOUND_STRING("Punch moves hit a second\ntime for 50% damage"),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("暗黑气场"),
        .description = COMPOUND_STRING("Powers up all Dark-type\nmoves by 33%."),
        .aiRating = 6,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("妖精气场"),
        .description = COMPOUND_STRING("Powers up all Fairy-type\nmoves by 33%."),
        .aiRating = 6,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("气场破坏"),
        .description = COMPOUND_STRING("Reverse aura abilities."),
        .aiRating = 3,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("始源之海"),
        .description = COMPOUND_STRING("Summons Heavy Rain that\nnullifies Fire moves."),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("终结之地"),
        .description = COMPOUND_STRING("Summons Harsh Sun that\nnullifies Water moves."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("德尔塔气流"),
        .description = COMPOUND_STRING("Summons Strong Winds that\nremove Flying weaknesses."),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("持久力"),
        .description = COMPOUND_STRING("Boosts Defense when hit."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("跃跃欲逃"),
        .description = COMPOUND_STRING("Switches out below half HP."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("危险回避"),
        .description = COMPOUND_STRING("Switches out below half HP."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("遇水凝固"),
        .description = COMPOUND_STRING("Halves Water damage and\nraises Defense."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("不仁不义"),
        .description = COMPOUND_STRING("Guarantees critical-hits\non poisoned foes."),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("界限盾壳"),
        .description = COMPOUND_STRING("Shell breaks at half HP."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("蹲守"),
        .description = COMPOUND_STRING("Doubles damage if foe\nswitches out."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("水泡"),
        .description = COMPOUND_STRING("Doubles Water moves &\ntakes half from Fire moves."),
        .aiRating = 8,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("钢能力者"),
        .description = COMPOUND_STRING("Powers up Steel moves."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("怒火冲天"),
        .description = COMPOUND_STRING("Raises SpAtk if hit lowers\nit below half HP."),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("拨雪"),
        .description = COMPOUND_STRING("Doubles Speed in Hail or\nSnow."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("远隔"),
        .description = COMPOUND_STRING("Never makes contact."),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("湿润之声"),
        .description = COMPOUND_STRING("Sound moves become Water-\ntype & boosted by 20%."),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("先行治疗"),
        .description = COMPOUND_STRING("Gives +3 priority to\nhealing moves."),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("电气皮肤"),
        .description = COMPOUND_STRING("Normal moves become Electric\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("冲浪之尾"),
        .description = COMPOUND_STRING("Doubles Speed in Electric\nTerrain."),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("鱼群"),
        .description = COMPOUND_STRING("Forms a school when above\n25% HP."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("画皮"),
        .description = COMPOUND_STRING("Takes one hit with no\ndamage."),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("牵绊变身"),
        .description = COMPOUND_STRING("Changes form after a KO."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
        .name = _("群聚变形"),
        .description = COMPOUND_STRING("Transforms to Complete form\nwhen below half HP."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("腐蚀"),
        .description = COMPOUND_STRING("Poison can hit\nSteel types."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("绝对睡眠"),
        .description = COMPOUND_STRING("This Pokémon cannot be statused,\nand is considered to be asleep."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
        .name = _("女王的威严"),
        .description = COMPOUND_STRING("Protects from priority moves."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("飞出的内在物"),
        .description = COMPOUND_STRING("Fainting damages the foe\nequal to its last HP."),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("舞者"),
        .description = COMPOUND_STRING("Copies dance moves."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("蓄电池"),
        .description = COMPOUND_STRING("Boosts ally's Sp. Atk."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("毛茸茸"),
        .description = COMPOUND_STRING("Halves contact hits.\nTakes 2x to Fire moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("鲜艳之躯"),
        .description = COMPOUND_STRING("Protects from priority moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("魂心"),
        .description = COMPOUND_STRING("Boosts SpAtk every time a\nPokémon faints."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("卷发"),
        .description = COMPOUND_STRING("Lowers the foe's Speed\nif hit by a contact move."),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("接球手"),
        .description = COMPOUND_STRING("Takes over a KOed\nally's ability."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("Power Of Alchemy"),
        .description = COMPOUND_STRING("Takes over a KOed\nally's ability."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("异兽提升"),
        .description = COMPOUND_STRING("KOing a foe boosts\nits highest stat."),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("系统"),
        .description = COMPOUND_STRING("Memories change its type."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
        .name = _("电气制造者"),
        .description = COMPOUND_STRING("Sets Electric Terrain for\n5 turns."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("精神制造者"),
        .description = COMPOUND_STRING("Sets Psychic Terrain for\n5 turns."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("薄雾制造者"),
        .description = COMPOUND_STRING("Sets Misty Terrain for\n5 turns."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("青草制造者"),
        .description = COMPOUND_STRING("Sets Grassy Terrain for\n5 turns."),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("金属防护"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("幻影防守"),
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("棱镜装甲"),
        .description = COMPOUND_STRING("Weakens super effective moves\nby 25%."),
        .aiRating = 6,
    },

    [ABILITY_PRIMAL_ARMOR] =
    {
        .name = _("Primal Armor"),
        .description = COMPOUND_STRING("Weakens super effective moves\nby 50%."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("脑核之力"),
        .description = COMPOUND_STRING("Powers up super effective\nhits by 25%."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("不挠之剑"),
        .description = COMPOUND_STRING("Raises Attack on entry."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("不屈之盾"),
        .description = COMPOUND_STRING("Raises Defense on entry."),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("自由者"),
        .description = COMPOUND_STRING("Changes type to match move."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("捡球"),
        .description = COMPOUND_STRING("Fetches failed Poké Ball."),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("棉絮"),
        .description = COMPOUND_STRING("Lower Speed of all when hit."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("螺旋尾鳍"),
        .description = COMPOUND_STRING("Moves ignore redirection."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("镜甲"),
        .description = COMPOUND_STRING("Reflect stat decreases."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("一口导弹"),
        .description = COMPOUND_STRING("If hit, spits prey from sea."),
        .aiRating = 3,
        .cantBeCopied = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("坚毅"),
        .description = COMPOUND_STRING("Moves ignore redirection."),
        .aiRating = 2,
    },

    //TODO left off here
    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("蒸汽机"),
        .description = COMPOUND_STRING("Being hit by Fire/Water\nmoves maxes Speed."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("庞克摇滚"),
        .description = COMPOUND_STRING("Boosts sound moves by 30%\n& resists them by 50%."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("吐沙"),
        .description = COMPOUND_STRING("Summons Sand for 5 turns\nif hit."),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("冰鳞粉"),
        .description = COMPOUND_STRING("Halves Special damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("熟成"),
        .description = COMPOUND_STRING("Doubles effect of Berries."),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("结冻头"),
        .description = COMPOUND_STRING("Takes one free physical\nhit and changes form."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("能量点"),
        .description = COMPOUND_STRING("Powers up ally moves."),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("拟态"),
        .description = COMPOUND_STRING("Changes type on terrain."),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("除障"),
        .description = COMPOUND_STRING("Screens are removed\non entry."),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("钢之意志"),
        .description = COMPOUND_STRING("Boosts own and ally's\nSteel-type moves by 50%."),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("灭亡之躯"),
        .description = COMPOUND_STRING("Gives a perish count on\ncontact."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("游魂"),
        .description = COMPOUND_STRING("Trade abilities on contact."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("一猩一意"),
        .description = COMPOUND_STRING("Ups Attack by 50% but\nlocks move."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("化学变化气体"),
        .description = COMPOUND_STRING("All Abilities are nullified."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("粉彩护幕"),
        .description = COMPOUND_STRING("Protects team from poison."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("饱了又饿"),
        .description = COMPOUND_STRING("Changes form each turn."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("速击"),
        .description = COMPOUND_STRING("Has a 30% chance to\nmove first."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("无形拳"),
        .description = COMPOUND_STRING("Contact moves bypass\nprotection."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("怪药"),
        .description = COMPOUND_STRING("Remove ally's stat changes."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("电晶体"),
        .description = COMPOUND_STRING("Powers up Electric-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Dragon's Maw"),
        .description = COMPOUND_STRING("Powers up Dragon-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("苍白嘶鸣"),
        .description = COMPOUND_STRING("Boosts Attack after knocking\nout a Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("漆黑嘶鸣"),
        .description = COMPOUND_STRING("Boosts SpAtk after knocking\nout a Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("人马一体"),
        .description = COMPOUND_STRING("Unnerve and Chilling Neigh."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("人马一体"),
        .description = COMPOUND_STRING("Unnerve and Grim Neigh."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
        .name = _("甩不掉的气味"),
        .description = COMPOUND_STRING("Contact with this Pokémon\nspreads this Ability."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("掉出种子"),
        .description = COMPOUND_STRING("Summons Grassy Terrain for\n5 turns when hit."),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("热交换"),
        .description = COMPOUND_STRING("Fire-type hits raise Attack\nImmune to burn."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("愤怒甲壳"),
        .description = COMPOUND_STRING("+Atk/SpA/Spe, -Def/SpD if\nhit lowers HP below 50%."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("洁净之盐"),
        .description = COMPOUND_STRING("Resists Ghost and immune\nto status."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("焦香之躯"),
        .description = COMPOUND_STRING("Immune to Fire moves &\ngets +2 Defense instead."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("乘风"),
        .description = COMPOUND_STRING("Ups Attack if hit by wind."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("看门犬"),
        .description = COMPOUND_STRING("Cannot be intimidated."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("搬岩"),
        .description = COMPOUND_STRING("Boosts power of Rock moves\nby 50%."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("风力发电"),
        .description = COMPOUND_STRING("Gets charged by wind."),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("全能变身"),
        .description = COMPOUND_STRING("Changes form on switch out."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("发号施令"),
        .description = COMPOUND_STRING("Commands from Dondozo."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("电力转换"),
        .description = COMPOUND_STRING("Gains Charge when hit\nby an attack."),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("古代活性"),
        .description = COMPOUND_STRING("Boosts highest stat in\nSun."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("夸克充能"),
        .description = COMPOUND_STRING("Boosts highest stat in\nElectric Terrain."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("黄金之躯"),
        .description = COMPOUND_STRING("Full immunity to status moves."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("灾祸之鼎"),
        .description = COMPOUND_STRING("Lowers the SpAtk of all\nother Pokémon by 25%."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("灾祸之剑"),
        .description = COMPOUND_STRING("Lowers the Defense of all\nother Pokémon by 25%."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("灾祸之简"),
        .description = COMPOUND_STRING("Lowers the Attack of all\nother Pokémon by 25%."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("灾祸之玉"),
        .description = COMPOUND_STRING("Lowers the SpDef of all\nother Pokémon by 25%."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("绯红脉动"),
        .description = COMPOUND_STRING("Sets Sun for 5 turns.\nUps Atk by 30% while in it."),
        .aiRating = 8,
    },

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("强子引擎"),
        .description = COMPOUND_STRING("Sets E. Terrain for 5 turns.\nUps SpAtk by 30% while in it."),
        .aiRating = 8,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("跟风"),
        .description = COMPOUND_STRING("Copies foe's stat change."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("反刍"),
        .description = COMPOUND_STRING("Eats a used berry again."),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("锋锐"),
        .description = COMPOUND_STRING("Boosts slashing moves\nby 50%."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("大将"),
        .description = COMPOUND_STRING("Boosts power depending on\nfainted allies."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("同台共演"),
        .description = COMPOUND_STRING("Copies ally's stat changes."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("毒满地"),
        .description = COMPOUND_STRING("Sets Toxic Spikes when\nhit by a physical move."),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("尾甲"),
        .description = COMPOUND_STRING("Protects from priority moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("食土"),
        .description = COMPOUND_STRING("Absorbs Ground moves\nto heal HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("菌丝之力"),
        .description = COMPOUND_STRING("Status moves never fail."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("款待"),
        .description = COMPOUND_STRING("Restores ally's HP."),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Mind's Eye"),
        .description = COMPOUND_STRING("Keen Eye and Scrappy."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("面影辉映"),
        .description = COMPOUND_STRING("Raises Speed."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("面影辉映"),
        .description = COMPOUND_STRING("Raises Attack."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("面影辉映"),
        .description = COMPOUND_STRING("Raises Sp. Def."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("面影辉映"),
        .description = COMPOUND_STRING("Raises Defense."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("毒锁链"),
        .description = COMPOUND_STRING("Moves can poison."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("甘露之蜜"),
        .description = COMPOUND_STRING("Lowers the foe's Evasion."),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("太晶变形"),
        .description = COMPOUND_STRING("Terastallizes upon entry."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("太晶甲壳"),
        .description = COMPOUND_STRING("Resists all at full HP."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("归零化境"),
        .description = COMPOUND_STRING("Zeroes weather and terrain."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("毒傀儡"),
        .description = COMPOUND_STRING("Confuses poisoned foes."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STRIKER] =
    {
        .name = _("Striker"),
        .description = COMPOUND_STRING("Boosts kicking moves\nby 30%."),
        .aiRating = 6,
    },

    [ABILITY_FELINE_PROWESS] =
    {
        .name = _("Feline Prowess"),
        .description = COMPOUND_STRING("Doubles Sp. Atk stat."),
        .aiRating = 10,
    },

    [ABILITY_SAGE_POWER] =
    {
        .name = _("Sage Power"),
        .description = COMPOUND_STRING("Ups SpAtk by 50% but\nlocks move."),
        .aiRating = 4,
    },

    [ABILITY_FATAL_PRECISION] =
    {
        .name = _("Fatal Precision"),
        .description = COMPOUND_STRING("Super effective moves can't\nmiss & boosted by 20%."),
        .aiRating = 6,
    },

    [ABILITY_BLAZING_SOUL] =
    {
        .name = _("Blazing Soul"),
        .description = COMPOUND_STRING("Gives +1 priority to\nFire moves at full HP."),
        .aiRating = 6,
    },

    [ABILITY_ICE_EATER] =
    {
        .name = _("Ice Eater"),
        .description = COMPOUND_STRING("Absorbs Ice moves\nto heal HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EMPERORS_PRESENCE] =
    {
        .name = _("Emperor's Presence"),
        .description = COMPOUND_STRING("Boosts own and ally's\nWater & Steel-type moves by 30%."),
        .aiRating = 2,
    },

    [ABILITY_SELF_SUFFICIENT] =
    {
        .name = _("Self Sufficient"),
        .description = COMPOUND_STRING("Recover 1/16 HP at\nend of turn."),
        .aiRating = 9,
    },

    [ABILITY_BAD_COMPANY] =
    {
        .name = _("Bad Company"),
        .description = COMPOUND_STRING("Stops self-lowering stats\nand prevents recoil."),
        .aiRating = 8,
    },

    [ABILITY_BULL_RUSH] =
    {
        .name = _("Bull Rush"),
        .description = COMPOUND_STRING("Boosts power by 20% &\nSpeed by 50% on first turn."),
        .aiRating = 8,
    },

    [ABILITY_QUILL_RUSH] =
    {
        .name = _("Quill Rush"),
        .description = COMPOUND_STRING("Boosts power by 20% &\nSpeed by 50% on first turn."),
        .aiRating = 8,
    },

    [ABILITY_BONE_ZONE] =
    {
        .name = _("Bone Zone"),
        .description = COMPOUND_STRING("Bone moves have Tinted Lens\nand ignore immunities."),
        .aiRating = 7,
    },

    [ABILITY_THE_GRIPPER] =
    {
        .name = _("THE GRIPPER"),
        .description = COMPOUND_STRING("Contact moves prevent the\nfoe from escaping."),
        .aiRating = 7,
    },

    [ABILITY_PARASITIC_WASTE] =
    {
        .name = _("Parasitic Waste"),
        .description = COMPOUND_STRING("Attacks that poison drain instead."),
        .aiRating = 6,
    },

    

};
