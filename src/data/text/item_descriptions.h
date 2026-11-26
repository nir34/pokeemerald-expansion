static const u8 sDummyDesc[] = _(
    "?????");

// Poké Balls
static const u8 sPokeBallDesc[] = _(
    "用来捕捉野生宝可梦的\n道具。");

static const u8 sGreatBallDesc[] = _(
    "比精灵球捕捉率更高的\n好球。");

static const u8 sUltraBallDesc[] = _(
    "比超级球捕捉率更高的\n球。");

static const u8 sMasterBallDesc[] = _(
    "必定能捉住宝可梦的最\n好的球。");

static const u8 sPremierBallDesc[] = _(
    "为纪念某项活动制作的\n稀有球。");

static const u8 sHealBallDesc[] = _(
    "能回复已捕捉宝可梦状\n态的球。");

static const u8 sNetBallDesc[] = _(
    "对水属性和虫属性宝可\n梦有效的球。");

static const u8 sNestBallDesc[] = _(
    "对较弱的宝可梦更有效\n的球。");

static const u8 sDiveBallDesc[] = _(
    "对海底的宝可梦更有效\n的球。");

static const u8 sDuskBallDesc[] = _(
    "在黑暗的地方使用效果\n更好。");

static const u8 sTimerBallDesc[] = _(
    "对战回合越多威力越强\n的球。");

static const u8 sQuickBallDesc[] = _(
    "第一回合使用效果更好\n。");

static const u8 sRepeatBallDesc[] = _(
    "对以前捉过的宝可梦更\n有效。");

static const u8 sLuxuryBallDesc[] = _(
    "能让宝可梦更亲近的舒\n适球。");

static const u8 sLevelBallDesc[] = _(
    "对等级低的宝可梦更有\n效的球。");

static const u8 sLureBallDesc[] = _(
    "对钓上来的宝可梦更有\n效的球。");

static const u8 sMoonBallDesc[] = _(
    "对使用月之石者更有效\n的球。");

static const u8 sFriendBallDesc[] = _(
    "捕捉后能让宝可梦更亲\n近的球。");

static const u8 sLoveBallDesc[] = _(
    "对异性宝可梦更有效。");

static const u8 sFastBallDesc[] = _(
    "对速度很快的宝可梦更\n有效。");

static const u8 sHeavyBallDesc[] = _(
    "对很重的宝可梦更有效\n。");

static const u8 sDreamBallDesc[] = _(
#if B_DREAM_BALL_MODIFIER >= GEN_8
    "对睡眠中的宝可梦更有\n效的球。");
#else
    "在梦之遗迹使用的精灵\n球。");
#endif

static const u8 sSafariBallDesc[] = _(
    "只在狩猎地带使用的特\n殊球。");

static const u8 sSportBallDesc[] = _(
    "捕虫大赛中\n使用的特殊球。");

static const u8 sParkBallDesc[] = _(
    "帕尔公园专用的特殊球\n。");

static const u8 sBeastBallDesc[] = _(
    "用来捕捉究极异兽的球\n。");

static const u8 sCherishBallDesc[] = _(
    "为纪念某项活动制作的\n稀有球。");

// Medicine
static const u8 sPotionDesc[] = _(
    "回复宝可梦20点HP\n。");

static const u8 sSuperPotionDesc[] = _(
    "回复宝可梦"
#if I_HEALTH_RECOVERY >= GEN_7
    "60点HP。");
#else
    "50点HP。");
#endif

static const u8 sHyperPotionDesc[] = _(
    "回复宝可梦"
#if I_HEALTH_RECOVERY >= GEN_7
    "120点HP。");
#else
    "200点HP。");
#endif

static const u8 sMaxPotionDesc[] = _(
    "完全回复宝可梦的HP\n。");

static const u8 sFullRestoreDesc[] = _(
    "完全回复宝可梦的HP\n和异常状态。");

static const u8 sReviveDesc[] = _(
    "让濒死的宝可梦回复一\n半HP。");

static const u8 sMaxReviveDesc[] = _(
    "让濒死的宝可梦\n以全满HP复活。");

static const u8 sFreshWaterDesc[] = _(
    "回复宝可梦"
#if I_HEALTH_RECOVERY >= GEN_7
    "30点HP。");
#else
    "50点HP。");
#endif

static const u8 sSodaPopDesc[] = _(
    "回复宝可梦"
#if I_HEALTH_RECOVERY >= GEN_7
    "50点HP。");
#else
    "60点HP。");
#endif

static const u8 sLemonadeDesc[] = _(
    "非常甜的饮料，\n能回复HP，"
#if I_HEALTH_RECOVERY >= GEN_7
    "70点HP。");
#else
    "80点HP。");
#endif

static const u8 sMoomooMilkDesc[] = _(
    "回复宝可梦100点H\nP的营养牛奶。");

static const u8 sEnergyPowderDesc[] = _(
    "回复宝可梦"
#if I_HEALTH_RECOVERY >= GEN_7
    "60点HP。");
#else
    "50点HP。");
#endif

static const u8 sEnergyRootDesc[] = _(
    "回复宝可梦的苦根。"
#if I_HEALTH_RECOVERY >= GEN_7
    "120点HP。");
#else
    "200点HP。");
#endif

static const u8 sHealPowderDesc[] = _(
    "能治好所有异常状态的\n苦粉。");

static const u8 sRevivalHerbDesc[] = _(
    "能复活濒死宝可梦的极\n苦药草。");

static const u8 sAntidoteDesc[] = _(
    "治好中毒的宝可梦。");

static const u8 sParalyzeHealDesc[] = _(
    "治好麻痹的宝可梦。");

static const u8 sBurnHealDesc[] = _(
    "治好宝可梦的灼伤。");

static const u8 sIceHealDesc[] = _(
    "让冰冻的宝可梦解冻。");

static const u8 sAwakeningDesc[] = _(
    "唤醒睡着的宝可梦。");

static const u8 sFullHealDesc[] = _(
    "治愈一只宝可梦的\n所\n有异常状态。");

static const u8 sEtherDesc[] = _(
    "回复所选招式10点P\nP。");

static const u8 sMaxEtherDesc[] = _(
    "完全回复所选招式的P\nP。");

static const u8 sElixirDesc[] = _(
    "回复所有招式各10点\nPP。");

static const u8 sMaxElixirDesc[] = _(
    "完全回复宝可梦所有招\n式的PP。");

static const u8 sBerryJuiceDesc[] = _(
    "回复宝可梦20点HP\n的纯果汁。");

static const u8 sSacredAshDesc[] = _(
    "完全复活并回复所有濒\n死宝可梦。");

static const u8 sSweetHeartDesc[] = _(
    "回复宝可梦20点HP\n的甜巧克力。");

static const u8 sMaxHoneyDesc[] = _(
    "让濒死的宝可梦\n以全满HP复活。");

static const u8 sPewterCrunchiesDesc[] = _(
    "治愈一只宝可梦的\n所\n有异常状态。");

static const u8 sRageCandyBarDesc[] = _(
    "治愈一只宝可梦的\n所\n有异常状态。");

static const u8 sLavaCookieDesc[] = _(
    "能治好所有异常状态的\n当地特产。");

static const u8 sOldGateauDesc[] = _(
    "治愈一只宝可梦的\n所\n有异常状态。");

static const u8 sCasteliaconeDesc[] = _(
    "治愈一只宝可梦的\n所\n有异常状态。");

static const u8 sLumioseGaletteDesc[] = _(
    "治愈一只宝可梦的\n所\n有异常状态。");

static const u8 sShalourSableDesc[] = _(
    "治愈一只宝可梦的\n所\n有异常状态。");

static const u8 sBigMalasadaDesc[] = _(
    "治愈一只宝可梦的\n所\n有异常状态。");

// Vitamins
static const u8 sHPUpDesc[] = _(
    "提高一只宝可梦的基础\nHP。");

static const u8 sProteinDesc[] = _(
    "提高一只宝可梦的基础\n攻击。");

static const u8 sIronDesc[] = _(
    "提高一只宝可梦的基础\n防御。");

static const u8 sCalciumDesc[] = _(
    "提高一只宝可梦的基础\n特攻。");

static const u8 sZincDesc[] = _(
    "提高一只宝可梦的基础\n特防。");

static const u8 sCarbosDesc[] = _(
    "提高一只宝可梦的基础\n速度。");

static const u8 sPPUpDesc[] = _(
    "提高所选招式的最大P\nP。");

static const u8 sPPMaxDesc[] = _(
    "把招式的PP提高到最\n大。");

// EV Feathers
static const u8 sHealthFeatherDesc[] = _(
    "提高宝可梦HP基础值\n\n的道具。");

static const u8 sMuscleFeatherDesc[] = _(
    "提高宝可梦攻击基础值\n\n的道具。");

static const u8 sResistFeatherDesc[] = _(
    "提高宝可梦防御基础值\n\n的道具。");

static const u8 sGeniusFeatherDesc[] = _(
    "提高宝可梦特攻基础值\n\n的道具。");

static const u8 sCleverFeatherDesc[] = _(
    "提高宝可梦特防基础值\n\n的道具。");

static const u8 sSwiftFeatherDesc[] = _(
    "提高宝可梦速度基础值\n\n的道具。");

// Ability Modifiers
static const u8 sAbilityCapsuleDesc[] = _(
    "更换宝可梦的特性。");

static const u8 sAbilityPatchDesc[] = _(
    "把宝可梦的特性变为稀\n有特性。");

// Mints
static const u8 sLonelyMintDesc[] = _(
    "有气味。提高攻击，但\n降低防御。");

static const u8 sAdamantMintDesc[] = _(
    "有气味。提高攻击，但\n降低特攻。");

static const u8 sNaughtyMintDesc[] = _(
    "有气味。提高攻击，但\n降低特防。");

static const u8 sBraveMintDesc[] = _(
    "有气味。提高攻击，但\n降低速度。");

static const u8 sBoldMintDesc[] = _(
    "有气味。提高防御，但\n降低攻击。");

static const u8 sImpishMintDesc[] = _(
    "有气味。提高防御，但\n降低特攻。");

static const u8 sLaxMintDesc[] = _(
    "有气味。提高防御，但\n降低特防。");

static const u8 sRelaxedMintDesc[] = _(
    "有气味。提高防御，但\n降低速度。");

static const u8 sModestMintDesc[] = _(
    "有气味。提高特攻，但\n降低攻击。");

static const u8 sMildMintDesc[] = _(
    "有气味。提高特攻，但\n降低防御。");

static const u8 sRashMintDesc[] = _(
    "有气味。提高特攻，但\n降低特防。");

static const u8 sQuietMintDesc[] = _(
    "有气味。提高特攻，但\n降低速度。");

static const u8 sCalmMintDesc[] = _(
    "有气味。提高特防，但\n降低攻击。");

static const u8 sGentleMintDesc[] = _(
    "有气味。提高特防，但\n降低防御。");

static const u8 sCarefulMintDesc[] = _(
    "有气味。提高特防，但\n降低特攻。");

static const u8 sSassyMintDesc[] = _(
    "有气味。提高特防，但\n降低速度。");

static const u8 sTimidMintDesc[] = _(
    "有气味。提高速度，但\n降低攻击。");

static const u8 sHastyMintDesc[] = _(
    "有气味。提高速度，但\n降低防御。");

static const u8 sJollyMintDesc[] = _(
    "有气味。提高速度，但\n降低特攻。");

static const u8 sNaiveMintDesc[] = _(
    "有气味。提高速度，但\n降低特防。");

static const u8 sSeriousMintDesc[] = _(
    "有气味。提高速度，但\n降低攻击。");

// Candy
static const u8 sRareCandyDesc[] = _(
    "把宝可梦的等级提高1\n级。");

static const u8 sExpCandyXSDesc[] = _(
    "给一只宝可梦极少量经\n验值。");

static const u8 sExpCandySDesc[] = _(
    "给一只宝可梦少量经验\n值。");

