extern const u8 EventScript_FollowerIsShivering[];
extern const u8 EventScript_FollowerNostalgia[];
extern const u8 EventScript_FollowerHopping[];
extern const u8 EventScript_FollowerJumpOnPlayer[];
extern const u8 EventScript_FollowerCuddling[];
extern const u8 EventScript_FollowerShiverCuddling[];
extern const u8 EventScript_FollowerGetCloser[];
extern const u8 EventScript_FollowerPokingPlayer[];
extern const u8 EventScript_FollowerLookAround[];
extern const u8 EventScript_FollowerLookAway[];
extern const u8 EventScript_FollowerLookAwayBark[];
extern const u8 EventScript_FollowerLookAwayPoke[];
extern const u8 EventScript_FollowerPokeGround[];
extern const u8 EventScript_FollowerStartled[];
extern const u8 EventScript_FollowerFastHopping[];
extern const u8 EventScript_FollowerDizzy[];
extern const u8 EventScript_FollowerLookAroundScared[];
extern const u8 EventScript_FollowerDance[];
extern const u8 EventScript_FollowerLookUp[];

// 'Generic', unconditional happy messages
static const u8 sHappyMsg00[] = _("{STR_VAR_1}开始戳你的\n肚子。");
static const u8 sHappyMsg01[] = _("{STR_VAR_1}又开心又害羞。");
static const u8 sHappyMsg02[] = _("{STR_VAR_1}开心地跟着你。");
static const u8 sHappyMsg03[] = _("{STR_VAR_1}很沉着。");
static const u8 sHappyMsg04[] = _("{STR_VAR_1}和你一起走\n好像很开心！");
static const u8 sHappyMsg05[] = _("{STR_VAR_1}精神饱满。");
static const u8 sHappyMsg06[] = _("{STR_VAR_1}看起来很开心。");
static const u8 sHappyMsg07[] = _("{STR_VAR_1}格外努力。");
static const u8 sHappyMsg08[] = _("{STR_VAR_1}在闻周围的\n空气味道。");
static const u8 sHappyMsg09[] = _("{STR_VAR_1}高兴得跳起来！");
static const u8 sHappyMsg10[] = _("{STR_VAR_1}还是心情很好！");
static const u8 sHappyMsg11[] = _("你的宝可梦闻到了\n烟的味道。");
static const u8 sHappyMsg12[] = _("{STR_VAR_1}在戳你的肚子。");
static const u8 sHappyMsg13[] = _("你的宝可梦伸展身体，\n正在放松。");
static const u8 sHappyMsg14[] = _("{STR_VAR_1}好像想\n走在前面！");
static const u8 sHappyMsg15[] = _("{STR_VAR_1}努力跟上\n你的脚步。");
static const u8 sHappyMsg16[] = _("{STR_VAR_1}开心地\n贴着你！");
static const u8 sHappyMsg17[] = _("{STR_VAR_1}充满活力！");
static const u8 sHappyMsg18[] = _("{STR_VAR_1}好像非常开心！");
static const u8 sHappyMsg19[] = _("{STR_VAR_1}开心得\n停不下来！");
static const u8 sHappyMsg20[] = _("{STR_VAR_1}慢慢点了点头。");
static const u8 sHappyMsg21[] = _("{STR_VAR_1}非常起劲！");
static const u8 sHappyMsg22[] = _("{STR_VAR_1}四处走动，\n听着各种声音。");
static const u8 sHappyMsg23[] = _("{STR_VAR_1}很感兴趣。");
static const u8 sHappyMsg24[] = _("{STR_VAR_1}勉强\n撑着继续走。");
static const u8 sHappyMsg25[] = _("{STR_VAR_1}对你露出\n阳光般的表情！");
static const u8 sHappyMsg26[] = _("{STR_VAR_1}开心地看着你\n笑了。");
static const u8 sHappyMsg27[] = _("你的宝可梦在闻\n花香。");
static const u8 sHappyMsg28[] = _("{STR_VAR_1}见到你\n好像很高兴！");
static const u8 sHappyMsg29[] = _("{STR_VAR_1}朝这边\n咧嘴一笑。");
static const u8 sHappyMsg30[] = _("{STR_VAR_1}开心地\n贴着你！");
// Conditional messages begin here, index 31
static const u8 sHappyMsg31[] = _("你的宝可梦好像很喜欢\n这样的好天气。");
static const u8 sHappyMsg32[] = _("{STR_VAR_1}非常沉着\n自信！");

