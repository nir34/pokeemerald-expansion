# 1 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 2 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 4 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_MapScripts::
# 5 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_BattleTentCorridor_OnFrame
# 6 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.byte 0
# 7 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 8 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_OnFrame:
# 9 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, FallarborTown_BattleTentCorridor_EventScript_EnterCorridor
# 10 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.2byte 0
# 11 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 12 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_EventScript_EnterCorridor::
# 13 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	lockall
# 14 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 15 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT, FallarborTown_BattleTentCorridor_Movement_WalkToDoor
# 16 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_BattleTentCorridor_Movement_WalkToDoor
# 17 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 18 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	opendoor 2, 1
# 19 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 20 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT, FallarborTown_BattleTentCorridor_Movement_AttendantEnterDoor
# 21 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_BattleTentCorridor_Movement_PlayerEnterDoor
# 22 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 23 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	closedoor 2, 1
# 24 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 25 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 26 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM, 4, 4
# 27 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitstate
# 28 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	releaseall
# 29 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	end
# 30 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 31 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_Movement_WalkToDoor:
# 32 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 33 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 34 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 35 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 36 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	step_end
# 37 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 38 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_Movement_PlayerEnterDoor:
# 39 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 40 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_Movement_AttendantEnterDoor:
# 41 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 42 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	set_invisible
# 43 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	step_end
# 44 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 45 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
@ Leftover text from when this was a Contest Hall in R/S
# 46 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
@ Unused
# 47 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_ContestHall_Text_DoAllRightInPreliminary:
# 48 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "预赛我们表现还行，\n"
# 49 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "可表演环节总赢不了……\p"
# 50 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "也许意思是，我得看看\n"
# 51 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "别的选手在怎么做……$"
# 52 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 53 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
@ Unused
# 54 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_ContestHall_Text_MonAllTheseRibbons:
# 55 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "看！\n"
# 56 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "我的宝可梦赢了这么多缎带！\p"
# 57 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "你的宝可梦赢过缎带吗？\n"
# 58 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "可以在导航里查看。$"
# 59 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 60 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
@ Unused
# 61 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_ContestHall_Text_CantWinEverywhere:
# 62 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "我打不赢道馆馆主……\p"
# 63 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "也赢不了任何大赛……\p"
# 64 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "我东奔西跑，\n"
# 65 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "结果全是白费……$"
# 66 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 67 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
@ Unused
# 68 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_ContestHall_Text_SuperRankStage:
# 69 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "宝可梦华丽大赛\n"
# 70 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "超级级别会场！$"
