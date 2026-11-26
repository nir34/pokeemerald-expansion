# 1 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
.set LOCALID_BRANDON, 2
# 4 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 5 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_MapScripts::
# 6 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidTop_OnResume
# 7 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidTop_OnFrame
# 8 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidTop_OnTransition
# 9 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePyramidTop_OnWarp
# 10 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.byte 0
# 11 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 12 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnTransition:
# 13 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
# 14 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
# 15 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 16 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 17 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnWarp:
# 18 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects
# 19 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.2byte 0
# 20 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 21 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects::
# 22 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_1, 1
# 23 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 24 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_TEMP_C, 0, BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects
# 25 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setobjectxyperm LOCALID_BRANDON, 0, 0
# 26 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects::
# 27 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 28 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 29 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnResume:
# 30 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getbrainstatus
# 31 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus
# 32 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 33 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus::
# 34 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	copyvar VAR_TEMP_C, VAR_RESULT
# 35 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getstatus
# 36 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 37 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case 0, BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge
# 38 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby
# 39 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge
# 40 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 41 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 42 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 43 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 44 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 46 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnFrame:
# 47 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic
# 48 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidTop_EventScript_ShowMapName
# 49 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.2byte 0
# 50 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 51 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic::
# 52 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 53 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
# 54 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 55 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 56 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_ShowMapName::
# 57 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special ShowMapNamePopup
# 58 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 0
# 59 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 60 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 61 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge::
# 62 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 63 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SavePlayerParty
# 64 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 65 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_settrainers
# 66 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 67 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
# 68 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 69 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 70 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_Attendant::
# 71 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lock
# 72 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	faceplayer
# 73 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_TEMP_D, 0, BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady
# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_TEMP_C, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside
# 75 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo, MSGBOX_DEFAULT
# 76 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 77 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside
# 78 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 79 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop
# 80 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 81 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath
# 82 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 83 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid
# 84 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 85 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 86 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 87 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 88 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon::
# 89 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 90 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 91 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitstate
# 92 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 93 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 94 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady::
# 95 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady, MSGBOX_DEFAULT
# 96 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 97 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 99 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside::
# 100 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside
# 102 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_D, 1
# 103 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 104 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 105 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 106 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon::
# 107 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lockall
# 108 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_C
# 109 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold
# 110 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
# 111 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
# 112 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 113 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
# 114 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 115 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp
# 116 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 117 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure, MSGBOX_DEFAULT
# 118 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 119 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 120 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 121 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 122 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon, MSGBOX_DEFAULT
# 123 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver
# 124 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 125 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 126 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech::
# 127 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 128 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 129 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver::
# 130 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle, MSGBOX_DEFAULT
# 131 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 132 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 133 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver
# 134 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 135 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 136 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver::
# 137 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 138 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 139 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease, MSGBOX_DEFAULT
# 140 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 141 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol
# 142 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 143 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 144 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 145 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting, MSGBOX_DEFAULT
# 146 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 147 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 148 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold::
# 149 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 150 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
# 151 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 152 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp
# 153 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 154 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned, MSGBOX_DEFAULT
# 155 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 156 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 157 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 158 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 159 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter, MSGBOX_DEFAULT
# 160 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold
# 161 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 162 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 163 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech::
# 164 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 165 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 166 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold::
# 167 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_EverythingYouHave, MSGBOX_DEFAULT
# 168 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 169 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 170 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold
# 171 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 172 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 173 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold::
# 174 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 175 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 176 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis, MSGBOX_DEFAULT
# 177 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 178 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine
# 179 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 180 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 181 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 182 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_FarewellForNow, MSGBOX_DEFAULT
# 183 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 184 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 185 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle::
# 186 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 187 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PYRAMID
# 188 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_0x8005, 0
# 189 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special DoSpecialTrainerBattle
# 190 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitstate
# 191 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 192 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 193 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside:
# 194 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_right
# 195 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_left
# 196 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 197 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 198 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath:
# 199 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_left
# 200 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 202 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 203 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop:
# 204 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 205 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 206 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 207 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 208 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 209 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_down
# 210 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 211 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 212 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer:
# 213 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_fast_down
# 214 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 215 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 216 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_CameraPanUp:
# 217 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_slow_up
# 218 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_slow_up
# 219 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	delay_16
# 220 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 221 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 222 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo:
# 223 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "很高兴在这里见到你！\n"
# 224 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "你已经到达对战金字塔\l"
# 225 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "的顶端了！\p"
# 226 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "这上面是金字塔的\n"
# 227 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "眺望点。\p"
# 228 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "那是只有征服了金字塔\n"
# 229 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "的人才能去的地方。\p"
# 230 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "来吧！请上去！$"
# 231 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 232 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid:
# 233 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "金字塔的新征服者！\n"
# 234 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "让{PLAYER}这个名字被记住吧！$"
# 235 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 236 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere:
# 237 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "很高兴在这里见到你！\p"
# 238 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "可惜，你只差一点点时间！\p"
# 239 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "我们的首领比你先\n"
# 240 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "征服了金字塔。\p"
# 241 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "不过，年轻的探险家……\n"
# 242 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "你是训练家！\p"
# 243 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "拿出你的力量，从我们的\n"
# 244 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "首领手里夺走顶点的荣耀！\p"
# 245 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "来吧！准备好后，\n"
# 246 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "再鼓起勇气迈出一步！$"
# 247 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 248 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure:
# 249 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "年轻的冒险者……\p"
# 250 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "你不觉得探险是\n"
# 251 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "最宏大的冒险吗？\p"
# 252 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "靠自己的智慧！\p"
# 253 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "靠自己的力量！\p"
# 254 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "靠自己的宝可梦！\p"
# 255 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "而且最重要的是，靠自己的\n"
# 256 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "勇气带你走过未知的世界……$"
# 257 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 258 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon:
# 259 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "啊，是啊，这样的人生真宏大！\n"
# 260 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "真是宏大！嗯？\p"
# 261 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "我是神代！\p"
# 262 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "我是金字塔之王，\n"
# 263 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "也就是说这里由我管。\p"
# 264 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "大家都叫我首领！\p"
# 265 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "你能来到这里，说明你对自己\n"
# 266 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "有十足的自信，对吧？\p"
# 267 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "哈哈哈！\n"
# 268 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "这应该会很刺激！$"
# 269 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 270 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle:
# 271 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "那么！\n"
# 272 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "把勇气带到我们的对战里来吧！$"
# 273 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 274 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease:
# 275 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "神代：哈哈哈！真宏大！\n"
# 276 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "是啊，真宏大！\p"
# 277 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "干得好！你赢得了认可！\n"
# 278 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "请出示你的开拓区通行证！$"
# 279 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 280 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol:
# 281 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "勇气象征被印在了\n"
# 282 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "开拓区通行证上！$"
# 283 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 284 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting:
# 285 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "年轻的探险家！\n"
# 286 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "期待下次见到你！$"
# 287 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 288 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned:
# 289 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "神代：……你终于回来了，\n"
# 290 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "年轻的探险家……\p"
# 291 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "你对冒险的爱好像来自\n"
# 292 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "内心深处……\p"
# 293 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "是啊……你和我年轻时\n"
# 294 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "一模一样……\p"
# 295 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "…… …… ……啊……\p"
# 296 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "那份热情！\p"
# 297 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "那份危险！\p"
# 298 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "那份拼死！\p"
# 299 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "那些不顾死活、肯定生命的\n"
# 300 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "冒险日子又回来了……$"
# 301 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 302 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter:
# 303 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "那么！\p"
# 304 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "我感觉自己的勇气\n"
# 305 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "已经超表了！$"
# 306 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 307 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_EverythingYouHave:
# 308 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "把你的一切都拿出来！\n"
# 309 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "我全都准备好了！$"
# 310 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 311 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis:
# 312 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "神代：哈哈哈！\n"
# 313 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "了不起！\l"
# 314 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "是啊，真是宏大！\p"
# 315 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "年轻的探险家！\p"
# 316 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "你彻彻底底打败了我！\n"
# 317 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "来！这个给你！$"
# 318 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 319 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine:
# 320 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "勇气象征泛起了\n"
# 321 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "金色的光芒！$"
# 322 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 323 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_FarewellForNow:
# 324 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "啊，是啊！这正说明我\n"
# 325 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "还有很多要学！\p"
# 326 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "愿我们再次相遇！\n"
# 327 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "先告别了，年轻的探险家！$"
# 328 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 329 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady:
# 330 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "那么，准备好后，鼓起勇气\n"
# 331 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "向前迈步吧。$"