static const u8 sExpCandyMDesc[] = _(
    "给一只宝可梦适量经验\n值。");

static const u8 sExpCandyLDesc[] = _(
    "给一只宝可梦大量经验\n值。");

static const u8 sExpCandyXLDesc[] = _(
    "给一只宝可梦极大量经\n验值。");

static const u8 sDynamaxCandyDesc[] = _(
    "把一只宝可梦的极巨等\n级提高1级。");

// Medicinal Flutes
static const u8 sBlueFluteDesc[] = _(
    "能唤醒睡着宝可梦的玻\n璃笛。");

static const u8 sYellowFluteDesc[] = _(
    "能让宝可梦摆脱混乱的\n玻璃笛。");

static const u8 sRedFluteDesc[] = _(
    "能让宝可梦摆脱迷恋的\n玻璃笛。");

// Encounter-modifying Flutes
static const u8 sBlackFluteDesc[] = _(
    "能赶走野生宝可梦的玻\n璃笛。");

static const u8 sWhiteFluteDesc[] = _(
    "能吸引野生宝可梦的玻\n璃笛。");

// Encounter Modifiers
static const u8 sRepelDesc[] = _(
    "100步内赶走弱小的\n野生宝可梦。");

static const u8 sSuperRepelDesc[] = _(
    "200步内赶走弱小的\n野生宝可梦。");

static const u8 sMaxRepelDesc[] = _(
    "250步内赶走弱小的\n野生宝可梦。");

static const u8 sLureDesc[] = _(
    "100步内让宝可梦更\n容易出现。");

static const u8 sSuperLureDesc[] = _(
    "200步内让宝可梦更\n容易出现。");

static const u8 sMaxLureDesc[] = _(
    "250步内让宝可梦更\n容易出现。");

static const u8 sEscapeRopeDesc[] = _(
    "用来立刻从洞窟或地下\n逃出去。");

// Battle items
static const u8 sXAttackDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "对战中大幅提高攻击。");
#else
    "对战中提高攻击。");
#endif

static const u8 sXDefenseDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "对战中大幅提高防御。");
#else
    "对战中提高防御。");
#endif

static const u8 sXSpAtkDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "对战中大幅提高特攻。");
#else
    "对战中提高特攻。");
#endif

static const u8 sXSpDefDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "对战中大幅提高特防。");
#else
    "对战中提高特防。");
#endif

static const u8 sXSpeedDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "对战中大幅提高速度。");
#else
    "对战中提高速度。");
#endif

static const u8 sXAccuracyDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "对战中大幅提高招式命\n中率。");
#else
    "对战中提高攻击招式的\n命中率。");
#endif

static const u8 sDireHitDesc[] = _(
    "对战中提高击中要害率\n。");

static const u8 sGuardSpecDesc[] = _(
    "对战中防止能力被降低\n。");

// Escape Items
static const u8 sPokeDollDesc[] = _(
    "用来从与野生宝可梦的\n\n对战中逃走。");

static const u8 sFluffyTailDesc[] = _(
    "用来从与野生宝可梦的\n\n对战中逃走。");

static const u8 sPokeToyDesc[] = _(
    "用来从与野生宝可梦的\n\n对战中逃走。");

static const u8 sMaxMushroomsDesc[] = _(
    "对战中让所有能力各提\n高一级。");

// Treasures
static const u8 sBottleCapDesc[] = _(
    "闪着银光的美丽王冠。");

static const u8 sGoldBottleCapDesc[] = _(
    "闪着金光的美丽王冠。");

static const u8 sNuggetDesc[] = _(
    "纯金块。能以高价卖出\n。");

static const u8 sBigNuggetDesc[] = _(
    "用金子做的大金块，能\n高价卖出。");

static const u8 sTinyMushroomDesc[] = _(
    "能便宜卖出的普通蘑菇\n。");

static const u8 sBigMushroomDesc[] = _(
    "能高价卖出的\n稀有蘑菇。");

static const u8 sBalmMushroomDesc[] = _(
    "能高价卖出的\n稀有蘑菇。");

static const u8 sPearlDesc[] = _(
    "能便宜卖出的漂亮珍珠\n。");

static const u8 sBigPearlDesc[] = _(
    "能高价卖出的美丽大珍\n珠。");

static const u8 sPearlStringDesc[] = _(
    "能高价卖出的特大珍珠\n。");

static const u8 sStardustDesc[] = _(
    "漂亮的红色沙子。能以\n高价卖出。");

static const u8 sStarPieceDesc[] = _(
    "红色宝石碎片。能卖很\n高价。");

static const u8 sCometShardDesc[] = _(
    "彗星的碎片。能高价卖\n出。");

static const u8 sShoalSaltDesc[] = _(
    "从浅滩洞窟深处获得的\n盐。");

static const u8 sShoalShellDesc[] = _(
    "在浅滩洞窟深处找到的\n贝壳。");

static const u8 sRedShardDesc[] = _(
    "远古道具的碎片。可以\n低价卖掉。");

static const u8 sBlueShardDesc[] = _(
    "远古道具的碎片。可以\n低价卖掉。");

static const u8 sYellowShardDesc[] = _(
    "远古道具的碎片。可以\n低价卖掉。");

static const u8 sGreenShardDesc[] = _(
    "远古道具的碎片。可以\n低价卖掉。");

static const u8 sHeartScaleDesc[] = _(
    "可爱的鳞片。收藏家很\n想要。");

static const u8 sHoneyDesc[] = _(
    "使用后能吸引野生宝可\n梦的甜蜂蜜。");

static const u8 sRareBoneDesc[] = _(
    "非常稀有的骨头。能高\n价卖出。");

static const u8 sOddKeystoneDesc[] = _(
    "偶尔能从这块怪石听到\n声音。");

static const u8 sPrettyFeatherDesc[] = _(
    "漂亮却毫无用处的朴素\n羽毛。");

static const u8 sRelicCopperDesc[] = _(
    "很久以前用的铜币。能\n高价卖出。");

static const u8 sRelicSilverDesc[] = _(
    "很久以前用的银币。能\n高价卖出。");

static const u8 sRelicGoldDesc[] = _(
    "很久以前用的金币。能\n高价卖出。");

static const u8 sRelicVaseDesc[] = _(
    "很久以前的花瓶。能高\n价卖出。");

static const u8 sRelicBandDesc[] = _(
    "古老的手镯。能高价卖\n出。");

static const u8 sRelicStatueDesc[] = _(
    "古老的雕像。能高价卖\n出。");

static const u8 sRelicCrownDesc[] = _(
    "古老的王冠。能高价卖\n出。");

static const u8 sStrangeSouvenirDesc[] = _(
    "描绘阿罗拉宝可梦的装\n饰品。");

// Fossils
static const u8 sHelixFossilDesc[] = _(
    "古代海洋宝可梦贝壳的\n一部分。");

static const u8 sDomeFossilDesc[] = _(
    "古代海洋宝可梦甲壳的\n一部分。");

static const u8 sOldAmberDesc[] = _(
    "含古代宝可梦基因的石\n头。");

static const u8 sRootFossilDesc[] = _(
    "古代生活在海底的\n宝可梦的化石。");

static const u8 sClawFossilDesc[] = _(
    "古代生活在海底的\n宝可梦的化石。");

static const u8 sArmorFossilDesc[] = _(
    "史前宝可梦头部的一部\n分。");

static const u8 sSkullFossilDesc[] = _(
    "史前宝可梦头部的一部\n分。");

static const u8 sCoverFossilDesc[] = _(
    "史前宝可梦背部的一部\n分。");

static const u8 sPlumeFossilDesc[] = _(
    "史前宝可梦翅膀的一部\n分。");

static const u8 sJawFossilDesc[] = _(
    "史前宝可梦大颚\n的一部分。");

static const u8 sSailFossilDesc[] = _(
    "史前宝可梦背帆\n的一部分。");

static const u8 sFossilizedBirdDesc[] = _(
    "古代翱翔天际的宝可梦\n的化石。");

static const u8 sFossilizedFishDesc[] = _(
    "古代生活在海里的\n宝可梦的化石。");

static const u8 sFossilizedDrakeDesc[] = _(
    "古代行走大地的宝可梦\n的化石。");

static const u8 sFossilizedDinoDesc[] = _(
    "古代生活在海里的\n宝可梦的化石。");

// Mulch
static const u8 sGrowthMulchDesc[] = _(
    "加快树果成长的肥料。");

static const u8 sDampMulchDesc[] = _(
    "减慢树果成长的肥料。");

static const u8 sStableMulchDesc[] = _(
    "延长树果树寿命的肥料\n。");

static const u8 sGooeyMulchDesc[] = _(
    "让更多树果在结果后重\n新长出的肥料。");

static const u8 sRichMulchDesc[] = _(
    "增加树果收获数量的肥\n料。");

static const u8 sSurpriseMulchDesc[] = _(
    "提高树果变异几率的肥\n料。");

static const u8 sBoostMulchDesc[] = _(
    "加快松软泥土变干的肥\n料。");

static const u8 sAmazeMulchDesc[] = _(
    "兼具丰收、惊喜和增效\n的肥料。");

// Apricorns
static const u8 sRedApricornDesc[] = _(
    "红色杏子果。气味扑鼻\n而来。");

static const u8 sBlueApricornDesc[] = _(
    "蓝色杏子果。有点青草\n的气味。");

static const u8 sYellowApricornDesc[] = _(
    "黄色杏子果。有提神的\n气味。");

static const u8 sGreenApricornDesc[] = _(
    "绿色杏子果。有奇特的\n香气。");

static const u8 sPinkApricornDesc[] = _(
    "粉色杏子果。有甜美的\n香气。");

static const u8 sWhiteApricornDesc[] = _(
    "白色杏子果。几乎没有\n气味。");

static const u8 sBlackApricornDesc[] = _(
    "黑色杏子果。有难以形\n容的气味。");

static const u8 sWishingPieceDesc[] = _(
    "扔进宝可梦巢穴，吸引\n极巨化的宝可梦。");

static const u8 sGalaricaTwigDesc[] = _(
    "迦勒尔地区一种叫迦勒\n尔的树的树枝。");

static const u8 sArmoriteOreDesc[] = _(
    "在迦勒尔铠甲岛的稀有\n矿石。");

static const u8 sDyniteOreDesc[] = _(
    "在迦勒尔极巨巢穴发现\n的神秘矿石。");

// Mail
static const u8 sOrangeMailDesc[] = _(
    "印着蛇纹熊图案，让宝\n可梦携带的邮件。");

static const u8 sHarborMailDesc[] = _(
    "印着长翅鸥图案，让宝\n可梦携带的邮件。");

static const u8 sGlitterMailDesc[] = _(
    "印着皮卡丘图案，让宝\n可梦携带的邮件。");

static const u8 sMechMailDesc[] = _(
    "印着小磁怪图案，让宝\n可梦携带的邮件。");

static const u8 sWoodMailDesc[] = _(
    "印着懒人獭图案，让宝\n可梦携带的邮件。");

static const u8 sWaveMailDesc[] = _(
    "印着吼吼鲸图案，让宝\n可梦携带的邮件。");

static const u8 sBeadMailDesc[] = _(
    "印着携带者\n速写的邮件。");

static const u8 sShadowMailDesc[] = _(
    "印着夜巡灵图案，让宝\n可梦携带的邮件。");

static const u8 sTropicMailDesc[] = _(
    "印着美丽花图案，让宝\n可梦携带的邮件。");

static const u8 sDreamMailDesc[] = _(
    "印着携带者\n速写的邮件。");

static const u8 sFabMailDesc[] = _(
    "印着华丽图案，让宝可\n梦携带的邮件。");

static const u8 sRetroMailDesc[] = _(
    "印有三只宝可梦图案的\n邮件。");

// Evolution Items
static const u8 sFireStoneDesc[] = _(
    "能让某些种类的宝可梦\n进化。");

static const u8 sWaterStoneDesc[] = _(
    "能让某些种类的宝可梦\n进化。");

