# 1 "data/maps/Route112/scripts.pory"

# 2 "data/maps/Route112/scripts.pory"
.set LOCALID_GRUNT_1, 1
# 3 "data/maps/Route112/scripts.pory"
.set LOCALID_GRUNT_2, 6
# 4 "data/maps/Route112/scripts.pory"

# 5 "data/maps/Route112/scripts.pory"
Route112_MapScripts::
# 6 "data/maps/Route112/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
# 7 "data/maps/Route112/scripts.pory"
	.byte 0
# 8 "data/maps/Route112/scripts.pory"

# 9 "data/maps/Route112/scripts.pory"
Route112_OnTransition:
# 10 "data/maps/Route112/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 11 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 12 "data/maps/Route112/scripts.pory"
	end
# 13 "data/maps/Route112/scripts.pory"

# 14 "data/maps/Route112/scripts.pory"
Route112_EventScript_MagmaGrunts::
# 15 "data/maps/Route112/scripts.pory"
	lockall
# 16 "data/maps/Route112/scripts.pory"
	delay 40
# 17 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 18 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route112/scripts.pory"
	delay 20
# 20 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
# 21 "data/maps/Route112/scripts.pory"
	closemessage
# 22 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 23 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route112/scripts.pory"
	delay 40
# 25 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 26 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route112/scripts.pory"
	delay 20
# 28 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
# 29 "data/maps/Route112/scripts.pory"
	closemessage
# 30 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 31 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route112/scripts.pory"
	delay 40
# 33 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 34 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route112/scripts.pory"
	delay 20
# 36 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
# 37 "data/maps/Route112/scripts.pory"
	closemessage
# 38 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 39 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route112/scripts.pory"
	delay 40
# 41 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route112/scripts.pory"
	delay 20
# 44 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
# 45 "data/maps/Route112/scripts.pory"
	closemessage
# 46 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 47 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route112/scripts.pory"
	releaseall
# 49 "data/maps/Route112/scripts.pory"
	end
# 50 "data/maps/Route112/scripts.pory"

# 51 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneyCableCarSign::
# 52 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
# 53 "data/maps/Route112/scripts.pory"
	end
# 54 "data/maps/Route112/scripts.pory"

# 55 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneySign::
# 56 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
# 57 "data/maps/Route112/scripts.pory"
	end
# 58 "data/maps/Route112/scripts.pory"

# 59 "data/maps/Route112/scripts.pory"
Route112_EventScript_RouteSignLavaridge::
# 60 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
# 61 "data/maps/Route112/scripts.pory"
	end
# 62 "data/maps/Route112/scripts.pory"

# 63 "data/maps/Route112/scripts.pory"
Route112_EventScript_Hiker::
# 64 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
# 65 "data/maps/Route112/scripts.pory"
	end
# 66 "data/maps/Route112/scripts.pory"

# 67 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent::
# 68 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
# 69 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 70 "data/maps/Route112/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route112_EventScript_RematchTrent
# 71 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
# 72 "data/maps/Route112/scripts.pory"
	release
# 73 "data/maps/Route112/scripts.pory"
	end
# 74 "data/maps/Route112/scripts.pory"

# 75 "data/maps/Route112/scripts.pory"
Route112_EventScript_RegisterTrent::
# 76 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 77 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 79 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
# 80 "data/maps/Route112/scripts.pory"
	release
# 81 "data/maps/Route112/scripts.pory"
	end
# 82 "data/maps/Route112/scripts.pory"

# 83 "data/maps/Route112/scripts.pory"
Route112_EventScript_RematchTrent::
# 84 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 85 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route112/scripts.pory"
	end
# 87 "data/maps/Route112/scripts.pory"

# 88 "data/maps/Route112/scripts.pory"
Route112_EventScript_Larry::
# 89 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 90 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route112/scripts.pory"
	end
# 92 "data/maps/Route112/scripts.pory"

# 93 "data/maps/Route112/scripts.pory"
Route112_EventScript_Carol::
# 94 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 95 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/Route112/scripts.pory"
	end
# 97 "data/maps/Route112/scripts.pory"

# 98 "data/maps/Route112/scripts.pory"
Route112_EventScript_Bryant::
# 99 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 100 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/Route112/scripts.pory"
	end
# 102 "data/maps/Route112/scripts.pory"

# 103 "data/maps/Route112/scripts.pory"
Route112_EventScript_Shayla::
# 104 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 105 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/Route112/scripts.pory"
	end
# 107 "data/maps/Route112/scripts.pory"

# 108 "data/maps/Route112/scripts.pory"
Route112_Text_LeaderGoingToAwakenThing:
# 109 "data/maps/Route112/scripts.pory"
	.string "喂，老大真的要\n"
# 110 "data/maps/Route112/scripts.pory"
	.string "让那东西苏醒吗？$"
# 111 "data/maps/Route112/scripts.pory"

# 112 "data/maps/Route112/scripts.pory"
Route112_Text_YeahWeNeedMeteorite:
# 113 "data/maps/Route112/scripts.pory"
	.string "好像是吧。不过我听说\n"
# 114 "data/maps/Route112/scripts.pory"
	.string "那需要陨石。$"
# 115 "data/maps/Route112/scripts.pory"

# 116 "data/maps/Route112/scripts.pory"
Route112_Text_OhThatsWhyCrewWentToFallarbor:
# 117 "data/maps/Route112/scripts.pory"
	.string "哦，我明白了。所以\n"
# 118 "data/maps/Route112/scripts.pory"
	.string "其他人去了秋叶镇。$"
# 119 "data/maps/Route112/scripts.pory"

# 120 "data/maps/Route112/scripts.pory"
Route112_Text_CantLetAnyonePassUntilTheyreBack:
# 121 "data/maps/Route112/scripts.pory"
	.string "没错。在他们回来之前，\n"
# 122 "data/maps/Route112/scripts.pory"
	.string "我们不许任何人通过。$"
# 123 "data/maps/Route112/scripts.pory"

# 124 "data/maps/Route112/scripts.pory"
Route112_Text_NotEasyToGetBackToLavaridge:
# 125 "data/maps/Route112/scripts.pory"
	.string "唉，我想去紫堇市，\n"
# 126 "data/maps/Route112/scripts.pory"
	.string "可从这些台阶跳下去，\l"
# 127 "data/maps/Route112/scripts.pory"
	.string "想回釜炎镇就难了。$"
# 128 "data/maps/Route112/scripts.pory"

# 129 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneyCableCarSign:
# 130 "data/maps/Route112/scripts.pory"
	.string "烟囱山缆车\n"
# 131 "data/maps/Route112/scripts.pory"
	.string "“向上走一小段就到！”$"
# 132 "data/maps/Route112/scripts.pory"

# 133 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneySign:
# 134 "data/maps/Route112/scripts.pory"
	.string "烟囱山\p"
# 135 "data/maps/Route112/scripts.pory"
	.string "“前往釜炎镇或山顶，\n"
# 136 "data/maps/Route112/scripts.pory"
	.string "请乘坐缆车。”$"
# 137 "data/maps/Route112/scripts.pory"

# 138 "data/maps/Route112/scripts.pory"
Route112_Text_RouteSignLavaridge:
# 139 "data/maps/Route112/scripts.pory"
	.string "112号道路\n"
# 140 "data/maps/Route112/scripts.pory"
	.string "{LEFT_ARROW} 釜炎镇$"
