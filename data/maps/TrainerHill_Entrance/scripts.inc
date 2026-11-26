# 1 "data/maps/TrainerHill_Entrance/scripts.pory"

# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_NURSE, 2
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_GIRL, 4
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_MAN, 5
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"

# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts::
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 11 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 12 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_OnFrame
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	.byte 0
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"

# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition:
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 19 "data/maps/TrainerHill_Entrance/scripts.pory"

# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp:
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"

# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume:
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_TryFaceAttendant  @ VAR_RESULT always FALSE here
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 6
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"

# 33 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 34 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"

# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"

# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn:
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_NURSE
# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_ATTENDANT
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_MAN
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_GIRL
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 48 "data/maps/TrainerHill_Entrance/scripts.pory"

# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad:
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_OpenCounterDoor
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 52 "data/maps/TrainerHill_Entrance/scripts.pory"

# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 54 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
# 55 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 56 "data/maps/TrainerHill_Entrance/scripts.pory"

# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnFrame:
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"

# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"

# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 79 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"

# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"

# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"

# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 108 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"

# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 116 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 120 "data/maps/TrainerHill_Entrance/scripts.pory"

# 121 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 122 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"

# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger::
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Closed
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"

# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 151 "data/maps/TrainerHill_Entrance/scripts.pory"

# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 156 "data/maps/TrainerHill_Entrance/scripts.pory"

# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"

# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"

# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"

# 190 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"

# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 202 "data/maps/TrainerHill_Entrance/scripts.pory"

# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 206 "data/maps/TrainerHill_Entrance/scripts.pory"

# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"

# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"

# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"

# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"

# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 233 "data/maps/TrainerHill_Entrance/scripts.pory"

# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"

# 238 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"

# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"

# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk::
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ExpandedPokemart
# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Basic
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"

# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_AWAKENING
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 274 "data/maps/TrainerHill_Entrance/scripts.pory"

# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"

# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"

# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "这里是训练家之丘，你可以\n"
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "和许多训练家\l"
# 302 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "享受接力对战。\p"
# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "可惜，我们还在准备。\n"
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "请稍后再来！$"
# 305 "data/maps/TrainerHill_Entrance/scripts.pory"

# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "欢迎！\p"
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "这里是训练家之丘，你可以\n"
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "和许多训练家\l"
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "享受接力对战！$"
# 311 "data/maps/TrainerHill_Entrance/scripts.pory"

# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "这是你第一次来吗？\p"
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "进去之前，请先\n"
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "保存游戏。$"
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"

# 317 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "让我看看……\n"
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "现在的训练家是……\p"
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "直到第{STR_VAR_1}层。$"
# 321 "data/maps/TrainerHill_Entrance/scripts.pory"

# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "让我看看……\n"
# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "现在的训练家是……\p"
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "好像每个房间都聚了\n"
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "训练家。$"
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"

# 328 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "你想挑战等候中的\n"
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "训练家吗？$"
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"

# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "我会为你计时。\n"
# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "祝你好运！\p"
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "各就各位……\p"
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "预备……\p"
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "跑！$"
# 338 "data/maps/TrainerHill_Entrance/scripts.pory"

# 339 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 340 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "欢迎再来！$"
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"

# 342 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 343 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "太可惜了。\p"
# 344 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "我觉得你在对战中\n"
# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "付出了极大的努力。\p"
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "请回来再挑战一次！$"
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"

# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "希望你尽全力。$"
# 350 "data/maps/TrainerHill_Entrance/scripts.pory"

# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "训练家换位的时候，\n"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "会乱成一团。\p"
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "为了避开人流，我们把\n"
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "接待台搬到这里。\p"
# 356 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "给你添麻烦了，抱歉。$"
# 357 "data/maps/TrainerHill_Entrance/scripts.pory"

# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "感谢游玩！$"
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"

# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "在训练家之丘，我们举办\n"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "一个叫计时赛的活动。\p"
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "这是比赛从这张柜台\n"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "到屋顶、见我们主人\l"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "需要多长时间。\p"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "最快的时间会贴在\n"
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "时间板上——试着和\l"
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "朋友比一比。\p"
# 370 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "沿途的训练家对战\n"
# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "不给经验值，\l"
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "也不给钱。$"
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"

# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "哦，抱歉，你身上好像\n"
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "只有一只宝可梦。\p"
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "参加这个活动，至少\n"
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "需要两只宝可梦。$"
# 380 "data/maps/TrainerHill_Entrance/scripts.pory"

# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "嗯！嗯！\p"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "你终于来了！\n"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "对，你到了！\p"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "等等！别说！\n"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "我知道你为什么\l"
# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "一个人大老远跑来！\p"
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "你想见我这个训练家\n"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "之丘的主人，因为……\p"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "你想和我组队！\n"
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "哇呼！\p"
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "……呃？\n"
# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "不是？\p"
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "总之，我看你一路\n"
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "上来了。非常精彩！\l"
# 396 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "真棒，真棒！$"
# 397 "data/maps/TrainerHill_Entrance/scripts.pory"

# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "像你这样了不起的人，\n"
# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "我有最了不起的礼物！$"
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"

# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "哦，不，东西满了！\n"
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "你晚点再来拿这个！$"
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"

# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "哦，等一下！你是不是\n"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "非常快地就到了？\p"
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "太棒了！你不用为了\n"
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "见我都赶这么急！\p"
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "这真让人高兴。我会\n"
# 412 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "更新接待处的时间板！$"
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"

# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "可是，哦……\n"
# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "你到这儿不算快。$"
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"

# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "要是你下次来更利落\n"
# 420 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "些，我会更高兴。\p"
# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "到时候，我很乐意\n"
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "和你组队！\p"
# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "后会有期，朋友！$"
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"

# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "我建训练家之丘只有\n"
# 428 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "一个理由！\p"
# 429 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "为了找最适合和我\n"
# 430 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "组队的搭档！$"
# 431 "data/maps/TrainerHill_Entrance/scripts.pory"

# 432 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1}分{STR_VAR_2}.{STR_VAR_3}秒。$"
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"

# 435 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 436 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "谁知道前面有什么样的\n"
# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "训练家和宝可梦\l"
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "组合？\p"
# 439 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "我只知道，谁敢挡路，\n"
# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "我就把谁撞开！$"
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"

# 442 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 443 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "我听说各地强训练家\n"
# 444 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "都来训练家之丘。\p"
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "我等不及试试水了！\p"
# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "谁敢挡路，我就\n"
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "把谁撞开！$"
# 448 "data/maps/TrainerHill_Entrance/scripts.pory"

# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "你看到那边的时间板\n"
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "了吗？\p"
# 452 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "我和朋友们在比谁用\n"
# 453 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "最少时间到顶。$"
# 454 "data/maps/TrainerHill_Entrance/scripts.pory"

# 455 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 456 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "你知道这里什么时候\n"
# 457 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "开张吗？\p"
# 458 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "我在这儿等，要当\n"
# 459 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "第一个挑战者！$"
# 460 "data/maps/TrainerHill_Entrance/scripts.pory"

# 461 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 462 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "你要回到\n"
# 463 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "接待柜台吗？$"