const struct FollowerMsgInfo gFollowerHappyMessages[] = {
    {sHappyMsg00, EventScript_FollowerPokingPlayer},
    {sHappyMsg01}, {sHappyMsg02}, {sHappyMsg03}, {sHappyMsg04}, {sHappyMsg05}, {sHappyMsg06}, {sHappyMsg07},
    {sHappyMsg08, EventScript_FollowerLookAround},
    {sHappyMsg09, EventScript_FollowerHopping},
    {sHappyMsg10}, {sHappyMsg11},
    {sHappyMsg12, EventScript_FollowerPokingPlayer},
    {sHappyMsg13, EventScript_FollowerLookAround},
    {sHappyMsg14}, {sHappyMsg15},
    {sHappyMsg16, EventScript_FollowerCuddling},
    {sHappyMsg17}, {sHappyMsg18},
    {sHappyMsg19, EventScript_FollowerFastHopping},
    {sHappyMsg20}, {sHappyMsg21}, {sHappyMsg22}, {sHappyMsg23}, {sHappyMsg24}, {sHappyMsg25}, {sHappyMsg26}, {sHappyMsg27}, {sHappyMsg28}, {sHappyMsg29},
    {sHappyMsg30, EventScript_FollowerCuddling},
    {sHappyMsg31}, {sHappyMsg32},
};

// Unconditional neutral messages
static const u8 sNeutralMsg00[] = _("{STR_VAR_1}一下下地\n戳着地面。");
static const u8 sNeutralMsg01[] = _("{STR_VAR_1}在站岗放哨。");
static const u8 sNeutralMsg02[] = _("{STR_VAR_1}耐心地\n盯着虚空。");
static const u8 sNeutralMsg03[] = _("{STR_VAR_1}在四处走动。");
static const u8 sNeutralMsg04[] = _("你的宝可梦大声打了个哈欠！");
static const u8 sNeutralMsg05[] = _("你的宝可梦不安地\n四处张望。");
static const u8 sNeutralMsg06[] = _("{STR_VAR_1}看着这边\n微笑。");
static const u8 sNeutralMsg07[] = _("{STR_VAR_1}不安地\n环顾四周。");
static const u8 sNeutralMsg08[] = _("{STR_VAR_1}发出了战吼。");
static const u8 sNeutralMsg09[] = _("{STR_VAR_1}跳了一支\n美妙的舞！");
static const u8 sNeutralMsg10[] = _("{STR_VAR_1}非常起劲。");
static const u8 sNeutralMsg11[] = _("{STR_VAR_1}专注地凝视\n远方。");
static const u8 sNeutralMsg12[] = _("{STR_VAR_1}在警戒！");
static const u8 sNeutralMsg13[] = _("{STR_VAR_1}望着远处\n叫了起来！");

const struct FollowerMsgInfo gFollowerNeutralMessages[] = {
    {sNeutralMsg00, EventScript_FollowerPokeGround},
    {sNeutralMsg01},
    {sNeutralMsg02, EventScript_FollowerLookAway},
    {sNeutralMsg03, EventScript_FollowerLookAround},
    {sNeutralMsg04},
    {sNeutralMsg05, EventScript_FollowerLookAround},
    {sNeutralMsg06}, {sNeutralMsg07}, {sNeutralMsg08},
    {sNeutralMsg09, EventScript_FollowerDance},
    {sNeutralMsg10},
    {sNeutralMsg11, EventScript_FollowerLookAway},
    {sNeutralMsg12},
    {sNeutralMsg13, EventScript_FollowerLookAwayBark},
};

// Unconditional sad messages
static const u8 sSadMsg00[] = _("{STR_VAR_1}头晕目眩。");
static const u8 sSadMsg01[] = _("{STR_VAR_1}踩到你的\n脚了！");
static const u8 sSadMsg02[] = _("{STR_VAR_1}好像有点累。");
// Conditional messages begin, index 3
static const u8 sSadMsg03[] = _("{STR_VAR_1}不太高兴。");
static const u8 sSadMsg04[] = _("{STR_VAR_1}快要摔倒了！\n");
static const u8 sSadMsg05[] = _("{STR_VAR_1}好像快要\n倒下了！");
static const u8 sSadMsg06[] = _("{STR_VAR_1}拼命想\n跟上你……");
static const u8 sSadMsg07[] = _("{STR_VAR_1}很紧张。");

