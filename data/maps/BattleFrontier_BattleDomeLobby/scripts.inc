# 1 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
.set LOCALID_ATTENDANT_SINGLES, 1
# 3 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
.set LOCALID_ATTENDANT_DOUBLES, 6
# 4 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 5 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_MapScripts::
# 6 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeLobby_OnResume
# 7 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeLobby_OnFrame
# 8 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
# 9 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnResume:
# 12 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_initresultstree
# 13 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 14 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 15 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnWarp:
# 16 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth
# 17 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.2byte 0
# 18 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 19 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth::
# 20 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 22 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 23 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnFrame:
# 25 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus
# 26 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving
# 27 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge
# 28 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleDomeLobby_EventScript_WonChallenge
# 29 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleDomeLobby_EventScript_LostChallenge
# 30 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.2byte 0
# 31 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus::
# 33 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_getstatus
# 34 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 35 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 36 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving::
# 37 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 38 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 39 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 40 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK, 0
# 41 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 42 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 43 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 44 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 45 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 46 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 47 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 48 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WonChallenge::
# 49 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 50 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 51 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_isbrain
# 52 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce
# 53 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney, MSGBOX_DEFAULT
# 54 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints
# 55 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 56 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce::
# 57 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker, MSGBOX_DEFAULT
# 58 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints::
# 59 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints, MSGBOX_DEFAULT
# 60 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_givepoints
# 61 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 62 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 63 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 64 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 65 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 66 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 67 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 68 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_HAS_WON_CHALLENGE, TRUE
# 69 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, TRUE
# 70 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 71 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 72 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 73 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle
# 74 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 75 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_LostChallenge::
# 76 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 77 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 78 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 79 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 80 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 81 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 82 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 83 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 84 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 85 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 86 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 87 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 88 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle::
# 89 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save 0
# 90 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 91 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 92 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 93 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 94 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordLastMatch
# 95 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 96 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 97 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 99 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_RecordBattle
# 100 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 101 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 102 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RecordBattle::
# 103 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 104 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EndChallenge::
# 105 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 106 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 107 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 108 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 109 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 110 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 111 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge::
# 112 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 113 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou, MSGBOX_DEFAULT
# 114 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2
# 115 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 116 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save CHALLENGE_STATUS_SAVING
# 117 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 118 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 119 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 120 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 121 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge
# 122 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 123 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant::
# 124 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 125 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 126 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 127 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 128 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
# 129 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 130 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 131 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant::
# 132 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 133 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 134 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 135 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 136 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
# 137 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 138 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 139 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome::
# 140 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 141 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles
# 142 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles
# 143 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge::
# 144 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge
# 145 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge
# 146 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 147 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 148 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 149 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge
# 150 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge
# 151 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 152 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 153 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 154 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge::
# 155 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_WhichLevelMode
# 156 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 157 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 158 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 160 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 161 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkineligible
# 162 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons
# 163 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 164 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 166 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 167 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 168 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 169 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 170 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 171 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 172 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 173 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 174 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 175 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case NO, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 176 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case YES, BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge
# 177 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 178 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 179 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge::
# 180 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 181 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 182 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_init
# 183 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 184 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 185 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 186 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 187 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	delay 2
# 188 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 189 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 190 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed
# 191 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_inittrainers
# 192 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge::
# 193 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 194 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 195 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_settrainers
# 196 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome, MSGBOX_DEFAULT
# 197 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 198 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor
# 199 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 200 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR, 23, 6
# 201 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 202 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 203 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 204 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 205 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge::
# 206 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge
# 207 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge
# 208 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge
# 209 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 210 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons::
# 211 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 212 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50
# 213 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen
# 214 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 215 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50::
# 216 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 217 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
# 218 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 219 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen::
# 220 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 221 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
# 222 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 223 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed::
# 224 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 225 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 226 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 227 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge::
# 228 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 229 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 230 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge::
# 231 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 232 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge::
# 233 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	release
# 234 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 235 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 236 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor::
# 237 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor
# 238 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor
# 239 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 240 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 241 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor
# 242 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor
# 243 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 244 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor
# 245 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor
# 246 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor
# 247 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 248 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor
# 249 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor
# 250 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 252 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 253 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor::
# 254 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 255 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 256 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 257 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor::
# 258 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 259 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 260 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 261 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor::
# 262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
# 263 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 264 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor::
# 266 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
# 267 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 268 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 269 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles::
# 270 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle, MSGBOX_DEFAULT
# 271 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 272 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles::
# 274 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 275 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 276 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge::
# 278 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge
# 279 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 280 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge::
# 282 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge
# 283 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge::
# 286 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 287 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 288 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 289 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge::
# 290 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 291 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 292 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 293 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor::
# 294 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 5, 4
# 295 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 296 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 297 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor::
# 298 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 17, 4
# 299 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 300 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor::
# 302 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 5, 4
# 303 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 304 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 305 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor::
# 306 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 17, 4
# 307 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 308 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_WalkToDoor:
# 310 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 311 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 312 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 313 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 314 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 315 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 316 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 317 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor:
# 318 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 319 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 320 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 321 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 322 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor:
# 323 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 324 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 325 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 326 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 327 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 328 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowSinglesResults::
# 329 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 330 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_SINGLES
# 331 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 332 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 333 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 334 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 335 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 336 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowDoublesResults::
# 337 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 338 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_DOUBLES
# 339 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 340 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 341 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 342 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 343 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 344 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree::
# 345 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_get DOME_DATA_PREV_TOURNEY_TYPE
# 346 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50
# 347 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 1, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50
# 348 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 2, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen
# 349 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 3, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen
# 350 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 351 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_showprevtourneytree
# 352 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 353 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 354 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50::
# 356 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50, MSGBOX_SIGN
# 357 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 358 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50::
# 360 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50, MSGBOX_SIGN
# 361 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 362 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 363 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen::
# 364 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen, MSGBOX_SIGN
# 365 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 366 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 367 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen::
# 368 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen, MSGBOX_SIGN
# 369 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 370 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 371 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Maniac::
# 372 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_getwinnersname
# 373 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough, MSGBOX_NPC
# 374 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 375 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 376 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Lass::
# 377 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation, MSGBOX_NPC
# 378 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 379 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 380 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_FatMan::
# 381 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound, MSGBOX_NPC
# 382 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 383 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 384 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Man::
# 385 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully, MSGBOX_NPC
# 386 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 387 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 388 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ A few OutsideWest event scripts are inserted here instead, two of which are unused
# 389 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man3::
# 390 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier, MSGBOX_NPC
# 391 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 392 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 393 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 394 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign2::
# 395 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign2, MSGBOX_NPC
# 396 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 397 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 398 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 399 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnderConstructionSign::
# 400 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction, MSGBOX_NPC
# 401 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 402 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 403 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesBoard::
# 404 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 405 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 406 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 407 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 408 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 409 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard::
# 410 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading
# 411 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 412 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 4, MULTI_BATTLE_DOME_RULES, FALSE
# 413 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 414 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup
# 415 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree
# 416 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO
# 417 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 3, BattleFrontier_BattleDomeLobby_EventScript_ExitRules
# 418 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_ExitRules
# 419 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 420 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 421 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup::
# 422 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules, MSGBOX_DEFAULT
# 423 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 424 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 425 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 426 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree::
# 427 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree, MSGBOX_DEFAULT
# 428 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 429 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 430 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 431 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO::
# 432 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules, MSGBOX_DEFAULT
# 433 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 434 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 435 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 436 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExitRules::
# 437 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 438 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 439 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 440 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle:
# 441 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "这里是考验训练家\n"
# 442 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "战略的地方！\p"
# 443 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "欢迎来到对战巨蛋！\p"
# 444 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "我是单打对战大赛的向导。$"
# 445 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 446 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge:
# 447 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你想挑战\n"
# 448 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "单打对战大赛吗？$"
# 449 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 450 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain:
# 451 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "希望再次见到你。$"
# 452 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 453 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge:
# 454 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "单打对战大赛，正如其名——\n"
# 455 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "是单打对战的大赛。\p"
# 456 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "所有参赛训练家必须\n"
# 457 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "各带三只宝可梦。\p"
# 458 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "每场对战中，三只里\n"
# 459 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "必须留一只当后备。\p"
# 460 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "另外两只可以一只一只\n"
# 461 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "上场对战。\p"
# 462 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "看完对手的三只之后，\n"
# 463 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "再选出要上场对战的两只。\p"
# 464 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你打赢四位训练家就能\n"
# 465 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "赢得大赛。\p"
# 466 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "大赛冠军能获得\n"
# 467 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "对战点数。\p"
# 468 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "想中断大赛，\n"
# 469 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "请先保存游戏。\p"
# 470 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "要是没保存就中断，\n"
# 471 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你会被取消资格。$"
# 472 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 473 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge:
# 474 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "带你进入对战巨蛋前，\n"
# 475 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "我必须保存数据。可以吗？$"
# 476 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 477 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WhichLevelMode:
# 478 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "大赛有两个挑战等级：\n"
# 479 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "50级和开放等级。\l"
# 480 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你选哪个？$"
# 481 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 482 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_SelectThreeMons:
# 483 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "现在请选择你想\n"
# 484 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "派出的三只宝可梦。$"
# 485 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 486 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen:
# 487 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "打扰一下！\p"
# 488 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你没有三只符合条件的\n"
# 489 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "宝可梦。\p"
# 490 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "而且，宝可梦必须分别携带\n"
# 491 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "不同种类的道具。\p"
# 492 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "蛋不能参加。\p"
# 493 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "准备好了再来找我。$"
# 494 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 495 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50:
# 496 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "打扰一下！\p"
# 497 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你没有三只符合条件的\n"
# 498 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "宝可梦。\p"
# 499 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你必须带上三只不同、\n"
# 500 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "50级或以下的宝可梦。\p"
# 501 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "它们还必须分别携带\n"
# 502 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "不同种类的道具。\p"
# 503 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "蛋不能参加。\p"
# 504 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "准备好了再来找我。$"
# 505 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 506 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome:
# 507 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "我现在带你前往\n"
# 508 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "对战巨蛋。$"
# 509 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 510 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting:
# 511 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "打扰一下！\p"
# 512 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你上次退出挑战前\n"
# 513 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "没有保存。\p"
# 514 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "因此，你之前的挑战\n"
# 515 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "成绩已被取消。抱歉！$"
# 516 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 517 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney:
# 518 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "恭喜你在对战大赛中\n"
# 519 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "获胜！$"
# 520 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 521 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 522 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize:
# 523 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "这是你赢得对战大赛\n"
# 524 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "的奖品。$"
# 525 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 526 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Used by Verdanturf Tent
# 527 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ReceivedPrize:
# 528 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{PLAYER}获得了奖品\n"
# 529 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{STR_VAR_1}。$"
# 530 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 531 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 532 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom:
# 533 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "哦，你的包包好像满了。\p"
# 534 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "请先整理包包，\n"
# 535 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "再来找我。$"
# 536 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 537 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying:
# 538 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "感谢游玩！$"
# 539 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 540 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved:
# 541 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你的记录会被保存。\n"
# 542 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "请稍等。$"
# 543 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 544 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou:
# 545 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "我们一直在等你！$"
# 546 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 547 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2:
# 548 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "带你进入对战巨蛋前，\n"
# 549 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "我必须保存数据。可以吗？$"
# 550 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 551 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle:
# 552 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "这里是考验训练家\n"
# 553 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "战略的地方！\p"
# 554 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "欢迎来到对战巨蛋！\p"
# 555 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "我是双打对战大赛的向导。$"
# 556 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 557 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge:
# 558 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你想挑战\n"
# 559 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "双打对战大赛吗？$"
# 560 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 561 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge:
# 562 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "双打对战大赛，正如其名——\n"
# 563 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "是双打对战的大赛。\p"
# 564 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "所有参赛训练家必须\n"
# 565 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "各带三只宝可梦。\p"
# 566 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "每场对战中，三只里\n"
# 567 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "必须留一只当后备。\p"
# 568 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "剩下两只必须进行\n"
# 569 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "双打对战。\p"
# 570 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "看完对手的三只之后，\n"
# 571 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "再选出要上场对战的两只。\p"
# 572 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你打赢四位训练家就能\n"
# 573 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "赢得大赛。\p"
# 574 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "大赛冠军能获得\n"
# 575 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "对战点数。\p"
# 576 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "想中断大赛，\n"
# 577 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "请先保存游戏。\p"
# 578 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "要是没保存就中断，\n"
# 579 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你会被取消资格。$"
# 580 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 581 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50:
# 582 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "这是上一届50级单打\n"
# 583 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "对战大赛的结果。$"
# 584 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 585 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50:
# 586 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "这是上一届50级双打\n"
# 587 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "对战大赛的结果。$"
# 588 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 589 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen:
# 590 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "这是上一届开放等级单打\n"
# 591 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "对战大赛的结果。$"
# 592 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 593 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen:
# 594 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "这是上一届开放等级双打\n"
# 595 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "对战大赛的结果。$"
# 596 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 597 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough:
# 598 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你看到了吗？\n"
# 599 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "上一场对战大赛？\p"
# 600 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "冠军{STR_VAR_1}可真够\n"
# 601 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "厉害的。\p"
# 602 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你该去看看电脑旁边显示器\n"
# 603 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "上的结果。$"
# 604 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 605 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier:
# 606 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "对战开拓区……\n"
# 607 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "我梦想有这样的地方很久了。$"
# 608 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 609 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Functionally unused
# 610 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign2:
# 611 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "对战巨蛋\n"
# 612 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "成为无敌的超级明星！$"
# 613 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 614 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Functionally unused
# 615 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction:
# 616 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "？？？？？？\n"
# 617 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "施工中！$"
# 618 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 619 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation:
# 620 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "训练家在对战巨蛋连续\n"
# 621 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "夺冠，就会赢得\l"
# 622 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "明星般的名声。\p"
# 623 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "厉害的训练家会被\n"
# 624 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "这名声吸引到对战巨蛋。\p"
# 625 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "真正的超级明星，就是\n"
# 626 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "能一直夺冠的训练家。$"
# 627 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 628 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound:
# 629 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "第一轮我就碰上了夺冠\n"
# 630 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "热门之一。\p"
# 631 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "当然，我被\n"
# 632 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "彻底打爆了……$"
# 633 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 634 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully:
# 635 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "要是我把这只宝可梦\n"
# 636 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "留作后备，本可以赢的。\p"
# 637 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "选上场宝可梦之前，\n"
# 638 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "必须仔细看清对手的\l"
# 639 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "宝可梦。$"
# 640 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 641 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker:
# 642 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "恭喜！\p"
# 643 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你打败了巨蛋之星，赢得了\n"
# 644 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "对战大赛！$"
# 645 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 646 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints:
# 647 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "为表彰你的战略——\n"
# 648 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "那真是件漂亮的作品——\l"
# 649 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "我们授予你这几点\l"
# 650 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "对战点数！$"
# 651 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 652 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RecordLastMatch:
# 653 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "要把你上一场对战巨蛋\n"
# 654 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "比赛记到开拓区通行证\l"
# 655 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "上吗？$"
# 656 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 657 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RulesAreListed:
# 658 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "这里列出了对战大赛\n"
# 659 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "的规则。$"
# 660 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 661 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading:
# 662 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "你想读哪一项？$"
# 663 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 664 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules:
# 665 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "大赛的对战组合是根据\n"
# 666 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "训练家持有的宝可梦\l"
# 667 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "强度抽签决定的。\p"
# 668 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "这样安排可以避免强\n"
# 669 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "训练家一开始就对上。$"
# 670 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 671 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree:
# 672 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "大赛对阵表——我们叫\n"
# 673 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "它“树”——可以在等候室\l"
# 674 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "向任何向导查看。\p"
# 675 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "大赛树会提供\n"
# 676 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "几种数据。\p"
# 677 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "可以看到的数据包括上一届\n"
# 678 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "大赛的结果、训练家持有的\l"
# 679 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "宝可梦，以及训练家的\l"
# 680 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "战斗风格。$"
# 681 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 682 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules:
# 683 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "要是大赛对战中双方宝可梦\n"
# 684 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "同时倒下——也就是双杀——\l"
# 685 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "裁判会重新审视比赛并\l"
# 686 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "宣布获胜者。$"
