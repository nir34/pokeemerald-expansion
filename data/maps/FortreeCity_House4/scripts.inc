# 1 "data/maps/FortreeCity_House4/scripts.pory"

# 2 "data/maps/FortreeCity_House4/scripts.pory"
.set LOCALID_WINGULL, 3
# 3 "data/maps/FortreeCity_House4/scripts.pory"

# 4 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_MapScripts::
# 5 "data/maps/FortreeCity_House4/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity_House4/scripts.pory"

# 7 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Woman::
# 8 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_BringsWorldCloserTogether, MSGBOX_NPC
# 9 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 10 "data/maps/FortreeCity_House4/scripts.pory"

# 11 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy::
# 12 "data/maps/FortreeCity_House4/scripts.pory"
	lockall
# 13 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_MENTAL_HERB, FortreeCity_House4_EventScript_ReceivedMentalHerb
# 14 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_DELIVERED_MAIL, FortreeCity_House4_EventScript_WingullReturned
# 15 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_SENT_ON_ERRAND, FortreeCity_House4_EventScript_WingullOnErrand
# 16 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_GoBirdPokemon, MSGBOX_DEFAULT
# 17 "data/maps/FortreeCity_House4/scripts.pory"
	closemessage
# 18 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_WINGULL_SENT_ON_ERRAND
# 19 "data/maps/FortreeCity_House4/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
# 20 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement LOCALID_WINGULL, FortreeCity_House4_Movement_WingullExit
# 21 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 22 "data/maps/FortreeCity_House4/scripts.pory"
	removeobject LOCALID_WINGULL
# 23 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 24 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 25 "data/maps/FortreeCity_House4/scripts.pory"

# 26 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullOnErrand::
# 27 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 28 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 29 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_AskedWingullToRunErrand, MSGBOX_DEFAULT
# 30 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 31 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 32 "data/maps/FortreeCity_House4/scripts.pory"

# 33 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullReturned::
# 34 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 35 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 36 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb, MSGBOX_DEFAULT
# 37 "data/maps/FortreeCity_House4/scripts.pory"
	giveitem ITEM_MENTAL_HERB
# 38 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 39 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_MENTAL_HERB
# 40 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 41 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 42 "data/maps/FortreeCity_House4/scripts.pory"

# 43 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_ReceivedMentalHerb::
# 44 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 45 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 46 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_FriendsFarAwayThanksToWingull, MSGBOX_DEFAULT
# 47 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 48 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 49 "data/maps/FortreeCity_House4/scripts.pory"

# 50 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Movement_WingullExit:
# 51 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_down
# 52 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_down
# 53 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_right
# 54 "data/maps/FortreeCity_House4/scripts.pory"
	walk_in_place_faster_down
# 55 "data/maps/FortreeCity_House4/scripts.pory"
	delay_8
# 56 "data/maps/FortreeCity_House4/scripts.pory"
	step_end
# 57 "data/maps/FortreeCity_House4/scripts.pory"

# 58 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Wingull::
# 59 "data/maps/FortreeCity_House4/scripts.pory"
	lock
# 60 "data/maps/FortreeCity_House4/scripts.pory"
	faceplayer
# 61 "data/maps/FortreeCity_House4/scripts.pory"
	waitse
# 62 "data/maps/FortreeCity_House4/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 63 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_Wingull, MSGBOX_DEFAULT
# 64 "data/maps/FortreeCity_House4/scripts.pory"
	waitmoncry
# 65 "data/maps/FortreeCity_House4/scripts.pory"
	release
# 66 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 67 "data/maps/FortreeCity_House4/scripts.pory"

# 68 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_BringsWorldCloserTogether:
# 69 "data/maps/FortreeCity_House4/scripts.pory"
	.string "和宝可梦在一起，\n"
# 70 "data/maps/FortreeCity_House4/scripts.pory"
	.string "人会交到更多朋友。\p"
# 71 "data/maps/FortreeCity_House4/scripts.pory"
	.string "世界也因此更近了。\n"
# 72 "data/maps/FortreeCity_House4/scripts.pory"
	.string "我觉得这很美好！$"
# 73 "data/maps/FortreeCity_House4/scripts.pory"

# 74 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_GoBirdPokemon:
# 75 "data/maps/FortreeCity_House4/scripts.pory"
	.string "就是现在！\n"
# 76 "data/maps/FortreeCity_House4/scripts.pory"
	.string "上吧，鸟宝可梦！$"
# 77 "data/maps/FortreeCity_House4/scripts.pory"

# 78 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_AskedWingullToRunErrand:
# 79 "data/maps/FortreeCity_House4/scripts.pory"
	.string "嘿嘿，我让我的长翅鸥\n"
# 80 "data/maps/FortreeCity_House4/scripts.pory"
	.string "去跑腿了。$"
# 81 "data/maps/FortreeCity_House4/scripts.pory"

# 82 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb:
# 83 "data/maps/FortreeCity_House4/scripts.pory"
	.string "好！\n"
# 84 "data/maps/FortreeCity_House4/scripts.pory"
	.string "欢迎回来，长翅鸥！\p"
# 85 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Huh？这是什么？\n"
# 86 "data/maps/FortreeCity_House4/scripts.pory"
	.string "它拿着什么？\p"
# 87 "data/maps/FortreeCity_House4/scripts.pory"
	.string "精神香草？\n"
# 88 "data/maps/FortreeCity_House4/scripts.pory"
	.string "一定是在哪儿捡的。\p"
# 89 "data/maps/FortreeCity_House4/scripts.pory"
	.string "不过我不是训练家，\n"
# 90 "data/maps/FortreeCity_House4/scripts.pory"
	.string "这个给你吧。$"
# 91 "data/maps/FortreeCity_House4/scripts.pory"

# 92 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_FriendsFarAwayThanksToWingull:
# 93 "data/maps/FortreeCity_House4/scripts.pory"
	.string "多亏我的长翅鸥，\n"
# 94 "data/maps/FortreeCity_House4/scripts.pory"
	.string "我在远方也有朋友。$"
# 95 "data/maps/FortreeCity_House4/scripts.pory"

# 96 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_Wingull:
# 97 "data/maps/FortreeCity_House4/scripts.pory"
	.string "长翅鸥：呲哟！$"