const struct FollowerMsgInfo gFollowerSadMessages[] = {
    {sSadMsg00, EventScript_FollowerDizzy},
    {sSadMsg01}, {sSadMsg02},
    {sSadMsg03}, {sSadMsg04}, {sSadMsg05}, {sSadMsg06}, {sSadMsg07},
};

// Unconditional upset messages
static const u8 sUpsetMsg00[] = _("{STR_VAR_1}好像有点\n不高兴……");
static const u8 sUpsetMsg01[] = _("{STR_VAR_1}露出不开心的\n表情。");
static const u8 sUpsetMsg02[] = _("……你的宝可梦好像\n有点冷。");
// Conditional messages, index 3
static const u8 sUpsetMsg03[] = _("{STR_VAR_1}在草丛里\n躲雨。");

const struct FollowerMsgInfo gFollowerUpsetMessages[] = {
    {sUpsetMsg00}, {sUpsetMsg01},
    {sUpsetMsg02, EventScript_FollowerIsShivering},
    {sUpsetMsg03},
};

// Unconditional angry messages
static const u8 sAngryMsg00[] = _("{STR_VAR_1}吼了一声！");
static const u8 sAngryMsg01[] = _("{STR_VAR_1}露出生气的\n表情！");
static const u8 sAngryMsg02[] = _("{STR_VAR_1}不知为何\n好像在生气。");
static const u8 sAngryMsg03[] = _("你的宝可梦转过脸去，\n一副不服气的样子。");
static const u8 sAngryMsg04[] = _("{STR_VAR_1}叫了一声。");

const struct FollowerMsgInfo gFollowerAngryMessages[] = {
    {sAngryMsg00}, {sAngryMsg01}, {sAngryMsg02},
    {sAngryMsg03, EventScript_FollowerLookAway},
    {sAngryMsg04},
};

// Unconditional pensive messages
static const u8 sPensiveMsg00[] = _("{STR_VAR_1}一直低头\n看着。");
static const u8 sPensiveMsg01[] = _("{STR_VAR_1}在观察周围。");
static const u8 sPensiveMsg02[] = _("{STR_VAR_1}低头看着。");
static const u8 sPensiveMsg03[] = _("{STR_VAR_1}正在努力\n忍住睡意……");
static const u8 sPensiveMsg04[] = _("{STR_VAR_1}好像在\n四处游荡。");
static const u8 sPensiveMsg05[] = _("{STR_VAR_1}心不在焉地\n四处张望。");
static const u8 sPensiveMsg06[] = _("{STR_VAR_1}大声打了个哈欠！");
static const u8 sPensiveMsg07[] = _("{STR_VAR_1}舒服地休息着。");
static const u8 sPensiveMsg08[] = _("{STR_VAR_1}一眨不眨地\n看着你的脸。");
static const u8 sPensiveMsg09[] = _("{STR_VAR_1}专注地\n看着你的脸。");
static const u8 sPensiveMsg10[] = _("{STR_VAR_1}把注意力\n放在你身上。");
static const u8 sPensiveMsg11[] = _("{STR_VAR_1}凝视着深处。");
static const u8 sPensiveMsg12[] = _("{STR_VAR_1}在闻地面。");
static const u8 sPensiveMsg13[] = _("你的宝可梦专注地\n盯着虚空。");
static const u8 sPensiveMsg14[] = _("{STR_VAR_1}用锐利的目光\n集中精神！");
static const u8 sPensiveMsg15[] = _("{STR_VAR_1}在集中精神。");
static const u8 sPensiveMsg16[] = _("{STR_VAR_1}朝这边\n点了点头。");
static const u8 sPensiveMsg17[] = _("{STR_VAR_1}好像有点\n紧张……");
static const u8 sPensiveMsg18[] = _("{STR_VAR_1}在看着你的\n脚印。");
static const u8 sPensiveMsg19[] = _("{STR_VAR_1}直直地\n看着你的眼睛。");

const struct FollowerMsgInfo gFollowerPensiveMessages[] = {
    {sPensiveMsg00},
    {sPensiveMsg01, EventScript_FollowerLookAround},
    {sPensiveMsg02}, {sPensiveMsg03}, {sPensiveMsg04},
    {sPensiveMsg05, EventScript_FollowerLookAround},
    {sPensiveMsg06}, {sPensiveMsg07}, {sPensiveMsg08}, {sPensiveMsg09}, {sPensiveMsg10},
    {sPensiveMsg11, EventScript_FollowerLookAway},
    {sPensiveMsg12, EventScript_FollowerPokeGround},
    {sPensiveMsg13, EventScript_FollowerLookAway},
    {sPensiveMsg14}, {sPensiveMsg15}, {sPensiveMsg16}, {sPensiveMsg17}, {sPensiveMsg18}, {sPensiveMsg19},
};