static const u8 sThunderStoneDesc[] = _(
    "能让某些种类的宝可梦\n进化。");

static const u8 sLeafStoneDesc[] = _(
    "能让某些种类的宝可梦\n进化。");

static const u8 sIceStoneDesc[] = _(
    "能让某些种类的宝可梦\n进化。");

static const u8 sSunStoneDesc[] = _(
    "能让某些种类的宝可梦\n进化。");

static const u8 sMoonStoneDesc[] = _(
    "能让某些种类的宝可梦\n进化。");

static const u8 sShinyStoneDesc[] = _(
    "能让某些种类的宝可梦\n进化。");

static const u8 sDuskStoneDesc[] = _(
    "能让某些种类的宝可梦\n进化。");

static const u8 sDawnStoneDesc[] = _(
    "能让某些种类的宝可梦\n进化。");

static const u8 sSweetAppleDesc[] = _(
    "能让某些宝可梦进化的\n甜甜苹果。");

static const u8 sTartAppleDesc[] = _(
    "能让某些宝可梦进化的\n酸酸苹果。");

static const u8 sCrackedPotDesc[] = _(
    "能让某些宝可梦进化的\n破裂茶壶。");

static const u8 sChippedPotDesc[] = _(
    "能让某些宝可梦进化的\n残缺茶壶。");

static const u8 sGalaricaCuffDesc[] = _(
    "能让某些宝可梦进化的\n迦勒尔手环。");

static const u8 sGalaricaWreathDesc[] = _(
    "在迦勒尔制作的花环。\n能让某些宝可梦进化。");

static const u8 sDragonScaleDesc[] = _(
    "龙属性宝可梦携带的奇\n怪鳞片。");

static const u8 sUpgradeDesc[] = _(
    "西尔佛公司制作的珍奇\n盒子。");

static const u8 sProtectorDesc[] = _(
    "某只宝可梦喜欢它。又\n硬又重。");

static const u8 sElectirizerDesc[] = _(
    "某只宝可梦喜欢它。充\n满电能。");

static const u8 sMagmarizerDesc[] = _(
    "某只宝可梦喜欢它。充\n满岩浆能量。");

static const u8 sDubiousDiscDesc[] = _(
    "充满可疑数据的\n透明装置。");

static const u8 sReaperClothDesc[] = _(
    "某只宝可梦喜欢它。\n蕴含灵界能量。");

static const u8 sPrismScaleDesc[] = _(
    "能让某些宝可梦进化\n的闪耀神秘鳞片。");

static const u8 sWhippedDreamDesc[] = _(
    "某只宝可梦喜欢的柔软\n甜点。");

static const u8 sSachetDesc[] = _(
    "装满某只宝可梦\n喜欢的香水的小袋。");

static const u8 sOvalStoneDesc[] = _(
    "能让某只宝可梦进化。\n形状像蛋。");

static const u8 sStrawberrySweetDesc[] = _(
    "米尔奶油喜欢的草莓形\n糖饰。");

static const u8 sLoveSweetDesc[] = _(
    "米尔奶油喜欢的心形糖\n饰。");

static const u8 sBerrySweetDesc[] = _(
    "米尔奶油喜欢的浆果形\n糖饰。");

static const u8 sCloverSweetDesc[] = _(
    "米尔奶油喜欢的三叶草\n形糖饰。");

static const u8 sFlowerSweetDesc[] = _(
    "米尔奶油喜欢的花朵形\n糖饰。");

static const u8 sStarSweetDesc[] = _(
    "米尔奶油喜欢的星星形\n糖饰。");

static const u8 sRibbonSweetDesc[] = _(
    "米尔奶油喜欢的缎带形\n糖饰。");

static const u8 sEverstoneDesc[] = _(
    "能阻止进化的神奇携带\n道具。");

static const u8 sBlackAuguriteDesc[] = _(
    "能让某些宝可梦进化的\n黑色石头。");;

static const u8 sLinkingCordDesc[] = _(
    "能让某些宝可梦进化的\n神秘丝线。");

static const u8 sPeatBlockDesc[] = _(
    "能让某些宝可梦进化的\n块状材料。");

// Nectars
static const u8 sRedNectarDesc[] = _(
    "能改变某些宝可梦形态\n的花蜜。");

static const u8 sYellowNectarDesc[] = _(
    "能改变某些宝可梦形态\n的花蜜。");

static const u8 sPinkNectarDesc[] = _(
    "能改变某些宝可梦形态\n的花蜜。");

static const u8 sPurpleNectarDesc[] = _(
    "能改变某些宝可梦形态\n的花蜜。");

// Plates
static const u8 sFlamePlateDesc[] = _(
    "提高火属性招式威力的\n石板。");

static const u8 sSplashPlateDesc[] = _(
    "提高水属性招式威力的\n石板。");

static const u8 sZapPlateDesc[] = _(
    "提高电属性招式威力的\n石板。");

static const u8 sMeadowPlateDesc[] = _(
    "提高草属性招式威力的\n石板。");

static const u8 sIciclePlateDesc[] = _(
    "提高冰属性招式威力的\n石板。");

static const u8 sFistPlateDesc[] = _(
    "提高格斗属性招式威力\n的石板。");

static const u8 sToxicPlateDesc[] = _(
    "提高毒属性招式威力的\n石板。");

static const u8 sEarthPlateDesc[] = _(
    "提高地面属性招式威力\n的石板。");

static const u8 sSkyPlateDesc[] = _(
    "提高飞行属性招式威力\n的石板。");

static const u8 sMindPlateDesc[] = _(
    "提高超能力属性招式威\n力的石板。");

static const u8 sInsectPlateDesc[] = _(
    "提高虫属性招式威力的\n石板。");

static const u8 sStonePlateDesc[] = _(
    "提高岩石属性招式威力\n的石板。");

static const u8 sSpookyPlateDesc[] = _(
    "提高幽灵属性招式威力\n的石板。");

static const u8 sDracoPlateDesc[] = _(
    "提高龙属性招式威力的\n石板。");

static const u8 sDreadPlateDesc[] = _(
    "提高恶属性招式威力的\n石板。");

static const u8 sIronPlateDesc[] = _(
    "提高钢属性招式威力的\n石板。");

static const u8 sPixiePlateDesc[] = _(
    "提高妖精属性招式威力\n\n的石板。");

// Drives
static const u8 sDouseDriveDesc[] = _(
    "把盖诺赛克特的科技爆\n破变成水属性。");

static const u8 sShockDriveDesc[] = _(
    "把盖诺赛克特的科技爆\n破变成电属性。");

static const u8 sBurnDriveDesc[] = _(
    "把盖诺赛克特的科技爆\n破变成火属性。");

static const u8 sChillDriveDesc[] = _(
    "把盖诺赛克特的科技爆\n破变成冰属性。");

// Memories
static const u8 sFireMemoryDesc[] = _(
    "含有火属性数据的圆盘\n。会改变银伴战兽的属\n性。");

static const u8 sWaterMemoryDesc[] = _(
    "含有水属性数据的圆盘\n。会改变银伴战兽的属\n性。");

static const u8 sElectricMemoryDesc[] = _(
    "含有电属性数据的圆盘\n。会改变银伴战兽的属\n性。");

static const u8 sGrassMemoryDesc[] = _(
    "含有草属性数据的圆盘\n。会改变银伴战兽的属\n性。");

static const u8 sIceMemoryDesc[] = _(
    "含有冰属性数据的圆盘\n。会改变银伴战兽的属\n性。");

static const u8 sFightingMemoryDesc[] = _(
    "含有格斗属性数据的圆盘。\n会改变银伴战兽的属性。");

static const u8 sPoisonMemoryDesc[] = _(
    "含有毒属性数据的圆盘\n。会改变银伴战兽的属\n性。");

static const u8 sGroundMemoryDesc[] = _(
    "含有地面属性数据的圆\n盘。会改变银伴战兽的\n属性。");

static const u8 sFlyingMemoryDesc[] = _(
    "含有飞行属性数据的圆\n盘。会改变银伴战兽的\n属性。");

static const u8 sPsychicMemoryDesc[] = _(
    "含有超能力属性数据的\n圆盘。会改变银伴战兽\n的属性。");

static const u8 sBugMemoryDesc[] = _(
    "含有虫属性数据的圆盘\n。会改变银伴战兽的属\n性。");

static const u8 sRockMemoryDesc[] = _(
    "含有岩石属性数据的圆\n盘。会改变银伴战兽的\n属性。");

static const u8 sGhostMemoryDesc[] = _(
    "含有幽灵属性数据的圆\n盘。会改变银伴战兽的\n属性。");

static const u8 sDragonMemoryDesc[] = _(
    "含有龙属性数据的圆盘\n。会改变银伴战兽的属\n性。");

static const u8 sDarkMemoryDesc[] = _(
    "含有恶属性数据的圆盘\n。会改变银伴战兽的属\n性。");

static const u8 sSteelMemoryDesc[] = _(
    "含有钢属性数据的圆盘\n。会改变银伴战兽的属\n性。");

static const u8 sFairyMemoryDesc[] = _(
    "含有妖精属性数据的圆\n盘。会改变银伴战兽的\n属性。");

static const u8 sRustedSwordDesc[] = _(
    "锈蚀的剑。英雄曾用它\n阻止了一场灾难。");

static const u8 sRustedShieldDesc[] = _(
    "锈蚀的盾。英雄曾用它\n阻止了一场灾难。");

// Colored Orbs
static const u8 sRedOrbDesc[] = _(
    "据说蕴含古代力量的红\n色发光宝珠。");

static const u8 sBlueOrbDesc[] = _(
    "据说蕴含古代力量的蓝\n色发光宝珠。");

// Mega Stones
static const u8 sVenusauriteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sCharizarditeDesc[] = _(
    "这块石头能让喷火龙\n在战斗中超级进化。");

static const u8 sBlastoisiniteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sBeedrilliteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sPidgeotiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sAlakaziteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sSlowbroniteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sGengariteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sKangaskhaniteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sPinsiriteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sGyaradositeDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sAerodactyliteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sMewtwoniteDesc[] = _(
    "这块石头能让超梦\n在战斗中超级进化。");

static const u8 sAmpharositeDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sSteelixiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sScizoriteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sHeracroniteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sHoundoominiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sTyranitariteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sSceptiliteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sBlazikeniteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sSwampertiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sGardevoiriteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sSableniteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sMawiliteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sAggroniteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sMedichamiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sManectiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sSharpedoniteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sCameruptiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sAltarianiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sBanettiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sAbsoliteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sGlalititeDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sSalamenciteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sMetagrossiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sLatiasiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sLatiositeDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sLopunniteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sGarchompiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sLucarioniteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sAbomasiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sGalladiteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sAudiniteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

static const u8 sDianciteDesc[] = _(
    "这块石头能让某只宝可\n梦在战斗中超级进化。");

// Gems
static const u8 sNormalGemDesc[] = _(
    "提高一般属性招式的威\n力。");

static const u8 sFireGemDesc[] = _(
    "提高火属性招式的威力\n。");

static const u8 sWaterGemDesc[] = _(
    "提高水属性招式的威力\n。");

static const u8 sElectricGemDesc[] = _(
    "提高电属性招式的威力\n。");

static const u8 sGrassGemDesc[] = _(
    "提高草属性招式的威力\n。");

static const u8 sIceGemDesc[] = _(
    "提高冰属性招式的威力\n。");

static const u8 sFightingGemDesc[] = _(
    "提高格斗属性招式的威\n力。");

static const u8 sPoisonGemDesc[] = _(
    "提高毒属性招式的威力\n。");

static const u8 sGroundGemDesc[] = _(
    "提高地面属性招式的威\n力。");

static const u8 sFlyingGemDesc[] = _(
    "提高飞行属性招式的威\n力。");

static const u8 sPsychicGemDesc[] = _(
    "提高超能力属性招式的\n威力。");

static const u8 sBugGemDesc[] = _(
    "提高虫属性招式的威力\n。");

static const u8 sRockGemDesc[] = _(
    "提高岩石属性招式的威\n力。");

