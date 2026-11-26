# 1 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 2 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 4 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_MapScripts::
# 5 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentCorridor_OnFrame
# 6 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.byte 0
# 7 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 8 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_OnFrame:
# 9 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor
# 10 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.2byte 0
# 11 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 12 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor::
# 13 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	lockall
# 14 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 15 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
# 16 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
# 17 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 18 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	opendoor 2, 1
# 19 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 20 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor
# 21 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor
# 22 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 23 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	closedoor 2, 1
# 24 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 25 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 26 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM, 6, 5
# 27 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitstate
# 28 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	releaseall
# 29 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	end
# 30 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 31 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor:
# 32 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 33 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 34 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 35 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 36 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	step_end
# 37 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 38 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor:
# 39 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 40 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor:
# 41 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 42 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	set_invisible
# 43 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	step_end
# 44 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 45 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 46 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
@ Leftover text from when this was a Contest Hall in R/S
# 47 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
@ Unused
# 48 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_ContestHall_Text_WhichContestYouEntering:
# 49 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "你要参加哪一项\n"
# 50 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "华丽大赛？要听建议吗？\p"
# 51 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "比如可爱大赛，第一轮\n"
# 52 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "评审我想并不只是\l"
# 53 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "看它有多可爱。\p"
# 54 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "你得琢磨出更好的\n"
# 55 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "培养宝可梦的方法。$"
# 56 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 57 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
@ Unused
# 58 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_ContestHall_Text_RaisedMonToBeCute:
# 59 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "我把宝可梦培养得\n"
# 60 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "很可爱。\p"
# 61 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "我发现竟然可以把\n"
# 62 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "宝可梦带进\l"
# 63 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "可爱大赛！\p"
# 64 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "用心培养真是\n"
# 65 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "太好了……$"
# 66 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 67 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
@ Unused
# 68 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_ContestHall_Text_MyMonRules:
# 69 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "我的宝可梦最厉害！\p"
# 70 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "它又酷又强壮，还可爱、\n"
# 71 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "聪明、美丽。简直完美！\p"
# 72 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "我干脆把每一项大赛\n"
# 73 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "都赢一遍好了。$"
# 74 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 75 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
@ Unused
# 76 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_ContestHall_Text_NormalRankStage:
# 77 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "宝可梦华丽大赛\n"
# 78 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "普通级别会场！$"
