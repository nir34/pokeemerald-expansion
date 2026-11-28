# 1 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 2 "data/maps/SeafloorCavern_Entrance/scripts.pory"
.set LOCALID_GRUNT, 1
# 3 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 4 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_MapScripts::
# 5 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafloorCavern_Entrance_OnResume
# 6 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.byte 0
# 7 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 8 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_OnResume:
# 9 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 10 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 11 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 12 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 13 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt::
# 14 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	lockall
# 15 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1, SeafloorCavern_Entrance_EventScript_GruntSpeechShort
# 16 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitse
# 17 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	playse SE_PIN
# 18 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_ExclamationMark
# 19 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 20 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_Delay48
# 21 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 22 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 20
# 23 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 24 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 25 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 26 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 30
# 27 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
# 28 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 29 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep, MSGBOX_DEFAULT
# 30 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 31 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 33 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 34 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 35 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 36 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort::
# 37 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 38 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 39 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 40 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort, MSGBOX_DEFAULT
# 41 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 42 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 43 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 44 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 45 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 46 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 47 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast::
# 48 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterLeft
# 49 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 50 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 51 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 52 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest::
# 53 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterRight
# 54 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 55 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 56 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 57 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth::
# 58 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 59 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 60 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 61 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 62 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep:
# 63 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "嘿！\n"
# 64 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "我认得你的脸！\p"
# 65 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "你在这儿，就说明你又想\n"
# 66 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "来碍我们的事！\p"
# 67 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "像你这样的小鬼，真以为\n"
# 68 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "能对抗水舰队？\p"
# 69 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "你早了大概\n"
# 70 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "一万亿年！\p"
# 71 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "你倒是很适合\n"
# 72 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "熔岩队那种货色！\p"
# 73 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "说到熔岩队，我听说有人\n"
# 74 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "在崎岖小径附近\l"
# 75 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "看到他们。\p"
# 76 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "那群家伙，在海边\n"
# 77 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "看起来真是不搭！$"
# 78 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 79 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort:
# 80 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "像你这样的小鬼，真以为\n"
# 81 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "能对抗水舰队？\p"
# 82 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "你早了大概\n"
# 83 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "一万亿年！\p"
# 84 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "你倒是很适合\n"
# 85 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "熔岩队那种货色！\p"
# 86 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "说到熔岩队，我听说有人\n"
# 87 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "在崎岖小径附近\l"
# 88 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "看到他们。\p"
# 89 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "那群家伙，在海边\n"
# 90 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "看起来真是不搭！$"
