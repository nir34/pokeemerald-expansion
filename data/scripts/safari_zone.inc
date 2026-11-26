SafariZone_EventScript_OutOfBallsMidBattle::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	setwarp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
	end

SafariZone_EventScript_Exit::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	warp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
	waitstate
	end

SafariZone_EventScript_RetirePrompt::
	lockall
	msgbox SafariZone_Text_WouldYouLikeToExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_Retire
	releaseall
	end

SafariZone_EventScript_Retire::
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_TimesUp::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_TimesUp
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_OutOfBalls::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_OutOfBalls
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

EventScript_PokeBlockFeeder::
	lockall
	special GetPokeblockFeederInFront
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPresent
	msgbox SafariZone_Text_PlacePokeblockOnFeeder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_ChoosePokeblock
	releaseall
	end

SafariZone_EventScript_ChoosePokeblock::
	fadescreen FADE_TO_BLACK
	special OpenPokeblockCaseOnFeeder
	waitstate
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPlaced
#ifdef BUGFIX
	releaseall  @ Only gets called from EventScript_PokeBlockFeeder which uses lockall.
#endif
	end

SafariZone_EventScript_PokeblockPlaced::
	message SafariZone_Text_PokeblockWasPlaced
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_EventScript_PokeblockPresent::
	message SafariZone_Text_PokeblockStillHere
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_Text_WouldYouLikeToExit:
	.string "你现在就要\n"
	.string "离开狩猎地带吗？$"

SafariZone_Text_TimesUp:
	.string "叮咚！时间到！\n"
	.string "狩猎游戏结束了。$"

SafariZone_Text_OutOfBalls:
	.string "你的狩猎球用完了。\n"
	.string "狩猎游戏结束了。$"

SafariZone_Text_PlacePokeblockOnFeeder:
	.string "要把宝可方块\n"
	.string "放进宝可方块喂食器吗？$"

SafariZone_Text_PokeblockStillHere:
	.string "你之前放的{STR_VAR_1}\n"
	.string "还在这里。$"

SafariZone_Text_PokeblockWasPlaced:
	.string "{STR_VAR_1}被放进了\n"
	.string "宝可方块喂食器。$"

Route121_SafariZoneEntrance_Text_WelcomeToSafariZone:
	.string "欢迎来到狩猎地带！\p"
	.string "在这里，你能见到许多在丰缘\n"
	.string "很少见的宝可梦。\p"
	.string "而且是在自然栖息地里，\n"
	.string "看到它们野生的模样。\p"
	.string "更重要的是，我们已向\n"
	.string "宝可梦训练家开放大门。\p"
	.string "你可以捕捉宝可梦\n"
	.string "并带走！\p"
	.string "快进来享受狩猎地带吧！$"

Route121_SafariZoneEntrance_Text_WelcomeFirstTime:
	.string "欢迎来到狩猎地带！\n"
	.string "这是你第一次来吗？$"

Route121_SafariZoneEntrance_Text_ComeInAndEnjoy:
	.string "快进来享受狩猎地带吧！$"

Route121_SafariZoneEntrance_Text_FirstTimeInfo:
	.string "进入狩猎地带时，\n"
	.string "你会拿到30个狩猎球\l"
	.string "用来捕捉宝可梦。\p"
	.string "狩猎球用完，或走满\n"
	.string "500步，狩猎游戏就结束。\p"
	.string "快进来享受狩猎地带吧！$"

Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay:
	.string "欢迎来到狩猎地带！\p"
	.string "只要500日元就能尽情捕捉！\n"
	.string "要玩狩猎游戏吗？$"

Route121_SafariZoneEntrance_Text_PlayAnotherTime:
	.string "好的。\n"
	.string "请下次再来玩！$"

Route121_SafariZoneEntrance_Text_NotEnoughMoney:
	.string "你的钱不够。\n"
	.string "抱歉。$"

Route121_SafariZoneEntrance_Text_ThatWillBe500Please:
	.string "请付500日元。$"

Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls:
	.string "这是您的狩猎球。$"

Route121_SafariZoneEntrance_Text_Received30SafariBalls:
	.string "{PLAYER}获得了30个狩猎球。$"

Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself:
	.string "游戏结束时我们会通知你。\p"
	.string "在那之前，请尽情享受！\n"
	.string "去展开你的野外冒险吧！$"

Route121_SafariZoneEntrance_Text_PCIsFull:
	.string "不好意思！\n"
	.string "你的电脑盒子满了。$"

Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase:
	.string "不好意思！\n"
	.string "你好像没有宝可方块盒。\p"
	.string "用上宝可方块，你的狩猎\n"
	.string "收获会多得多。\p"
	.string "请带着宝可方块盒再来。\p"
	.string "宝可方块盒可以在\n"
	.string "琉璃华丽大赛会场获得。$"

