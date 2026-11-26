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
        .description = COMPOUND_STRING("通过释放臭臭的气味， 在攻击
的时候， 有时会使对手畏缩。"),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("降雨"),
        .description = COMPOUND_STRING("出场时， 会将天气变为下雨。"),
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
        .description = COMPOUND_STRING("被坚硬的甲壳守护着， 不会被
对手的攻击击中要害。"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("结实"),
        .description = COMPOUND_STRING("在全满时，即使受到招式攻击，
 也不会被一击打倒。 一击必
杀的招式也没有效果。"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("湿气"),
        .description = COMPOUND_STRING("通过把周围都弄湿， 使谁都无
法使用玉石俱碎等爆炸类的招式
。"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("柔软"),
        .description = COMPOUND_STRING("因为身体柔软， 不会变为麻痹
状态。"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("沙隐"),
        .description = COMPOUND_STRING("在沙暴的时候， 闪避率会提高
。"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("静电"),
        .description = COMPOUND_STRING("身上带有静电， 有时会让接触
到的对手麻痹。"),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("蓄电"),
        .description = COMPOUND_STRING("受到电属性的招式攻击时， 不
会受到伤害，而是会回复。"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("储水"),
        .description = COMPOUND_STRING("受到水属性的招式攻击时， 不
会受到伤害，而是会回复。"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("迟钝"),
        .description = COMPOUND_STRING("因为感觉迟钝， 不会变为着迷
和被挑衅状态。 对威吓也毫不
动摇。"),
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
        .description = COMPOUND_STRING("因为拥有复眼， 招式的命中率
会提高。"),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("不眠"),
        .description = COMPOUND_STRING("因为有着睡不着的体质， 所以
不会陷入睡眠状态。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("变色"),
        .description = COMPOUND_STRING("自己的属性会变为 从对手处所
受招式的属性。"),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("免疫"),
        .description = COMPOUND_STRING("因为体内拥有免疫能力， 不会
变为中毒状态。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("引火"),
        .description = COMPOUND_STRING("受到火属性的招式攻击时， 吸
收火焰，自己使出的 火属性招
式会变强。"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("鳞粉"),
        .description = COMPOUND_STRING("被鳞粉守护着， 不会受到招式
的追加效果影响。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("我行我素"),
        .description = COMPOUND_STRING("因为我行我素， 不会变为混乱
状态。 对威吓也毫不动摇。"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("吸盘"),
        .description = COMPOUND_STRING("用吸盘牢牢贴在地面上， 让替
换宝可梦的招式和道具无效。"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("威吓"),
        .description = COMPOUND_STRING("出场时威吓对手， 让其退缩，
 降低对手的攻击。"),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("踩影"),
        .description = COMPOUND_STRING("踩住对手的影子 使其无法逃走
或替换。"),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("粗糙皮肤"),
        .description = COMPOUND_STRING("受到攻击时， 用粗糙的皮肤弄
伤 接触到自己的对手。"),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("神奇守护"),
        .description = COMPOUND_STRING("不可思议的力量， 只有效果绝
佳的招式才能击中。"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("飘浮"),
        .description = COMPOUND_STRING("从地面浮起， 从而不会受到地
面属性招式的攻击。"),
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
        .description = COMPOUND_STRING("受到攻击时， 有时会把接触到
自己的对手 变为中毒、麻痹或
睡眠状态。"),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("同步"),
        .description = COMPOUND_STRING("将自己的中毒、麻痹 或灼伤状
态传染给对手。"),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("恒净之躯"),
        .description = COMPOUND_STRING("不会因为对手的招式或特性 而
被降低能力。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("自然回复"),
        .description = COMPOUND_STRING("回到同行队伍后， 异常状态就
会被治愈。"),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("避雷针"),
        .description = COMPOUND_STRING("将电属性的招式吸引到自己身上
， 不会受到伤害，而是会提高
特攻。"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("天恩"),
        .description = COMPOUND_STRING("托天恩的福， 招式的追加效果
容易出现。"),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("悠游自如"),
        .description = COMPOUND_STRING("下雨天气时， 速度会提高。"),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("叶绿素"),
        .description = COMPOUND_STRING("晴朗天气时， 速度会提高。"),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("发光"),
        .description = COMPOUND_STRING("通过让周围变亮 来保持命中率
不会被降低。"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("复制"),
        .description = COMPOUND_STRING("出场时，复制对手的特性， 变
为与之相同的特性。"),
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
        .description = COMPOUND_STRING("有时会让接触到自己的 对手变
为中毒状态。"),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("精神力"),
        .description = COMPOUND_STRING("拥有经过锻炼的精神， 而不会
因对手的攻击而畏缩。 对威吓
也毫不动摇。"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("熔岩铠甲"),
        .description = COMPOUND_STRING("将炽热的熔岩覆盖在身上， 不
会变为冰冻状态。"),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("水幕"),
        .description = COMPOUND_STRING("将水幕裹在身上， 不会变为灼
伤状态。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("磁力"),
        .description = COMPOUND_STRING("用磁力吸住钢属性的宝可梦， 
使其无法逃走。"),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("隔音"),
        .description = COMPOUND_STRING("通过屏蔽声音， 不受到声音招
式的影响。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("雨盘"),
        .description = COMPOUND_STRING("下雨天气时， 会缓缓回复。"),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("扬沙"),
        .description = COMPOUND_STRING("出场时， 会把天气变为沙暴。"),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("压迫感"),
        .description = COMPOUND_STRING("给予对手压迫感， 大量减少其
使用招式的。"),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("厚脂肪"),
        .description = COMPOUND_STRING("因为被厚厚的脂肪保护着， 会
让火属性和冰属性的招式伤害减
半。"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("早起"),
        .description = COMPOUND_STRING("即使变为睡眠状态， 也能以倍
的速度提早醒来。"),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("火焰之躯"),
        .description = COMPOUND_STRING("有时会让接触到自己的 对手变
为灼伤状态。"),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("逃跑"),
        .description = COMPOUND_STRING("一定能从野生宝可梦 那儿逃走
。"),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("锐利目光"),
        .description = COMPOUND_STRING("多亏了锐利的目光， 命中率不
会被降低。"),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("怪力钳"),
        .description = COMPOUND_STRING("因为拥有以力量自豪的钳子， 
不会被对手降低攻击。"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("捡拾"),
        .description = COMPOUND_STRING("有时会捡来对手用过的道具， 
冒险过程中也会捡到。"),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("懒惰"),
        .description = COMPOUND_STRING("如果使出招式， 下一回合就会
休息。"),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("活力"),
        .description = COMPOUND_STRING("自己的攻击变高， 但命中率会
降低。"),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("迷人之躯"),
        .description = COMPOUND_STRING("有时会让接触到自己的对手着迷
。"),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("正电"),
        .description = COMPOUND_STRING("出场的伙伴之间 如果有正电或
负电特性的宝可梦， 自己的特
攻会提高。"),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("负电"),
        .description = COMPOUND_STRING("出场的伙伴之间 如果有正电或
负电特性的宝可梦， 自己的特
攻会提高。"),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("阴晴不定"),
        .description = COMPOUND_STRING("受天气的影响， 会变为水属性
、火属性 或冰属性中的某一个
。"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("黏着"),
        .description = COMPOUND_STRING("因为道具是粘在黏性身体上的，
 所以不会被对手夺走。"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("蜕皮"),
        .description = COMPOUND_STRING("通过蜕去身上的皮， 有时会治
愈异常状态。"),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("毅力"),
        .description = COMPOUND_STRING("如果变为异常状态， 会拿出毅
力， 攻击会提高。"),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("神奇鳞片"),
        .description = COMPOUND_STRING("如果变为异常状态， 神奇鳞片
会发生反应， 防御会提高。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("污泥浆"),
        .description = COMPOUND_STRING("吸收了污泥浆的对手 会因强烈
的恶臭 而受到伤害，减少。"),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("茂盛"),
        .description = COMPOUND_STRING("减少的时候， 草属性的招式威
力会提高。"),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("猛火"),
        .description = COMPOUND_STRING("减少的时候， 火属性的招式威
力会提高。"),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("激流"),
        .description = COMPOUND_STRING("减少的时候， 水属性的招式威
力会提高。"),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("虫之预感"),
        .description = COMPOUND_STRING("减少的时候， 虫属性的招式威
力会提高。"),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("坚硬脑袋"),
        .description = COMPOUND_STRING("即使使出会受反作用力伤害的招
式， 也不会减少。"),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("日照"),
        .description = COMPOUND_STRING("出场时， 会将天气变为晴朗。"),
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
        .description = COMPOUND_STRING("通过激发出干劲， 不会变为睡
眠状态。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("白色烟雾"),
        .description = COMPOUND_STRING("被白色烟雾保护着， 不会被对
手降低能力。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("瑜伽之力"),
        .description = COMPOUND_STRING("因瑜伽的力量， 物理攻击的威
力会变为倍。"),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("硬壳盔甲"),
        .description = COMPOUND_STRING("被坚硬的壳保护着， 对手的攻
击不会击中要害。"),
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
        .description = COMPOUND_STRING("在混乱状态时， 闪避率会提高
。"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("电气引擎"),
        .description = COMPOUND_STRING("受到电属性的招式攻击时， 不
会受到伤害，而是速度会提高。"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("斗争心"),
        .description = COMPOUND_STRING("面对性别相同的对手， 会燃起
斗争心，变得更强。 而面对性
别不同的，则会变弱。"),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("不屈之心"),
        .description = COMPOUND_STRING("每次畏缩时， 不屈之心就会燃
起， 速度也会提高。"),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("雪隐"),
        .description = COMPOUND_STRING("下雪天气时， 闪避率会提高。"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("贪吃鬼"),
        .description = COMPOUND_STRING("原本变得很少时才会吃树果， 
在还有一半时就会把它吃掉。"),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("愤怒穴位"),
        .description = COMPOUND_STRING("要害被击中时， 会大发雷霆，
 攻击力变为最大。"),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("轻装"),
        .description = COMPOUND_STRING("失去所持有的道具时， 速度会
提高。"),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("耐热"),
        .description = COMPOUND_STRING("耐热的体质会 让火属性的招式
伤害减半。"),
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
        .description = COMPOUND_STRING("下雨天气时和受到水属性的招式
时， 会回复。晴朗天气时和受
到火属性的 招式时，会减少。"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("下载"),
        .description = COMPOUND_STRING("比较对手的防御和特防， 根据
较低的那项能力 相应地提高自
己的攻击或特攻。"),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("铁拳"),
        .description = COMPOUND_STRING("使用拳类招式的威力会提高。"),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("毒疗"),
        .description = COMPOUND_STRING("变为中毒状态时， 不会减少，
反而会增加起来。"),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("适应力"),
        .description = COMPOUND_STRING("与自身同属性的招式 威力会提
高。"),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("连续攻击"),
        .description = COMPOUND_STRING("如果使用连续招式， 总是能使
出最高次数。"),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("湿润之躯"),
        .description = COMPOUND_STRING("下雨天气时， 异常状态会治愈
。"),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("太阳之力"),
        .description = COMPOUND_STRING("晴朗天气时， 特攻会提高， 
而每回合会减少。"),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("飞毛腿"),
        .description = COMPOUND_STRING("变为异常状态时， 速度会提高
。"),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("一般皮肤"),
        .description = COMPOUND_STRING("无论是什么属性的招式， 全部
会变为一般属性。 威力会少量
提高。"),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("狙击手"),
        .description = COMPOUND_STRING("击中要害时， 威力会变得更强
。"),
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
        .description = COMPOUND_STRING("由于无防守战术， 双方使出的
招式都必定会击中。"),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("慢出"),
        .description = COMPOUND_STRING("使出招式的顺序 必定会变为最
后。"),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("技术高手"),
        .description = COMPOUND_STRING("攻击时可以将 低威力招式的威
力提高。"),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("叶子防守"),
        .description = COMPOUND_STRING("晴朗天气时， 不会变为异常状
态。"),
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
        .description = COMPOUND_STRING("可以不受对手特性的干扰， 向
对手使出招式。"),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("超幸运"),
        .description = COMPOUND_STRING("因为拥有超幸运， 攻击容易击
中对手的要害。"),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("诱爆"),
        .description = COMPOUND_STRING("变为昏厥时， 会对接触到自己
的对手造成伤害。"),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("危险预知"),
        .description = COMPOUND_STRING("可以察觉到 对手拥有的危险招
式。"),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("预知梦"),
        .description = COMPOUND_STRING("出场时， 只读取个对手拥有的
招式。"),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("纯朴"),
        .description = COMPOUND_STRING("可以无视对手能力的变化， 进
行攻击。"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("有色眼镜"),
        .description = COMPOUND_STRING("可以将效果不好的招式 以通常
的威力使出。"),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("过滤"),
        .description = COMPOUND_STRING("受到效果绝佳的攻击时， 可以
减弱其威力。"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("慢启动"),
        .description = COMPOUND_STRING("在回合内， 攻击和速度减半。"),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("胆量"),
        .description = COMPOUND_STRING("一般属性和格斗属性的招式 可
以击中幽灵属性的宝可梦。 对
威吓也毫不动摇。"),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("引水"),
        .description = COMPOUND_STRING("将水属性的招式引到自己身上，
 不会受到伤害，而是会提高特
攻。"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("冰冻之躯"),
        .description = COMPOUND_STRING("下雪天气时， 会缓缓回复。"),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("坚硬岩石"),
        .description = COMPOUND_STRING("受到效果绝佳的攻击时， 可以
减弱其威力。"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("降雪"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("出场时， 会将天气变为下雪。"),
    #else
        .description = COMPOUND_STRING("Summons Hail for 5 turns."),
    #endif
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("采蜜"),
        .description = COMPOUND_STRING("战斗结束时， 有时候会捡来甜
甜蜜。"),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("察觉"),
        .description = COMPOUND_STRING("出场时， 可以察觉对手的持有
物。"),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("舍身"),
        .description = COMPOUND_STRING("自己会因反作用力受伤的招式，
 其威力会提高。"),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("多属性"),
        .description = COMPOUND_STRING("自己的属性会根据 持有的石板
而改变。"),
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
        .description = COMPOUND_STRING("晴朗天气时， 自己与同伴的攻
击和 特防能力会提高。"),
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
        .description = COMPOUND_STRING("盗取接触到自己的 对手的道具
。"),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("强行"),
        .description = COMPOUND_STRING("招式的追加效果消失， 但因此
能以更高的威力使出招式。"),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("唱反调"),
        .description = COMPOUND_STRING("能力的变化发生逆转， 原本提
高时会降低， 而原本降低时会
提高。"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("紧张感"),
        .description = COMPOUND_STRING("让对手紧张， 使其无法食用树
果。"),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("不服输"),
        .description = COMPOUND_STRING("被对手降低能力时， 攻击会大
幅提高。"),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("软弱"),
        .description = COMPOUND_STRING("减半时， 会变得软弱， 攻击
和特攻会减半。"),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("咒术之躯"),
        .description = COMPOUND_STRING("受到攻击时， 有时会把对手的
招式 变为定身法状态。"),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("治愈之心"),
        .description = COMPOUND_STRING("有时会治愈异常状态的同伴。"),
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
        .description = COMPOUND_STRING("受到物理招式的伤害时， 防御
会降低， 速度会大幅提高。"),
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
        .description = COMPOUND_STRING("全满时， 受到的伤害会变少。"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("中毒激升"),
        .description = COMPOUND_STRING("变为中毒状态时， 物理招式的
威力会提高。"),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("受热激升"),
        .description = COMPOUND_STRING("变为灼伤状态时， 特殊招式的
威力会提高。"),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("收获"),
        .description = COMPOUND_STRING("可以多次制作出 已被使用掉的
树果。"),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("心灵感应"),
        .description = COMPOUND_STRING("读取我方的攻击， 并闪避其招
式伤害。"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("心情不定"),
        .description = COMPOUND_STRING("每一回合，能力中的某项 会大
幅提高，而某项会降低。"),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("防尘"),
        .description = COMPOUND_STRING("不会受到沙暴的伤害。也不会 
受到粉末类和孢子类招式的影响
。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("毒手"),
        .description = COMPOUND_STRING("只通过接触就有可能 让对手变
为中毒状态。"),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("再生力"),
        .description = COMPOUND_STRING("退回同行队伍后， 会少量回复
。"),
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
        .description = COMPOUND_STRING("沙暴天气时， 速度会提高。"),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("奇迹皮肤"),
        .description = COMPOUND_STRING("成为不易受到变化招式 攻击的
身体。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("分析"),
        .description = COMPOUND_STRING("如果在最后使出招式， 招式的
威力会提高。"),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("幻觉"),
        .description = COMPOUND_STRING("假扮成同行队伍中的 最后一只
宝可梦出场， 迷惑对手。"),
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
        .description = COMPOUND_STRING("可以穿透对手的壁障 或替身进
行攻击。"),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("木乃伊"),
        .description = COMPOUND_STRING("被对手接触到后， 会将对手变
为木乃伊。"),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("自信过度"),
        .description = COMPOUND_STRING("如果打倒对手， 就会充满自信
，攻击会提高。"),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("正义之心"),
        .description = COMPOUND_STRING("受到恶属性的招式攻击时， 因
为正义感，攻击会提高。"),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("胆怯"),
        .description = COMPOUND_STRING("受到恶属性、幽灵属性 和虫属
性的攻击或威吓时， 会因胆怯
而速度提高。"),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("魔法镜"),
        .description = COMPOUND_STRING("可以不受到由对手使出的 变化
招式影响，并将其反弹。"),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("食草"),
        .description = COMPOUND_STRING("受到草属性的招式攻击时， 不
会受到伤害，而是攻击会提高。"),
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
        .description = COMPOUND_STRING("沙暴天气时， 岩石属性、地面
属性 和钢属性的招式威力会提
高。"),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("铁刺"),
        .description = COMPOUND_STRING("用铁刺给予接触到自己的 对手
伤害。"),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("达摩模式"),
        .description = COMPOUND_STRING("变为一半以下时， 样子会改变
。"),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("胜利之星"),
        .description = COMPOUND_STRING("自己和同伴的命中率会提高。"),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("涡轮火焰"),
        .description = COMPOUND_STRING("可以不受对手特性的干扰， 向
对手使出招式。"),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("兆级电压"),
        .description = COMPOUND_STRING("可以不受对手特性的干扰， 向
对手使出招式。"),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("芳香幕"),
        .description = COMPOUND_STRING("可以防住向自己和同伴 发出的
心灵攻击。"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("花幕"),
        .description = COMPOUND_STRING("我方的草属性宝可梦 能力不会
降低， 也不会变为异常状态。"),
        .aiRating = 0,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("颊囊"),
        .description = COMPOUND_STRING("无论是哪种树果， 食用后，都
会回复。"),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("变幻自如"),
        .description = COMPOUND_STRING("变为与自己使出的招式 相同的
属性。 每次出场战斗仅生效一
次。"),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("毛皮大衣"),
        .description = COMPOUND_STRING("对手给予的物理招式的 伤害会
减半。"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("魔术师"),
        .description = COMPOUND_STRING("夺走被自己的招式 击中的对手
的道具。"),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("防弹"),
        .description = COMPOUND_STRING("可以防住对手的 球和弹类招式
。"),
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("好胜"),
        .description = COMPOUND_STRING("如果被对手降低能力， 特攻会
大幅提高。"),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("强壮之颚"),
        .description = COMPOUND_STRING("因为颚部强壮， 啃咬类招式的
威力会提高。"),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("冰冻皮肤"),
        .description = COMPOUND_STRING("一般属性的招式 会变为冰属性
。 威力会少量提高。"),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("甜幕"),
        .description = COMPOUND_STRING("自己和同伴的宝可梦 不会变为
睡眠状态。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("战斗切换"),
        .description = COMPOUND_STRING("如果使出攻击招式，会变为刀剑
形态， 如果使出招式“王者盾
牌”， 会变为盾牌形态。"),
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
        .description = COMPOUND_STRING("全满时， 飞行属性的招式可以
率先使出。"),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("超级发射器"),
        .description = COMPOUND_STRING("波动和波导类招式的 威力会提
高。"),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("草之毛皮"),
        .description = COMPOUND_STRING("在青草场地时， 防御会提高。"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("共生"),
        .description = COMPOUND_STRING("同伴使用道具时， 会把自己持
有的道具传递给同伴。"),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("硬爪"),
        .description = COMPOUND_STRING("接触到对手的招式 威力会提高
。"),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("妖精皮肤"),
        .description = COMPOUND_STRING("一般属性的招式 会变为妖精属
性。 威力会少量提高。"),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("黏滑"),
        .description = COMPOUND_STRING("对于用攻击接触到自己的对手，
 会降低其速度。"),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("飞行皮肤"),
        .description = COMPOUND_STRING("一般属性的招式 会变为飞行属
性。 威力会少量提高。"),
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
        .name = _("ORAORAORAORA!"),
        .description = COMPOUND_STRING("Punch moves hit a second\ntime for 50% damage"),
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
        .description = COMPOUND_STRING("让气场的效果发生逆转， 降低
威力。"),
        .aiRating = 3,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("始源之海"),
        .description = COMPOUND_STRING("变为不会受到 火属性攻击的天
气。"),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("终结之地"),
        .description = COMPOUND_STRING("变为不会受到 水属性攻击的天
气。"),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("德尔塔气流"),
        .description = COMPOUND_STRING("变为令飞行属性的弱点 消失的
天气。"),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("持久力"),
        .description = COMPOUND_STRING("受到攻击时， 防御会提高。"),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("跃跃欲逃"),
        .description = COMPOUND_STRING("变为一半时， 会慌慌张张逃走
， 退回同行队伍中。"),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("危险回避"),
        .description = COMPOUND_STRING("变为一半时， 为了回避危险，
 会退回到同行队伍中。"),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("遇水凝固"),
        .description = COMPOUND_STRING("受到水属性的招式攻击时， 防
御会大幅提高。"),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("不仁不义"),
        .description = COMPOUND_STRING("攻击中毒状态的对手时， 必定
会击中要害。"),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("界限盾壳"),
        .description = COMPOUND_STRING("变为一半时， 壳会坏掉，变得
有攻击性。"),
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
        .description = COMPOUND_STRING("可以对替换出场的对手 以倍的
伤害进行攻击。"),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("水泡"),
        .description = COMPOUND_STRING("降低自己受到的火属性 招式的
威力，不会灼伤。"),
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
        .description = COMPOUND_STRING("因对手的攻击 变为一半时， 
特攻会提高。"),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("拨雪"),
        .description = COMPOUND_STRING("下雪天气时， 速度会提高。"),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("远隔"),
        .description = COMPOUND_STRING("可以不接触对手 就使出所有的
招式。"),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("湿润之声"),
        .description = COMPOUND_STRING("所有的声音招式 都变为水属性
。"),
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
        .description = COMPOUND_STRING("一般属性的招式 会变为电属性
。 威力会少量提高。"),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("冲浪之尾"),
        .description = COMPOUND_STRING("电气场地时， 速度会变为倍。"),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("鱼群"),
        .description = COMPOUND_STRING("多的时候会聚起来变强。 剩余
量变少时， 群体会分崩离析。"),
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
        .description = COMPOUND_STRING("通过画皮覆盖住身体， 可以防
住次攻击。"),
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
        .description = COMPOUND_STRING("打倒对手时，与训练家的牵绊会
增强， 自己的攻击、特攻、速
度会提高。"),
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
        .description = COMPOUND_STRING("变为一半时， 细胞们会赶来支
援， 变为完全体形态。"),
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
        .description = COMPOUND_STRING("可以使钢属性和毒属性的宝可梦
 也陷入中毒状态。"),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("绝对睡眠"),
        .description = COMPOUND_STRING("总是半梦半醒的状态， 绝对不
会醒来。 可以就这么睡着进行
攻击。"),
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
        .description = COMPOUND_STRING("向对手施加威慑力， 使其无法
对我方使出先制招式。"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("飞出的内在物"),
        .description = COMPOUND_STRING("被对手打倒的时候， 会给予对
手相当于 剩余量的伤害。"),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("舞者"),
        .description = COMPOUND_STRING("有谁使出跳舞招式时， 自己也
能就这么接着使出跳舞招式。"),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("蓄电池"),
        .description = COMPOUND_STRING("会提高我方的 特殊招式的威力
。"),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("毛茸茸"),
        .description = COMPOUND_STRING("会将对手所给予的接触类招式的
伤害减半， 但火属性招式的伤
害会变为倍。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("鲜艳之躯"),
        .description = COMPOUND_STRING("让对手吓一跳， 使其无法对我
方使出先制招式。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("魂心"),
        .description = COMPOUND_STRING("宝可梦每次变为昏厥状态时， 
特攻会提高。"),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("卷发"),
        .description = COMPOUND_STRING("对于用攻击接触到自己的对手，
 会降低其速度。"),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("接球手"),
        .description = COMPOUND_STRING("继承被打倒的同伴的特性， 变
为相同的特性。"),
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
        .description = COMPOUND_STRING("打倒对手的时候， 自己最高的
那项能力会提高。"),
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
        .description = COMPOUND_STRING("出场时， 会布下电气场地。"),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("精神制造者"),
        .description = COMPOUND_STRING("出场时， 会布下精神场地。"),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("薄雾制造者"),
        .description = COMPOUND_STRING("出场时， 会布下薄雾场地。"),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("青草制造者"),
        .description = COMPOUND_STRING("出场时， 会布下青草场地。"),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("金属防护"),
        .description = COMPOUND_STRING("不会因为对手的招式或特性 而
被降低能力。"),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("幻影防守"),
        .description = COMPOUND_STRING("全满时， 受到的伤害会变少。"),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("棱镜装甲"),
        .description = COMPOUND_STRING("受到效果绝佳的攻击时， 可以
减弱其威力。"),
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
        .description = COMPOUND_STRING("效果绝佳的攻击， 威力会变得
更强。"),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("不挠之剑"),
        .description = COMPOUND_STRING("首次出场时， 攻击会提高。"),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("不屈之盾"),
        .description = COMPOUND_STRING("首次出场时， 防御会提高。"),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("自由者"),
        .description = COMPOUND_STRING("变为与自己使出的招式 相同的
属性。 每次出场战斗仅生效一
次。"),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("捡球"),
        .description = COMPOUND_STRING("没有携带道具时， 会拾取第个
投出后 捕捉失败的精灵球。"),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("棉絮"),
        .description = COMPOUND_STRING("受到攻击后撒下棉絮， 降低除
自己以外的 所有宝可梦的速度
。"),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("螺旋尾鳍"),
        .description = COMPOUND_STRING("能无视具有吸引 对手招式效果
的 特性或招式的影响。"),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("镜甲"),
        .description = COMPOUND_STRING("只反弹自己受到的 能力降低效
果。"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("一口导弹"),
        .description = COMPOUND_STRING("冲浪或潜水时会叼来猎物。 受
到伤害时， 会吐出猎物进行攻
击。"),
        .aiRating = 3,
        .cantBeCopied = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("坚毅"),
        .description = COMPOUND_STRING("能无视具有吸引 对手招式效果
的 特性或招式的影响。"),
        .aiRating = 2,
    },

    //TODO left off here
    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("蒸汽机"),
        .description = COMPOUND_STRING("受到水属性或 火属性的招式攻
击时， 速度会巨幅提高。"),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("庞克摇滚"),
        .description = COMPOUND_STRING("声音招式的威力会提高。 受到
的声音招式伤害会减半。"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("吐沙"),
        .description = COMPOUND_STRING("受到攻击时， 会刮起沙暴。"),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("冰鳞粉"),
        .description = COMPOUND_STRING("由于有冰鳞粉的守护， 受到的
特殊攻击伤害会减半。"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("熟成"),
        .description = COMPOUND_STRING("使树果成熟， 效果变为倍。"),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("结冻头"),
        .description = COMPOUND_STRING("头部的冰会代替自己承受 物理
攻击，但是样子会改变。 下雪
时，冰会恢复原状。"),
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
        .description = COMPOUND_STRING("只要处在相邻位置， 招式的威
力就会提高。"),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("拟态"),
        .description = COMPOUND_STRING("宝可梦的属性会根据 场地的状
态而变化。"),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("除障"),
        .description = COMPOUND_STRING("出场时，敌方和我方的光墙、 
反射壁和极光幕的效果会消失。"),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("钢之意志"),
        .description = COMPOUND_STRING("我方的钢属性 攻击威力会提高
。"),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("灭亡之躯"),
        .description = COMPOUND_STRING("受到接触类招式攻击时， 双方
都会在回合后变为昏厥状态。 
替换后效果消失。"),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("游魂"),
        .description = COMPOUND_STRING("与使用接触类招式 攻击自己的
宝可梦互换特性。"),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("一猩一意"),
        .description = COMPOUND_STRING("虽然攻击会提高， 但是只能使
出 一开始所选的招式。"),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("化学变化气体"),
        .description = COMPOUND_STRING("特性为化学变化气体的宝可梦在
场时， 场上所有宝可梦的 特
性效果都会消失或者无法生效。"),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("粉彩护幕"),
        .description = COMPOUND_STRING("自己和同伴都不会 陷入中毒的
异常状态。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("饱了又饿"),
        .description = COMPOUND_STRING("每回合结束时会在 满腹花纹与
空腹花纹之间 交替改变样子。"),
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
        .description = COMPOUND_STRING("如果使出的是接触到对手的招式
， 就可以无视守护效果进行攻
击。"),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("怪药"),
        .description = COMPOUND_STRING("出场时会从贝壳撒药， 将我方
的能力变化复原。"),
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
        .name = _("Dragon's Maw"),
        .description = COMPOUND_STRING("Powers up Dragon-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("苍白嘶鸣"),
        .description = COMPOUND_STRING("打倒对手时 会用冰冷的声音嘶
鸣 并提高攻击。"),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("漆黑嘶鸣"),
        .description = COMPOUND_STRING("打倒对手时 会用恐怖的声音嘶
鸣 并提高特攻。"),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("人马一体"),
        .description = COMPOUND_STRING("兼备蕾冠王的紧张感和 灵幽马
的漆黑嘶鸣这两种特性。"),
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
        .description = COMPOUND_STRING("兼备蕾冠王的紧张感和 灵幽马
的漆黑嘶鸣这两种特性。"),
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
        .description = COMPOUND_STRING("被对手接触到后， 甩不掉的气
味 会沾上对手。"),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("掉出种子"),
        .description = COMPOUND_STRING("受到攻击时， 会将脚下变成青
草场地。"),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("热交换"),
        .description = COMPOUND_STRING("受到火属性的招式攻击时， 攻
击会提高，且不会陷入灼伤状态
。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("愤怒甲壳"),
        .description = COMPOUND_STRING("因被对手攻击而变为一半时， 
会因愤怒降低防御和特防。 但
攻击、特攻、速度会提高。"),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("洁净之盐"),
        .description = COMPOUND_STRING("因洁净的盐而不会陷入异常状态
。 会让幽灵属性的招式伤害减
半。"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("焦香之躯"),
        .description = COMPOUND_STRING("受到火属性的招式攻击时， 不
会受到伤害，而是会大幅提高防
御。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("乘风"),
        .description = COMPOUND_STRING("吹起了顺风或受到风的招式攻击
时， 不会受到伤害，而是会提
高攻击。"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("看门犬"),
        .description = COMPOUND_STRING("受到威吓时，攻击会提高。 让
替换宝可梦的招式和道具无效。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("搬岩"),
        .description = COMPOUND_STRING("岩石属性的招式威力会提高。"),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("风力发电"),
        .description = COMPOUND_STRING("受到风的招式攻击时， 会变为
充电状态。"),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("全能变身"),
        .description = COMPOUND_STRING("回到同行队伍后， 会变为全能
形态。"),
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
        .description = COMPOUND_STRING("出场时，若我方当中有吃吼霸，
 就会进入其口中， 并从其口
中发出指令。"),
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
        .description = COMPOUND_STRING("受到伤害时， 会变为充电状态
。"),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("古代活性"),
        .description = COMPOUND_STRING("携带着驱劲能量 或天气为晴朗
时， 数值最高的能力会提高。"),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("夸克充能"),
        .description = COMPOUND_STRING("携带着驱劲能量 或在电气场地
上时， 数值最高的能力会提高
。"),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("黄金之躯"),
        .description = COMPOUND_STRING("不会氧化的坚固黄金身躯 不会
受到对手的变化招式的影响。"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("灾祸之鼎"),
        .description = COMPOUND_STRING("以能呼唤灾厄的鼎的力量 降低
除自己以外的宝可梦的特攻。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("灾祸之剑"),
        .description = COMPOUND_STRING("以能呼唤灾厄的剑的力量 降低
除自己以外的宝可梦的防御。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("灾祸之简"),
        .description = COMPOUND_STRING("以能呼唤灾厄的简的力量 降低
除自己以外的宝可梦的攻击。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("灾祸之玉"),
        .description = COMPOUND_STRING("以能呼唤灾厄的勾玉的力量 降
低除自己以外的宝可梦的特防。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("绯红脉动"),
        .description = COMPOUND_STRING("出场时，会将天气变为晴朗。 
日照强烈时，会通过 古代的脉
动升高攻击。"),
        .aiRating = 8,
    },

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("强子引擎"),
        .description = COMPOUND_STRING("出场时，会布下电气场地。 处
于电气场地时，会通过 未来的
机关升高特攻。"),
        .aiRating = 8,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("跟风"),
        .description = COMPOUND_STRING("对手的能力提高时， 自己也会
趁机 同样地提高能力。"),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("反刍"),
        .description = COMPOUND_STRING("吃了树果后，会在下一回合结束
时 从胃反刍出来再吃次。"),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("锋锐"),
        .description = COMPOUND_STRING("提高切割对手的 招式的威力。"),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("大将"),
        .description = COMPOUND_STRING("出场时，攻击和特攻会按照目前
 被打倒的同伴数量逐渐提升，
 被打倒越多，提升越多。"),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("同台共演"),
        .description = COMPOUND_STRING("出场时， 复制同伴的能力变化
。"),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("毒满地"),
        .description = COMPOUND_STRING("受到物理招式的伤害时， 会在
对手脚下散布毒菱。"),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("尾甲"),
        .description = COMPOUND_STRING("包裹头部的神秘尾巴 使对手无
法对我方使出先制招式。"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("食土"),
        .description = COMPOUND_STRING("受到地面属性的招式攻击时， 
不会受到伤害，而是会得到回复
。"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("菌丝之力"),
        .description = COMPOUND_STRING("使出变化招式时， 虽然行动必
定会变慢， 但能不受对手的特
性妨碍。"),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("款待"),
        .description = COMPOUND_STRING("出场时款待同伴， 回复其少量
。"),
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
        .description = COMPOUND_STRING("将回忆映于心中， 让础石面具
发出光辉， 提高自己的防御。"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("面影辉映"),
        .description = COMPOUND_STRING("将回忆映于心中， 让础石面具
发出光辉， 提高自己的防御。"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("面影辉映"),
        .description = COMPOUND_STRING("将回忆映于心中， 让础石面具
发出光辉， 提高自己的防御。"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("面影辉映"),
        .description = COMPOUND_STRING("将回忆映于心中， 让础石面具
发出光辉， 提高自己的防御。"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("毒锁链"),
        .description = COMPOUND_STRING("凭借含有毒素的锁链的力量， 
有时能让被招式击中的对手 陷
入剧毒状态。"),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("甘露之蜜"),
        .description = COMPOUND_STRING("首次出场时， 会散发出甜腻的
蜜的香味 来降低对手的闪避率
。"),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("太晶变形"),
        .description = COMPOUND_STRING("出场时，会吸收周围的能量， 
变为太晶形态。"),
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
        .description = COMPOUND_STRING("甲壳蕴藏着全部属性的力量， 
会将自己全满时受到的伤害 全
都变为效果不好。"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("归零化境"),
        .description = COMPOUND_STRING("太乐巴戈斯变为星晶形态时， 
蕴藏在它身上的力量会将 天气
和场地的影响全部归零。"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("毒傀儡"),
        .description = COMPOUND_STRING("因桃歹郎的招式 而陷入中毒状
态的对手 同时也会陷入混乱状
态。"),
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
