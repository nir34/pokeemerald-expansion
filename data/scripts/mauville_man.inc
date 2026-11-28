MauvilleCity_PokemonCenter_1F_EventScript_MauvilleOldMan::
	special Script_GetCurrentMauvilleMan
	switch VAR_RESULT
	case MAUVILLE_MAN_BARD, MauvilleCity_PokemonCenter_1F_EventScript_Bard
	case MAUVILLE_MAN_HIPSTER, MauvilleCity_PokemonCenter_1F_EventScript_Hipster
	case MAUVILLE_MAN_TRADER, MauvilleCity_PokemonCenter_1F_EventScript_Trader
	case MAUVILLE_MAN_STORYTELLER, MauvilleCity_PokemonCenter_1F_EventScript_Storyteller
	case MAUVILLE_MAN_GIDDY, MauvilleCity_PokemonCenter_1F_EventScript_Giddy
	end

@ Bard
MauvilleCity_PokemonCenter_1F_EventScript_Bard::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToHearMySong, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_PlaySong
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineSong
	end

MauvilleCity_PokemonCenter_1F_EventScript_PlaySong::
	setvar VAR_0x8004, 0
	special PlayBardSong
	delay 60
	special HasBardSongBeenChanged
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_AskToWriteLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_WishICouldPlaySongForOthers, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineSong::
	msgbox MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues1, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_AskToWriteLyrics::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToWriteSomeLyrics, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics
	end

MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics::
	setvar VAR_0x8004, EASY_CHAT_TYPE_BARD_SONG
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_LetMeSingItForYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, 1
	special PlayBardSong
	delay 60
	msgbox MauvilleCity_PokemonCenter_1F_Text_ThatHowYouWantedSongToGo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics
	special SaveBardSongLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_IllSingThisSongForAWhile, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics::
	msgbox MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues2, MSGBOX_DEFAULT
	release
	end

@ Hipster
MauvilleCity_PokemonCenter_1F_EventScript_Hipster::
	lock
	faceplayer
	setflag FLAG_UNLOCKED_TRENDY_SAYINGS
	msgbox MauvilleCity_PokemonCenter_1F_Text_TeachWhatsHipAndHappening, MSGBOX_DEFAULT
	special HasHipsterTaughtWord
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_TryTeachWord
	msgbox MauvilleCity_PokemonCenter_1F_Text_IAlreadyTaughtYou, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTeachWord::
	special HipsterTryTeachWord
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_TeachWord
	msgbox MauvilleCity_PokemonCenter_1F_Text_IveGotNothingNewToTeach, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TeachWord::
	msgbox MauvilleCity_PokemonCenter_1F_Text_HaveYouHeardOfWord, MSGBOX_DEFAULT
	special SetHipsterTaughtWord
	release
	end

@ Trader
MauvilleCity_PokemonCenter_1F_Text_WantToTradeDecor:
	.string "嗨，我是交换商。\n"
	.string "想和我交换装饰品吗？$"

MauvilleCity_PokemonCenter_1F_Text_TraderFeelingTheBlues:
	.string "哦……\n"
	.string "你让我好失落……$"

MauvilleCity_PokemonCenter_1F_Text_WeveAlreadyTraded:
	.string "可我们已经交换过\n"
	.string "装饰品了啊。$"

MauvilleCity_PokemonCenter_1F_Text_PickADecorItem:
	.string "看到我哪件装饰品想要，\n"
	.string "就告诉我。$"

MauvilleCity_PokemonCenter_1F_Text_YouDontWantAnything:
	.string "什么都不要？\n"
	.string "我觉得自己不受欢迎……$"

MauvilleCity_PokemonCenter_1F_Text_OnceBelongedToPlayerDoYouWantIt:
	.string "那件装饰品原本是\n"
	.string "{STR_VAR_1}的。\p"
	.string "你想要吗？$"

MauvilleCity_PokemonCenter_1F_Text_YouDontHaveAnyDecor:
	.string "呃……等一下。你连一件\n"
	.string "装饰品都没有啊！$"