SafariZone_South_Text_StillHaveTimeExit:
	.string "你还有时间。要现在\n"
	.string "离开狩猎地带吗？$"

SafariZone_South_Text_EnjoyTheRestOfYourAdventure:
	.string "请好好享受剩下的\n"
	.string "野外冒险！$"

SafariZone_South_Text_ExitEarlyThankYouForPlaying:
	.string "好的。\p"
	.string "我会收回你剩下的\n"
	.string "狩猎球。\p"
	.string "谢谢你游玩。\n"
	.string "期待你再来。$"

SafariZone_South_Text_GoodLuck:
	.string "祝你好运！\p"
	.string "需要什么就尽管\n"
	.string "跟我说！$"

SafariZone_South_Text_Boy:
	.string "你知道吗？\p"
	.string "在那个方盒子里放进宝可方块，\n"
	.string "宝可梦就会聚过来。$"

SafariZone_South_Text_Man:
	.string "我想再往深处走，\n"
	.string "可忘了带自行车。\p"
	.string "我总觉得珍稀的宝可梦\n"
	.string "住在偏远的地方。$"

SafariZone_Southwest_Text_Woman:
	.string "有时我把宝可方块扔向\n"
	.string "宝可梦，它们却理都不理。\p"
	.string "宝可梦吃东西\n"
	.string "也有喜好吗？$"

SafariZone_Northwest_Text_Man:
	.string "呼……呼……\n"
	.string "我……总算走到这里……可是……\p"
	.string "我累坏了……没力气\n"
	.string "抓宝可梦了……$"

SafariZone_North_Text_Fisherman:
	.string "我正在寻找丰缘看不到的\n"
	.string "水属性宝可梦。\p"
	.string "你知道湖在哪里吗？$"

SafariZone_North_Text_Man:
	.string "我要在这里抓很多珍稀宝可梦，\n"
	.string "再和朋友们交换！$"

SafariZone_South_Text_Youngster:
	.string "我在宝可方块喂食器上\n"
	.string "放了宝可方块。\n"
	.string "可它好像不见了。\p"
	.string "一定是宝可梦趁我不注意\n"
	.string "把它吃掉了。$"

Route121_SafariZoneEntrance_Text_TrainerTip:
	.string "狩猎地带训练家小提示！\p"
	.string "向野生宝可梦投掷宝可方块，\n"
	.string "它们就不太容易逃跑。$"

SafariZone_Southwest_Text_RestHouseSign:
	.string "“让疲惫的双脚歇一歇。”\n"
	.string "休息屋$"

SafariZone_RestHouse_Text_Youngster:
	.string "我没有宝可方块，不过抓到了\n"
	.string "相当多的宝可梦。\p"
	.string "投狩猎球前先靠近一点，\n"
	.string "能提高捕获的机会。$"

SafariZone_RestHouse_Text_PsychicM:
	.string "用上宝可方块，野生宝可梦\n"
	.string "就不会那么快逃跑。\p"
	.string "对本来就不容易逃跑的宝可梦\n"
	.string "用宝可方块没什么效果。$"

SafariZone_RestHouse_Text_FatMan:
	.string "在喂食器上放宝可方块，\n"
	.string "宝可梦就会被吸引过来。\p"
	.string "我觉得性格相近的宝可梦\n"
	.string "会被特定的宝可方块吸引。$"

SafariZone_South_Text_AreaOffLimits1:
	.string "这一区域还在建设中。\n"
	.string "抱歉，禁止入内！$"

SafariZone_Southeast_Text_ExpansionIsFinished:
	.string "狩猎地带的扩建工程\n"
	.string "已经完工了。\p"
	.string "希望你喜欢这个新区域。$"

SafariZone_South_Text_AreaOffLimits2:
	.string "这一区域还在建设中。\n"
	.string "抱歉，禁止入内！$"

SafariZone_Southeast_Text_LittleGirl:
	.string "哇！呜呼！这些宝可梦\n"
	.string "我以前一只都没见过！$"

SafariZone_Southeast_Text_FatMan:
	.string "这一带的宝可梦\n"
	.string "我全都没见过。\p"
	.string "而且还能抓这些珍稀\n"
	.string "宝可梦！太帅了！$"

SafariZone_Southeast_Text_RichBoy:
	.string "这附近的宝可梦好像\n"
	.string "不是丰缘本地的。$"

SafariZone_Northeast_Text_Boy:
	.string "我只剩几个狩猎球了。\p"
	.string "我正为该抓什么\n"
	.string "而伤脑筋。$"

SafariZone_Northeast_Text_Woman:
	.string "听说这里能看到皮卡丘。\n"
	.string "会在哪儿呢？$"

SafariZone_Northeast_Text_Girl:
	.string "哦，讨厌！\n"
	.string "我好像什么都抓不到！\p"
	.string "要是什么都抓不到，\n"
	.string "入场费就白花了！$"