static const u8 sGhostGemDesc[] = _(
    "提高幽灵属性招式的威\n力。");

static const u8 sDragonGemDesc[] = _(
    "提高龙属性招式的威力\n。");

static const u8 sDarkGemDesc[] = _(
    "提高恶属性招式的威力\n。");

static const u8 sSteelGemDesc[] = _(
    "提高钢属性招式的威力\n。");

static const u8 sFairyGemDesc[] = _(
    "提高妖精属性招式的威\n力。");

// Z-Crystals
static const u8 sNormaliumZDesc[] = _(
    "把一般属性招式变成Z\n招式。");

static const u8 sFiriumZDesc[] = _(
    "把火属性招式变成Z招\n式。");

static const u8 sWateriumZDesc[] = _(
    "把水属性招式变成Z招\n式。");

static const u8 sElectriumZDesc[] = _(
    "把电属性招式变成Z招\n式。");

static const u8 sGrassiumZDesc[] = _(
    "把草属性招式变成Z招\n式。");

static const u8 sIciumZDesc[] = _(
    "把冰属性招式变成Z招\n式。");

static const u8 sFightiniumZDesc[] = _(
    "把格斗属性招式变成Z\n招式。");

static const u8 sPoisoniumZDesc[] = _(
    "把毒属性招式变成Z招\n式。");

static const u8 sGroundiumZDesc[] = _(
    "把地面属性招式变成Z\n招式。");

static const u8 sFlyiniumZDesc[] = _(
    "把飞行属性招式变成Z\n招式。");

static const u8 sPsychiumZDesc[] = _(
    "把超能力属性招式变成\nZ招式。");

static const u8 sBuginiumZDesc[] = _(
    "把虫属性招式变成Z招\n式。");

static const u8 sRockiumZDesc[] = _(
    "把岩石属性招式变成Z\n招式。");

static const u8 sGhostiumZDesc[] = _(
    "把幽灵属性招式变成Z\n招式。");

static const u8 sDragoniumZDesc[] = _(
    "把龙属性招式变成Z招\n式。");

static const u8 sDarkiniumZDesc[] = _(
    "把恶属性招式变成Z招\n式。");

static const u8 sSteeliumZDesc[] = _(
    "把钢属性招式变成Z招\n式。");

static const u8 sFairiumZDesc[] = _(
    "把妖精属性招式变成Z\n招式。");

static const u8 sPikaniumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sEeviumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sSnorliumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sMewniumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sDecidiumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sInciniumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sPrimariumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sLycaniumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sMimikiumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sKommoniumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sTapuniumZDesc[] = _(
    "能把守护神的\n自然之怒变成Z招式。");

static const u8 sSolganiumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sLunaliumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sMarshadiumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sAloraichiumZDesc[] = _(
    "能把某只宝可梦的特定\n招式变成Z招式。");

static const u8 sPikashuniumZDesc[] = _(
    "能把戴着帽子的皮卡丘\n的十万伏特变成Z招式\n。");

static const u8 sUltranecroziumZDesc[] = _(
    "让合体后的奈克洛兹玛\n变成新形态的结晶。");

// Species-specific Held Items
static const u8 sLightBallDesc[] = _(
    "提高皮卡丘的攻击和特\n攻的携带道具。");

static const u8 sLeekDesc[] = _(
    "提高大葱鸭击中要害率\n的携带道具。");

static const u8 sThickClubDesc[] = _(
    "提高卡拉卡拉或嘎啦嘎\n啦攻击的携带道具。");

static const u8 sLuckyPunchDesc[] = _(
    "提高吉利蛋击中要害率\n的携带道具。");

static const u8 sMetalPowderDesc[] = _(
    "提高百变怪防御的携带\n道具。");

static const u8 sQuickPowderDesc[] = _(
    "由百变怪携带的道具。\n这奇怪的粉末能提高速度。");

static const u8 sDeepSeaScaleDesc[] = _(
    "提高珍珠贝特防的携带\n道具。");

static const u8 sDeepSeaToothDesc[] = _(
    "提高珍珠贝特攻的携带\n道具。");

static const u8 sSoulDewDesc[] = _(
#if B_SOUL_DEW_BOOST >= GEN_7
    "提高拉帝欧斯和拉帝亚\n斯超能力及龙属性招式\n的威力。");
#else
    "提高拉帝欧斯和拉帝亚\n斯特攻与特防的携带道\n具。");
#endif

static const u8 sAdamantOrbDesc[] = _(
    "提高帝牙卢卡龙属性\n和钢属性招式的威力。");

static const u8 sLustrousOrbDesc[] = _(
    "提高帕路奇亚龙属性\n和水属性招式的威力。");

static const u8 sGriseousOrbDesc[] = _(
    "提高骑拉帝纳龙属性\n和幽灵属性招式的威力。");

// Incenses
static const u8 sSeaIncenseDesc[] = _(
    "稍微提高水属性\n招式威力的携带道具。");

static const u8 sLaxIncenseDesc[] = _(
    "稍微降低对手命中率的\n携带道具。");

static const u8 sOddIncenseDesc[] = _(
    "提高超能力属性\n招式威力的携带道具。");

static const u8 sRockIncenseDesc[] = _(
    "提高岩石属性招式\n威力的携带道具。");

static const u8 sFullIncenseDesc[] = _(
    "让携带者行动\n变慢的携带道具。");

static const u8 sWaveIncenseDesc[] = _(
    "稍微提高水属性\n招式威力的携带道具。");

static const u8 sRoseIncenseDesc[] = _(
    "提高草属性招式\n威力的携带道具。");

static const u8 sLuckIncenseDesc[] = _(
    "携带者参加战斗时\n金钱翻倍。");

static const u8 sPureIncenseDesc[] = _(
    "帮助赶走野生\n宝可梦的携带道具。");

// Contest Scarves
static const u8 sRedScarfDesc[] = _(
    "提高华丽大赛中帅气值\n的携带道具。");

static const u8 sBlueScarfDesc[] = _(
    "提高华丽大赛中美丽值\n的携带道具。");

static const u8 sPinkScarfDesc[] = _(
    "提高华丽大赛中可爱值\n的携带道具。");

static const u8 sGreenScarfDesc[] = _(
    "提高华丽大赛中聪明值\n的携带道具。");

static const u8 sYellowScarfDesc[] = _(
    "提高华丽大赛中强壮值\n的携带道具。");

// EV Gain Modifiers
static const u8 sMachoBraceDesc[] = _(
    "促进成长但降低速度的\n携带道具。");

static const u8 sPowerWeightDesc[] = _(
    "促进HP成长但降低速\n度的携带道具。");

static const u8 sPowerBracerDesc[] = _(
    "促进攻击成长但降低速\n度的携带道具。");

static const u8 sPowerBeltDesc[] = _(
    "促进防御成长但降低速\n度的携带道具。");

static const u8 sPowerLensDesc[] = _(
    "促进特攻成长但降低速\n度的携带道具。");

static const u8 sPowerBandDesc[] = _(
    "促进特防成长但降低速\n度的携带道具。");

static const u8 sPowerAnkletDesc[] = _(
    "促进速度成长但降低速\n度的携带道具。");

// Type-boosting Held Items
static const u8 sSilkScarfDesc[] = _(
    "提高一般属性招式威力\n的携带道具。");

static const u8 sCharcoalDesc[] = _(
    "提高火属性招式威力的\n携带道具。");

static const u8 sMysticWaterDesc[] = _(
    "提高水属性招式威力的\n携带道具。");

static const u8 sMagnetDesc[] = _(
    "提高电属性招式威力的\n携带道具。");

static const u8 sMiracleSeedDesc[] = _(
    "提高草属性招式\n威力的携带道具。");

static const u8 sNeverMeltIceDesc[] = _(
    "提高冰属性招式威力的\n携带道具。");

static const u8 sBlackBeltDesc[] = _(
    "提高格斗属性招式威力\n的携带道具。");

static const u8 sPoisonBarbDesc[] = _(
    "提高毒属性招式威力的\n携带道具。");

static const u8 sSoftSandDesc[] = _(
    "提高地面属性招式威力\n的携带道具。");

static const u8 sSharpBeakDesc[] = _(
    "提高飞行属性招式威力\n的携带道具。");

static const u8 sTwistedSpoonDesc[] = _(
    "提高超能力属性\n招式威力的携带道具。");

static const u8 sSilverPowderDesc[] = _(
    "提高虫属性招式威力的\n携带道具。");

static const u8 sHardStoneDesc[] = _(
    "提高岩石属性招式\n威力的携带道具。");

static const u8 sSpellTagDesc[] = _(
    "提高幽灵属性招式威力\n的携带道具。");

static const u8 sDragonFangDesc[] = _(
    "提高龙属性招式威力的\n携带道具。");

static const u8 sBlackGlassesDesc[] = _(
    "提高恶属性招式威力的\n携带道具。");

static const u8 sMetalCoatDesc[] = _(
    "提高钢属性招式威力的\n携带道具。");

// Choice Items
static const u8 sChoiceBandDesc[] = _(
    "提高招式威力，\n但只能使用那一个招式。");

static const u8 sChoiceSpecsDesc[] = _(
    "提高特攻，但只能使用\n一个招式。");

static const u8 sChoiceScarfDesc[] = _(
    "提高速度，但只能使用\n一个招式。");

// Status Orbs
static const u8 sFlameOrbDesc[] = _(
    "对战中让携带者陷入灼\n伤的怪球。");

static const u8 sToxicOrbDesc[] = _(
    "对战中让携带者陷入剧\n毒的怪球。");

// Weather Rocks
static const u8 sDampRockDesc[] = _(
    "携带者使用时能延长求\n雨的效果时间。");

static const u8 sHeatRockDesc[] = _(
    "携带者使用时能延长大\n晴天的效果时间。");

static const u8 sSmoothRockDesc[] = _(
    "携带者使用时能延长沙\n暴的效果时间。");

static const u8 sIcyRockDesc[] = _(
    "携带者使用时能延长冰\n雹的效果时间。");

// Terrain Seeds
static const u8 sElectricSeedDesc[] = _(
    "在电气场地上提高防御\n，但只生效一次。");

static const u8 sPsychicSeedDesc[] = _(
    "在精神场地上提高特防\n，但只生效一次。");

static const u8 sMistySeedDesc[] = _(
    "在薄雾场地上提高特防\n，但只生效一次。");

static const u8 sGrassySeedDesc[] = _(
    "在青草场地上提高防御\n，但只生效一次。");

// Type-activated Stat Modifiers
static const u8 sAbsorbBulbDesc[] = _(
    "被水属性招式击中时提\n高特攻。");

static const u8 sCellBatteryDesc[] = _(
    "被电属性招式击中时\n提高攻击。");

static const u8 sLuminousMossDesc[] = _(
    "被水属性招式击中时提\n高特防。");

static const u8 sSnowballDesc[] = _(
    "被冰属性招式击中时提\n高攻击。");

// Misc. Held Items
static const u8 sBrightPowderDesc[] = _(
    "发出眩光降低对手命中\n率的携带道具。");

static const u8 sWhiteHerbDesc[] = _(
    "能恢复被降低能力的携\n带道具。");

static const u8 sExpShareDesc[] = _(
#if I_EXP_SHARE_ITEM >= GEN_6
    "把经验值分给其他同行\n宝可梦的装置。");
#else
    "能从战斗中取得经验值\n的携带道具。");
#endif

static const u8 sQuickClawDesc[] = _(
    "偶尔能抢先攻击的携带\n道具。");

static const u8 sSootheBellDesc[] = _(
    "安抚心灵、加深友好度\n的携带道具。");

#if B_MENTAL_HERB >= GEN_5
static const u8 sMentalHerbDesc[] = _(
    "能让宝可梦摆脱束缚招\n式效果。");
#else
static const u8 sMentalHerbDesc[] = _(
    "能让宝可梦摆脱迷恋的\n携带道具。");
#endif