MauvilleCity_PokemonCenter_1F_Text_PickTheDecorToTrade:
	.string "好，请挑一件要和我\n"
	.string "交换的装饰品。$"

MauvilleCity_PokemonCenter_1F_Text_YouDontWantToTrade:
	.string "不和我交换？\n"
	.string "我觉得自己不受欢迎……$"

MauvilleCity_PokemonCenter_1F_Text_YouveNoRoomForThis:
	.string "你能存放的{STR_VAR_2}已经满了。\n"
	.string "没地方放这个了。$"

MauvilleCity_PokemonCenter_1F_Text_SoWellTradeTheseDecor:
	.string "好，那就用我的{STR_VAR_3}\n"
	.string "换你的{STR_VAR_2}？$"

MauvilleCity_PokemonCenter_1F_Text_ThatDecorIsInUse:
	.string "那件装饰品正在使用中。\n"
	.string "不能交换。$"

MauvilleCity_PokemonCenter_1F_Text_SendDecorToYourPC:
	.string "那就交换吧！\n"
	.string "我会把装饰品送到你的电脑。$"

MauvilleCity_PokemonCenter_1F_Text_CantTradeThatOne:
	.string "哎呀！抱歉！那是非常稀有的\n"
	.string "装饰品。\l"
	.string "那件可不能换出去！\p"
	.string "要看看别的吗？$"

MauvilleCity_PokemonCenter_1F_EventScript_Trader::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_WantToTradeDecor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineTrade
	special GetTraderTradedFlag
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_AlreadyTraded
	message MauvilleCity_PokemonCenter_1F_Text_PickADecorItem
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineTrade::
	msgbox MauvilleCity_PokemonCenter_1F_Text_TraderFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_AlreadyTraded::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WeveAlreadyTraded, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive::
	special TraderMenuGetDecoration
	waitstate
	goto_if_eq VAR_0x8004, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelPickDecor
	goto_if_eq VAR_0x8004, 0xFFFF, MauvilleCity_PokemonCenter_1F_EventScript_InvalidDecor
	msgbox MauvilleCity_PokemonCenter_1F_Text_OnceBelongedToPlayerDoYouWantIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_PickDifferentDecor
	special DoesPlayerHaveNoDecorations
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_DontHaveAnyDecor
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	end

MauvilleCity_PokemonCenter_1F_EventScript_CancelPickDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontWantAnything, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_InvalidDecor::
	message MauvilleCity_PokemonCenter_1F_Text_CantTradeThatOne
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDifferentDecor::
	message MauvilleCity_PokemonCenter_1F_Text_PickADecorItem
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_DontHaveAnyDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontHaveAnyDecor, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive::
	msgbox MauvilleCity_PokemonCenter_1F_Text_PickTheDecorToTrade, MSGBOX_DEFAULT
	special TraderShowDecorationMenu
	waitstate
	goto_if_eq VAR_0x8006, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelGiveDecor
	goto_if_eq VAR_0x8006, 0xFFFF, MauvilleCity_PokemonCenter_1F_EventScript_DecorInUse
	special IsDecorationCategoryFull
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForDecor
	msgbox MauvilleCity_PokemonCenter_1F_Text_SoWellTradeTheseDecor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	special TraderDoDecorationTrade
	msgbox MauvilleCity_PokemonCenter_1F_Text_SendDecorToYourPC, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_CancelGiveDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontWantToTrade, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DecorInUse::
	msgbox MauvilleCity_PokemonCenter_1F_Text_ThatDecorIsInUse, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	end

MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouveNoRoomForThis, MSGBOX_DEFAULT
	release
	end

@ Storyteller
MauvilleCity_PokemonCenter_1F_Text_WillYouHearMyTale:
	.string "我是说书人。\n"
	.string "我会讲传说中训练家的故事。\p"
	.string "要听我讲吗？$"

