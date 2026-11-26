# 1 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
.set LOCALID_OWNER, 1
# 3 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 4 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_MapScripts::
# 5 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 7 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner::
# 8 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 9 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear
# 10 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted
# 11 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot, MSGBOX_DEFAULT
# 12 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FacePlayer
# 13 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua, MSGBOX_DEFAULT
# 15 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 16 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FaceOriginalDirection
# 17 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 19 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 20 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 21 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted::
# 22 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem, MSGBOX_DEFAULT
# 23 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FacePlayer
# 24 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted, MSGBOX_DEFAULT
# 26 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 27 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FaceOriginalDirection
# 28 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 30 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 31 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 32 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear::
# 33 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar, MSGBOX_DEFAULT
# 34 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FacePlayer
# 35 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner, MSGBOX_DEFAULT
# 37 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 38 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FaceOriginalDirection
# 39 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 42 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 43 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV::
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 45 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	playse SE_PIN
# 46 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_ExclamationMark
# 47 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 48 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_Delay48
# 49 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 51 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 52 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV, MSGBOX_DEFAULT
# 53 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 54 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV
# 55 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer
# 56 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn
# 58 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	release
# 60 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 61 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 62 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV:
# 63 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_right
# 64 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lock_facing_direction
# 65 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_left
# 66 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	unlock_facing_direction
# 67 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 68 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 69 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer:
# 70 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_up
# 71 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 72 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 73 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn:
# 74 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_down
# 75 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_down
# 76 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_up
# 77 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 78 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 79 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot:
# 80 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "嗯，所以他们用宝可梦当\n"
# 81 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "招牌，让客人翻了一倍？\p"
# 82 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hm，也许我该养一只可爱\n"
# 83 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "的宝可梦当旅馆吉祥物。\p"
# 84 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "不知道这样能不能\n"
# 85 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "吸引更多客人来住？$"
# 86 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 87 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua:
# 88 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "哦，抱歉抱歉！\n"
# 89 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "我看电视看得太入迷了！\p"
# 90 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "自从水舰队来了镇上，\n"
# 91 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "游客都不来了。$"
# 92 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 93 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV:
# 94 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "喂，往前点！\n"
# 95 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "我看不见电视了！$"
# 96 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 97 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem:
# 98 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "厉害！你说一只宝可梦\n"
# 99 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "找到了别人丢的东西？\p"
# 100 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "真了不起。要是有那么\n"
# 101 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "聪明的宝可梦……\p"
# 102 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "客人落下的东西就都能\n"
# 103 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "找回来了……$"
# 104 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 105 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted:
# 106 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "哦，抱歉抱歉！\n"
# 107 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "我看电视看得太入迷了！\p"
# 108 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "我听说有人端了\n"
# 109 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "水舰队的基地。\p"
# 110 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "多亏这样，我们刚接到\n"
# 111 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "一个大批客人的预订。\p"
# 112 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "是家叫……呃……\n"
# 113 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "GAME什么什么公司……$"
# 114 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 115 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar:
# 116 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "厉害！一只看家的宝可梦\n"
# 117 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "抓到了小偷？\p"
# 118 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "真了不起。要是有强壮\n"
# 119 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "的宝可梦当警卫……\p"
# 120 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "我们就能给客人提供\n"
# 121 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "更大的安全保障。$"
# 122 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 123 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner:
# 124 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "哦，抱歉抱歉！\n"
# 125 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "我看电视看得太入迷了！\p"
# 126 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "哦，对了。刚才有一大群\n"
# 127 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "客人到了。\p"
# 128 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "他们登记的名字是\n"
# 129 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "GAME FREAK，\l"
# 130 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "想必是做游戏的。\p"
# 131 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "哎呀，我得赶紧去\n"
# 132 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "准备他们的晚饭！$"