static const u8 sKingsRockDesc[] = _(
    "击中对手时有时会\n让对手畏缩的携带道具。");

static const u8 sAmuletCoinDesc[] = _(
    "携带者参加战斗时\n金钱翻倍。");

static const u8 sCleanseTagDesc[] = _(
    "帮助赶走野生\n宝可梦的携带道具。");

static const u8 sSmokeBallDesc[] = _(
    "能确保从野生宝可梦身\n边逃走的携带道具。");

static const u8 sFocusBandDesc[] = _(
    "偶尔能防止濒死的携带\n道具。");

static const u8 sLuckyEggDesc[] = _(
    "提高战斗中得到的经验\n值的携带道具。");

static const u8 sScopeLensDesc[] = _(
    "提高击中要害率的携带\n道具。");

static const u8 sLeftoversDesc[] = _(
    "对战中一点点回复HP\n的携带道具。");

static const u8 sShellBellDesc[] = _(
    "击中对手时回复HP的\n携带道具。");

static const u8 sWideLensDesc[] = _(
    "提高招式命中率的放大\n镜。");

static const u8 sMuscleBandDesc[] = _(
    "提高物理招式威力的头\n巾。");

static const u8 sWiseGlassesDesc[] = _(
    "提高特殊招式威力的眼\n镜。");

static const u8 sExpertBeltDesc[] = _(
    "提高效果绝佳招式威力\n的腰带。");

static const u8 sLightClayDesc[] = _(
    "携带者使用时能延长屏\n障类招式的时间。");

static const u8 sLifeOrbDesc[] = _(
    "每回合损失HP来\n提高招式威力。");

static const u8 sPowerHerbDesc[] = _(
    "能让需要蓄力的招式立\n即使用。");

static const u8 sFocusSashDesc[] = _(
    "HP满时受到濒死攻击\n能以1HP撑住。");

static const u8 sZoomLensDesc[] = _(
    "比对手后行动时提高命\n中率。");

static const u8 sMetronomeDesc[] = _(
    "提高连续使用的招式威\n力。");

static const u8 sIronBallDesc[] = _(
    "降低速度，并让飞行属性\n被地面属性招式命中。");

static const u8 sLaggingTailDesc[] = _(
    "让携带者行动\n变慢的携带道具。");

static const u8 sDestinyKnotDesc[] = _(
    "携带者陷入迷恋时，对\n手也会迷恋。");

static const u8 sBlackSludgeDesc[] = _(
    "毒属性会慢慢回复HP，\n其他属性则会受伤。");

static const u8 sGripClawDesc[] = _(
    "让携带者使用的束缚招式\n持续7回合。");

static const u8 sStickyBarbDesc[] = _(
    "每回合伤害携带者，有\n时会粘住对手。");

static const u8 sShedShellDesc[] = _(
    "让携带者必定能\n替换下场。");

static const u8 sBigRootDesc[] = _(
    "提高吸取HP招式\n威力的携带道具。");

static const u8 sRazorClawDesc[] = _(
    "提高携带者击中要害率\n的钩爪。");

static const u8 sRazorFangDesc[] = _(
    "击中对手时有时会\n让对手畏缩的携带道具。");

static const u8 sEvioliteDesc[] = _(
    "提高能进化的宝可梦防\n御和特防。");

static const u8 sFloatStoneDesc[] = _(
    "非常轻，携带时能让宝\n可梦体重减半。");

static const u8 sRockyHelmetDesc[] = _(
    "对手接触携带者时会受\n到伤害。");

static const u8 sAirBalloonDesc[] = _(
    "让携带者飘在空中。\n被击中就会破裂。");

static const u8 sRedCardDesc[] = _(
    "对手击中携带者时会被\n替换下场。");

static const u8 sRingTargetDesc[] = _(
    "原本无效的招式也会\n击中携带者。");

static const u8 sBindingBandDesc[] = _(
    "携带时提高束缚招式的\n威力。");

static const u8 sEjectButtonDesc[] = _(
    "被对手击中时使用者会\n被替换下场。");

static const u8 sWeaknessPolicyDesc[] = _(
    "被效果绝佳招式击中时\n提高攻击和特攻。");

static const u8 sAssaultVestDesc[] = _(
    "提高特防，但无法使用\n变化招式。");

static const u8 sSafetyGogglesDesc[] = _(
    "防住天气伤害和粉末类\n招式。");

static const u8 sAdrenalineOrbDesc[] = _(
    "被威吓时提高速度，\n但只生效一次。");

static const u8 sTerrainExtenderDesc[] = _(
    "延长当前场地效果的时\n间。");

static const u8 sProtectivePadsDesc[] = _(
    "保护携带者免受接触招\n式的效果。");

static const u8 sThroatSprayDesc[] = _(
    "携带者使用声音招式时\n提高特攻。");

static const u8 sEjectPackDesc[] = _(
    "能力被降低时强制替换\n下场。");

static const u8 sHeavyDutyBootsDesc[] = _(
    "防止场上设置的陷阱效\n果。");

static const u8 sBlunderPolicyDesc[] = _(
    "因命中率而落空时提高\n速度。");

static const u8 sRoomServiceDesc[] = _(
    "戏法空间展开时速度降\n低。");

static const u8 sUtilityUmbrellaDesc[] = _(
    "能防住天气效果的伞。");

// Berries
static const u8 sCheriBerryDesc[] = _(
    "对战中治愈麻痹的携带\n道具。");

static const u8 sChestoBerryDesc[] = _(
    "对战中唤醒宝可梦的携\n带道具。");

static const u8 sPechaBerryDesc[] = _(
    "对战中治愈中毒的携带\n道具。");

static const u8 sRawstBerryDesc[] = _(
    "对战中治愈灼伤的携带\n道具。");

static const u8 sAspearBerryDesc[] = _(
    "对战中解冻宝可梦的携\n带道具。");

static const u8 sLeppaBerryDesc[] = _(
    "对战中回复10点PP\n的携带道具。");

static const u8 sOranBerryDesc[] = _(
    "对战中回复10点HP\n的携带道具。");

static const u8 sPersimBerryDesc[] = _(
    "对战中治愈混乱的携带\n道具。");

static const u8 sLumBerryDesc[] = _(
    "对战中治愈所有异常状\n态的携带道具。");

static const u8 sSitrusBerryDesc[] = _(
#if I_SITRUS_BERRY_HEAL >= GEN_4
    "少量回复使用者HP的\n携带道具。");
#else
    "对战中回复30点HP\n的携带道具。");
#endif

static const u8 sFigyBerryDesc[] = _(
    "回复HP，但有时会\n让宝可梦混乱的携带道具。");

static const u8 sWikiBerryDesc[] = _(
    "回复HP，但有时会\n让宝可梦混乱的携带道具。");

static const u8 sMagoBerryDesc[] = _(
    "回复HP，但有时会\n让宝可梦混乱的携带道具。");

static const u8 sAguavBerryDesc[] = _(
    "回复HP，但有时会\n让宝可梦混乱的携带道具。");

static const u8 sIapapaBerryDesc[] = _(
    "回复HP，但有时会\n让宝可梦混乱的携带道具。");

static const u8 sRazzBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowRaz\nz.");

static const u8 sBlukBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowBlu\nk.");

static const u8 sNanabBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowNan\nab.");

static const u8 sWepearBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowWep\near.");

static const u8 sPinapBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowPin\nap.");

static const u8 sPomegBerryDesc[] = _(
    "让宝可梦更亲近，但降\n低HP基础值。");

static const u8 sKelpsyBerryDesc[] = _(
    "让宝可梦更亲近，但降\n低攻击基础值。");

static const u8 sQualotBerryDesc[] = _(
    "让宝可梦更亲近，但降\n低防御基础值。");

static const u8 sHondewBerryDesc[] = _(
    "让宝可梦更亲近，但降\n低特攻基础值。");

static const u8 sGrepaBerryDesc[] = _(
    "让宝可梦更亲近，但降\n低特防基础值。");

static const u8 sTamatoBerryDesc[] = _(
    "让宝可梦更亲近，但降\n低速度基础值。");

static const u8 sCornnBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowCor\nnn.");

static const u8 sMagostBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowMag\nost.");

static const u8 sRabutaBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowRab\nuta.");

static const u8 sNomelBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowNom\nel.");

static const u8 sSpelonBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowSpe\nlon.");

static const u8 sPamtreBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowPam\ntre.");

static const u8 sWatmelBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowWat\nmel.");

static const u8 sDurinBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowDur\nin.");

static const u8 sBelueBerryDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowBel\nue.");

static const u8 sChilanBerryDesc[] = _(
    "减弱一般属性招式威力\n的携带道具。");

static const u8 sOccaBerryDesc[] = _(
    "减弱火属性招式威力的\n携带道具。");

static const u8 sPasshoBerryDesc[] = _(
    "减弱水属性招式威力的\n携带道具。");

static const u8 sWacanBerryDesc[] = _(
    "减弱电属性招式威力的\n携带道具。");

static const u8 sRindoBerryDesc[] = _(
    "减弱草属性招式威力的\n携带道具。");

static const u8 sYacheBerryDesc[] = _(
    "减弱冰属性招式威力的\n携带道具。");

static const u8 sChopleBerryDesc[] = _(
    "减弱格斗属性招式威力\n的携带道具。");

static const u8 sKebiaBerryDesc[] = _(
    "减弱毒属性招式威力的\n携带道具。");

static const u8 sShucaBerryDesc[] = _(
    "减弱地面属性招式威力\n的携带道具。");

static const u8 sCobaBerryDesc[] = _(
    "减弱飞行属性招式威力\n的携带道具。");

static const u8 sPayapaBerryDesc[] = _(
    "减弱超能力属性招式威\n力的携带道具。");

static const u8 sTangaBerryDesc[] = _(
    "减弱虫属性招式威力的\n携带道具。");

static const u8 sChartiBerryDesc[] = _(
    "减弱岩石属性招式威力\n的携带道具。");

static const u8 sKasibBerryDesc[] = _(
    "减弱幽灵属性招式威力\n的携带道具。");

static const u8 sHabanBerryDesc[] = _(
    "减弱龙属性招式威力的\n携带道具。");

static const u8 sColburBerryDesc[] = _(
    "减弱恶属性招式威力的\n携带道具。");

static const u8 sBabiriBerryDesc[] = _(
    "减弱钢属性招式威力的\n携带道具。");

static const u8 sRoseliBerryDesc[] = _(
    "减弱妖精属性招式威力\n的携带道具。");

static const u8 sLiechiBerryDesc[] = _(
    "濒死时提高攻击的携带\n道具。");

static const u8 sGanlonBerryDesc[] = _(
    "濒死时提高防御的携带\n道具。");

static const u8 sSalacBerryDesc[] = _(
    "濒死时提高速度的携带\n道具。");

static const u8 sPetayaBerryDesc[] = _(
    "濒死时提高特攻的携带\n道具。");

static const u8 sApicotBerryDesc[] = _(
    "濒死时提高特防的携带\n道具。");

static const u8 sLansatBerryDesc[] = _(
    "濒死时提高击中要害率\n的携带道具。");

static const u8 sStarfBerryDesc[] = _(
    "濒死时大幅提高某项能\n力的携带道具。");

static const u8 sEnigmaBerryDesc[] = _(
    "被效果绝佳招式击中时\n回复HP的携带道具。");

static const u8 sMicleBerryDesc[] = _(
    "濒死时提高招式命中率\n的携带道具。");

static const u8 sCustapBerryDesc[] = _(
    "濒死时能让宝可梦抢先\n行动一次。");

static const u8 sJabocaBerryDesc[] = _(
    "被物理招式击中时，稍\n微伤害攻击者。");

static const u8 sRowapBerryDesc[] = _(
    "被特殊招式击中时，稍\n微伤害攻击者。");

static const u8 sKeeBerryDesc[] = _(
    "被物理招式击中时，稍\n微提高防御。");

static const u8 sMarangaBerryDesc[] = _(
    "被特殊招式击中时，稍\n微提高特防。");

