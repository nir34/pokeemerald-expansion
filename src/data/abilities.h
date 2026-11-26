const struct Ability gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("没有特别的能"),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("恶臭"),
        .description = COMPOUND_STRING("通过释放臭臭的气味， 在"),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("降雨"),
        .description = COMPOUND_STRING("出场时， 会将天气变为下"),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("加速"),
        .description = COMPOUND_STRING("每一回合速度会变快。"),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("战斗盔甲"),
        .description = COMPOUND_STRING("被坚硬的甲壳守护着， 不"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("结实"),
        .description = COMPOUND_STRING("在全满时，即使受到招式攻"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("湿气"),
        .description = COMPOUND_STRING("通过把周围都弄湿， 使谁"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("柔软"),
        .description = COMPOUND_STRING("因为身体柔软， 不会变为"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("沙隐"),
        .description = COMPOUND_STRING("在沙暴的时候， 闪避率会"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("静电"),
        .description = COMPOUND_STRING("身上带有静电， 有时会让"),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("蓄电"),
        .description = COMPOUND_STRING("受到电属性的招式攻击时，"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("储水"),
        .description = COMPOUND_STRING("受到水属性的招式攻击时，"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("迟钝"),
        .description = COMPOUND_STRING("因为感觉迟钝， 不会变为"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("无关天气"),
        .description = COMPOUND_STRING("任何天气的影响都会消失。"),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("复眼"),
        .description = COMPOUND_STRING("因为拥有复眼， 招式的命"),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("不眠"),
        .description = COMPOUND_STRING("因为有着睡不着的体质， "),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("变色"),
        .description = COMPOUND_STRING("自己的属性会变为 从对手"),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("免疫"),
        .description = COMPOUND_STRING("因为体内拥有免疫能力， "),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("引火"),
        .description = COMPOUND_STRING("受到火属性的招式攻击时，"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("鳞粉"),
        .description = COMPOUND_STRING("被鳞粉守护着， 不会受到"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("我行我素"),
        .description = COMPOUND_STRING("因为我行我素， 不会变为"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("吸盘"),
        .description = COMPOUND_STRING("用吸盘牢牢贴在地面上， "),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("威吓"),
        .description = COMPOUND_STRING("出场时威吓对手， 让其退"),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("踩影"),
        .description = COMPOUND_STRING("踩住对手的影子 使其无法"),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("粗糙皮肤"),
        .description = COMPOUND_STRING("受到攻击时， 用粗糙的皮"),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("神奇守护"),
        .description = COMPOUND_STRING("不可思议的力量， 只有效"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("飘浮"),
        .description = COMPOUND_STRING("从地面浮起， 从而不会受"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MOUNTAINEER] =
    {
        .name = _("登山者"),
        .description = COMPOUND_STRING("不会受到岩"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("孢子"),
        .description = COMPOUND_STRING("受到攻击时， 有时会把接"),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("同步"),
        .description = COMPOUND_STRING("将自己的中毒、麻痹 或灼"),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("恒净之躯"),
        .description = COMPOUND_STRING("不会因为对手的招式或特性"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("自然回复"),
        .description = COMPOUND_STRING("回到同行队伍后， 异常状"),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("避雷针"),
        .description = COMPOUND_STRING("将电属性的招式吸引到自己"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("天恩"),
        .description = COMPOUND_STRING("托天恩的福， 招式的追加"),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("悠游自如"),
        .description = COMPOUND_STRING("下雨天气时， 速度会提高"),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("叶绿素"),
        .description = COMPOUND_STRING("晴朗天气时， 速度会提高"),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("发光"),
        .description = COMPOUND_STRING("通过让周围变亮 来保持命"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("复制"),
        .description = COMPOUND_STRING("出场时，复制对手的特性，"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("大力士"),
        .description = COMPOUND_STRING("物理攻击的威力会变为倍。"),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("毒刺"),
        .description = COMPOUND_STRING("有时会让接触到自己的 对"),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("精神力"),
        .description = COMPOUND_STRING("拥有经过锻炼的精神， 而"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("熔岩铠甲"),
        .description = COMPOUND_STRING("将炽热的熔岩覆盖在身上，"),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("水幕"),
        .description = COMPOUND_STRING("将水幕裹在身上， 不会变"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("磁力"),
        .description = COMPOUND_STRING("用磁力吸住钢属性的宝可梦"),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("隔音"),
        .description = COMPOUND_STRING("通过屏蔽声音， 不受到声"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("雨盘"),
        .description = COMPOUND_STRING("下雨天气时， 会缓缓回复"),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("扬沙"),
        .description = COMPOUND_STRING("出场时， 会把天气变为沙"),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("压迫感"),
        .description = COMPOUND_STRING("给予对手压迫感， 大量减"),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("厚脂肪"),
        .description = COMPOUND_STRING("因为被厚厚的脂肪保护着，"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("早起"),
        .description = COMPOUND_STRING("即使变为睡眠状态， 也能"),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("火焰之躯"),
        .description = COMPOUND_STRING("有时会让接触到自己的 对"),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("逃跑"),
        .description = COMPOUND_STRING("一定能从野生宝可梦 那儿"),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("锐利目光"),
        .description = COMPOUND_STRING("多亏了锐利的目光， 命中"),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("怪力钳"),
        .description = COMPOUND_STRING("因为拥有以力量自豪的钳子"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("捡拾"),
        .description = COMPOUND_STRING("有时会捡来对手用过的道具"),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("懒惰"),
        .description = COMPOUND_STRING("如果使出招式， 下一回合"),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("活力"),
        .description = COMPOUND_STRING("自己的攻击变高， 但命中"),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("迷人之躯"),
        .description = COMPOUND_STRING("有时会让接触到自己的对手"),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("正电"),
        .description = COMPOUND_STRING("出场的伙伴之间 如果有正"),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("负电"),
        .description = COMPOUND_STRING("出场的伙伴之间 如果有正"),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("阴晴不定"),
        .description = COMPOUND_STRING("受天气的影响， 会变为水"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("黏着"),
        .description = COMPOUND_STRING("因为道具是粘在黏性身体上"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("蜕皮"),
        .description = COMPOUND_STRING("通过蜕去身上的皮， 有时"),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("毅力"),
        .description = COMPOUND_STRING("如果变为异常状态， 会拿"),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("神奇鳞片"),
        .description = COMPOUND_STRING("如果变为异常状态， 神奇"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("污泥浆"),
        .description = COMPOUND_STRING("吸收了污泥浆的对手 会因"),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("茂盛"),
        .description = COMPOUND_STRING("减少的时候， 草属性的招"),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("猛火"),
        .description = COMPOUND_STRING("减少的时候， 火属性的招"),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("激流"),
        .description = COMPOUND_STRING("减少的时候， 水属性的招"),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("虫之预感"),
        .description = COMPOUND_STRING("减少的时候， 虫属性的招"),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("坚硬脑袋"),
        .description = COMPOUND_STRING("即使使出会受反作用力伤害"),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("日照"),
        .description = COMPOUND_STRING("出场时， 会将天气变为晴"),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("沙穴"),
        .description = COMPOUND_STRING("在战斗中让对手无法逃走。"),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("干劲"),
        .description = COMPOUND_STRING("通过激发出干劲， 不会变"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("白色烟雾"),
        .description = COMPOUND_STRING("被白色烟雾保护着， 不会"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("瑜伽之力"),
        .description = COMPOUND_STRING("因瑜伽的力量， 物理攻击"),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("硬壳盔甲"),
        .description = COMPOUND_STRING("被坚硬的壳保护着， 对手"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("气闸"),
        .description = COMPOUND_STRING("所有天气的影响都会消失。"),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("蹒跚"),
        .description = COMPOUND_STRING("在混乱状态时， 闪避率会"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("电气引擎"),
        .description = COMPOUND_STRING("受到电属性的招式攻击时，"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("斗争心"),
        .description = COMPOUND_STRING("面对性别相同的对手， 会"),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("不屈之心"),
        .description = COMPOUND_STRING("每次畏缩时， 不屈之心就"),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("雪隐"),
        .description = COMPOUND_STRING("下雪天气时， 闪避率会提"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("贪吃鬼"),
        .description = COMPOUND_STRING("原本变得很少时才会吃树果"),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("愤怒穴位"),
        .description = COMPOUND_STRING("要害被击中时， 会大发雷"),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("轻装"),
        .description = COMPOUND_STRING("失去所持有的道具时， 速"),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("耐热"),
        .description = COMPOUND_STRING("耐热的体质会 让火属性的"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("单纯"),
        .description = COMPOUND_STRING("能力变化会变为平时的倍。"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("干燥皮肤"),
        .description = COMPOUND_STRING("下雨天气时和受到水属性的"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("下载"),
        .description = COMPOUND_STRING("比较对手的防御和特防， "),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("铁拳"),
        .description = COMPOUND_STRING("使用拳类招式的威力会提高"),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("毒疗"),
        .description = COMPOUND_STRING("变为中毒状态时， 不会减"),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("适应力"),
        .description = COMPOUND_STRING("与自身同属性的招式 威力"),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("连续攻击"),
        .description = COMPOUND_STRING("如果使用连续招式， 总是"),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("湿润之躯"),
        .description = COMPOUND_STRING("下雨天气时， 异常状态会"),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("太阳之力"),
        .description = COMPOUND_STRING("晴朗天气时， 特攻会提高"),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("飞毛腿"),
        .description = COMPOUND_STRING("变为异常状态时， 速度会"),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("一般皮肤"),
        .description = COMPOUND_STRING("无论是什么属性的招式， "),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("狙击手"),
        .description = COMPOUND_STRING("击中要害时， 威力会变得"),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("魔法防守"),
        .description = COMPOUND_STRING("不会受到攻击以外的伤害。"),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("无防守"),
        .description = COMPOUND_STRING("由于无防守战术， 双方使"),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("慢出"),
        .description = COMPOUND_STRING("使出招式的顺序 必定会变"),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("技术高手"),
        .description = COMPOUND_STRING("攻击时可以将 低威力招式"),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("叶子防守"),
        .description = COMPOUND_STRING("晴朗天气时， 不会变为异"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("笨拙"),
        .description = COMPOUND_STRING("无法使用持有的道具。"),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("破格"),
        .description = COMPOUND_STRING("可以不受对手特性的干扰，"),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("超幸运"),
        .description = COMPOUND_STRING("因为拥有超幸运， 攻击容"),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("诱爆"),
        .description = COMPOUND_STRING("变为昏厥时， 会对接触到"),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("危险预知"),
        .description = COMPOUND_STRING("可以察觉到 对手拥有的危"),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("预知梦"),
        .description = COMPOUND_STRING("出场时， 只读取个对手拥"),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("纯朴"),
        .description = COMPOUND_STRING("可以无视对手能力的变化，"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("有色眼镜"),
        .description = COMPOUND_STRING("可以将效果不好的招式 以"),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("过滤"),
        .description = COMPOUND_STRING("受到效果绝佳的攻击时， "),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("慢启动"),
        .description = COMPOUND_STRING("在回合内， 攻击和速度减"),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("胆量"),
        .description = COMPOUND_STRING("一般属性和格斗属性的招式"),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("引水"),
        .description = COMPOUND_STRING("将水属性的招式引到自己身"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("冰冻之躯"),
        .description = COMPOUND_STRING("下雪天气时， 会缓缓回复"),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("坚硬岩石"),
        .description = COMPOUND_STRING("受到效果绝佳的攻击时， "),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("降雪"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("出场时， 会将天气变为下"),
    #else
        .description = COMPOUND_STRING("出场时下冰"),
    #endif
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("采蜜"),
        .description = COMPOUND_STRING("战斗结束时， 有时候会捡"),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("察觉"),
        .description = COMPOUND_STRING("出场时， 可以察觉对手的"),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("舍身"),
        .description = COMPOUND_STRING("自己会因反作用力受伤的招"),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("多属性"),
        .description = COMPOUND_STRING("自己的属性会根据 持有的"),
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
        .description = COMPOUND_STRING("晴朗天气时， 自己与同伴"),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("梦魇"),
        .description = COMPOUND_STRING("给予睡眠状态的对手伤害。"),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("顺手牵羊"),
        .description = COMPOUND_STRING("盗取接触到自己的 对手的"),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("强行"),
        .description = COMPOUND_STRING("招式的追加效果消失， 但"),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("唱反调"),
        .description = COMPOUND_STRING("能力的变化发生逆转， 原"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("紧张感"),
        .description = COMPOUND_STRING("让对手紧张， 使其无法食"),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("不服输"),
        .description = COMPOUND_STRING("被对手降低能力时， 攻击"),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("软弱"),
        .description = COMPOUND_STRING("减半时， 会变得软弱， "),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("咒术之躯"),
        .description = COMPOUND_STRING("受到攻击时， 有时会把对"),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("治愈之心"),
        .description = COMPOUND_STRING("有时会治愈异常状态的同伴"),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("友情防守"),
        .description = COMPOUND_STRING("可以减少我方的伤害。"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("碎裂铠甲"),
        .description = COMPOUND_STRING("受到物理招式的伤害时， "),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("重金属"),
        .description = COMPOUND_STRING("自身的重量会变为倍。"),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("轻金属"),
        .description = COMPOUND_STRING("自身的重量会减半。"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("多重鳞片"),
        .description = COMPOUND_STRING("全满时， 受到的伤害会变"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("中毒激升"),
        .description = COMPOUND_STRING("变为中毒状态时， 物理招"),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("受热激升"),
        .description = COMPOUND_STRING("变为灼伤状态时， 特殊招"),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("收获"),
        .description = COMPOUND_STRING("可以多次制作出 已被使用"),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("心灵感应"),
        .description = COMPOUND_STRING("读取我方的攻击， 并闪避"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("心情不定"),
        .description = COMPOUND_STRING("每一回合，能力中的某项 "),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("防尘"),
        .description = COMPOUND_STRING("不会受到沙暴的伤害。也不"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("毒手"),
        .description = COMPOUND_STRING("只通过接触就有可能 让对"),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("再生力"),
        .description = COMPOUND_STRING("退回同行队伍后， 会少量"),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("健壮胸肌"),
        .description = COMPOUND_STRING("不会受到防御降低的效果。"),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("拨沙"),
        .description = COMPOUND_STRING("沙暴天气时， 速度会提高"),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("奇迹皮肤"),
        .description = COMPOUND_STRING("成为不易受到变化招式 攻"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("分析"),
        .description = COMPOUND_STRING("如果在最后使出招式， 招"),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("幻觉"),
        .description = COMPOUND_STRING("假扮成同行队伍中的 最后"),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("变身者"),
        .description = COMPOUND_STRING("变身为当前面对的宝可梦。"),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("穿透"),
        .description = COMPOUND_STRING("可以穿透对手的壁障 或替"),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("木乃伊"),
        .description = COMPOUND_STRING("被对手接触到后， 会将对"),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("自信过度"),
        .description = COMPOUND_STRING("如果打倒对手， 就会充满"),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("正义之心"),
        .description = COMPOUND_STRING("受到恶属性的招式攻击时，"),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("胆怯"),
        .description = COMPOUND_STRING("受到恶属性、幽灵属性 和"),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("魔法镜"),
        .description = COMPOUND_STRING("可以不受到由对手使出的 "),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("食草"),
        .description = COMPOUND_STRING("受到草属性的招式攻击时，"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("恶作剧之心"),
        .description = COMPOUND_STRING("可以率先使出变化招式。"),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("沙之力"),
        .description = COMPOUND_STRING("沙暴天气时， 岩石属性、"),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("铁刺"),
        .description = COMPOUND_STRING("用铁刺给予接触到自己的 "),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("达摩模式"),
        .description = COMPOUND_STRING("变为一半以下时， 样子会"),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("胜利之星"),
        .description = COMPOUND_STRING("自己和同伴的命中率会提高"),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("涡轮火焰"),
        .description = COMPOUND_STRING("可以不受对手特性的干扰，"),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("兆级电压"),
        .description = COMPOUND_STRING("可以不受对手特性的干扰，"),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("芳香幕"),
        .description = COMPOUND_STRING("可以防住向自己和同伴 发"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("花幕"),
        .description = COMPOUND_STRING("我方的草属性宝可梦 能力"),
        .aiRating = 0,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("颊囊"),
        .description = COMPOUND_STRING("无论是哪种树果， 食用后"),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("变幻自如"),
        .description = COMPOUND_STRING("变为与自己使出的招式 相"),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("毛皮大衣"),
        .description = COMPOUND_STRING("对手给予的物理招式的 伤"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("魔术师"),
        .description = COMPOUND_STRING("夺走被自己的招式 击中的"),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("防弹"),
        .description = COMPOUND_STRING("可以防住对手的 球和弹类"),
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("好胜"),
        .description = COMPOUND_STRING("如果被对手降低能力， 特"),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("强壮之颚"),
        .description = COMPOUND_STRING("因为颚部强壮， 啃咬类招"),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("冰冻皮肤"),
        .description = COMPOUND_STRING("一般属性的招式 会变为冰"),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("甜幕"),
        .description = COMPOUND_STRING("自己和同伴的宝可梦 不会"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("战斗切换"),
        .description = COMPOUND_STRING("如果使出攻击招式，会变为"),
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
        .description = COMPOUND_STRING("全满时， 飞行属性的招式"),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("超级发射器"),
        .description = COMPOUND_STRING("波动和波导类招式的 威力"),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("草之毛皮"),
        .description = COMPOUND_STRING("在青草场地时， 防御会提"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("共生"),
        .description = COMPOUND_STRING("同伴使用道具时， 会把自"),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("硬爪"),
        .description = COMPOUND_STRING("接触到对手的招式 威力会"),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("妖精皮肤"),
        .description = COMPOUND_STRING("一般属性的招式 会变为妖"),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("黏滑"),
        .description = COMPOUND_STRING("对于用攻击接触到自己的对"),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("飞行皮肤"),
        .description = COMPOUND_STRING("一般属性的招式 会变为飞"),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("亲子爱"),
        .description = COMPOUND_STRING("亲子俩可以合计攻击次。"),
        .aiRating = 10,
    },

    [ABILITY_ORAORAORAORA] =
    {
        .name = _("欧拉欧拉"),
        .description = COMPOUND_STRING("拳类招式"),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("暗黑气场"),
        .description = COMPOUND_STRING("全体的恶属性招式变强。"),
        .aiRating = 6,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("妖精气场"),
        .description = COMPOUND_STRING("全体的妖精属性招式变强。"),
        .aiRating = 6,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("气场破坏"),
        .description = COMPOUND_STRING("让气场的效果发生逆转， "),
        .aiRating = 3,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("始源之海"),
        .description = COMPOUND_STRING("变为不会受到 火属性攻击"),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("终结之地"),
        .description = COMPOUND_STRING("变为不会受到 水属性攻击"),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("德尔塔气流"),
        .description = COMPOUND_STRING("变为令飞行属性的弱点 消"),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("持久力"),
        .description = COMPOUND_STRING("受到攻击时， 防御会提高"),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("跃跃欲逃"),
        .description = COMPOUND_STRING("变为一半时， 会慌慌张张"),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("危险回避"),
        .description = COMPOUND_STRING("变为一半时， 为了回避危"),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("遇水凝固"),
        .description = COMPOUND_STRING("受到水属性的招式攻击时，"),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("不仁不义"),
        .description = COMPOUND_STRING("攻击中毒状态的对手时， "),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("界限盾壳"),
        .description = COMPOUND_STRING("变为一半时， 壳会坏掉，"),
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
        .description = COMPOUND_STRING("可以对替换出场的对手 以"),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("水泡"),
        .description = COMPOUND_STRING("降低自己受到的火属性 招"),
        .aiRating = 8,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("钢能力者"),
        .description = COMPOUND_STRING("钢属性的招式威力会提高。"),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("怒火冲天"),
        .description = COMPOUND_STRING("因对手的攻击 变为一半时"),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("拨雪"),
        .description = COMPOUND_STRING("下雪天气时， 速度会提高"),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("远隔"),
        .description = COMPOUND_STRING("可以不接触对手 就使出所"),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("湿润之声"),
        .description = COMPOUND_STRING("所有的声音招式 都变为水"),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("先行治疗"),
        .description = COMPOUND_STRING("可以率先使出回复招式。"),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("电气皮肤"),
        .description = COMPOUND_STRING("一般属性的招式 会变为电"),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("冲浪之尾"),
        .description = COMPOUND_STRING("电气场地时， 速度会变为"),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("鱼群"),
        .description = COMPOUND_STRING("多的时候会聚起来变强。 "),
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
        .description = COMPOUND_STRING("通过画皮覆盖住身体， 可"),
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
        .description = COMPOUND_STRING("打倒对手时，与训练家的牵"),
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
        .description = COMPOUND_STRING("变为一半时， 细胞们会赶"),
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
        .description = COMPOUND_STRING("可以使钢属性和毒属性的宝"),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("绝对睡眠"),
        .description = COMPOUND_STRING("总是半梦半醒的状态， 绝"),
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
        .description = COMPOUND_STRING("向对手施加威慑力， 使其"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("飞出的内在物"),
        .description = COMPOUND_STRING("被对手打倒的时候， 会给"),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("舞者"),
        .description = COMPOUND_STRING("有谁使出跳舞招式时， 自"),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("蓄电池"),
        .description = COMPOUND_STRING("会提高我方的 特殊招式的"),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("毛茸茸"),
        .description = COMPOUND_STRING("会将对手所给予的接触类招"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("鲜艳之躯"),
        .description = COMPOUND_STRING("让对手吓一跳， 使其无法"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("魂心"),
        .description = COMPOUND_STRING("宝可梦每次变为昏厥状态时"),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("卷发"),
        .description = COMPOUND_STRING("对于用攻击接触到自己的对"),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("接球手"),
        .description = COMPOUND_STRING("继承被打倒的同伴的特性，"),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("化学之力"),
        .description = COMPOUND_STRING("继承倒下宝"),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("异兽提升"),
        .description = COMPOUND_STRING("打倒对手的时候， 自己最"),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("系统"),
        .description = COMPOUND_STRING("会改变宝可"),
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
        .description = COMPOUND_STRING("出场时， 会布下电气场地"),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("精神制造者"),
        .description = COMPOUND_STRING("出场时， 会布下精神场地"),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("薄雾制造者"),
        .description = COMPOUND_STRING("出场时， 会布下薄雾场地"),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("青草制造者"),
        .description = COMPOUND_STRING("出场时， 会布下青草场地"),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("金属防护"),
        .description = COMPOUND_STRING("不会因为对手的招式或特性"),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("幻影防守"),
        .description = COMPOUND_STRING("全满时， 受到的伤害会变"),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("棱镜装甲"),
        .description = COMPOUND_STRING("受到效果绝佳的攻击时， "),
        .aiRating = 6,
    },

    [ABILITY_PRIMAL_ARMOR] =
    {
        .name = _("始源铠甲"),
        .description = COMPOUND_STRING("减弱效果绝"),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("脑核之力"),
        .description = COMPOUND_STRING("效果绝佳的攻击， 威力会"),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("不挠之剑"),
        .description = COMPOUND_STRING("首次出场时， 攻击会提高"),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("不屈之盾"),
        .description = COMPOUND_STRING("首次出场时， 防御会提高"),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("自由者"),
        .description = COMPOUND_STRING("变为与自己使出的招式 相"),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("捡球"),
        .description = COMPOUND_STRING("没有携带道具时， 会拾取"),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("棉絮"),
        .description = COMPOUND_STRING("受到攻击后撒下棉絮， 降"),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("螺旋尾鳍"),
        .description = COMPOUND_STRING("能无视具有吸引 对手招式"),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("镜甲"),
        .description = COMPOUND_STRING("只反弹自己受到的 能力降"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("一口导弹"),
        .description = COMPOUND_STRING("冲浪或潜水时会叼来猎物。"),
        .aiRating = 3,
        .cantBeCopied = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("坚毅"),
        .description = COMPOUND_STRING("能无视具有吸引 对手招式"),
        .aiRating = 2,
    },

    //TODO left off here
    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("蒸汽机"),
        .description = COMPOUND_STRING("受到水属性或 火属性的招"),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("庞克摇滚"),
        .description = COMPOUND_STRING("声音招式的威力会提高。 "),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("吐沙"),
        .description = COMPOUND_STRING("受到攻击时， 会刮起沙暴"),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("冰鳞粉"),
        .description = COMPOUND_STRING("由于有冰鳞粉的守护， 受"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("熟成"),
        .description = COMPOUND_STRING("使树果成熟， 效果变为倍"),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("结冻头"),
        .description = COMPOUND_STRING("头部的冰会代替自己承受 "),
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
        .description = COMPOUND_STRING("只要处在相邻位置， 招式"),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("拟态"),
        .description = COMPOUND_STRING("宝可梦的属性会根据 场地"),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("除障"),
        .description = COMPOUND_STRING("出场时，敌方和我方的光墙"),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("钢之意志"),
        .description = COMPOUND_STRING("我方的钢属性 攻击威力会"),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("灭亡之躯"),
        .description = COMPOUND_STRING("受到接触类招式攻击时， "),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("游魂"),
        .description = COMPOUND_STRING("与使用接触类招式 攻击自"),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("一猩一意"),
        .description = COMPOUND_STRING("虽然攻击会提高， 但是只"),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("化学变化气体"),
        .description = COMPOUND_STRING("特性为化学变化气体的宝可"),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("粉彩护幕"),
        .description = COMPOUND_STRING("自己和同伴都不会 陷入中"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("饱了又饿"),
        .description = COMPOUND_STRING("每回合结束时会在 满腹花"),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("速击"),
        .description = COMPOUND_STRING("有时能比对手先一步行动。"),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("无形拳"),
        .description = COMPOUND_STRING("如果使出的是接触到对手的"),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("怪药"),
        .description = COMPOUND_STRING("出场时会从贝壳撒药， 将"),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("电晶体"),
        .description = COMPOUND_STRING("电属性的招式威力会提高。"),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("龙之颚"),
        .description = COMPOUND_STRING("强化龙属"),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("苍白嘶鸣"),
        .description = COMPOUND_STRING("打倒对手时 会用冰冷的声"),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("漆黑嘶鸣"),
        .description = COMPOUND_STRING("打倒对手时 会用恐怖的声"),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("人马一体"),
        .description = COMPOUND_STRING("兼备蕾冠王的紧张感和 灵"),
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
        .description = COMPOUND_STRING("兼备蕾冠王的紧张感和 灵"),
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
        .description = COMPOUND_STRING("被对手接触到后， 甩不掉"),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("掉出种子"),
        .description = COMPOUND_STRING("受到攻击时， 会将脚下变"),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("热交换"),
        .description = COMPOUND_STRING("受到火属性的招式攻击时，"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("愤怒甲壳"),
        .description = COMPOUND_STRING("因被对手攻击而变为一半时"),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("洁净之盐"),
        .description = COMPOUND_STRING("因洁净的盐而不会陷入异常"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("焦香之躯"),
        .description = COMPOUND_STRING("受到火属性的招式攻击时，"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("乘风"),
        .description = COMPOUND_STRING("吹起了顺风或受到风的招式"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("看门犬"),
        .description = COMPOUND_STRING("受到威吓时，攻击会提高。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("搬岩"),
        .description = COMPOUND_STRING("岩石属性的招式威力会提高"),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("风力发电"),
        .description = COMPOUND_STRING("受到风的招式攻击时， 会"),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("全能变身"),
        .description = COMPOUND_STRING("回到同行队伍后， 会变为"),
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
        .description = COMPOUND_STRING("出场时，若我方当中有吃吼"),
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
        .description = COMPOUND_STRING("受到伤害时， 会变为充电"),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("古代活性"),
        .description = COMPOUND_STRING("携带着驱劲能量 或天气为"),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("夸克充能"),
        .description = COMPOUND_STRING("携带着驱劲能量 或在电气"),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("黄金之躯"),
        .description = COMPOUND_STRING("不会氧化的坚固黄金身躯 "),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("灾祸之鼎"),
        .description = COMPOUND_STRING("以能呼唤灾厄的鼎的力量 "),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("灾祸之剑"),
        .description = COMPOUND_STRING("以能呼唤灾厄的剑的力量 "),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("灾祸之简"),
        .description = COMPOUND_STRING("以能呼唤灾厄的简的力量 "),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("灾祸之玉"),
        .description = COMPOUND_STRING("以能呼唤灾厄的勾玉的力量"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("绯红脉动"),
        .description = COMPOUND_STRING("出场时，会将天气变为晴朗"),
        .aiRating = 8,
    },

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("强子引擎"),
        .description = COMPOUND_STRING("出场时，会布下电气场地。"),
        .aiRating = 8,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("跟风"),
        .description = COMPOUND_STRING("对手的能力提高时， 自己"),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("反刍"),
        .description = COMPOUND_STRING("吃了树果后，会在下一回合"),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("锋锐"),
        .description = COMPOUND_STRING("提高切割对手的 招式的威"),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("大将"),
        .description = COMPOUND_STRING("出场时，攻击和特攻会按照"),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("同台共演"),
        .description = COMPOUND_STRING("出场时， 复制同伴的能力"),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("毒满地"),
        .description = COMPOUND_STRING("受到物理招式的伤害时， "),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("尾甲"),
        .description = COMPOUND_STRING("包裹头部的神秘尾巴 使对"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("食土"),
        .description = COMPOUND_STRING("受到地面属性的招式攻击时"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("菌丝之力"),
        .description = COMPOUND_STRING("使出变化招式时， 虽然行"),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("款待"),
        .description = COMPOUND_STRING("出场时款待同伴， 回复其"),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("心眼"),
        .description = COMPOUND_STRING("锐利目光和"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("面影辉映"),
        .description = COMPOUND_STRING("将回忆映于心中， 让础石"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("面影辉映"),
        .description = COMPOUND_STRING("将回忆映于心中， 让础石"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("面影辉映"),
        .description = COMPOUND_STRING("将回忆映于心中， 让础石"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("面影辉映"),
        .description = COMPOUND_STRING("将回忆映于心中， 让础石"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("毒锁链"),
        .description = COMPOUND_STRING("凭借含有毒素的锁链的力量"),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("甘露之蜜"),
        .description = COMPOUND_STRING("首次出场时， 会散发出甜"),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("太晶变形"),
        .description = COMPOUND_STRING("出场时，会吸收周围的能量"),
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
        .description = COMPOUND_STRING("甲壳蕴藏着全部属性的力量"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("归零化境"),
        .description = COMPOUND_STRING("太乐巴戈斯变为星晶形态时"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("毒傀儡"),
        .description = COMPOUND_STRING("因桃歹郎的招式 而陷入中"),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STRIKER] =
    {
        .name = _("打击者"),
        .description = COMPOUND_STRING("强化踢类"),
        .aiRating = 6,
    },

    [ABILITY_FELINE_PROWESS] =
    {
        .name = _("猫之力"),
        .description = COMPOUND_STRING("特攻加倍"),
        .aiRating = 10,
    },

    [ABILITY_SAGE_POWER] =
    {
        .name = _("贤者之力"),
        .description = COMPOUND_STRING("特攻提高一级"),
        .aiRating = 4,
    },

    [ABILITY_FATAL_PRECISION] =
    {
        .name = _("致命精准"),
        .description = COMPOUND_STRING("效果绝佳时"),
        .aiRating = 6,
    },

    [ABILITY_BLAZING_SOUL] =
    {
        .name = _("燃烧之魂"),
        .description = COMPOUND_STRING("优先度+1"),
        .aiRating = 6,
    },

    [ABILITY_ICE_EATER] =
    {
        .name = _("食冰"),
        .description = COMPOUND_STRING("吸收冰属性"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EMPERORS_PRESENCE] =
    {
        .name = _("帝王气场"),
        .description = COMPOUND_STRING("提高自己的"),
        .aiRating = 2,
    },

    [ABILITY_SELF_SUFFICIENT] =
    {
        .name = _("自给自足"),
        .description = COMPOUND_STRING("每回合回复"),
        .aiRating = 9,
    },

    [ABILITY_BAD_COMPANY] =
    {
        .name = _("坏伙伴"),
        .description = COMPOUND_STRING("阻止自伤"),
        .aiRating = 8,
    },

    [ABILITY_BULL_RUSH] =
    {
        .name = _("猛冲"),
        .description = COMPOUND_STRING("强化招式威"),
        .aiRating = 8,
    },

    [ABILITY_QUILL_RUSH] =
    {
        .name = _("羽刺冲锋"),
        .description = COMPOUND_STRING("强化招式威"),
        .aiRating = 8,
    },

    [ABILITY_BONE_ZONE] =
    {
        .name = _("骨之地带"),
        .description = COMPOUND_STRING("骨类招式效"),
        .aiRating = 7,
    },

    [ABILITY_THE_GRIPPER] =
    {
        .name = _("抓握者"),
        .description = COMPOUND_STRING("接触到招"),
        .aiRating = 7,
    },

    [ABILITY_PARASITIC_WASTE] =
    {
        .name = _("寄生废料"),
        .description = COMPOUND_STRING("接触招式"),
        .aiRating = 6,
    },

    

};
