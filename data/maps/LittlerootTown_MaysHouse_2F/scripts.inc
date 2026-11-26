# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts::
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 8, 2
# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret::
# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayEnters
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth::
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth::
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest::
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast::
# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast
# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters:
# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 198 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 199 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 209 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 210 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 216 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 217 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 227 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 228 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 236 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 237 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival::
# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_May
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_Brendan
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 246 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 247 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May::
# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 254 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 255 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 261 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
# 262 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 269 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 270 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 281 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 282 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 290 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 291 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 292 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 296 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 300 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 303 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 304 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 305 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 306 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 307 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 310 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 311 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 312 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 313 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYou:
# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "嗯？\n"
# 316 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "你……你是谁？\p"
# 317 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\p"
# 318 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "哦，你是{PLAYER}。\n"
# 319 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "原来你今天搬来。\p"
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "嗯……我叫小遥。\n"
# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "很高兴见到你！\p"
# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我……\n"
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我有个梦想，就是和\l"
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "全世界的宝可梦\l"
# 325 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "成为朋友。\p"
# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我……我从小田卷博士，\n"
# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "也就是我爸那里\l"
# 328 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "听说过你，{PLAYER}。\p"
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我一直希望你会是个\n"
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "亲切的人，希望\l"
# 331 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我们能成为朋友。\p"
# 332 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "哦，这好傻，对吧？\n"
# 333 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我……我才刚认识你。\p"
# 334 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "呵呵……\p"
# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "哦，不好！我忘了！\p"
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我该去帮爸爸抓野生\n"
# 337 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "宝可梦的，毕竟我\l"
# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "才刚拿到我的\l"
# 339 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "第一只宝可梦！\p"
# 340 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}，回头见！$"
# 341 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 342 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady:
# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "宝可梦完全恢复！\n"
# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "道具准备好，还有……$"
# 345 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYou:
# 347 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "嘿！\n"
# 348 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "你……\p"
# 349 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "你是谁？\p"
# 350 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "哦，你是{PLAYER}吧？\n"
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "搬到隔壁来了？\p"
# 352 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我爸爸小田卷博士说，\n"
# 353 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我们的新邻居是\l"
# 354 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "道馆馆主的孩子，\l"
# 355 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "真酷。\p"
# 356 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我叫佑树。\n"
# 357 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "那么，你好，邻居！\p"
# 358 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "嗯？嘿，{PLAYER}，\n"
# 359 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "你没有宝可梦吗？\p"
# 360 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我该去帮爸爸抓野生\n"
# 361 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "宝可梦，毕竟我\l"
# 362 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "才刚拿到我的\l"
# 363 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "第一只宝可梦！\p"
# 364 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "你该去跟他说说，\n"
# 365 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "看看能不能也弄到\l"
# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "属于你的宝可梦！$"
# 367 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 368 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady:
# 369 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "宝可梦完全恢复……\n"
# 370 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "道具都装好，还有……$"
# 371 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 372 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall:
# 373 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "这是{RIVAL}的精灵球！\p"
# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "最好别动它。$"
# 375 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 376 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
# 377 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "小遥：{PLAYER}！\p"
# 378 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我刚才在看我的\n"
# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "宝可梦图鉴。\p"
# 380 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "还有好多宝可梦\n"
# 381 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我见过却没抓到。\p"
# 382 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "还有很多我想\n"
# 383 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "应该会进化的。\p"
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "不知道下次该去\n"
# 385 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "哪儿抓宝可梦呢？$"
# 386 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 387 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext:
# 388 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "小遥：不知道下次该去\n"
# 389 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "哪儿抓宝可梦呢？\p"
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "要是我们碰上了，\n"
# 391 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "不是很有趣吗，{PLAYER}？$"
# 392 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 393 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
# 394 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "佑树：嘿，是{PLAYER}。\p"
# 395 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我刚才在看我的\n"
# 396 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "宝可梦图鉴。\p"
# 397 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "我知道还有好多宝可梦\n"
# 398 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "要抓，不过\l"
# 399 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "这份图鉴看起来\l"
# 400 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "挺不错。\p"
# 401 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "看着这份图鉴，\n"
# 402 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "又让我想上路了。$"
# 403 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 404 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
# 405 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "佑树：我正为难该去\n"
# 406 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "哪儿抓下一批\l"
# 407 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "宝可梦。\p"
# 408 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "嘿，{PLAYER}，我出去\n"
# 409 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "抓宝可梦的时候\l"
# 410 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "要是碰到你，你愿意\l"
# 411 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "的话我可以\l"
# 412 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "跟你打一场。$"