static const u8 sEnigmaBerryEReaderDesc[] = _(
    "制作宝可方块的材料。\n种在松软泥土里会长出\n神秘树果。Plant\ninloamysoi\nltogrowamy\nstery.");

// TMs/HMs
static const u8 sTM01Desc[] = _(
    "威力强大，但被对手击中\n时自己会畏缩。");

static const u8 sTM02Desc[] = _(
    "用又长又尖的爪子\n勾住并撕裂对手。");

static const u8 sTM03Desc[] = _(
    "攻击后迅速返回，\n与同行的宝可梦替换。");

static const u8 sTM04Desc[] = _(
    "集中精神提高\n特攻和特防。");

static const u8 sTM05Desc[] = _(
    "发出凶猛吼叫，让对手\n逃走并结束战斗。");

static const u8 sTM06Desc[] = _(
    "用渐渐加重的毒素\n使对手中毒。");

static const u8 sTM07Desc[] = _(
    "降下持续5回合的\n暴风雪。");

static const u8 sTM08Desc[] = _(
    "鼓起身体，提高\n攻击和防御。");

static const u8 sTM09Desc[] = _(
    "连续射出2到5颗\n种子攻击对手。");

static const u8 sTM10Desc[] = _(
    "攻击威力会因\n宝可梦不同而变化。");

static const u8 sTM11Desc[] = _(
    "5回合内提高\n火属性\n招式的威力。");

static const u8 sTM12Desc[] = _(
    "激怒对手，使其只能\n使用攻击招式。");

static const u8 sTM13Desc[] = _(
    "放出冰冷的光线，\n有时会冰冻对手。");

static const u8 sTM14Desc[] = _(
    "猛烈的风雪攻击，有时\n会冰冻对手。");

static const u8 sTM15Desc[] = _(
    "用电网困住对手，\n降低速度。");

static const u8 sTM16Desc[] = _(
    "造出光墙，减弱\n特殊攻击的伤害。");

static const u8 sTM17Desc[] = _(
    "抵消所有伤害，但连续\n使用可能会失败。");

static const u8 sTM18Desc[] = _(
    "5回合内提高\n水属性\n招式的威力。");

static const u8 sTM19Desc[] = _(
    "回复此招式造成伤害\n一半的HP。");

static const u8 sTM20Desc[] = _(
    "用声波造成伤害的\n响亮攻击。");

static const u8 sTM21Desc[] = _(
    "降低对手速度的\n冰冷攻击。");

static const u8 sTM22Desc[] = _(
    "第一回合吸收阳光，\n下一回合攻击。");

static const u8 sTM23Desc[] = _(
    "用坚硬的尾巴拍打对手，\n有时会降低防御。");

static const u8 sTM24Desc[] = _(
    "有时会让对手麻痹的\n强力电击攻击。");

static const u8 sTM25Desc[] = _(
    "用雷电攻击对手，\n有时会让对手麻痹。");

static const u8 sTM26Desc[] = _(
    "引起地震，但对飞行\n的对手无效。");

static const u8 sTM27Desc[] = _(
    "使用者越喜欢你，\n这招就越强。");

static const u8 sTM28Desc[] = _(
    "第一回合钻入地下，\n下一回合攻击。");

static const u8 sTM29Desc[] = _(
    "有时会降低特防的\n强力超能力攻击。");

static const u8 sTM30Desc[] = _(
    "向对手投出黑暗块，\n有时会降低特防。");

static const u8 sTM31Desc[] = _(
    "破坏光墙等屏障\n并造成伤害。");

static const u8 sTM32Desc[] = _(
    "第一回合蓄力，\n然后挥出光刃。");

static const u8 sTM33Desc[] = _(
    "造出光墙，减弱\n物理攻击。");

static const u8 sTM34Desc[] = _(
    "能立刻从战斗中\n逃走的超能力招式。");

static const u8 sTM35Desc[] = _(
    "放出火焰，\n有时会灼伤对手。");

static const u8 sTM36Desc[] = _(
    "向对手投污泥，\n有时会使其中毒。");

static const u8 sTM37Desc[] = _(
    "刮起沙暴，在数回合内\n持续攻击对手。");

static const u8 sTM38Desc[] = _(
    "有时会灼伤对手的\n强力火属性攻击。");

static const u8 sTM39Desc[] = _(
    "用岩石封住对手行动，\n有时降低速度。");

static const u8 sTM40Desc[] = _(
    "极快的攻击，\n无法闪避。");

static const u8 sTM41Desc[] = _(
    "提高攻击和速度的\n神秘之舞。");

static const u8 sTM42Desc[] = _(
    "中毒、灼伤或麻痹时\n提高攻击。");

static const u8 sTM43Desc[] = _(
    "清除障碍物，\n降低闪避率。");

static const u8 sTM44Desc[] = _(
    "睡两回合来回复\n体力和异常状态。");

static const u8 sTM45Desc[] = _(
    "吸取过半伤害的\n攻击。");

static const u8 sTM46Desc[] = _(
    "攻击时有时会\n偷走对手的携带道具。");

static const u8 sTM47Desc[] = _(
    "展开硬翼\n猛撞对手。");

static const u8 sTM48Desc[] = _(
    "攻击前提高特攻的\n两回合招式。");

static const u8 sTM49Desc[] = _(
    "吸取所造成伤害一半的\n攻击。");

static const u8 sTM50Desc[] = _(
    "能全力攻击，\n但大幅降低特攻。");

static const u8 sTM51Desc[] = _(
    "回复自身最大HP\n一半的HP。");

static const u8 sTM52Desc[] = _(
    "全力攻击，\n有时降低特防。");

static const u8 sTM53Desc[] = _(
    "借用自然之力攻击，\n有时降低特防。");

static const u8 sTM54Desc[] = _(
    "贴地滑行攻击。\n在青草场地上先制。");

static const u8 sTM55Desc[] = _(
    "在精神场地上威力提高，\n并伤害所有对手。");

static const u8 sTM56Desc[] = _(
    "提高使用者攻击的\n坚硬拳头。");

static const u8 sTM57Desc[] = _( 
    "射出电光束，\n提高特攻。");

static const u8 sTM58Desc[] = _( 
    "在电气场地上\n威力翻倍。");

static const u8 sTM59Desc[] = _( 
    "产生冲击波\n伤害对手。");

static const u8 sTM60Desc[] = _( 
    "吸取所造成伤害一半的\n拳击。");

static const u8 sTM61Desc[] = _( 
    "用猛烈火焰\n让对手灼伤。");

static const u8 sTM62Desc[] = _( 
    "有时会提高能力的\n粉末攻击。");

static const u8 sTM63Desc[] = _( 
    "对手中毒时\n伤害翻倍。");

static const u8 sTM64Desc[] = _( 
    "造成严重伤害，\n但使用者会濒死。");

static const u8 sTM65Desc[] = _( 
    "用影子爪攻击，\n击中要害率高。");

static const u8 sTM66Desc[] = _( 
    "发出强光\n伤害对手。");

static const u8 sTM67Desc[] = _( 
    "操纵对手的道具攻击。\n对手没有道具时会失败。");

static const u8 sTM68Desc[] = _( 
    "用凶狠的连击\n攻击两次。");

static const u8 sTM69Desc[] = _( 
    "打磨身体，\n大幅提高速度。");

static const u8 sTM70Desc[] = _( 
    "连续踢三次，\n每次威力递增。");

static const u8 sTM71Desc[] = _( 
    "用石头刺击对手，\n击中要害率高。");

static const u8 sTM72Desc[] = _( 
    "用精神波攻击，\n以物理伤害计算。");

static const u8 sTM73Desc[] = _( 
    "用微弱电流\n让对手麻痹。");

static const u8 sTM74Desc[] = _( 
    "高速旋转，对手越快\n伤害越高。");

static const u8 sTM75Desc[] = _( 
    "大幅提高攻击的\n战斗之舞。");

static const u8 sTM76Desc[] = _( 
    "布置浮石，伤害\n替换上场的对手。");

static const u8 sTM77Desc[] = _( 
    "裹着火焰攻击，\n提高速度。");

static const u8 sTM78Desc[] = _( 
    "攻击对手的腿，\n降低其速度。");

static const u8 sTM79Desc[] = _( 
    "用可怕的气场攻击，\n有时让对手畏缩。");

static const u8 sTM80Desc[] = _( 
    "投出巨大岩石，\n有时让对手畏缩。");

static const u8 sTM81Desc[] = _( 
    "用交叉的镰刀或爪子\n劈砍对手。");

static const u8 sTM82Desc[] = _( 
    "睡着时随机使用\n可用的招式。");

static const u8 sTM83Desc[] = _( 
    "向对手喷射沸水，\n有时造成灼伤。");

static const u8 sTM84Desc[] = _( 
    "有时会让对手中毒的\n刺击攻击。");

static const u8 sTM85Desc[] = _( 
    "凝聚内心力量，\n两回合后攻击。");

static const u8 sTM86Desc[] = _( 
    "对手越重，\n伤害越高的束缚攻击。");

static const u8 sTM87Desc[] = _( 
    "对手越重伤害越高的\n踢击。");

static const u8 sTM88Desc[] = _( 
    "吃掉对手携带的树果，\n获得其效果。");

static const u8 sTM89Desc[] = _( 
    "造成伤害后\n使用者替换下场。");

static const u8 sTM90Desc[] = _( 
    "制造替身\n来承受攻击。");

static const u8 sTM91Desc[] = _( 
    "放出光线，\n有时降低特防。");

static const u8 sTM92Desc[] = _( 
    "造成电属性伤害后\n替换下场。");

static const u8 sTM93Desc[] = _( 
    "用尾巴把对手\n赶出场外。");

static const u8 sTM94Desc[] = _( 
    "突然袭击，\n提高自身速度。");

static const u8 sTM95Desc[] = _( 
    "使用者没有道具时\n伤害翻倍。");

static const u8 sTM96Desc[] = _( 
    "用力踩踏地面，\n降低速度。");

static const u8 sTM97Desc[] = _( 
    "对对手大喊大叫，\n降低其特攻。");

static const u8 sTM98Desc[] = _( 
    "使用者斗志高涨，\n提高攻击和特攻。");

static const u8 sTM99Desc[] = _( 
    "自己也会受伤的\n电击猛撞。");

static const u8 sTM100Desc[] = _( 
    "用翅膀猛撞，\n连续命中两次。");

static const u8 sTM101Desc[] = _( 
    "强力攻击，\n但降低攻击和防御。");

static const u8 sTM102Desc[] = _( 
    "向对手投烫沙，\n有时造成灼伤。");

static const u8 sTM103Desc[] = _( 
    "投出岩石\n把对手打落地面。");

static const u8 sTM104Desc[] = _( 
    "使用者越重，\n伤害越高的火焰猛撞。");

static const u8 sTM105Desc[] = _( 
    "使用者防御越高，\n伤害越高。");

static const u8 sTM106Desc[] = _( 
    "5回合内速度慢的\n宝可梦先行动。");

static const u8 sTM107Desc[] = _(
    "自己也会受伤的\n低空冲锋。");

static const u8 sTM108Desc[] = _( 
    "用覆冰的脚攻击，\n并清除场地。");

static const u8 sTM109Desc[] = _(
    "咬住对手，\n吃掉它携带的树果。");
    
static const u8 sTM110Desc[] = _(
    "愤怒地跺脚，\n失败后威力提高。");
    
static const u8 sTM111Desc[] = _(
    "用火焰之拳攻击，\n有时造成灼伤。");
    
static const u8 sTM112Desc[] = _(
    "用冰之拳攻击，\n有时造成冻伤。");
    
static const u8 sTM113Desc[] = _(
    "用带电的拳头攻击，\n有时让对手麻痹。");
    
static const u8 sTM114Desc[] = _(
    "用火焰之牙咬击，\n有时畏缩或灼伤。");
    
static const u8 sTM115Desc[] = _(
    "用冰之牙咬击，\n有时畏缩或冻伤。");
    