MauvilleCity_PokemonCenter_1F_Text_StorytellerFeelingTheBlues:
	.string "哦……\n"
	.string "你让我好失落……$"

MauvilleCity_PokemonCenter_1F_Text_WhichTaleToTell:
	.string "我知道这些传说。\n"
	.string "要听哪一个？$"

MauvilleCity_PokemonCenter_1F_Text_IKnowNoTales:
	.string "可是，我不知道有什么\n"
	.string "传说中的训练家。\p"
	.string "所以也就没有故事。\p"
	.string "哪里才能找到值得\n"
	.string "传说的训练家呢？$"

MauvilleCity_PokemonCenter_1F_Text_YouDidStatXTimes:
	.string "什么？！\n"
	.string "你……你……\p"
	.string "{STR_VAR_2}\n"
	.string "{STR_VAR_1}次？！\p"
	.string "这可真是了不起！\n"
	.string "新的传说诞生了！$"

MauvilleCity_PokemonCenter_1F_Text_CouldThereBeOtherLegends:
	.string "这让我想，会不会还有\n"
	.string "其他更了不得的训练家\l"
	.string "传说等着被发现呢？$"

MauvilleCity_PokemonCenter_1F_Text_HaveYouAnyLegendaryTales:
	.string "你是训练家吗？\p"
	.string "那么告诉我，你有没有\n"
	.string "哪怕沾点边的传说故事？$"

@ Unused
MauvilleCity_PokemonCenter_1F_Text_HearAnotherLegendaryTale:
	.string "顺便问一句……\n"
	.string "要再听一个传说吗？$"

MauvilleCity_PokemonCenter_1F_Text_NotWorthyOfLegend:
	.string "嗯……\n"
	.string "我不太满意……\p"
	.string "希望你带来些配得上\n"
	.string "传说之名的消息。$"

