# 1 "data/maps/FortreeCity_House2/scripts.pory"

# 2 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_MapScripts::
# 3 "data/maps/FortreeCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House2/scripts.pory"

# 5 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_StoredPowerGiver::
# 6 "data/maps/FortreeCity_House2/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_STORED_POWER, FortreeCity_House2_EventScript_ExplainStoredPower
# 9 "data/maps/FortreeCity_House2/scripts.pory"
	call_if_unset FLAG_MET_STORED_POWER_GIVER, FortreeCity_House2_EventScript_Greeting
# 10 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
# 11 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 12 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_WrongGuess
# 14 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
# 15 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 16 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_WrongGuess
# 18 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
# 19 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 20 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/FortreeCity_House2/scripts.pory"
	case 0, FortreeCity_House2_EventScript_WrongGuess
# 22 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YourStoredPowerHasAwoken, MSGBOX_DEFAULT
# 23 "data/maps/FortreeCity_House2/scripts.pory"
	giveitem ITEM_TM_STORED_POWER
# 24 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 25 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM_STORED_POWER
# 26 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainStoredPower, MSGBOX_DEFAULT
# 27 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 28 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 29 "data/maps/FortreeCity_House2/scripts.pory"

# 30 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_Greeting::
# 31 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_StoredPowersArousedByNature, MSGBOX_DEFAULT
# 32 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_MET_STORED_POWER_GIVER
# 33 "data/maps/FortreeCity_House2/scripts.pory"
	return
# 34 "data/maps/FortreeCity_House2/scripts.pory"

# 35 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_ExplainStoredPower::
# 36 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainStoredPower, MSGBOX_DEFAULT
# 37 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 38 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 39 "data/maps/FortreeCity_House2/scripts.pory"

# 40 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_WrongGuess::
# 41 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
# 42 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 43 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 44 "data/maps/FortreeCity_House2/scripts.pory"

# 45 "data/maps/FortreeCity_House2/scripts.pory"

# 46 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_FormerSleepTalkTutor::
# 47 "data/maps/FortreeCity_House2/scripts.pory"
	lockall
# 48 "data/maps/FortreeCity_House2/scripts.pory"
	faceplayer
# 49 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_FormerSleepTalkTutor, MSGBOX_DEFAULT
# 50 "data/maps/FortreeCity_House2/scripts.pory"
	releaseall
# 51 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 52 "data/maps/FortreeCity_House2/scripts.pory"

# 53 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_FormerSleepTalkTutor:
# 54 "data/maps/FortreeCity_House2/scripts.pory"
	.string "我以前能在梦里\n"
# 55 "data/maps/FortreeCity_House2/scripts.pory"
	.string "说话……唉，怎么没了？$"
# 56 "data/maps/FortreeCity_House2/scripts.pory"

# 57 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_StoredPowersArousedByNature:
# 58 "data/maps/FortreeCity_House2/scripts.pory"
	.string "人……宝可梦……\p"
# 59 "data/maps/FortreeCity_House2/scripts.pory"
	.string "它们潜在的力量，会在\n"
# 60 "data/maps/FortreeCity_House2/scripts.pory"
	.string "自然环境里被唤醒……$"
# 61 "data/maps/FortreeCity_House2/scripts.pory"

# 62 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CoinInWhichHand:
# 63 "data/maps/FortreeCity_House2/scripts.pory"
	.string "让老太婆看看，你的\n"
# 64 "data/maps/FortreeCity_House2/scripts.pory"
	.string "潜在力量有没有觉醒……\p"
# 65 "data/maps/FortreeCity_House2/scripts.pory"
	.string "我手里握着一枚硬币。\p"
# 66 "data/maps/FortreeCity_House2/scripts.pory"
	.string "说吧，我把它藏在了\n"
# 67 "data/maps/FortreeCity_House2/scripts.pory"
	.string "右手？还是左手？$"
# 68 "data/maps/FortreeCity_House2/scripts.pory"

# 69 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CorrectTryAgainWhichHand:
# 70 "data/maps/FortreeCity_House2/scripts.pory"
	.string "哦！对，没错！\p"
# 71 "data/maps/FortreeCity_House2/scripts.pory"
	.string "我们再试一次。\p"
# 72 "data/maps/FortreeCity_House2/scripts.pory"
	.string "我把硬币藏在了哪只手？\n"
# 73 "data/maps/FortreeCity_House2/scripts.pory"
	.string "右还是左？$"
# 74 "data/maps/FortreeCity_House2/scripts.pory"

# 75 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CorrectTryAgainWhichHand2:
# 76 "data/maps/FortreeCity_House2/scripts.pory"
	.string "哦！对，没错！\p"
# 77 "data/maps/FortreeCity_House2/scripts.pory"
	.string "我们再试一次。\p"
# 78 "data/maps/FortreeCity_House2/scripts.pory"
	.string "我把硬币藏在了哪只手？\n"
# 79 "data/maps/FortreeCity_House2/scripts.pory"
	.string "右还是左？$"
# 80 "data/maps/FortreeCity_House2/scripts.pory"

# 81 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_YourStoredPowerHasAwoken:
# 82 "data/maps/FortreeCity_House2/scripts.pory"
	.string "哦！太好了！\n"
# 83 "data/maps/FortreeCity_House2/scripts.pory"
	.string "你的潜在力量觉醒了！\p"
# 84 "data/maps/FortreeCity_House2/scripts.pory"
	.string "来，拿着这个，唤醒你\n"
# 85 "data/maps/FortreeCity_House2/scripts.pory"
	.string "宝可梦的潜在力量。$"
# 86 "data/maps/FortreeCity_House2/scripts.pory"

# 87 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_ExplainStoredPower:
# 88 "data/maps/FortreeCity_House2/scripts.pory"
	.string "辅助力量这个招式，\n"
# 89 "data/maps/FortreeCity_House2/scripts.pory"
	.string "会随你宝可梦能力\l"
# 90 "data/maps/FortreeCity_House2/scripts.pory"
	.string "提升的次数提高威力。$"
# 91 "data/maps/FortreeCity_House2/scripts.pory"

# 92 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_YouGuessedWrong:
# 93 "data/maps/FortreeCity_House2/scripts.pory"
	.string "不，太可惜了。\n"
# 94 "data/maps/FortreeCity_House2/scripts.pory"
	.string "你猜错了。$"