static const u8 sTM116Desc[] = _(
    "用带电之牙咬击，\n有时畏缩或麻痹。");
    
static const u8 sTM117Desc[] = _(
    "用精神之牙咬击，\n能破坏屏障。");
    
static const u8 sTM118Desc[] = _(
    "用毒之牙咬击，\n有时使对手剧毒。");
    
static const u8 sTM119Desc[] = _(
    "用钢铁之头猛撞，\n有时让对手畏缩。");
    
static const u8 sTM120Desc[] = _(
    "把对手化作液体，\n有时降低防御。");
    
static const u8 sTM121Desc[] = _(
    "用喷射的水柱\n猛击对手。");
    
static const u8 sTM122Desc[] = _(
    "用钻头冲撞对手，\n击中要害率高。");
    
static const u8 sTM123Desc[] = _(
    "踢出火焰之脚，\n有时灼伤，要害率高。");
    
static const u8 sTM124Desc[] = _(
    "与对手平分\n双方的HP。");
    
static const u8 sTM125Desc[] = _(
    "凝神后再猛撞，\n有时让对手畏缩。");
    
static const u8 sTM126Desc[] = _(
    "属性会随场上\n天气变化。");
    
static const u8 sTM127Desc[] = _(
    "用空气之刃攻击，\n有时让对手畏缩。");
    
static const u8 sTM128Desc[] = _(
    "诅咒对手。对手有异常\n状态时伤害翻倍。");
    
static const u8 sTM129Desc[] = _(
    "用神秘火焰攻击，\n降低特攻。");
    
static const u8 sTM130Desc[] = _(
    "把种子\n砸向对手。");
    
static const u8 sTM131Desc[] = _(
    "用叶子切斩对手，\n击中要害率高。");
    
static const u8 sTM132Desc[] = _(
    "把对手的携带道具\n打落。");
    
static const u8 sTM133Desc[] = _(
    "用如钻石般闪耀的\n光线攻击。");
    
static const u8 sTM134Desc[] = _(
    "连续2到5次\n向对手投巨石。");
    
static const u8 sTM135Desc[] = _(
    "射出尖刺，\n连续命中2到5次。");
    
static const u8 sTM136Desc[] = _(
    "连续射出2到5根\n冰柱攻击对手。");
    
static const u8 sTM137Desc[] = _(
    "用尾巴连续攻击\n对手2到5次。");
    
static const u8 sTM138Desc[] = _(
    "用直臂连续击打\n对手2到5次。");
    
static const u8 sTM139Desc[] = _(
    "对手攻击越高，\n伤害越高。");
    
static const u8 sTM140Desc[] = _(
    "硬化身体表面，\n大幅提高防御。");
    
static const u8 sTM141Desc[] = _(
    "想着坏念头，\n大幅提高特攻。");
    
static const u8 sTM142Desc[] = _(
    "让地面喷发力量，\n有时降低特防。");
    
static const u8 sTM143Desc[] = _(
    "用无法闪避的\n波导攻击。");
    
static const u8 sTM144Desc[] = _(
    "向对手呼出热气，\n有时造成灼伤。");
    
static const u8 sTM145Desc[] = _(
    "用强风困住对手，\n有时使其混乱。");
    
static const u8 sTM146Desc[] = _(
    "用藤蔓或触手\n猛烈抽打对手。");
    
static const u8 sTM147Desc[] = _(
    "用整个身体\n猛撞对手。");
    
static const u8 sTM148Desc[] = _(
    "有时降低特防的\n伤害性声波。");
    
static const u8 sTM149Desc[] = _(
    "第一回合消失，\n下一回合攻击。");
    
static const u8 sTM150Desc[] = _(
    "有时灼伤对手，\n自己也会受伤的冲撞。");
    
static const u8 sTM151Desc[] = _(
    "使用者能力越高，\n伤害越高。");
    
static const u8 sTM152Desc[] = _(
    "向对手喷射污物，\n有时使其中毒。");
    
static const u8 sTM153Desc[] = _(
    "掀起狂乱的风，\n提高速度。");
    
static const u8 sTM154Desc[] = _(
    "用突出的角\n凶猛撞击。");
    
static const u8 sTM155Desc[] = _(
    "向对手投下彗星，\n大幅降低特攻。");
    
static const u8 sTM156Desc[] = _(
    "毫不防守地\n近距离猛攻对手。");

static const u8 sTM157Desc[] = _(
    "借用月亮之力攻击，\n有时降低特攻。");

static const u8 sTM158Desc[] = _(
    "有时会让对手麻痹的\n全身猛撞。");

static const u8 sTM159Desc[] = _(
    "与对手粗暴扭打，\n有时降低攻击。");

static const u8 sTM160Desc[] = _(
    "用超声波攻击，\n有时使对手混乱。");

static const u8 sTM161Desc[] = _(
    "把对手打入深渊，\n有时使其睡眠。");

static const u8 sTM162Desc[] = _(
    "用污泥浪潮淹没对手，\n有时使其中毒。");

static const u8 sTM163Desc[] = _(
    "电击猛撞。若落空，\n自己会受伤。");

static const u8 sTM164Desc[] = _(
    "拼死攻击，上一个招式\n失败时威力翻倍。");

static const u8 sTM165Desc[] = _(
    "连续射出2到5次鳞片，\n提高速度但降低防御。");

static const u8 sTM166Desc[] = _(
    "让人不适的声音，伤害\n对手并阻止回复。");

static const u8 sTM167Desc[] = _(
    "对手本回合能力被提高时\n会使其混乱。");

static const u8 sTM168Desc[] = _(
    "挥拳送出气波，\n能先制攻击。");

static const u8 sTM169Desc[] = _(
    "布置尖刺，伤害\n替换上场的对手。");

static const u8 sTM170Desc[] = _(
    "从身体射出光束，\n自己也会受伤。");

static const u8 sTM171Desc[] = _(
    "能击中妖精属性的免疫；\n33%反伤；取物攻特攻\n较高者计算。");

static const u8 sTM172Desc[] = _(
    "使用者比对手重时\n伤害更高。");

static const u8 sTM173Desc[] = _(
    "重力加强，\n使飘浮失效。");

static const u8 sTM174Desc[] = _(
    "攻击全场并濒死。\n在薄雾场地上威力提高。");

static const u8 sTM175Desc[] = _( // Todo
    "?????");

static const u8 sTM176Desc[] = _( // Todo
    "?????");

static const u8 sTM177Desc[] = _( // Todo
    "?????");

static const u8 sTM178Desc[] = _( // Todo
    "?????");

static const u8 sTM179Desc[] = _( // Todo
    "?????");

static const u8 sTM180Desc[] = _( // Todo
    "?????");

static const u8 sTM181Desc[] = _( // Todo
    "?????");

static const u8 sTM182Desc[] = _( // Todo
    "?????");

static const u8 sTM183Desc[] = _( // Todo
    "?????");

static const u8 sTM184Desc[] = _( // Todo
    "?????");

static const u8 sTM185Desc[] = _( // Todo
    "?????");

static const u8 sTM186Desc[] = _( // Todo
    "?????");

static const u8 sTM187Desc[] = _( // Todo
    "?????");

static const u8 sTM188Desc[] = _( // Todo
    "?????");

static const u8 sTM189Desc[] = _( // Todo
    "?????");

static const u8 sTM190Desc[] = _( // Todo
    "?????");

static const u8 sTM191Desc[] = _( // Todo
    "?????");

static const u8 sTM192Desc[] = _( // Todo
    "?????");

static const u8 sTM193Desc[] = _( // Todo
    "?????");

static const u8 sTM194Desc[] = _( // Todo
    "?????");

static const u8 sTM195Desc[] = _( // Todo
    "?????");

static const u8 sTM196Desc[] = _( // Todo
    "?????");

static const u8 sTM197Desc[] = _( // Todo
    "?????");

static const u8 sTM198Desc[] = _( // Todo
    "?????");

static const u8 sTM199Desc[] = _( // Todo
    "?????");

static const u8 sTM200Desc[] = _( // Todo
    "?????");

static const u8 sTM201Desc[] = _( // Todo
    "?????");

static const u8 sTM202Desc[] = _( // Todo
    "?????");

static const u8 sTM203Desc[] = _( // Todo
    "?????");

static const u8 sTM204Desc[] = _( // Todo
    "?????");

static const u8 sTM205Desc[] = _( // Todo
    "?????");

static const u8 sTM206Desc[] = _( // Todo
    "?????");

static const u8 sTM207Desc[] = _( // Todo
    "?????");

static const u8 sTM208Desc[] = _( // Todo
    "?????");

static const u8 sTM209Desc[] = _( // Todo
    "?????");

static const u8 sTM210Desc[] = _( // Todo
    "?????");

static const u8 sTM211Desc[] = _( // Todo
    "?????");

static const u8 sTM212Desc[] = _( // Todo
    "?????");

static const u8 sTM213Desc[] = _( // Todo
    "?????");

static const u8 sTM214Desc[] = _( // Todo
    "?????");

static const u8 sTM215Desc[] = _( // Todo
    "?????");

static const u8 sTM216Desc[] = _( // Todo
    "?????");

static const u8 sTM217Desc[] = _( // Todo
    "?????");

static const u8 sTM218Desc[] = _( // Todo
    "?????");

static const u8 sTM219Desc[] = _( // Todo
    "?????");

static const u8 sTM220Desc[] = _( // Todo
    "?????");

static const u8 sTM221Desc[] = _( // Todo
    "?????");

static const u8 sTM222Desc[] = _( // Todo
    "?????");

static const u8 sTM223Desc[] = _( // Todo
    "?????");

static const u8 sTM224Desc[] = _( // Todo
    "?????");

static const u8 sTM225Desc[] = _( // Todo
    "?????");

static const u8 sTM226Desc[] = _( // Todo
    "?????");

static const u8 sTM227Desc[] = _( // Todo
    "?????");

static const u8 sTM228Desc[] = _( // Todo
    "?????");

static const u8 sTM229Desc[] = _( // Todo
    "?????");

static const u8 sTM230Desc[] = _( // Todo
    "?????");

static const u8 sTM231Desc[] = _( // Todo
    "?????");

static const u8 sTM232Desc[] = _( // Todo
    "?????");

static const u8 sTM233Desc[] = _( // Todo
    "?????");

static const u8 sTM234Desc[] = _( // Todo
    "?????");

static const u8 sTM235Desc[] = _( // Todo
    "?????");

static const u8 sTM236Desc[] = _( // Todo
    "?????");

static const u8 sTM237Desc[] = _( // Todo
    "?????");

static const u8 sTM238Desc[] = _( // Todo
    "?????");

static const u8 sTM239Desc[] = _( // Todo
    "?????");

static const u8 sTM240Desc[] = _( // Todo
    "?????");

static const u8 sTM241Desc[] = _( // Todo
    "?????");

static const u8 sTM242Desc[] = _( // Todo
    "?????");

static const u8 sHM01Desc[] = _(
    "用锋利的刃或爪攻击对\n手。");

static const u8 sHM02Desc[] = _(
    "第一回合飞上天，下一\n回合攻击。");

static const u8 sHM03Desc[] = _(
    "掀起巨浪，砸向对手。");

static const u8 sHM04Desc[] = _(
    "积蓄巨大力量，然后猛\n撞对手。");

static const u8 sHM05Desc[] = _(
    "放出光线，\n有时降低攻击。");

static const u8 sHM06Desc[] = _(
    "能击碎岩石的强硬攻击\n，有时降低防御。");

static const u8 sHM07Desc[] = _(
    "以足以爬上瀑布的力量\n攻击对手。");

static const u8 sHM08Desc[] = _(
    "第一回合潜入水下，下\n一回合攻击。");

// Charms
static const u8 sOvalCharmDesc[] = _(
    "提高在培育屋发现蛋的\n几率。");

static const u8 sShinyCharmDesc[] = _(
    "提高遇到异色宝可梦几\n率的护符。");

