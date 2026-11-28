# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 5
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 8
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "哦，你好。你是？\p"
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "哦，你是{PLAYER}，我们\n"
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "新搬来的邻居！嗨！\p"
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我们也有个和你差不多\n"
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "大的{STR_VAR_1}。\p"
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我们的{STR_VAR_1}还高兴\n"
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "能交到新朋友呢。\p"
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我们的{STR_VAR_1}我想\n"
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "在楼上。$"
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "有其父必有其子。\p"
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我丈夫和我们的孩子\n"
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "一样迷宝可梦。\p"
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "他要是不在研究所，\n"
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "大概就在草地里\l"
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "到处翻找。$"
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "你见到{RIVAL}了吗？\p"
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "希望他叫你顺路去\n"
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我丈夫的研究所！\l"
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "祝你好运，{PLAYER}！$"
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "哦，{RIVAL}刚才去\n"
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "103号道路了。\p"
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "有其父必有其子。\n"
# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL}在家里\l"
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "安静待不住。$"
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我觉得人和宝可梦一起\n"
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "旅行很棒。\p"
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "不过你也该时不时回家，\n"
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "让妈妈知道你没事。\p"
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "她也许不说，但我肯定\n"
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "她很担心你，\l"
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}。$"
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "嗯？\n"
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "你……你是谁？\p"
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "哦，你是{PLAYER}。\n"
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "原来你今天搬来。\p"
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "嗯……我叫小遥。\n"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "很高兴见到你！\p"
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我……\n"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我有个梦想，就是和\l"
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "全世界的宝可梦\l"
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "成为朋友。\p"
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我……我从小田卷博士，\n"
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "也就是我爸那里\l"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "听说过你，{PLAYER}。\p"
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我一直希望你会是个\n"
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "亲切的人，希望\l"
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我们能成为朋友。\p"
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "哦，这好傻，对吧？\n"
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我……我才刚认识你。\p"
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "呵呵……\p"
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "哦，不好！我忘了！\p"
# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我该去帮爸爸抓野生\n"
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "宝可梦的，毕竟我\l"
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "才刚拿到我的\l"
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "第一只宝可梦！\p"
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}，回头见！$"
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "嘿！\n"
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "你……\p"
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "你是谁？\p"
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "哦，你是{PLAYER}吧？\n"
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "搬到隔壁来了？\p"
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我爸爸小田卷博士说，\n"
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我们的新邻居是\l"
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "道馆馆主的孩子，\l"
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "真酷。\p"
# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我叫佑树。\n"
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "那么，你好，邻居！\p"
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "嗯？嘿，{PLAYER}，\n"
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "你没有宝可梦吗？\p"
# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "我该去帮爸爸抓野生\n"
# 410 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "宝可梦，毕竟我\l"
# 411 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "才刚拿到我的\l"
# 412 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "第一只宝可梦！\p"
# 413 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "你该去跟他说说，\n"
# 414 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "看看能不能也弄到\l"
# 415 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "属于你的宝可梦！$"
# 416 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 417 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 418 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "嗨，邻居！\p"
# 419 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "你已经有自己的\n"
# 420 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "宝可梦了吗？$"