MauvilleCity_PokemonCenter_1F_Text_IWishMorePeopleWereInterested:
	.string "要是更多人愿意听我讲\n"
	.string "关于传说训练家的故事\l"
	.string "就好了。$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameTitle::
	.string "存档达人训练家$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameAction::
	.string "保存了游戏$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家保存游戏\n"
	.string "{STR_VAR_1}次！\p"
	.string "再也找不到比{STR_VAR_3}\n"
	.string "更谨慎的训练家了！$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedTitle::
	.string "潮流先驱训练家$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedAction::
	.string "开创了流行$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家开创流行\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}正在引领\n"
	.string "整个丰缘的潮流！$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedTitle::
	.string "种树果训练家$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedAction::
	.string "种下了树果$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家种下树果\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}是传说中的\n"
	.string "树果爱好者！$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesTitle::
	.string "自行车爱好者$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesAction::
	.string "交换了自行车$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家换过自行车\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定深爱着\n"
	.string "自行车！$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsTitle::
	.string "受访训练家$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsAction::
	.string "接受了采访$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家接受采访\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是位备受\n"
	.string "瞩目的训练家！$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesTitle::
	.string "好战训练家$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesAction::
	.string "进行了对战$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家对战\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是位\n"
	.string "从不拒绝对战的训练家！$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtTitle::
	.string "宝可梦捕捉者$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtAction::
	.string "捕捉宝可梦$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家捕捉了\n"
	.string "{STR_VAR_1}只宝可梦！\p"
	.string "{STR_VAR_3}是传说中的\n"
	.string "野生宝可梦捕捉者！$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtTitle::
	.string "钓鱼训练家$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtAction::
	.string "用钓竿捕捉宝可梦$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家钓鱼捕捉了\n"
	.string "{STR_VAR_1}只宝可梦！\p"
	.string "{STR_VAR_3}是传说中的\n"
	.string "钓鱼高手！$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedTitle::
	.string "孵蛋训练家$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedAction::
	.string "孵化了蛋$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家孵化了\n"
	.string "{STR_VAR_1}只宝可梦！\p"
	.string "{STR_VAR_3}是传说中的\n"
	.string "孵化能手！$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedTitle::
	.string "进化训练家$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedAction::
	.string "让宝可梦进化$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家让{STR_VAR_1}只\n"
	.string "宝可梦进化了！\p"
	.string "{STR_VAR_3}是宝可梦进化的\n"
	.string "终极大师！$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterTitle::
	.string "宝可梦中心之友$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterAction::
	.string "使用宝可梦中心$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家在宝可梦中心\n"
	.string "回复宝可梦{STR_VAR_1}次！\p"
	.string "没有人比{STR_VAR_3}更爱\n"
	.string "宝可梦中心了！$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeTitle::
	.string "恋家训练家$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeAction::
	.string "在家回复宝可梦$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家在家回复宝可梦\n"
	.string "{STR_VAR_1}次！\p"
	.string "没有人比{STR_VAR_3}\n"
	.string "更爱待在家里了！$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesTitle::
	.string "狩猎地带爱好者$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesAction::
	.string "进入了狩猎地带$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家进入狩猎地带\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是那种在狩猎\n"
	.string "地带才露出野性的人！$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutTitle::
	.string "居合劈狂人$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutAction::
	.string "使用了居合劈$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家使用居合斩\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是个\n"
	.string "不斩不快的训练家！$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashTitle::
	.string "碎岩训练家$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashAction::
	.string "打碎了岩石$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家使用碎岩\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是见到石头\n"
	.string "就想砸的训练家！$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesTitle::
	.string "爱搬家训练家$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesAction::
	.string "搬迁了秘密基地$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家搬秘密基地\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}是喜欢经常\n"
	.string "搬家的训练家！$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashTitle::
	.string "跃起训练家$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashAction::
	.string "使用了跃起$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家使用跃起\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是个\n"
	.string "爱到处乱跳的训练家！$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleTitle::
	.string "顽强训练家$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleAction::
	.string "使出了挣扎$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家被迫使用挣扎\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}是绝不向逆境\n"
	.string "低头的顽强训练家！$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsTitle::
	.string "老虎机冠军$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsAction::
	.string "在老虎机中了头奖$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家在老虎机上\n"
	.string "中大奖{STR_VAR_1}次。\p"
	.string "{STR_VAR_3}在老虎机上\n"
	.string "运气很好！$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsTitle::
	.string "轮盘冠军$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsAction::
	.string "在轮盘连续获胜$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家在轮盘上\n"
	.string "连胜{STR_VAR_1}次。\p"
	.string "球弹起来时，{STR_VAR_3}\n"
	.string "运气真好！$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesTitle::
	.string "对战塔挑战者$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesAction::
	.string "挑战了对战塔$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家挑战对战塔\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}是渴望在对战塔\n"
	.string "出类拔萃的训练家！$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksTitle::
	.string "爱做宝可方块训练家$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksAction::
	.string "制作了宝可方块$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家制作宝可方块\n"
	.string "{STR_VAR_1}次！\p"
	.string "没人比{STR_VAR_3}更会用\n"
	.string "树果搅拌器！$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsTitle::
	.string "华丽大赛爱好者$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsAction::
	.string "参加了华丽大赛$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家参加华丽大赛\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定很喜欢\n"
	.string "向人炫耀宝可梦！$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsTitle::
	.string "华丽大赛大师$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsAction::
	.string "赢得了华丽大赛$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家在华丽大赛中\n"
	.string "获胜{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是了不起的\n"
	.string "华丽大赛大师！$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedTitle::
	.string "购物达人$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedAction::
	.string "购物了$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家在商店购物\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是那种\n"
	.string "天生爱购物的人。$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderTitle::
	.string "寻物训练家$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderAction::
	.string "使用了探测器$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家使用道具探测器\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定喜欢翻遍\n"
	.string "地面找隐藏道具！$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedTitle::
	.string "淋雨训练家$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedAction::
	.string "被雨淋了$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家被雨淋\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}的魅力连雨\n"
	.string "都能吸引来！$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexTitle::
	.string "热心的图鉴读者$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexAction::
	.string "查看宝可梦图鉴$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家查看宝可梦图鉴\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定喜欢在图鉴里\n"
	.string "查看宝可梦！$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsTitle::
	.string "缎带收藏家$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsAction::
	.string "获得了缎带$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家获得缎带\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是位喜欢\n"
	.string "收集缎带的训练家！$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedTitle::
	.string "爱跳台阶训练家$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedAction::
	.string "跳下了台阶$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家跳下台阶\n"
	.string "{STR_VAR_1}次！\p"
	.string "只要有台阶可跳，\n"
	.string "{STR_VAR_3}绝不放过！$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedTitle::
	.string "电视迷$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedAction::
	.string "看了电视$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家看电视\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定很喜欢看电视！$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockTitle::
	.string "守时训练家$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockAction::
	.string "查看了时间$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家查看时间\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是位守时、\n"
	.string "很在意时间的训练家。$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryTitle::
	.string "宝可梦彩票大师$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryAction::
	.string "中宝可梦彩票$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家中了宝可梦彩票\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定有很多\n"
	.string "可以交换宝可梦的朋友！$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareTitle::
	.string "寄养训练家$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareAction::
	.string "把宝可梦寄放在培育屋$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家把宝可梦寄放在\n"
	.string "培育屋{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是位积极\n"
	.string "培育宝可梦的实干家！$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarTitle::
	.string "缆车爱好者$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarAction::
	.string "乘坐了缆车$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家乘坐缆车\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}一定是位\n"
	.string "上上下下忙个不停的训练家！$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsTitle::
	.string "温泉爱好者$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsAction::
	.string "泡了温泉$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsStory::
	.string "这是关于一位名叫\n"
	.string "{STR_VAR_3}的训练家的故事。\p"
	.string "这位训练家泡温泉\n"
	.string "{STR_VAR_1}次！\p"
	.string "{STR_VAR_3}的皮肤一定\n"
	.string "像婴儿一样光滑！$"