static const u8 sCatchingCharmDesc[] = _(
    "提高会心捕捉几率的护\n符。");

static const u8 sExpCharmDesc[] = _(
    "提高战斗中获得的经验\n值的护符。");

// Form-changing Key Items
static const u8 sRotomCatalogDesc[] = _(
    "收录洛托姆喜欢的\n电器的图鉴。");

static const u8 sGracideaDesc[] = _(
    "用它做的花束被用来表\n达感谢之情。");

static const u8 sRevealGlassDesc[] = _(
    "让宝可梦变回原本形态\n的镜子。");

static const u8 sDNASplicersDesc[] = _(
    "能把酋雷姆和某只宝可\n梦合体的楔子。");

static const u8 sZygardeCubeDesc[] = _(
    "用来保存基格尔德核心\n和细胞的容器。");

static const u8 sPrisonBottleDesc[] = _(
    "很久以前用来封印某只\n宝可梦的瓶子。");

static const u8 sNSolarizerDesc[] = _(
    "利用索尔迦雷欧让奈克\n洛兹玛合体分离的装置\n。");

static const u8 sNLunarizerDesc[] = _(
    "利用露奈雅拉让奈克洛\n兹玛合体分离的装置。");

static const u8 sReinsOfUnityDesc[] = _(
    "让蕾冠王与心爱的坐骑\n合而为一的绳子。");

// Battle Mechanic Key Items
static const u8 sMegaRingDesc[] = _(
    "让携带超级石的宝可梦\n进行超级进化。");

static const u8 sZPowerRingDesc[] = _(
    "能使用Z招式的奇怪圆\n环。");

static const u8 sDynamaxBandDesc[] = _(
    "装有许愿星，能让宝可\n梦极巨化的手环。");

// Misc. Key Items
static const u8 sBicycleDesc[] = _(
    "比跑步鞋更快的折叠自\n行车。");

static const u8 sMachBikeDesc[] = _(
    "让速度提升到两倍以上\n的折叠自行车。");

static const u8 sAcroBikeDesc[] = _(
    "能跳跃和抬起前轮的折\n叠自行车。");

static const u8 sOldRodDesc[] = _(
    "在水边使用，能钓到野\n生宝可梦。");

static const u8 sGoodRodDesc[] = _(
    "能钓到野生宝可梦的不\n错钓竿。");

static const u8 sSuperRodDesc[] = _(
    "能钓到野生宝可梦的最\n好钓竿。");

static const u8 sDowsingMachineDesc[] = _(
    "用声音提示看不见的道\n具的装置。");

static const u8 sTownMapDesc[] = _(
    "随时能查看。显示当前\n位置。");

static const u8 sVsSeekerDesc[] = _(
    "能标记准备好对战的训\n练家的充电装置。");

static const u8 sTMCaseDesc[] = _(
    "装招式学习器和秘传学习\n器的便利盒子。");

static const u8 sBerryPouchDesc[] = _(
    "装树果的便利容器。");

static const u8 sPokemonBoxLinkDesc[] = _(
    "能使用宝可梦寄放系统\n的装置。");

static const u8 sCoinCaseDesc[] = _(
    "能装下最多9999枚\n硬币的盒子。");

static const u8 sPowderJarDesc[] = _(
    "保存用树果粉碎机制作\n的树果粉末。");

static const u8 sWailmerPailDesc[] = _(
    "给树果和植物浇水的工\n具。");

static const u8 sPokeRadarDesc[] = _(
    "找出藏在草丛里宝可梦\n的工具。");

static const u8 sPokeblockCaseDesc[] = _(
    "装树果混合机做出的宝\n可方块的盒子。");

static const u8 sSootSackDesc[] = _(
    "收集并保存火山灰的袋\n子。");

static const u8 sPokeFluteDesc[] = _(
    "声音甜美、能唤醒宝可\n梦的笛子。");

static const u8 sFameCheckerDesc[] = _(
    "保存名人信息，随时能\n查阅。");

static const u8 sTeachyTVDesc[] = _(
    "收看训练家建议节目的\n电视机。");

// Story Key Items
static const u8 sSSTicketDesc[] = _(
    "乘坐渡轮所需的船票。");

static const u8 sEonTicketDesc[] = _(
    "前往远方南方岛屿渡轮\n的船票。");

static const u8 sMysticTicketDesc[] = _(
    "登上前往脐之岩的船所\n需的船票。");

static const u8 sAuroraTicketDesc[] = _(
    "登上前往诞生之岛的船\n所需的船票。");

static const u8 sOldSeaMapDesc[] = _(
    "标出前往某座岛屿路线\n的褪色海图。");

static const u8 sLetterDesc[] = _(
    "得文公司社长写给大吾\n的信。");

static const u8 sDevonPartsDesc[] = _(
    "装着得文公司机器零件\n的包裹。");

static const u8 sGoGogglesDesc[] = _(
    "保护眼睛免受沙漠沙暴\n伤害的护目镜。");

static const u8 sDevonScopeDesc[] = _(
    "得文公司制造，能提示\n看不见的宝可梦的装置\n。");

static const u8 sBasementKeyDesc[] = _(
    "紫堇市地下的新紫堇的\n钥匙。");

static const u8 sScannerDesc[] = _(
    "在弃船里找到的装置。");

static const u8 sStorageKeyDesc[] = _(
    "弃船里仓库的钥匙。");

static const u8 sKeyToRoom1Desc[] = _(
    "能打开弃船里某扇门的\n钥匙。");

static const u8 sKeyToRoom2Desc[] = _(
    "能打开弃船里某扇门的\n钥匙。");

static const u8 sKeyToRoom4Desc[] = _(
    "能打开弃船里某扇门的\n钥匙。");

static const u8 sKeyToRoom6Desc[] = _(
    "能打开弃船里某扇门的\n钥匙。");

static const u8 sMeteoriteDesc[] = _(
    "在流星瀑布找到的陨石\n。");

static const u8 sMagmaEmblemDesc[] = _(
    "形状像熔岩队标志的勋\n章状道具。");

static const u8 sContestPassDesc[] = _(
    "参加宝可梦华丽大赛所\n需的通行证。");

static const u8 sParcelDesc[] = _(
    "宝可梦商店店员给大木\n博士的包裹。");

static const u8 sSecretKeyDesc[] = _(
    "红莲岛道馆入口的钥匙\n。");

static const u8 sBikeVoucherDesc[] = _(
    "在自行车店换取自行车\n的兑换券。");

static const u8 sGoldTeethDesc[] = _(
    "狩猎地带园长遗失的金\n假牙。");

static const u8 sCardKeyDesc[] = _(
    "西尔佛公司办公室使用\n的卡式门禁。");

static const u8 sLiftKeyDesc[] = _(
    "火箭队秘密基地使用的\n电梯钥匙。");

static const u8 sSilphScopeDesc[] = _(
    "让看不见的宝可梦\n现形的西尔佛瞄准镜。");

static const u8 sTriPassDesc[] = _(
    "在一之岛、二之岛和三\n之岛间搭船的通行证。");

static const u8 sRainbowPassDesc[] = _(
    "往返枯叶市和七之岛的\n渡轮通行证。");

static const u8 sTeaDesc[] = _(
    "老奶奶泡的解渴茶。");

static const u8 sRubyDesc[] = _(
    "象征热情、发出红光的\n精美宝石。");

static const u8 sSapphireDesc[] = _(
    "象征诚实、闪耀蓝光的\n宝石。");

static const u8 sAbilityShieldDesc[] = _(
    "防止携带者的特性被改\n变。");

static const u8 sClearAmuletDesc[] = _(
    "防止携带者的能力被降\n低。");

static const u8 sPunchingGloveDesc[] = _(
    "提高拳类招式威力，并\n取消接触。");

static const u8 sCovertCloakDesc[] = _(
    "保护携带者免受招式的\n追加效果。");

static const u8 sLoadedDiceDesc[] = _(
    "容易掷出大数字，连续\n招式次数更多。");

static const u8 sAuspiciousArmorDesc[] = _(
    "寄宿吉祥愿望的铠甲。\n能让宝可梦进化。");

static const u8 sBoosterEnergyDesc[] = _(
    "封装能量，能提高特定\n特性宝可梦的能力。");

static const u8 sBigBambooShootDesc[] = _(
    "又大又稀有的竹笋。卖\n给美食家最好。");

static const u8 sGimmighoulCoinDesc[] = _(
    "索财灵会收集并珍藏这\n些奇怪的硬币。");

static const u8 sLeadersCrestDesc[] = _(
    "某种旧刀刃的碎片。由\n劈斩司令携带。");

static const u8 sMaliciousArmorDesc[] = _(
    "寄宿恶意意志的铠甲。\n能让宝可梦进化。");

static const u8 sMirrorHerbDesc[] = _(
    "复制对手的能力提升，\n但只生效一次。");

static const u8 sScrollOfDarknessDesc[] = _(
    "写有暗之流派秘密的奇\n怪卷轴。");

static const u8 sScrollOfWatersDesc[] = _(
    "写有水之流派秘密的奇\n怪卷轴。");

static const u8 sTeraOrbDesc[] = _(
    "能用能量结晶让宝可梦\n进行太晶化。");

static const u8 sTinyBambooShootDesc[] = _(
    "又小又稀有的竹笋。卖\n给美食家最好。");

static const u8 sTeraShardDesc[] = _(
    "太晶宝可梦倒下时\n可能形成的碎片。");

static const u8 sAdamantCrystalDesc[] = _(
    "能让帝牙卢卡改变形态\n的巨大发光宝石。");

static const u8 sGriseousCoreDesc[] = _(
    "能让骑拉帝纳改变形态\n的巨大发光宝石。");

static const u8 sLustrousGlobeDesc[] = _(
    "能让帕路奇亚改变形态\n的巨大发光宝石。");

static const u8 sBerserkGene[] = _(
    "大幅提高攻击，但会持\n续混乱。");

static const u8 sFairyFeatherDesc[] = _(
    "提高妖精属性招式威力\n的携带道具。");

static const u8 sSyrupyAppleDesc[] = _(
    "能让某些宝可梦进化的\n蜜糖苹果。");

static const u8 sUnremarkableTeacupDesc[] = _(
    "能让某些宝可梦进化的\n破裂茶杯。");

static const u8 sMasterpieceTeacupDesc[] = _(
    "能让某些宝可梦进化的\n残缺茶杯。");

static const u8 sCornerstoneMaskDesc[] = _(
    "让厄诡怪在战斗中发挥\n岩石属性。");

static const u8 sWellspringMaskDesc[] = _(
    "让厄诡怪在战斗中发挥\n水属性。");

static const u8 sHearthflameMaskDesc[] = _(
    "让厄诡怪在战斗中发挥\n火属性。");

static const u8 sHealthMochiDesc[] = _(
    "提高宝可梦HP基础值\n\n的道具。");

static const u8 sMuscleMochiDesc[] = _(
    "提高宝可梦攻击基础值\n\n的道具。");

static const u8 sResistMochiDesc[] = _(
    "提高宝可梦防御基础值\n\n的道具。");

static const u8 sGeniusMochiDesc[] = _(
    "提高宝可梦特攻基础值\n\n的道具。");

static const u8 sCleverMochiDesc[] = _(
    "提高宝可梦特防基础值\n\n的道具。");

static const u8 sSwiftMochiDesc[] = _(
    "提高宝可梦速度基础值\n\n的道具。");

static const u8 sFreshStartMochiDesc[] = _(
    "重置宝可梦所有基础点\n数的道具。");

static const u8 sGlimmeringCharmDesc[] = _(
    "提高太晶团体战获得碎\n片的护符。");

static const u8 sPokeVialDesc[] = _(
    "宝可瓶能完全\n回复你的队伍。");

static const u8 sInfiniteCandyDesc[] = _(
    "永远不会用完的\n超稀有糖果。");

static const u8 sInfiniteRepelDesc[] = _(
    "无限步数内赶走\n所有野生宝可梦。");