// All 'love' messages are unconditional
static const u8 sLoveMsg00[] = _("{STR_VAR_1}突然走近了！");
static const u8 sLoveMsg01[] = _("{STR_VAR_1}的脸颊\n变红了！");
static const u8 sLoveMsg02[] = _("哇！{STR_VAR_1}突然\n抱住了你！");
static const u8 sLoveMsg03[] = _("哇！{STR_VAR_1}突然\n想玩了！");
static const u8 sLoveMsg04[] = _("{STR_VAR_1}在蹭你的\n腿！");
static const u8 sLoveMsg05[] = _("{STR_VAR_1}脸红了。");
static const u8 sLoveMsg06[] = _("啊！{STR_VAR_1}贴着你！");
static const u8 sLoveMsg07[] = _("{STR_VAR_1}充满爱意地\n看着你！");
static const u8 sLoveMsg08[] = _("{STR_VAR_1}靠得更近了。");
static const u8 sLoveMsg09[] = _("{STR_VAR_1}紧贴着你的\n脚边。");

const struct FollowerMsgInfo gFollowerLoveMessages[] = {
    {sLoveMsg00, EventScript_FollowerGetCloser},
    {sLoveMsg01},
    {sLoveMsg02, EventScript_FollowerCuddling},
    {sLoveMsg03},
    {sLoveMsg04, EventScript_FollowerCuddling},
    {sLoveMsg05},
    {sLoveMsg06, EventScript_FollowerCuddling},
    {sLoveMsg07},
    {sLoveMsg08, EventScript_FollowerGetCloser},
    {sLoveMsg09},
};

// Unconditional surprised messages
static const u8 sSurpriseMsg00[] = _("{STR_VAR_1}快要\n摔倒了！");
static const u8 sSurpriseMsg01[] = _("{STR_VAR_1}撞到了你！");
static const u8 sSurpriseMsg02[] = _("{STR_VAR_1}好像还不太\n习惯自己的名字。");
static const u8 sSurpriseMsg03[] = _("{STR_VAR_1}低头看着。");
static const u8 sSurpriseMsg04[] = _("你的宝可梦绊了一下，\n差点摔倒！");
static const u8 sSurpriseMsg05[] = _("{STR_VAR_1}察觉到什么，\n嚎叫起来！");
static const u8 sSurpriseMsg06[] = _("{STR_VAR_1}好像精神了！");
static const u8 sSurpriseMsg07[] = _("{STR_VAR_1}突然转身\n叫了起来！");
static const u8 sSurpriseMsg08[] = _("{STR_VAR_1}突然转过身！");
static const u8 sSurpriseMsg09[] = _("你的宝可梦被你突然\n搭话吓了一跳！");
static const u8 sSurpriseMsg10[] = _("嗅嗅，有什么东西\n好香啊！");
static const u8 sSurpriseMsg11[] = _("{STR_VAR_1}精神起来了。");
static const u8 sSurpriseMsg12[] = _("{STR_VAR_1}摇摇晃晃，\n快要摔倒了。");
static const u8 sSurpriseMsg13[] = _("{STR_VAR_1}快要摔倒了。");
static const u8 sSurpriseMsg14[] = _("{STR_VAR_1}小心翼翼地\n走着。");
static const u8 sSurpriseMsg15[] = _("{STR_VAR_1}紧绷着\n神经。");
static const u8 sSurpriseMsg16[] = _("{STR_VAR_1}察觉到奇怪的\n气息，吓了一跳！");
static const u8 sSurpriseMsg17[] = _("{STR_VAR_1}害怕地\n贴住了你！");
static const u8 sSurpriseMsg18[] = _("{STR_VAR_1}感觉到不寻常的\n气息……");
static const u8 sSurpriseMsg19[] = _("{STR_VAR_1}紧绷着\n神经。");
// Conditional messages, index 20
static const u8 sSurpriseMsg20[] = _("{STR_VAR_1}好像对下雨\n很惊讶！");