MauvilleCity_PokemonCenter_1F_EventScript_Storyteller::
	lock
	faceplayer
	setvar VAR_0x8008, 0
	setvar VAR_0x8009, 0
	setvar VAR_0x800A, 0
	setvar VAR_0x800B, 0
	msgbox MauvilleCity_PokemonCenter_1F_Text_WillYouHearMyTale, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	specialvar VAR_RESULT, StorytellerGetFreeStorySlot
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_KnowNoTales
	message MauvilleCity_PokemonCenter_1F_Text_WhichTaleToTell
	waitmessage
	special StorytellerStoryListMenu
	waitstate
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelStorySelection
	setvar VAR_0x8008, 1
	special Script_StorytellerDisplayStory
	waitmessage
	waitbuttonpress
	specialvar VAR_RESULT, StorytellerUpdateStat
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_AreThereOtherTales
	goto MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale

MauvilleCity_PokemonCenter_1F_EventScript_CancelStorySelection::
	goto MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	end

MauvilleCity_PokemonCenter_1F_EventScript_AreThereOtherTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_CouldThereBeOtherLegends, MSGBOX_DEFAULT
	specialvar VAR_RESULT, HasStorytellerAlreadyRecorded
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_StorytellerEnd
	goto MauvilleCity_PokemonCenter_1F_EventScript_DoYouHaveAnyTales

MauvilleCity_PokemonCenter_1F_EventScript_KnowNoTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_IKnowNoTales, MSGBOX_DEFAULT
MauvilleCity_PokemonCenter_1F_EventScript_DoYouHaveAnyTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_HaveYouAnyLegendaryTales, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	specialvar VAR_RESULT, Script_StorytellerInitializeRandomStat
	goto_if_eq VAR_RESULT, 1, MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale
	msgbox MauvilleCity_PokemonCenter_1F_Text_NotWorthyOfLegend, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDidStatXTimes, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller::
	msgbox MauvilleCity_PokemonCenter_1F_Text_StorytellerFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

