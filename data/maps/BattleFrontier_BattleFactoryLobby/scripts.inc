# 1 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
.set LOCALID_ATTENDANT_SINGLES, 1
# 3 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
.set LOCALID_ATTENDANT_DOUBLES, 6
# 4 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 5 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_MapScripts::
# 6 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryLobby_OnFrame
# 7 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryLobby_OnWarp
# 8 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.byte 0
# 9 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 10 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_OnWarp:
# 11 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth
# 12 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 14 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth::
# 15 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 17 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 18 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 19 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_OnFrame:
# 20 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus
# 21 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving
# 22 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge
# 23 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge
# 24 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge
# 25 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.2byte 0
# 26 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 27 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus::
# 28 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_getstatus
# 29 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 31 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving::
# 32 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 33 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 34 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 35 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_setswapped
# 36 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS, 0
# 37 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK, 0
# 38 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 39 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 40 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 41 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 42 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 43 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge::
# 45 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 46 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_isbrain
# 47 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead
# 48 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins, MSGBOX_DEFAULT
# 49 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 50 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints
# 51 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead::
# 53 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead, MSGBOX_DEFAULT
# 54 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 55 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints::
# 56 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints, MSGBOX_DEFAULT
# 57 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_givepoints
# 58 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 59 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
# 60 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 61 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 62 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 63 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 64 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 65 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 66 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 67 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle
# 68 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 69 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 70 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge::
# 71 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 72 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
# 73 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 74 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 75 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 76 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 77 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 78 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 79 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 80 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 81 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 82 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle::
# 83 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 84 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 85 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
# 86 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 87 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 88 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 90 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle
# 91 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 92 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 93 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle::
# 94 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 95 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle::
# 96 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 98 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 99 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 100 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 101 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 102 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge::
# 103 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 104 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
# 105 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 106 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save CHALLENGE_STATUS_SAVING
# 107 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 108 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 109 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 110 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 111 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 2
# 112 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge
# 113 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 114 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_SinglesAttendant::
# 115 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 116 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	faceplayer
# 117 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 118 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 119 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
# 120 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 121 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 122 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_DoublesAttendant::
# 123 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 124 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 125 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
# 126 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 127 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 128 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Attendant::
# 129 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 130 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle
# 131 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle
# 132 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge::
# 133 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge
# 134 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge
# 135 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 136 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 137 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge
# 139 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge
# 140 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 141 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 142 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 143 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge::
# 144 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
# 145 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 146 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 147 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 148 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 149 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 150 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 151 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 152 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 153 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case NO, BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
# 154 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case YES, BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge
# 155 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
# 156 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 157 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge::
# 158 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 159 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_init
# 160 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 161 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, TRUE
# 162 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 163 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 164 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	delay 2
# 165 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 166 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 167 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed
# 168 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 0
# 169 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge::
# 170 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 171 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 172 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 173 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant
# 174 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant
# 175 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor
# 176 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor
# 177 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmovement 0
# 178 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 13
# 179 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 180 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitstate
# 181 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 182 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 183 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant::
# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_SINGLES
# 185 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 186 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 187 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant::
# 188 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_DOUBLES
# 189 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 190 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 191 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge::
# 192 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge
# 193 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge
# 194 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge
# 195 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 196 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed::
# 197 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 198 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 199 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 200 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge::
# 201 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 202 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 203 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge::
# 204 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 205 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
# 206 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 207 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 208 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor:
# 209 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 210 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 211 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 212 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	set_invisible
# 213 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	step_end
# 214 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 215 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor:
# 216 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 217 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 218 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 219 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 220 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	step_end
# 221 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 222 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle::
# 223 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
# 224 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 225 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 226 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle::
# 227 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
# 228 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 229 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 230 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge::
# 231 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
# 232 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 233 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 234 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge::
# 235 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
# 236 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 237 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 238 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge::
# 239 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 240 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 241 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 242 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge::
# 243 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 244 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 245 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 246 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ShowSinglesResults::
# 247 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 248 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_SINGLES
# 249 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 250 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 251 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 252 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 253 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 254 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ShowDoublesResults::
# 255 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 256 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_DOUBLES
# 257 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 258 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 259 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 260 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 261 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 262 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Woman::
# 263 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves, MSGBOX_NPC
# 264 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 265 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 266 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Camper::
# 267 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon, MSGBOX_NPC
# 268 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 269 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 270 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Picnicker::
# 271 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 272 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons, MSGBOX_DEFAULT
# 273 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
# 274 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 275 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 276 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_FatMan::
# 277 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints, MSGBOX_NPC
# 278 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 279 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 280 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesBoard::
# 281 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 282 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 283 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 284 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 285 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 286 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard::
# 287 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
# 288 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 289 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 0, MULTI_BATTLE_FACTORY_RULES, FALSE
# 290 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 291 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics
# 292 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner
# 293 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber
# 294 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 3, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes
# 295 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 4, BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv
# 296 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 5, BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
# 297 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
# 298 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 299 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 300 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics::
# 301 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
# 302 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 303 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 304 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 305 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner::
# 306 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
# 307 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 308 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 309 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 310 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber::
# 311 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
# 312 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 313 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 314 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 315 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes::
# 316 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules, MSGBOX_DEFAULT
# 317 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 318 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 319 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 320 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv::
# 321 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules, MSGBOX_DEFAULT
# 322 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 323 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 324 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 325 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExitRules::
# 326 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 327 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 328 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 329 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle:
# 330 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "这里是考验训练家\n"
# 331 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "智慧的地方！\p"
# 332 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "欢迎来到对战工厂！\p"
# 333 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我是交换对战单打大赛的\n"
# 334 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "向导。$"
# 335 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 336 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge:
# 337 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你想挑战交换对战\n"
# 338 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "单打大赛吗？$"
# 339 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 340 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge:
# 341 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "交换对战单打大赛，是只用租来的\n"
# 342 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "宝可梦进行的单打对战比赛。\p"
# 343 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "首先，会专门为本活动\n"
# 344 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "借给你三只宝可梦。\p"
# 345 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你必须用提供的租借\n"
# 346 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "宝可梦进行单打对战。\p"
# 347 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "赢了的话，你可以交换\n"
# 348 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "一只租借宝可梦。\p"
# 349 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "重复这个对战、交换的\n"
# 350 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "循环——要是连胜七次，\l"
# 351 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "就能获得对战点数。\p"
# 352 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "想中断挑战，\n"
# 353 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "请先保存游戏。\p"
# 354 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "要是没保存，你会被\n"
# 355 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "取消挑战资格。$"
# 356 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 357 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit:
# 358 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我们期待你下次光临。$"
# 359 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 360 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode:
# 361 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你想挑战哪个等级？\n"
# 362 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "50级还是开放等级？$"
# 363 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 364 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge:
# 365 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "开始挑战前，\n"
# 366 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我需要保存游戏。可以吗？$"
# 367 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 368 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 369 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping:
# 370 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "好，你比赛期间，\n"
# 371 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你的宝可梦由我们保管。$"
# 372 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 373 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_StepThisWay:
# 374 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "请往这边走。$"
# 375 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 376 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults:
# 377 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "感谢参与！\p"
# 378 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我用你的宝可梦换回\n"
# 379 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我们的租借宝可梦。\p"
# 380 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我还必须保存活动结果。\n"
# 381 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "请稍等。$"
# 382 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 383 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 384 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReturnMons:
# 385 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我用你的宝可梦换回\n"
# 386 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我们的租借宝可梦。$"
# 387 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 388 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins:
# 389 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "恭喜！你连胜了七场\n"
# 390 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "交换对战！$"
# 391 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 392 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 393 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak:
# 394 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "为表彰你连胜七场，\n"
# 395 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我们授予你这几点\l"
# 396 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "对战点数。$"
# 397 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 398 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 399 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints:
# 400 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "哦，哦，哦！\p"
# 401 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你的对战点数满了。\p"
# 402 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "请用掉一些对战点数\n"
# 403 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "再来。$"
# 404 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 405 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume:
# 406 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我们一直在等你！\p"
# 407 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "继续你的挑战前，\n"
# 408 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我必须保存游戏。$"
# 409 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 410 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting:
# 411 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "很抱歉这么说，可你上次\n"
# 412 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "退出前没有保存。\p"
# 413 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "结果，你的挑战已被\n"
# 414 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "取消资格。$"
# 415 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 416 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 417 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WellReturnMons:
# 418 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我们把你的宝可梦\n"
# 419 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "还给你。$"
# 420 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 421 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 422 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReceivedPrizeItem:
# 423 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "{PLAYER}获得了奖品\n"
# 424 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "{STR_VAR_1}。$"
# 425 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 426 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle:
# 427 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "这里是考验训练家\n"
# 428 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "智慧的地方！\p"
# 429 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "欢迎来到对战工厂！\p"
# 430 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我是交换对战双打大赛的\n"
# 431 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "向导。$"
# 432 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 433 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge:
# 434 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你想挑战交换对战\n"
# 435 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "双打大赛吗？$"
# 436 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 437 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge:
# 438 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "交换对战双打大赛，是只用租来的\n"
# 439 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "宝可梦进行的双打对战比赛。\p"
# 440 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "首先，会专门为本活动\n"
# 441 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "借给你三只宝可梦。\p"
# 442 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你必须用提供的租借\n"
# 443 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "宝可梦进行双打对战。\p"
# 444 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "赢了的话，你可以交换\n"
# 445 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "一只租借宝可梦。\p"
# 446 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "重复这个对战、交换的\n"
# 447 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "循环——要是连胜七次，\l"
# 448 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "就能获得对战点数。\p"
# 449 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "想中断挑战，\n"
# 450 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "请先保存游戏。\p"
# 451 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "要是没保存，你会被\n"
# 452 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "取消挑战资格。$"
# 453 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 454 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead:
# 455 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "恭喜你打败工厂头目，\n"
# 456 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "并连胜七场！$"
# 457 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 458 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints:
# 459 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "为表彰你丰富的知识和\n"
# 460 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "敏锐的头脑，我们授予你\l"
# 461 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "这些对战点数。$"
# 462 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 463 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave:
# 464 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "让我用你的宝可梦换回\n"
# 465 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我们的租借宝可梦。\p"
# 466 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我需要保存对战数据，\n"
# 467 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "请稍等。$"
# 468 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 469 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch:
# 470 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "要把你最近一场对战工厂\n"
# 471 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "比赛记到开拓区通行证\l"
# 472 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "上吗？$"
# 473 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 474 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves:
# 475 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "嗨！\n"
# 476 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "就是说你！\p"
# 477 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你是不是觉得这里的活动\n"
# 478 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "不用培养队伍，所以很\l"
# 479 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "轻松？\p"
# 480 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我可不确定你能那么\n"
# 481 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "轻松地赢。\p"
# 482 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "要是你对宝可梦和它们的\n"
# 483 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "招式没有透彻的了解，\l"
# 484 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "想一直赢会很难。$"
# 485 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 486 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon:
# 487 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我换了一只弱宝可梦……\n"
# 488 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我还以为那种挺不错……\p"
# 489 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "结果我们被彻底打爆了……$"
# 490 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 491 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons:
# 492 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "我的事一点都不顺。\p"
# 493 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你得在对战中查看对手的\n"
# 494 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "宝可梦，看它们\l"
# 495 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "到底行不行。$"
# 496 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 497 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints:
# 498 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你知道这里的工作人员会\n"
# 499 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "给你一些关于下个对手的\l"
# 500 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "提示吧？\p"
# 501 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "可是我一个大男人，\n"
# 502 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "也搞不懂他们的提示。$"
# 503 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 504 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 505 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried:
# 506 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "比如，我其实很强，可很\n"
# 507 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "容易腻，就一直换着\l"
# 508 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "宝可梦打来打去。\p"
# 509 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "总之，我一直参加交换\n"
# 510 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "对战活动，就发现他们\l"
# 511 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "租借的宝可梦会变。$"
# 512 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 513 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_RulesAreListed:
# 514 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "这里列出了交换对战的规则。$"
# 515 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 516 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading:
# 517 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你想读哪一项？$"
# 518 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 519 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules:
# 520 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "在交换对战活动中，\n"
# 521 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你只能使用三只宝可梦。\p"
# 522 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "不管是租借还是交换，\n"
# 523 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你的队伍里不能有两只\l"
# 524 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "以上同种的宝可梦。$"
# 525 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 526 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules:
# 527 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你只能和你刚打赢的训练家\n"
# 528 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "交换宝可梦。\p"
# 529 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "你只能换那位被打败的\n"
# 530 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "训练家用过的宝可梦。$"
# 531 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 532 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules:
# 533 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "每赢一场对战，你可以\n"
# 534 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "从被打败的对手的宝可梦\l"
# 535 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "里换一只。\p"
# 536 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "不过你没法在活动里\n"
# 537 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "和第七位训练家交换。$"
# 538 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 539 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules:
# 540 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "交换宝可梦时有两点\n"
# 541 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "要注意。\p"
# 542 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "第一，交换时你不能查看\n"
# 543 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "将要得到的宝可梦的\l"
# 544 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "能力。\p"
# 545 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "第二，你的队伍按你租借\n"
# 546 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "它们的顺序排列。\p"
# 547 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "就算交换了，这个顺序\n"
# 548 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "也不会变。$"
# 549 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 550 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules:
# 551 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "在开放等级里，租借的\n"
# 552 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "宝可梦和对手训练家的\l"
# 553 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "宝可梦都是100级。$"