const struct FollowerMsgInfo gFollowerSurpriseMessages[] = {
    {sSurpriseMsg00},
    {sSurpriseMsg01, EventScript_FollowerPokingPlayer},
    {sSurpriseMsg02}, {sSurpriseMsg03}, {sSurpriseMsg04}, {sSurpriseMsg05}, {sSurpriseMsg06},
    {sSurpriseMsg07, EventScript_FollowerLookAwayBark},
    {sSurpriseMsg08, EventScript_FollowerLookAway},
    {sSurpriseMsg09},
    {sSurpriseMsg10, EventScript_FollowerLookAround},
    {sSurpriseMsg11}, {sSurpriseMsg12}, {sSurpriseMsg13}, {sSurpriseMsg14}, {sSurpriseMsg15}, {sSurpriseMsg16},
    {sSurpriseMsg17, EventScript_FollowerCuddling},
    {sSurpriseMsg18},
    {sSurpriseMsg19, EventScript_FollowerLookAround},
    {sSurpriseMsg20},
};

// Unconditional curious messages
static const u8 sCuriousMsg00[] = _("你的宝可梦不安地\n四处找着什么。");
static const u8 sCuriousMsg01[] = _("你的宝可梦没看路，\n撞到了你！");
static const u8 sCuriousMsg02[] = _("嗅嗅！附近\n有什么吗？");
static const u8 sCuriousMsg03[] = _("{STR_VAR_1}在玩着\n小石子。");
static const u8 sCuriousMsg04[] = _("{STR_VAR_1}四处走动，\n找着什么。");
static const u8 sCuriousMsg05[] = _("{STR_VAR_1}在闻你。");
static const u8 sCuriousMsg06[] = _("{STR_VAR_1}好像有点\n犹豫……");

const struct FollowerMsgInfo gFollowerCuriousMessages[] = {
    {sCuriousMsg00, EventScript_FollowerLookAround},
    {sCuriousMsg01, EventScript_FollowerPokingPlayer},
    {sCuriousMsg02}, {sCuriousMsg03},
    {sCuriousMsg04, EventScript_FollowerLookAround},
    {sCuriousMsg05}, {sCuriousMsg06},
};

// Unconditional music messages
static const u8 sMusicMsg00[] = _("{STR_VAR_1}在展示\n自己的敏捷！");
static const u8 sMusicMsg01[] = _("{STR_VAR_1}开心地\n动来动去！");
static const u8 sMusicMsg02[] = _("哇！{STR_VAR_1}高兴得\n跳起舞来！");
static const u8 sMusicMsg03[] = _("{STR_VAR_1}稳稳地\n跟着你！");
static const u8 sMusicMsg04[] = _("{STR_VAR_1}好像想\n和你玩。");
static const u8 sMusicMsg05[] = _("{STR_VAR_1}开心地\n蹦蹦跳跳。");
static const u8 sMusicMsg06[] = _("{STR_VAR_1}在哼着歌。");
static const u8 sMusicMsg07[] = _("{STR_VAR_1}在轻咬你的脚！");
static const u8 sMusicMsg08[] = _("{STR_VAR_1}转身\n看着你。");
static const u8 sMusicMsg09[] = _("{STR_VAR_1}正努力展示\n自己的强大力量！");
static const u8 sMusicMsg10[] = _("哇！{STR_VAR_1}高兴得\n跳起舞来！");
static const u8 sMusicMsg11[] = _("{STR_VAR_1}心情很好！");
static const u8 sMusicMsg12[] = _("{STR_VAR_1}无忧无虑地\n蹦跳着！");
static const u8 sMusicMsg13[] = _("你的宝可梦好像闻到了\n怀念的气味……");
// Conditional music messages, index 14
static const u8 sMusicMsg14[] = _("{STR_VAR_1}很喜欢\n这场雨。");

const struct FollowerMsgInfo gFollowerMusicMessages[] = {
    {sMusicMsg00, EventScript_FollowerLookAround},
    {sMusicMsg01},
    {sMusicMsg02, EventScript_FollowerDance},
    {sMusicMsg03},
    {sMusicMsg04, EventScript_FollowerHopping},
    {sMusicMsg05, EventScript_FollowerHopping},
    {sMusicMsg06}, {sMusicMsg07}, {sMusicMsg08}, {sMusicMsg09},
    {sMusicMsg10, EventScript_FollowerDance},
    {sMusicMsg11},
    {sMusicMsg12, EventScript_FollowerHopping},
    {sMusicMsg13, EventScript_FollowerNostalgia},
    {sMusicMsg14}
};


static const u8 sPoisonedMsg00[] = _("{STR_VAR_1}因中毒\n而发抖。");

const struct FollowerMsgInfo gFollowerPoisonedMessages[] = {
    {sPoisonedMsg00, EventScript_FollowerIsShivering},
};