@ Unused
MauvilleCity_PokemonCenter_1F_EventScript_WaitingForRecordMix::
	msgbox MauvilleCity_PokemonCenter_1F_Text_IWishMorePeopleWereInterested, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_StorytellerEnd::
	release
	end

@ Giddy
MauvilleCity_PokemonCenter_1F_Text_HearMyStory:
	.string "我是话匣子！\n"
	.string "我有精彩的故事给你！\p"
	.string "想听我的故事吗？$"

MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues:
	.string "哦……\n"
	.string "你让我好失落……$"

MauvilleCity_PokemonCenter_1F_Text_AlsoIWasThinking:
	.string "还有，我在想……$"

MauvilleCity_PokemonCenter_1F_Text_WeShouldChatAgain:
	.string "大概就这样吧……\p"
	.string "我们再聊吧！\n"
	.string "拜拜！$"

MauvilleCity_PokemonCenter_1F_EventScript_Giddy::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_HearMyStory, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_TryTellTale
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineGiddy
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTellTale::
	special GiddyShouldTellAnotherTale
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale::
	special GiddyShouldTellAnotherTale
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_GiddyStartNewTale
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales
	end

MauvilleCity_PokemonCenter_1F_EventScript_GiddyStartNewTale::
	msgbox MauvilleCity_PokemonCenter_1F_Text_AlsoIWasThinking, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale
	end

@ Giddy will continue to tell stories regardless of whether yes or no is selected below.
@ Each story there is a 10% chance it will be his last. Otherwise he will stop at 10 stories.
MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale::
	special GenerateGiddyLine
	special ShowFieldMessageStringVar4
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineGiddy::
	msgbox MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WeShouldChatAgain, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToHearMySong:
	.string "嗨，我是吟游诗人。\n"
	.string "想听我的歌吗？$"

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues1:
	.string "哦……\n"
	.string "你让我好失落……$"

MauvilleCity_PokemonCenter_1F_Text_WishICouldPlaySongForOthers:
	.string "哦，多么动人的歌……\n"
	.string "真希望能弹给别人听……$"

MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToWriteSomeLyrics:
	.string "怎么样？\n"
	.string "你喜欢我的歌吗？\p"
	.string "不过我对歌词\n"
	.string "不太满意。\p"
	.string "要不要为我写段\n"
	.string "新歌词？$"

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues2:
	.string "哦……\n"
	.string "你让我好失落……$"

MauvilleCity_PokemonCenter_1F_Text_LetMeSingItForYou:
	.string "太感谢了！\n"
	.string "我来唱给你听。$"

MauvilleCity_PokemonCenter_1F_Text_ThatHowYouWantedSongToGo:
	.string "你希望你的歌\n"
	.string "这样唱吗？$"

MauvilleCity_PokemonCenter_1F_Text_IllSingThisSongForAWhile:
	.string "好！那就这样。\n"
	.string "这首歌我会唱一阵子。$"

MauvilleCity_PokemonCenter_1F_Text_TeachWhatsHipAndHappening:
	.string "嘿，哟！大家叫我潮人。\n"
	.string "我来教你现在流行什么。$"

MauvilleCity_PokemonCenter_1F_Text_IAlreadyTaughtYou:
	.string "不过，嘿，我已经教过你\n"
	.string "流行什么了。\p"
	.string "我想把这门道传给别人。$"

MauvilleCity_PokemonCenter_1F_Text_IveGotNothingNewToTeach:
	.string "不过，嘿，你已经很懂\n"
	.string "现在流行什么了。\p"
	.string "我没什么新东西\n"
	.string "能教你了！$"

MauvilleCity_PokemonCenter_1F_Text_HaveYouHeardOfWord:
	.string "嘿，你听说过\n"
	.string "“{STR_VAR_1}”吗？\p"
	.string "什么意思？这个嘛……\n"
	.string "去问爸爸妈妈吧，好吗？$"
