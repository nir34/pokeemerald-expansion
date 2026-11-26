# 1 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 4 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts::
# 5 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerMultiPartnerRoom_OnResume
# 6 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition
# 7 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp
# 8 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame
# 9 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnResume:
# 12 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	pyramid_resetparty
# 13 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 14 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 15 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition:
# 16 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner
# 17 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
# 18 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
# 19 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
# 20 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
# 21 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
# 22 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
# 23 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1
# 24 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
# 25 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_loadpartners
# 26 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner::
# 29 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BOY_1
# 30 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BOY_1
# 31 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_BOY_1
# 32 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_BOY_1
# 33 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_BOY_1
# 34 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_BOY_1
# 35 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_BOY_1
# 36 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_BOY_1
# 37 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_3, 1
# 39 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 10, 2
# 40 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 41 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 42 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp:
# 43 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth
# 44 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.2byte 0
# 45 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 46 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth::
# 47 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 48 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 49 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 50 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame:
# 51 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom
# 52 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom
# 53 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.2byte 0
# 54 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 55 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom::
# 56 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lockall
# 57 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_3, 0
# 58 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator
# 59 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 60 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 61 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom::
# 62 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lockall
# 63 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom
# 64 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 65 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit
# 66 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 67 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	copyobjectxytoperm LOCALID_ATTENDANT
# 68 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 69 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 70 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner, MSGBOX_DEFAULT
# 71 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	special HealPlayerParty
# 72 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 73 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	releaseall
# 74 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 75 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 76 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom:
# 77 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_down
# 78 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 79 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 80 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit:
# 81 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_left
# 82 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_in_place_faster_down
# 83 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 84 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 85 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant::
# 86 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 87 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 88 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner
# 89 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 90 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 91 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge
# 92 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2, MSGBOX_DEFAULT
# 93 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 94 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 95 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 96 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge::
# 97 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 98 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
# 99 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 100 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 101 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator::
# 102 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner, MSGBOX_DEFAULT
# 103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closemessage
# 104 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, Common_Movement_WalkInPlaceFasterUp
# 105 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 106 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	opendoor 10, 1
# 107 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitdooranim
# 108 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator
# 109 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closedoor 10, 1
# 110 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitdooranim
# 111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 112 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitstate
# 113 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	releaseall
# 114 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator::
# 117 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator
# 119 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 120 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 122 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Unused
# 123 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorEast:
# 124 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorEast
# 126 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 127 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 128 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 129 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Unused
# 130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorWest:
# 131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest
# 133 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 134 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 135 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 136 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator:
# 137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 138 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 139 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 140 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 141 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Functionally unused
# 143 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorEast:
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_right
# 145 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 147 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 148 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 149 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Functionally unused
# 150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest:
# 151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_left
# 152 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 153 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 154 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 155 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 156 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator:
# 157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 158 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 160 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 161 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner1::
# 162 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 163 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 165 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 167 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 168 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner::
# 169 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 170 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_INTRO
# 171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_MON1
# 174 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 175 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 176 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_MON2_ASK
# 177 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 179 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	switch VAR_RESULT
# 180 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 181 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 182 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_ACCEPT
# 183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 184 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 185 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closemessage
# 186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call_if_ne VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit
# 187 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExitSouth
# 188 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 189 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 190 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM, 10, 3
# 191 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitstate
# 192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 193 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 194 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 195 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner::
# 196 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_REJECT
# 197 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 198 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 199 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 200 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 202 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit::
# 203 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit
# 204 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 205 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 207 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExitSouth::
# 208 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExitSouth
# 209 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 210 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 211 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 212 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit:
# 213 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 214 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 215 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 217 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 218 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 219 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 220 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 221 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 222 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExitSouth:
# 223 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_left
# 224 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 225 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 226 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 227 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 228 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 229 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 230 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 232 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 233 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner2::
# 234 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 235 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 236 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 237 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 238 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 239 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 240 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner3::
# 241 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 242 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 243 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 2
# 244 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 245 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 246 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner4::
# 248 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 249 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 250 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 3
# 251 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 252 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 254 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner5::
# 255 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 256 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 257 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 4
# 258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 259 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 260 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 261 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner6::
# 262 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 263 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 264 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 5
# 265 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 266 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 267 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner7::
# 269 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 270 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 271 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 6
# 272 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 273 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 274 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 275 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner8::
# 276 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 277 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 278 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 7
# 279 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 280 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 281 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 282 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner:
# 283 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "请从聚集在这里的训练家\n"
# 284 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "里找一位搭档。$"
# 285 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 286 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner:
# 287 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}，你还没找到\n"
# 288 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "接力对战的搭档。\p"
# 289 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你想放弃寻找，回\n"
# 290 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "接待柜台吗？$"
# 291 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 292 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2:
# 293 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "那么，请从聚集在这里的\n"
# 294 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "训练家里找一位搭档。$"
# 295 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 296 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner::
# 297 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢你选择搭档。\p"
# 298 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我现在带你去你的\n"
# 299 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "多人对战房间。$"
# 300 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Intro::
# 302 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}的第{STR_VAR_2}号徒弟。\n"
# 303 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你可以叫我{STR_VAR_3}！$"
# 304 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 305 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon1::
# 306 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "听了{STR_VAR_1}的建议，我带了一只\n"
# 307 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_2}的{STR_VAR_3}和"
# 308 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon2Ask::
# 310 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 311 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "请让我和你一起组队。$"
# 312 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 313 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Accept::
# 314 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢！\n"
# 315 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我马上去登记。$"
# 316 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 317 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Reject::
# 318 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我真的很想和你\n"
# 319 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "组队，{PLAYER}……$"
# 320 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 321 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Intro::
# 322 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}的第{STR_VAR_2}号徒弟。\n"
# 323 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我叫{STR_VAR_3}。$"
# 324 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 325 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon1::
# 326 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我听了{STR_VAR_1}的建议，选了一只\n"
# 327 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_2}的{STR_VAR_3}和"
# 328 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 329 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon2Ask::
# 330 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 331 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "请和我组队吧！$"
# 332 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 333 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Accept::
# 334 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "非常感谢！\n"
# 335 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我很快就登记完！$"
# 336 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 337 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Reject::
# 338 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}，我本来希望\n"
# 339 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "能和你搭档……$"
# 340 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 341 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Intro::
# 342 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗯，我叫{STR_VAR_3}，我是\n"
# 343 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}的第{STR_VAR_2}号徒弟。\p"
# 344 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "抽鼻子……\p"
# 345 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "对不起！\n"
# 346 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "太紧张，我哭了……$"
# 347 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 348 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon1::
# 349 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3}给我建议，所以我有\n"
# 350 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 351 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 352 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon2Ask::
# 353 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 354 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "抽鼻子……\n"
# 355 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "求你，求求你和我组队！$"
# 356 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 357 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Accept::
# 358 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，真的？你愿意？\n"
# 359 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "太棒了！好耶！哦呼！\p"
# 360 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦……对不起……\n"
# 361 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我太高兴，哭了……\p"
# 362 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我马上去登记。\n"
# 363 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "请别走开！$"
# 364 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 365 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Reject::
# 366 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，可、可是……\n"
# 367 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "呜……哇啊啊啊！$"
# 368 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 369 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Intro::
# 370 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗨，你好！我叫{STR_VAR_3}！\n"
# 371 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}的第{STR_VAR_2}号徒弟！$"
# 372 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 373 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon1::
# 374 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3}推荐了我这队。\n"
# 375 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 376 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 377 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon2Ask::
# 378 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}，\n"
# 379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "这就是我带的！酷吧？\p"
# 380 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "来吧！\n"
# 381 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们组队！$"
# 382 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 383 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Accept::
# 384 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "耶！太好了！\n"
# 385 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好，我去登记，好吗？$"
# 386 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 387 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Reject::
# 388 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "唉，为什么？\n"
# 389 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我本想组队的，{PLAYER}！$"
# 390 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 391 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Intro::
# 392 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_3}，著名的{STR_VAR_1}\n"
# 393 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "的第{STR_VAR_2}号徒弟！$"
# 394 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 395 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon1::
# 396 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我向{STR_VAR_3}请教了。\n"
# 397 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}"
# 398 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 399 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon2Ask::
# 400 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "和一只使用{STR_VAR_1}的{STR_VAR_2}，\n"
# 401 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "这就是我这一对。\p"
# 402 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "请问，你愿意\n"
# 403 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "和我组队吗？$"
# 404 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 405 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Accept::
# 406 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢！\n"
# 407 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我马上登记！$"
# 408 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 409 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Reject::
# 410 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}，我一直希望\n"
# 411 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "能和你组队……$"
# 412 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 413 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Intro::
# 414 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗯……你愿意花时间\n"
# 415 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "跟我说话，我真的很高兴。\p"
# 416 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_3}。\n"
# 417 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}的第{STR_VAR_2}号徒弟……$"
# 418 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 419 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon1::
# 420 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3}给了我建议。\n"
# 421 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我很感激。\p"
# 422 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我的队伍是一只使用\n"
# 423 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}的{STR_VAR_2}和"
# 424 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 425 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon2Ask::
# 426 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\n"
# 427 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我知道这要求很多……\p"
# 428 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我觉得你不会愿意，\n"
# 429 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "不过能让我加入吗？$"
# 430 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 431 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Accept::
# 432 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "真的？我不敢相信！\n"
# 433 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "不敢相信你让我加入！\l"
# 434 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我……我不会让你失望！\p"
# 435 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗯……要是真的可以，我这就\n"
# 436 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "去登记！$"
# 437 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 438 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Reject::
# 439 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦……\n"
# 440 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我就知道我还不够格……$"
# 441 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 442 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Intro::
# 443 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗨，我是{STR_VAR_3}。\n"
# 444 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}的第{STR_VAR_2}号徒弟！$"
# 445 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 446 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon1::
# 447 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3}告诉我组这个\n"
# 448 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "队伍会不错：\l"
# 449 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}"
# 450 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 451 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon2Ask::
# 452 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "和一只懂得使用\n"
# 453 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}的{STR_VAR_2}。\p"
# 454 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "不错吧？\n"
# 455 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "想让我跟你组队吗？$"
# 456 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 457 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Accept::
# 458 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好，很高兴加入！\n"
# 459 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "希望你别给我添乱！\l"
# 460 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我现在去登记。$"
# 461 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 462 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Reject::
# 463 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗯？你为什么拒绝我？\n"
# 464 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你根本不会看人！$"
# 465 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 466 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Intro::
# 467 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_3}，我是铁人三项选手。\n"
# 468 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我每天都很忙：慢跑、训练，\l"
# 469 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "还有说唱。\p"
# 470 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我恰好还是{STR_VAR_1}的\n"
# 471 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "第{STR_VAR_2}号徒弟。$"
# 472 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 473 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon1::
# 474 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "这是{STR_VAR_3}推荐的。\n"
# 475 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}"
# 476 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 477 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon2Ask::
# 478 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "和一只使用{STR_VAR_1}的\n"
# 479 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}。\p"
# 480 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我虽然很忙，还是很用心\n"
# 481 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "培养它们。\p"
# 482 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们组队试试吧！$"
# 483 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 484 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Accept::
# 485 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢，这才对！\n"
# 486 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去登记，你等一会儿，好吗？$"
# 487 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 488 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Reject::
# 489 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我可是从百忙中抽空来的！\n"
# 490 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "饶了我吧！$"
# 491 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 492 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Intro::
# 493 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗨！\n"
# 494 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "最近怎么样？\p"
# 495 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_3}，{STR_VAR_1}的\n"
# 496 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "第{STR_VAR_2}号徒弟。很高兴见到你！$"
# 497 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 498 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon1::
# 499 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "听我说，听我说！你得听听\n"
# 500 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3}推荐了什么宝可梦。\l"
# 501 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 502 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 503 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon2Ask::
# 504 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\n"
# 505 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我当然培养得超棒！\p"
# 506 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "怎么样，要组队吗？\n"
# 507 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一定是最佳组合！$"
# 508 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 509 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Accept::
# 510 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "耶，我觉得会很有意思！\n"
# 511 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去登记！$"
# 512 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 513 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Reject::
# 514 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，你真坏！\n"
# 515 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我可是有人推荐的哦。$"
# 516 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 517 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Intro::
# 518 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "请允许我自我介绍。\n"
# 519 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_3}。\p"
# 520 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}的\n"
# 521 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "第{STR_VAR_2}号徒弟。$"
# 522 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 523 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon1::
# 524 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我听取了{STR_VAR_3}的\n"
# 525 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "高见，培养了一只\l"
# 526 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_1}的{STR_VAR_2}和"
# 527 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 528 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon2Ask::
# 529 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 530 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "请答应和我组队！$"
# 531 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 532 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Accept::
# 533 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦……我好高兴！\n"
# 534 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我一定全力以赴！\p"
# 535 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我这就去登记！\n"
# 536 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "请稍等！$"
# 537 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 538 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Reject::
# 539 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我一直盼着能和\n"
# 540 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你组队，{PLAYER}……$"
# 541 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 542 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Intro::
# 543 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "呀！你跟我说话了！\n"
# 544 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我……我太高兴了！\p"
# 545 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_3}！我是{STR_VAR_1}的\n"
# 546 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "第{STR_VAR_2}号徒弟！$"
# 547 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 548 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon1::
# 549 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "听了{STR_VAR_3}的建议，\n"
# 550 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我培养了一只使用{STR_VAR_1}的\l"
# 551 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}和"
# 552 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 553 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon2Ask::
# 554 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的\n"
# 555 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}。\p"
# 556 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "求你答应我的愿望！\n"
# 557 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我想当你的队友！$"
# 558 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 559 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Accept::
# 560 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "呀！我……我腿都软了！\n"
# 561 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "太谢谢你了！\l"
# 562 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我这就去登记！$"
# 563 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 564 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Reject::
# 565 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哇啊！你一点都不同情我吗？\n"
# 566 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "可这样你更酷了……$"
# 567 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 568 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Intro::
# 569 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哟嗬！我是{STR_VAR_1}的\n"
# 570 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "第{STR_VAR_2}号徒弟！\p"
# 571 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我叫{STR_VAR_3}，你好，你好！$"
# 572 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 573 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon1::
# 574 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我的师父{STR_VAR_3}推荐了\n"
# 575 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只精通{STR_VAR_1}的{STR_VAR_2}和"
# 576 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 577 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon2Ask::
# 578 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只精通{STR_VAR_1}的\n"
# 579 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}。\p"
# 580 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "不错吧？\n"
# 581 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你会跟我组队吧？$"
# 582 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 583 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Accept::
# 584 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好，太好了！\n"
# 585 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我赶快去登记！$"
# 586 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 587 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Reject::
# 588 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哇啊！\n"
# 589 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你真是个会算计的人，{PLAYER}！$"
# 590 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 591 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Intro::
# 592 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嘿！出大事了！今天是\n"
# 593 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "对战塔的最后一天！\p"
# 594 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "… … … … … …\n"
# 595 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我开玩笑的！\p"
# 596 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "大家都叫我{STR_VAR_3}，我也这么叫！\n"
# 597 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}的第1000号徒弟！\l"
# 598 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "其实是第{STR_VAR_2}号！$"
# 599 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 600 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon1::
# 601 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3}给了我建议。\n"
# 602 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_1}的{STR_VAR_2}和"
# 603 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 604 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon2Ask::
# 605 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_1}的{STR_VAR_2}。\n"
# 606 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "每种我都有十只！\l"
# 607 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "其实每种只有一只！\p"
# 608 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "怎么样？\n"
# 609 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "想跟我打接力对战吗？$"
# 610 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 611 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Accept::
# 612 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "耶！\n"
# 613 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "作为谢礼我送你一只宝可梦！\p"
# 614 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "开玩笑的！不过我真的会去\n"
# 615 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "登记，好吗？$"
# 616 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 617 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Reject::
# 618 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，好冷淡！我要把对战塔\n"
# 619 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "拆了！\p"
# 620 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "当然不会！$"
# 621 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 622 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Intro::
# 623 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嘿，我来摇滚一下！\n"
# 624 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "宝可梦，我掌控！\p"
# 625 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_3}，爱说唱的水手。\n"
# 626 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "别把我当成哭包！\p"
# 627 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}的第{STR_VAR_2}号徒弟。\n"
# 628 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "别急着把我打发走！$"
# 629 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 630 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon1::
# 631 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "听了{STR_VAR_3}的建议，\n"
# 632 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我组好了我骄傲的队伍！\l"
# 633 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}"
# 634 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 635 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon2Ask::
# 636 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "和一只使用{STR_VAR_1}的\n"
# 637 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}！\p"
# 638 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们的相遇值得纪念，\n"
# 639 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "来场接力对战庆祝吧！$"
# 640 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 641 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Accept::
# 642 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嘿，嘿，我喜欢你这风格！\n"
# 643 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "登记这件事，我去办！$"
# 644 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 645 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Reject::
# 646 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，嘿，{PLAYER}，太冷淡了！\n"
# 647 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我冒昧说一句！$"
# 648 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 649 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Intro::
# 650 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "耶呼！\n"
# 651 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，别跑！我只是闹着玩！\p"
# 652 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好！我是{STR_VAR_3}！\n"
# 653 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}的第{STR_VAR_2}号徒弟！$"
# 654 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 655 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon1::
# 656 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3}告诉我该怎么做。\n"
# 657 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "所以我选了一只使用{STR_VAR_1}的\l"
# 658 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}"
# 659 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 660 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon2Ask::
# 661 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "和一只使用{STR_VAR_1}的\n"
# 662 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}。\p"
# 663 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "那么，你觉得呢？\n"
# 664 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "来吧，让我开心一下！\p"
# 665 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "求你，我求你了！\n"
# 666 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "让我加入你，别让我难过！$"
# 667 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 668 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Accept::
# 669 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "耶哈！运气站在我这边！\n"
# 670 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "真让我高兴！\p"
# 671 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "在加入战斗之前，\n"
# 672 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我这就去登记！$"
# 673 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 674 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Reject::
# 675 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你拒绝我？\n"
# 676 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}，你让我皱眉头了！$"
# 677 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 678 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Intro::
# 679 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "咳咳！\p"
# 680 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，抱歉，我感冒了。\n"
# 681 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "不过我的宝可梦都没事。\p"
# 682 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我叫{STR_VAR_3}，{STR_VAR_1}的\n"
# 683 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "第{STR_VAR_2}号徒弟。咳咳！$"
# 684 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 685 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon1::
# 686 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我把{STR_VAR_3}的建议记在心上，\n"
# 687 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "组好了我的队伍——\l"
# 688 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 689 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 690 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon2Ask::
# 691 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 692 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我每天训练它们，\n"
# 693 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "风雨无阻。\p"
# 694 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "所以我大概才感冒了。\p"
# 695 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "这就是我的作风。\n"
# 696 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "想当我的队友吗？$"
# 697 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 698 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Accept::
# 699 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢，我真的很感激！\n"
# 700 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "咳咳！\l"
# 701 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去登记一下。$"
# 702 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 703 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Reject::
# 704 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，你不愿意？\n"
# 705 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}，我觉得我们很配。$"
# 706 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 707 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Intro::
# 708 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，你好！\n"
# 709 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "这真让人紧张。\p"
# 710 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_3}。\n"
# 711 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}的第{STR_VAR_2}号徒弟。$"
# 712 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 713 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon1::
# 714 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3}说这个队伍会不错——\n"
# 715 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 716 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 717 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon2Ask::
# 718 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 719 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我有点不好意思，\n"
# 720 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "可你能让我加入吗？$"
# 721 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 722 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Accept::
# 723 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，天啊，谢谢你！\n"
# 724 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我虽然害羞，但会尽全力！\p"
# 725 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去把登记办好。$"
# 726 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 727 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Reject::
# 728 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，请别说不！\n"
# 729 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我已经够不好意思了……$"
# 730 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 731 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Intro::
# 732 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_3}，一点不假。\n"
# 733 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}的第{STR_VAR_2}号徒弟。$"
# 734 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 735 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon1::
# 736 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3}推荐了我的队伍。\p"
# 737 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "因为建议听起来很诚恳，\n"
# 738 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我决定带上\l"
# 739 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_1}的{STR_VAR_2}和"
# 740 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 741 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon2Ask::
# 742 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 743 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "如果可以，我希望你接受\n"
# 744 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我当你的队友。$"
# 745 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 746 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Accept::
# 747 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你真要接受我？\n"
# 748 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "不然那就太糟了。\p"
# 749 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "既然你答应了，那还可以。\n"
# 750 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去给我们两个登记。$"
# 751 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 752 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Reject::
# 753 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗯？你到底为什么拒绝？\n"
# 754 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你这是在开玩笑吗？$"
# 755 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 756 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassIntro::
# 757 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，我是个少女！$"
# 758 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 759 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon1::
# 760 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我带的是一只使用{STR_VAR_1}的\n"
# 761 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}和一只"
# 762 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 763 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon2Ask::
# 764 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_1}的{STR_VAR_2}。\n"
# 765 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我身上就这些。\p"
# 766 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你愿意当我的队友吗？$"
# 767 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 768 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassAccept::
# 769 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢！\n"
# 770 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去登记！$"
# 771 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 772 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassReject::
# 773 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你不想当我的队友？\n"
# 774 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你以后会后悔的！$"
# 775 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 776 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterIntro::
# 777 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好！\p"
# 778 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是短裤小子{STR_VAR_1}！$"
# 779 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 780 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon1::
# 781 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "想知道我带了什么？\n"
# 782 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 783 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 784 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon2Ask::
# 785 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 786 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你会当我的队友吧？$"
# 787 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 788 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterAccept::
# 789 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "耶！\n"
# 790 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去登记，好吗？$"
# 791 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 792 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterReject::
# 793 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哎呀！要是你跟我组队，\n"
# 794 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们天下无敌！$"
# 795 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 796 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerIntro::
# 797 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哟嗬！\n"
# 798 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是登山男{STR_VAR_1}！$"
# 799 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 800 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon1::
# 801 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "知道我带了什么吗？\n"
# 802 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我那只使用{STR_VAR_1}的{STR_VAR_2}和"
# 803 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 804 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon2Ask::
# 805 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我那只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 806 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "听着不错吧？\n"
# 807 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要组队吗？$"
# 808 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 809 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerAccept::
# 810 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哟嗬！\n"
# 811 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "那我去登记。$"
# 812 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 813 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerReject::
# 814 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我本想和你并肩\n"
# 815 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "作战的。$"
# 816 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 817 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyIntro::
# 818 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好！\n"
# 819 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，我是大姐姐！$"
# 820 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 821 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon1::
# 822 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "知道我养了什么吗？\n"
# 823 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 824 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 825 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon2Ask::
# 826 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 827 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你觉得怎么样？\n"
# 828 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要一起组队吗？$"
# 829 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 830 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyAccept::
# 831 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "太好了！\n"
# 832 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我马上把登记办好！$"
# 833 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 834 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyReject::
# 835 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "真让人失望！\p"
# 836 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们俩在一起——\n"
# 837 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "本来最强！$"
# 838 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 839 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanIntro::
# 840 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哟！\p"
# 841 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你知道我是谁吗？\n"
# 842 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是渔夫{STR_VAR_1}！$"
# 843 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 844 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon1::
# 845 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我带的队伍是一只使用\n"
# 846 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}的{STR_VAR_2}和"
# 847 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 848 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon2Ask::
# 849 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 850 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "怎么样？\n"
# 851 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "愿不愿意在我身边一起打？$"
# 852 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 853 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanAccept::
# 854 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好，好！\n"
# 855 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "交给我！\p"
# 856 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我现在就去登记。$"
# 857 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 858 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanReject::
# 859 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们明明那么般配……$"
# 860 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 861 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyIntro::
# 862 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "很高兴认识你。\n"
# 863 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，一位大小姐。$"
# 864 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 865 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon1::
# 866 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我随行带着一支队伍——\n"
# 867 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 868 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 869 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon2Ask::
# 870 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 871 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "希望合你的意。\n"
# 872 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "因为我想请你当我的队友。$"
# 873 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 874 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyAccept::
# 875 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "衷心感谢你。\n"
# 876 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "登记的事我来办。$"
# 877 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 878 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyReject::
# 879 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我相信你会后悔\n"
# 880 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "没让我当队友。$"
# 881 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 882 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFIntro::
# 883 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是铁人三项选手{STR_VAR_1}！$"
# 884 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 885 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon1::
# 886 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我带的……\n"
# 887 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 888 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 889 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon2Ask::
# 890 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\n"
# 891 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "这就是我这一对！\p"
# 892 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "拜托？\n"
# 893 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "能和我组队吗？$"
# 894 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 895 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFAccept::
# 896 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哎呀，谢谢！\n"
# 897 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去柜台登记。$"
# 898 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 899 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFReject::
# 900 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们俩在一起，\n"
# 901 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一定很难对付！$"
# 902 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 903 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherIntro::
# 904 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗨呀！\n"
# 905 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是捕虫少年{STR_VAR_1}！$"
# 906 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 907 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon1::
# 908 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "看看我带了什么！\n"
# 909 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 910 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 911 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon2Ask::
# 912 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 913 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "听我说！\n"
# 914 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要组队吗？$"
# 915 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 916 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherAccept::
# 917 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "收到！\p"
# 918 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去柜台把登记\n"
# 919 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "那事办完。$"
# 920 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 921 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherReject::
# 922 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "唉，我的宝可梦很棒啊。\n"
# 923 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "希望你以后别后悔！$"
# 924 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 925 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMIntro::
# 926 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好！\n"
# 927 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是学生{STR_VAR_1}！$"
# 928 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 929 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon1::
# 930 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我养的是一只使用{STR_VAR_1}的\n"
# 931 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}和"
# 932 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 933 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon2Ask::
# 934 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的\n"
# 935 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}。\p"
# 936 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "还不错吧？\n"
# 937 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要组队吗？$"
# 938 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 939 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMAccept::
# 940 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "非常感谢！\n"
# 941 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我这就把登记办好。$"
# 942 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 943 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMReject::
# 944 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "真可惜……\p"
# 945 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我本想当你的队友，\n"
# 946 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "跟你学点东西……$"
# 947 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 948 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyIntro::
# 949 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哟！让我告诉你我是谁！\n"
# 950 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是富家少爷{STR_VAR_1}！$"
# 951 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 952 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon1::
# 953 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "猜猜我有什么！\n"
# 954 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 955 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 956 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon2Ask::
# 957 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 958 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我愿意给你机会，\n"
# 959 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "跟我组队。$"
# 960 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 961 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyAccept::
# 962 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "明智的选择！\p"
# 963 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我很快就把登记\n"
# 964 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "手续办好！$"
# 965 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 966 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyReject::
# 967 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你连我都要拒绝？\n"
# 968 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你一定会后悔的！$"
# 969 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 970 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltIntro::
# 971 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嘿呀！\n"
# 972 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是空手道王{STR_VAR_1}。$"
# 973 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 974 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon1::
# 975 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我的同伴是一只使用\n"
# 976 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}的{STR_VAR_2}"
# 977 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 978 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon2Ask::
# 979 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "和一只使用{STR_VAR_1}的\n"
# 980 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}。\p"
# 981 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "求你答应我的愿望！\n"
# 982 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "让我当你的队友！$"
# 983 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 984 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltAccept::
# 985 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嘿呀！\n"
# 986 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我这就去登记！$"
# 987 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 988 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltReject::
# 989 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我明白了……希望下次\n"
# 990 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "见面有机会……$"
# 991 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 992 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFIntro::
# 993 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗨，你好！\n"
# 994 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，我是游泳圈女孩！$"
# 995 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 996 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon1::
# 997 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我告诉你我有什么。\n"
# 998 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 999 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1000 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon2Ask::
# 1001 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\n"
# 1002 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "可以让我加入你的队伍吗？$"
# 1003 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1004 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFAccept::
# 1005 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢！\n"
# 1006 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我现在就去登记！$"
# 1007 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1008 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFReject::
# 1009 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要是我们成了队友，\n"
# 1010 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一定能很强！$"
# 1011 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1012 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacIntro::
# 1013 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好……\n"
# 1014 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是灵异迷{STR_VAR_1}……$"
# 1015 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1016 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon1::
# 1017 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我带着一只使用{STR_VAR_1}的\n"
# 1018 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}，还有一只"
# 1019 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1020 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon2Ask::
# 1021 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_1}的{STR_VAR_2}……\p"
# 1022 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我恳求你……\n"
# 1023 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "和我组队……$"
# 1024 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1025 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacAccept::
# 1026 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢你……\n"
# 1027 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我这就去登记……$"
# 1028 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1029 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacReject::
# 1030 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我多么想加入你……$"
# 1031 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1032 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMIntro::
# 1033 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好。我是{STR_VAR_1}，\n"
# 1034 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是个培育家！$"
# 1035 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1036 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon1::
# 1037 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我养了几只不错的！\n"
# 1038 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1039 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1040 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon2Ask::
# 1041 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1042 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "怎么样？\n"
# 1043 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "想跟我组队吗？$"
# 1044 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1045 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMAccept::
# 1046 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "太感谢了！\p"
# 1047 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "登记的事我来办，\n"
# 1048 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你就在这儿等着！$"
# 1049 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1050 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMReject::
# 1051 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我本来很期待当你的\n"
# 1052 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "队友……$"
# 1053 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1054 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFIntro::
# 1055 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，你好！\n"
# 1056 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是铁人三项选手{STR_VAR_1}！$"
# 1057 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1058 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon1::
# 1059 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "想知道我跑步带什么？\n"
# 1060 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1061 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1062 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon2Ask::
# 1063 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1064 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "怎么样？\n"
# 1065 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要跟我组队吗？$"
# 1066 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1067 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFAccept::
# 1068 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "干得好！\p"
# 1069 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我很快就把登记\n"
# 1070 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "全部办好！$"
# 1071 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1072 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFReject::
# 1073 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你和我，本来会是最强的。\n"
# 1074 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "真可惜……$"
# 1075 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1076 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMIntro::
# 1077 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嘿，你好！我叫{STR_VAR_1}！\n"
# 1078 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是铁人三项选手！$"
# 1079 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1080 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon1::
# 1081 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我带着结实的队伍跑步——\n"
# 1082 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1083 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1084 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon2Ask::
# 1085 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1086 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "还不错吧？\n"
# 1087 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们该组成一队！$"
# 1088 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1089 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMAccept::
# 1090 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好！\n"
# 1091 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我马上去登记！$"
# 1092 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1093 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMReject::
# 1094 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我真的很想当你的\n"
# 1095 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "队友一起对战……$"
# 1096 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1097 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlIntro::
# 1098 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是格斗少女{STR_VAR_1}！$"
# 1099 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1100 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon1::
# 1101 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我一直锻炼着一只使用\n"
# 1102 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}的{STR_VAR_2}和"
# 1103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1104 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon2Ask::
# 1105 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1106 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你喜欢这个组合吗？\n"
# 1107 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你和我搭伙怎么样？$"
# 1108 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1109 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlAccept::
# 1110 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哎呀，谢谢！\p"
# 1111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我马上把登记\n"
# 1112 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "办好！$"
# 1113 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1114 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlReject::
# 1115 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我还以为和你一起能组成\n"
# 1116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "最强的队伍……$"
# 1117 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMIntro::
# 1119 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是铁人三项选手{STR_VAR_1}！$"
# 1120 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon1::
# 1122 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我一直带着一只会使用\n"
# 1123 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}的{STR_VAR_2}"
# 1124 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon2Ask::
# 1126 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "和一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1127 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们可以组队。\n"
# 1128 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "那不是很好吗？$"
# 1129 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMAccept::
# 1131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢！\p"
# 1132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我这就去给我们登记！$"
# 1133 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1134 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMReject::
# 1135 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哎呀，真可惜。我们本来\n"
# 1136 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "会是最难对付的队伍！$"
# 1137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1138 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMIntro::
# 1139 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我？\n"
# 1140 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是游泳圈男孩{STR_VAR_1}！$"
# 1141 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon1::
# 1143 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我带了什么？\n"
# 1144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1145 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon2Ask::
# 1147 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1148 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嘿？\n"
# 1149 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你会跟我组队吧？$"
# 1150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMAccept::
# 1152 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好！\p"
# 1153 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去登记！\n"
# 1154 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "让我们一起加油！$"
# 1155 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1156 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMReject::
# 1157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我的宝可梦当然很强……\n"
# 1158 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "可惜你不想组队。$"
# 1159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1160 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristIntro::
# 1161 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "耶嘿！\n"
# 1162 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "叫我吉他手{STR_VAR_1}！$"
# 1163 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon1::
# 1165 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "看看我的随从们！\n"
# 1166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1167 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1168 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon2Ask::
# 1169 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1170 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "耶嘿！很狂吧？\n"
# 1171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "组队来个二重奏！$"
# 1172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristAccept::
# 1174 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "耶嘿！太好了！\n"
# 1175 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我这就去办登记那事！$"
# 1176 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1177 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristReject::
# 1178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我的宝可梦超摇滚！\n"
# 1179 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我跟你说，你会后悔的！$"
# 1180 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1181 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanIntro::
# 1182 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "很高兴认识你。\n"
# 1183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，一位绅士。$"
# 1184 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1185 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon1::
# 1186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我随行的是我信任的\n"
# 1187 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_1}的{STR_VAR_2}和"
# 1188 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1189 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon2Ask::
# 1190 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 1191 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "能否请你与我结为\n"
# 1192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "队友？$"
# 1193 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1194 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanAccept::
# 1195 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "啊，感谢你的信任。\n"
# 1196 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "登记的事我来办。$"
# 1197 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1198 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanReject::
# 1199 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "真是太遗憾了……\p"
# 1200 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我期待下次\n"
# 1201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "有机会……$"
# 1202 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1203 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMIntro::
# 1204 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好，我是{STR_VAR_1}，\n"
# 1205 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是个宝可梦发烧友。$"
# 1206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1207 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon1::
# 1208 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我现在带着一只会招式\n"
# 1209 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}的{STR_VAR_2}和"
# 1210 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1211 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon2Ask::
# 1212 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 1213 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你喜欢看到的吗？\n"
# 1214 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "何不当我的队友？$"
# 1215 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMAccept::
# 1217 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢！\n"
# 1218 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "登记的事我来看！$"
# 1219 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1220 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMReject::
# 1221 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我的宝可梦都是顶级的……\n"
# 1222 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "可惜你不懂得欣赏。$"
# 1223 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1224 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMIntro::
# 1225 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗯！\n"
# 1226 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，我可是达人！$"
# 1227 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1228 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon1::
# 1229 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我练出来的宝可梦是\n"
# 1230 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1232 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon2Ask::
# 1233 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1234 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "跟我组队，你意下如何？$"
# 1235 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1236 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMAccept::
# 1237 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗯！\n"
# 1238 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我马上给我们登记！\l"
# 1239 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "让我们一起努力！$"
# 1240 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1241 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMReject::
# 1242 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我希望你做的选择\n"
# 1243 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "确实没错……$"
# 1244 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1245 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFIntro::
# 1246 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好，你好。\n"
# 1247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，一位达人。$"
# 1248 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1249 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon1::
# 1250 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我的宝可梦都练得很扎实。\n"
# 1251 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1252 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon2Ask::
# 1254 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}——\n"
# 1255 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "这就是我带的。\p"
# 1256 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你不想和我组队吗？$"
# 1257 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFAccept::
# 1259 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好，好。\n"
# 1260 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我马上把登记办好。$"
# 1261 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1262 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFReject::
# 1263 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "也许下次见面，\n"
# 1264 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们组一队吧。$"
# 1265 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1266 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerIntro::
# 1267 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是龙训练家{STR_VAR_1}！$"
# 1268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1269 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon1::
# 1270 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我练出来的队伍是\n"
# 1271 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1272 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1273 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon2Ask::
# 1274 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1275 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "怎么样？\n"
# 1276 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "想当我的队友吗？$"
# 1277 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1278 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerAccept::
# 1279 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好，我会尽全力！\n"
# 1280 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我现在就去登记，好吗？$"
# 1281 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1282 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerReject::
# 1283 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你找不到比我更难对付\n"
# 1284 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "的队友了！$"
# 1285 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1286 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperIntro::
# 1287 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是鸟训练家{STR_VAR_1}！$"
# 1288 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1289 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon1::
# 1290 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我有什么宝可梦？\n"
# 1291 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1292 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1293 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon2Ask::
# 1294 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 1295 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你不觉得我们能组成\n"
# 1296 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "不错的队伍吗？$"
# 1297 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1298 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperAccept::
# 1299 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "太好了，谢谢！\n"
# 1300 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "登记的事我来看！$"
# 1301 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1302 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperReject::
# 1303 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我和我的宝可梦都很强。\n"
# 1304 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "真让人失望。$"
# 1305 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1306 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyIntro::
# 1307 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是忍者男孩{STR_VAR_1}！$"
# 1308 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1309 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon1::
# 1310 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我的宝可梦队伍是一只\n"
# 1311 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_1}的{STR_VAR_2}和"
# 1312 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1313 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon2Ask::
# 1314 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1315 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们一起组队吧！$"
# 1316 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1317 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyAccept::
# 1318 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "耶！\n"
# 1319 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去登记！$"
# 1320 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1321 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyReject::
# 1322 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你会后悔没让我的强宝可梦\n"
# 1323 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "站在你这边！$"
# 1324 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1325 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyIntro::
# 1326 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好！\n"
# 1327 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是阳伞大姐{STR_VAR_1}！$"
# 1328 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1329 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon1::
# 1330 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "现在陪着我的是一只使用\n"
# 1331 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}的{STR_VAR_2}和"
# 1332 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1333 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon2Ask::
# 1334 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 1335 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "它们不错吧？\n"
# 1336 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要和我们组队吗？$"
# 1337 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1338 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyAccept::
# 1339 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "太谢谢你了！\p"
# 1340 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去柜台登记。\n"
# 1341 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "别让彼此失望哦！$"
# 1342 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1343 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyReject::
# 1344 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我的宝可梦强得惊人。\n"
# 1345 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "真让人失望……$"
# 1346 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1347 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacIntro::
# 1348 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好。\n"
# 1349 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，我是个虫狂。$"
# 1350 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1351 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon1::
# 1352 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我确实找到了我的宝可梦。\n"
# 1353 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1354 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1355 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon2Ask::
# 1356 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}——\n"
# 1357 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "这就是我找到的。\p"
# 1358 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你有兴趣和我组队吗？$"
# 1359 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1360 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacAccept::
# 1361 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好！\n"
# 1362 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "明白了！\p"
# 1363 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "登记我不会花太久！$"
# 1364 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1365 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacReject::
# 1366 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "凭我找到的宝可梦，\n"
# 1367 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们本来不会输……$"
# 1368 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1369 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorIntro::
# 1370 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗨，你们好！\n"
# 1371 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是水手{STR_VAR_1}！$"
# 1372 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1373 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon1::
# 1374 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "让你看看我的骄傲！\n"
# 1375 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1376 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1377 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon2Ask::
# 1378 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你当然不会拒绝我。\n"
# 1380 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们会组队，对吧？$"
# 1381 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1382 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorAccept::
# 1383 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "果然不出我所料！\n"
# 1384 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我现在就去登记。$"
# 1385 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1386 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorReject::
# 1387 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们本来会一路横扫\n"
# 1388 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "对手！真可惜！$"
# 1389 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1390 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorIntro::
# 1391 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗨，我是{STR_VAR_1}。\n"
# 1392 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是个收藏家。$"
# 1393 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1394 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon1::
# 1395 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我收藏的宝贝是\n"
# 1396 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我那只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1397 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1398 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon2Ask::
# 1399 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1400 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "不错吧？\n"
# 1401 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们该一起组队。$"
# 1402 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1403 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorAccept::
# 1404 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，耶！\p"
# 1405 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "那别浪费时间了。\n"
# 1406 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去给我们两个登记。$"
# 1407 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1408 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorReject::
# 1409 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "唉，真让人扫兴。\n"
# 1410 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你不识货。$"
# 1411 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1412 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMIntro::
# 1413 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好啊，我是{STR_VAR_1}。\n"
# 1414 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是宝可梦巡护员。$"
# 1415 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1416 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon1::
# 1417 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "陪着我的是一只使用\n"
# 1418 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}的{STR_VAR_2}和"
# 1419 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1420 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon2Ask::
# 1421 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1422 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你不觉得我们能组成\n"
# 1423 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "很厉害的队伍吗？$"
# 1424 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1425 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMAccept::
# 1426 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "太好了！\n"
# 1427 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我现在就处理登记。$"
# 1428 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1429 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMReject::
# 1430 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "下次，选我的宝可梦，\n"
# 1431 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好吗？$"
# 1432 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1433 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFIntro::
# 1434 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我叫{STR_VAR_1}。\n"
# 1435 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是宝可梦巡护员！$"
# 1436 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1437 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon1::
# 1438 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "让我说说我的队伍。我有\n"
# 1439 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1440 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1441 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon2Ask::
# 1442 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1443 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你愿意和我这一小队\n"
# 1444 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "组队吗？$"
# 1445 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1446 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFAccept::
# 1447 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们会发挥最好水平！\n"
# 1448 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我很快把登记办好！$"
# 1449 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1450 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFReject::
# 1451 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "希望你下次选\n"
# 1452 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我的宝可梦。$"
# 1453 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1454 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyIntro::
# 1455 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "很高兴认识你。我是{STR_VAR_1}。\n"
# 1456 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我算是个芳香姐姐。$"
# 1457 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1458 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon1::
# 1459 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我带着一只使用{STR_VAR_1}的\n"
# 1460 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}和"
# 1461 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1462 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon2Ask::
# 1463 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的\n"
# 1464 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}。\p"
# 1465 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "希望它们合你心意。\n"
# 1466 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你愿意当我的队友吗？$"
# 1467 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1468 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyAccept::
# 1469 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "承蒙你答应，荣幸之至。\n"
# 1470 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我这就去登记。$"
# 1471 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1472 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyReject::
# 1473 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "下次见面要是能\n"
# 1474 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "组队就好了。$"
# 1475 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1476 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacIntro::
# 1477 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "想知道我是谁？\n"
# 1478 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，遗迹狂！$"
# 1479 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1480 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon1::
# 1481 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我带的宝可梦是\n"
# 1482 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1483 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1484 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon2Ask::
# 1485 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1486 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "有意思吧？\n"
# 1487 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你和我搭伙怎么样？$"
# 1488 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1489 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacAccept::
# 1490 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "决定得真明智！\n"
# 1491 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去填登记表。$"
# 1492 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1493 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacReject::
# 1494 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗯……\n"
# 1495 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我觉得我的宝可梦很强……$"
# 1496 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1497 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMIntro::
# 1498 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是精英训练家{STR_VAR_1}！$"
# 1499 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1500 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon1::
# 1501 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我现在带的宝可梦是\n"
# 1502 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1503 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1504 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon2Ask::
# 1505 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\n"
# 1506 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "酷吧？\p"
# 1507 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你不觉得我们组队\n"
# 1508 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "会很酷吗？$"
# 1509 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1510 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMAccept::
# 1511 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "酷！\n"
# 1512 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我马上把登记办好！$"
# 1513 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1514 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMReject::
# 1515 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我还以为我们能组成\n"
# 1516 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "史上最强队伍。$"
# 1517 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1518 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFIntro::
# 1519 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是精英训练家{STR_VAR_1}！$"
# 1520 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1521 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon1::
# 1522 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我养的这支队伍有\n"
# 1523 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1524 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1525 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon2Ask::
# 1526 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 1527 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "听起来还行吗？\n"
# 1528 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们当队友怎么样？$"
# 1529 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1530 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFAccept::
# 1531 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "听起来太行了！\n"
# 1532 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我最好去登记。$"
# 1533 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1534 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFReject::
# 1535 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我还在想我们会是\n"
# 1536 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一支强队……$"
# 1537 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1538 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacIntro::
# 1539 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嘿哟！\n"
# 1540 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，宝可梦狂热者！$"
# 1541 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1542 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon1::
# 1543 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "像我这样的家伙有什么？\n"
# 1544 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1545 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1546 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon2Ask::
# 1547 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}，\n"
# 1548 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "就这样！\p"
# 1549 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "来吧！\n"
# 1550 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们组队一起碾过去！$"
# 1551 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1552 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacAccept::
# 1553 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好决定！\n"
# 1554 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我给我们两个登记！$"
# 1555 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1556 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacReject::
# 1557 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我的宝可梦可凶了！\n"
# 1558 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你要是后悔可不怪我！$"
# 1559 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1560 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerIntro::
# 1561 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哟，你好！\n"
# 1562 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是火炬手{STR_VAR_1}！$"
# 1563 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1564 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon1::
# 1565 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "知道我训练出什么了吗？\n"
# 1566 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1567 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1568 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon2Ask::
# 1569 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1570 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "那，你说呢？\n"
# 1571 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要组队吗？$"
# 1572 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1573 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerAccept::
# 1574 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好！\n"
# 1575 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去办登记。$"
# 1576 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1577 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerReject::
# 1578 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "答应我下次碰到\n"
# 1579 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一定跟我组队。$"
# 1580 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1581 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperIntro::
# 1582 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，我是个露营者！$"
# 1583 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1584 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon1::
# 1585 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我养了一只使用{STR_VAR_1}的\n"
# 1586 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}和一只"
# 1587 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1588 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon2Ask::
# 1589 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 1590 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你不觉得组队会很有趣吗？\n"
# 1591 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一定很有趣！$"
# 1592 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1593 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperAccept::
# 1594 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "耶！\n"
# 1595 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去登记！$"
# 1596 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1597 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperReject::
# 1598 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "下次，好吗？\n"
# 1599 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我想跟你一队。$"
# 1600 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1601 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerIntro::
# 1602 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你好！\n"
# 1603 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，我是个野餐少女！$"
# 1604 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1605 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon1::
# 1606 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我带的宝可梦是\n"
# 1607 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1608 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1609 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon2Ask::
# 1610 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 1611 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你有兴趣和我\n"
# 1612 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "组队吗？$"
# 1613 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1614 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerAccept::
# 1615 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哎呀，谢谢！\n"
# 1616 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我现在就办登记。$"
# 1617 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1618 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerReject::
# 1619 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要是以后能加入\n"
# 1620 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你就好了。$"
# 1621 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1622 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMIntro::
# 1623 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是超能力者{STR_VAR_1}！$"
# 1624 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1625 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon1::
# 1626 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我养的这一对是\n"
# 1627 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1628 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1629 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon2Ask::
# 1630 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 1631 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你愿意和我\n"
# 1632 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "组队吗？$"
# 1633 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1634 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMAccept::
# 1635 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "当然！\n"
# 1636 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "登记的事交给我！$"
# 1637 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1638 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMReject::
# 1639 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要是再见，那时\n"
# 1640 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我希望跟你组队。$"
# 1641 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1642 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFIntro::
# 1643 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}。\n"
# 1644 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是超能力者。$"
# 1645 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1646 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon1::
# 1647 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1648 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1649 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon2Ask::
# 1650 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}——\n"
# 1651 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "他们是我的弟子。\p"
# 1652 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "组队这件事，你不觉得\n"
# 1653 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "很有意思吗？$"
# 1654 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1655 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFAccept::
# 1656 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢。\n"
# 1657 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去处理登记。$"
# 1658 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1659 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFReject::
# 1660 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "希望还有机会\n"
# 1661 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "结盟。$"
# 1662 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1663 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFIntro::
# 1664 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是学生{STR_VAR_1}！$"
# 1665 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1666 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon1::
# 1667 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}"
# 1668 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1669 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon2Ask::
# 1670 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "和一只使用{STR_VAR_1}的\n"
# 1671 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}，就是我的双宝可梦。\p"
# 1672 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "可以让我当你的\n"
# 1673 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "队友吗？$"
# 1674 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1675 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFAccept::
# 1676 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "哦，谢谢！\n"
# 1677 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我马上去柜台登记！$"
# 1678 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1679 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFReject::
# 1680 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "拜托？\n"
# 1681 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "下次能让我加入吗？$"
# 1682 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1683 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFIntro::
# 1684 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗨！我叫{STR_VAR_1}！\n"
# 1685 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是宝可梦培育家！$"
# 1686 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1687 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon1::
# 1688 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我养的宝可梦是一只\n"
# 1689 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "使用{STR_VAR_1}的{STR_VAR_2}和"
# 1690 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1691 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon2Ask::
# 1692 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 1693 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "有意思吗？\n"
# 1694 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "那我们组队怎么样？$"
# 1695 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1696 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFAccept::
# 1697 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好嘞！\n"
# 1698 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "登记就交给我！$"
# 1699 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1700 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFReject::
# 1701 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "下次你一定要跟我组队，\n"
# 1702 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "好吗？$"
# 1703 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1704 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFIntro::
# 1705 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，我很自豪地说\n"
# 1706 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是个宝可梦发烧友。$"
# 1707 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1708 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon1::
# 1709 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我养的宝贝宝可梦是\n"
# 1710 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1711 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1712 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon2Ask::
# 1713 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}。\p"
# 1714 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "它们是不是最可爱？\n"
# 1715 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我们该组队！$"
# 1716 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1717 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFAccept::
# 1718 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "谢谢你，亲爱的！\n"
# 1719 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我这就去登记！$"
# 1720 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1721 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFReject::
# 1722 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我宝贝的宝可梦是最好的，\n"
# 1723 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你可要知道。真讨厌！$"
# 1724 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1725 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFIntro::
# 1726 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗨，我是泳装姐姐{STR_VAR_1}。$"
# 1727 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1728 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon1::
# 1729 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}"
# 1730 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1731 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon2Ask::
# 1732 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "和一只使用{STR_VAR_1}的\n"
# 1733 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}，是我练出来的。\p"
# 1734 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你和我，组队吧。$"
# 1735 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1736 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFAccept::
# 1737 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "太好了！\n"
# 1738 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我去给我们两个登记。$"
# 1739 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1740 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFReject::
# 1741 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要是再见，你欠我\n"
# 1742 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一次组队！$"
# 1743 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1744 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMIntro::
# 1745 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "怎么样？\n"
# 1746 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，我是个铁人三项选手。$"
# 1747 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1748 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon1::
# 1749 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我有几只不错的宝可梦。\n"
# 1750 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1751 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1752 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon2Ask::
# 1753 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1754 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要是我们组队一定很棒，\n"
# 1755 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "怎么样？$"
# 1756 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1757 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMAccept::
# 1758 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "太好了！\n"
# 1759 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我登记的时候你等一下，好吗？$"
# 1760 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1761 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMReject::
# 1762 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "下次你会让我加入吧，\n"
# 1763 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "怎么样？$"
# 1764 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1765 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFIntro::
# 1766 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是铁人三项选手{STR_VAR_1}！$"
# 1767 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1768 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon1::
# 1769 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1770 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1771 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon2Ask::
# 1772 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "另一只懂得使用{STR_VAR_1}的\n"
# 1773 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}。这就是我的一对。\p"
# 1774 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你觉得呢？\n"
# 1775 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我说我们会是很好的队伍。$"
# 1776 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1777 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFAccept::
# 1778 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我喜欢这个回答！\n"
# 1779 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我快点把登记办好！$"
# 1780 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1781 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFReject::
# 1782 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你会再给我一次组队的\n"
# 1783 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "机会吧？$"
# 1784 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1785 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMIntro::
# 1786 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "嗨，你好！\n"
# 1787 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我是{STR_VAR_1}，我是游泳者！$"
# 1788 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1789 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon1::
# 1790 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "看看我养的！\n"
# 1791 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}和"
# 1792 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1793 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon2Ask::
# 1794 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "一只使用{STR_VAR_1}的{STR_VAR_2}！\p"
# 1795 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "不错吧？\n"
# 1796 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "组队也会很不错！$"
# 1797 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1798 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMAccept::
# 1799 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "多谢！\n"
# 1800 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "我会把登记这事办好！$"
# 1801 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1802 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMReject::
# 1803 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "要是再见，你必须跟我组队。\n"
# 1804 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "你会的，对吧？$"
