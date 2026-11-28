# 1 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 4 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_MapScripts::
# 5 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaLobby_OnFrame
# 6 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaLobby_OnWarp
# 7 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnWarp:
# 10 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth
# 11 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 12 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth::
# 14 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 16 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 17 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 18 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnFrame:
# 19 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus
# 20 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving
# 21 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge
# 22 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleArenaLobby_EventScript_WonChallenge
# 23 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleArenaLobby_EventScript_LostChallenge
# 24 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 25 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 26 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus::
# 27 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_getstatus
# 28 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 30 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving::
# 31 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 32 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 34 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK, 0
# 35 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 36 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 37 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 38 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 39 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 41 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WonChallenge::
# 42 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 43 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_isbrain
# 44 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon
# 45 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins, MSGBOX_DEFAULT
# 46 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints
# 47 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 48 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon::
# 49 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints::
# 51 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_givepoints
# 53 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 54 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordAchievement
# 55 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 56 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 57 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 58 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 59 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 60 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 61 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 62 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 63 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LostChallenge::
# 64 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 65 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
# 66 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 67 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 68 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 69 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 70 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 71 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 72 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 73 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 74 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 75 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge::
# 76 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkairshow
# 77 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 78 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special HealPlayerParty
# 79 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 80 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save 0
# 81 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 82 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 83 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 84 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 85 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
# 86 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 87 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 88 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 90 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_RecordMatch
# 91 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 92 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 93 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RecordMatch::
# 94 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 95 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge::
# 96 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 97 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 98 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge::
# 99 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 100 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
# 101 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 102 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save CHALLENGE_STATUS_SAVING
# 103 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 104 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 105 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 106 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 107 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge
# 108 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 109 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Attendant::
# 110 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lock
# 111 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	faceplayer
# 112 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
# 113 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 114 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 115 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena, MSGBOX_DEFAULT
# 116 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge::
# 117 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
# 118 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 119 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 120 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 121 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge
# 122 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge
# 123 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 124 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 125 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 126 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge::
# 127 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
# 128 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 129 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 130 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 132 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 133 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkineligible
# 134 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons
# 135 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 136 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 137 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 138 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 139 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 140 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 141 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 142 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 143 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 144 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 145 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
# 146 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 147 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case NO, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 148 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case YES, BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
# 149 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 150 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 151 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge::
# 152 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 153 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 154 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_init
# 155 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, TRUE
# 156 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 157 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 158 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 159 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 160 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	delay 2
# 161 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 162 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 163 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed
# 164 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge::
# 165 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 166 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 167 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_GuideYouToArena, MSGBOX_DEFAULT
# 168 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 169 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 170 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call_if_eq VAR_RESULT, FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50
# 171 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call_if_eq VAR_RESULT, FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen
# 172 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR, 9, 13
# 173 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 174 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 175 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 176 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 177 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge::
# 178 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainChallenge, MSGBOX_DEFAULT
# 179 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge
# 180 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 181 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons::
# 182 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 183 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50
# 184 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen
# 185 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 186 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50::
# 187 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 188 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 189 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 190 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen::
# 191 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 192 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 193 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 194 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed::
# 195 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 196 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 197 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge::
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 200 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 201 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge::
# 202 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge::
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	release
# 205 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 206 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 207 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50::
# 208 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor
# 209 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor
# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 211 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 2, 2
# 212 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 213 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 214 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 215 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 216 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 2, 2
# 217 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 218 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 219 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 220 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor:
# 221 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 222 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 223 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 224 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 225 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 226 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 227 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 228 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 229 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 230 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 231 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 232 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor:
# 233 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 234 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 235 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 236 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 237 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor:
# 238 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 239 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 240 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 241 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 242 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 243 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 244 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 245 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 246 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 247 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 248 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 249 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 250 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor:
# 251 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 252 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 253 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 254 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 255 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 256 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen::
# 257 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor
# 258 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor
# 259 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 260 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 11, 2
# 261 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 262 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 263 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 264 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 265 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 11, 2
# 266 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 267 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 268 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 269 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor:
# 270 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 271 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 272 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 273 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 274 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 275 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 276 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 277 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 278 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 279 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 280 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor:
# 281 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 282 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 283 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 284 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 285 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 286 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 287 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 288 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 289 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 290 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 291 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 292 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ShowResults::
# 293 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 294 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_ARENA
# 295 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitbuttonpress
# 296 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special RemoveRecordsWindow
# 297 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 298 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 299 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 300 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Youngster::
# 301 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack, MSGBOX_NPC
# 302 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 303 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 304 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Man::
# 305 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked, MSGBOX_NPC
# 306 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 307 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 308 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Camper::
# 309 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw, MSGBOX_NPC
# 310 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 311 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 312 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Woman::
# 313 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant, MSGBOX_NPC
# 314 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 315 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 316 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RulesBoard::
# 317 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 318 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 319 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 320 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 321 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 322 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard::
# 323 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
# 324 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 325 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_ARENA_RULES, FALSE
# 326 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 327 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_BattleRules
# 328 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_MindRules
# 329 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_SkillRules
# 330 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 3, BattleFrontier_BattleArenaLobby_EventScript_BodyRules
# 331 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 4, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 332 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 333 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 334 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 335 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BattleRules::
# 336 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
# 337 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 338 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 339 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 340 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_MindRules::
# 341 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
# 342 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 343 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 344 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 345 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SkillRules::
# 346 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
# 347 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 348 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 349 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 350 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BodyRules::
# 351 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
# 352 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 353 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 354 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExitRules::
# 356 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 357 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 358 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena:
# 360 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "这里是考验训练家\n"
# 361 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "对战精神的地方！\p"
# 362 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "欢迎来到对战竞技场！\p"
# 363 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我是定数击倒大赛的向导！$"
# 364 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 365 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge:
# 366 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "那么，你想挑战\n"
# 367 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "对战竞技场吗？$"
# 368 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 369 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge:
# 370 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我们期待你在别的\n"
# 371 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "时候来挑战！$"
# 372 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 373 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainChallenge:
# 374 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "对战竞技场举办的是\n"
# 375 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "定数击倒大赛。\p"
# 376 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "所有参赛者带三只\n"
# 377 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "宝可梦的队伍进场。\p"
# 378 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "三只宝可梦必须按\n"
# 379 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "出场的顺序排好。\p"
# 380 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "对战时，宝可梦会按\n"
# 381 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "预设顺序一只只出场。\p"
# 382 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "宝可梦一旦上场，\n"
# 383 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "在对战分出结果前都不能\l"
# 384 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "换下。\p"
# 385 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "要是三回合内还没分出\n"
# 386 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "结果，就交给评判。\p"
# 387 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "想中断挑战，\n"
# 388 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "请先保存游戏。\p"
# 389 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "要是没保存，你就无法\n"
# 390 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "继续挑战。\p"
# 391 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "要是你连胜七位训练家，\n"
# 392 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我们会授予你对战点数。$\n"
# 393 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 394 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OkayToSave:
# 395 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "带你前往对战竞技场前，\n"
# 396 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "必须保存。可以吗？$\n"
# 397 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 398 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WhichLevelMode:
# 399 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "对战竞技场有两个挑战\n"
# 400 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "等级：50级和开放等级。\l"
# 401 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "你选哪个？$\n"
# 402 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 403 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_SelectThreeMons:
# 404 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "很好，现在请选择\n"
# 405 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "你的三只宝可梦。$\n"
# 406 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 407 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen:
# 408 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我亲爱的挑战者！\p"
# 409 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "你没有参赛所需的三只\n"
# 410 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "宝可梦。\p"
# 411 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "要符合条件，你必须带三种\n"
# 412 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "不同的宝可梦。\p"
# 413 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "它们也不能携带同种类的\n"
# 414 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "道具。\p"
# 415 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "蛋不能参加。\p"
# 416 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "准备好之后，\n"
# 417 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "请再来。$\n"
# 418 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 419 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50:
# 420 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我亲爱的挑战者！\p"
# 421 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "你没有参赛所需的三只\n"
# 422 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "宝可梦。\p"
# 423 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "要符合条件，你必须带三种\n"
# 424 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "不同的宝可梦。\p"
# 425 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "三种不同的宝可梦都必须\n"
# 426 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "在50级或以下。\p"
# 427 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "它们也不能携带同种类的\n"
# 428 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "道具。\p"
# 429 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "蛋不能参加。\p"
# 430 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "准备好之后，\n"
# 431 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "请再来。$\n"
# 432 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 433 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_GuideYouToArena:
# 434 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我现在带你前往\n"
# 435 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "对战竞技场。$\n"
# 436 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 437 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown:
# 438 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我亲爱的挑战者！\p"
# 439 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "你退出之前没保存游戏，\n"
# 440 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "对吧？\p"
# 441 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "很不幸，这导致你\n"
# 442 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "被取消挑战资格。\p"
# 443 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "当然，你可以重新\n"
# 444 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "开始挑战。$\n"
# 445 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 446 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins:
# 447 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "恭喜你漂亮地连胜\n"
# 448 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "七位训练家！$\n"
# 449 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 450 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordAchievement:
# 451 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "你的成绩会被记录。\n"
# 452 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "请稍等，我保存游戏。$\n"
# 453 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 454 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 455 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize:
# 456 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "为纪念你连胜七场，\n"
# 457 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我们送你这个奖品。$\n"
# 458 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 459 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 460 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize:
# 461 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{PLAYER}获得了奖品\n"
# 462 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{STR_VAR_1}。$\n"
# 463 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 464 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 465 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize:
# 466 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "哦？\n"
# 467 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "你的包包好像满了。\p"
# 468 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "请清出空间再回来\n"
# 469 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "拿奖品。$\n"
# 470 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 471 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave:
# 472 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "非常感谢你参与！\p"
# 473 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "请稍等，我保存游戏。$\n"
# 474 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 475 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2:
# 476 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我们期待你在别的\n"
# 477 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "时候来挑战！$\n"
# 478 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 479 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame:
# 480 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我们一直在等你到来。\p"
# 481 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "带你前往对战竞技场前，\n"
# 482 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我必须保存游戏。\l"
# 483 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "请稍等。$\n"
# 484 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordLastMatch:
# 486 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "要我把你上一场对战竞技场\n"
# 487 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "比赛记到开拓区通行证\l"
# 488 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "上吗？$\n"
# 489 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 490 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack:
# 491 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我因为裁判判定输了……\p"
# 492 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我觉得只用防守招式\n"
# 493 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "不进攻不是好主意……$\n"
# 494 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 495 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked:
# 496 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我在评判中赢了！\p"
# 497 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "一直稳定击中对手的\n"
# 498 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "宝可梦很有效！$\n"
# 499 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 500 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw:
# 501 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我们那场被判平局。\p"
# 502 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "时间到时，我的宝可梦\n"
# 503 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "和对手剩余HP差不多。$\n"
# 504 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 505 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant:
# 506 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "在对战竞技场，宝可梦的\n"
# 507 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "顺序非常重要。\p"
# 508 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "比如，要是你第一只宝可梦\n"
# 509 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "有属性劣势，试着让第二只\l"
# 510 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "带上能对第一只超级\l"
# 511 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "有效的招式。\p"
# 512 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我觉得那是组成有效\n"
# 513 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "队伍的好办法。$\n"
# 514 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 515 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RulesAreListed:
# 516 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "这里列出了定数击倒大赛\n"
# 517 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "的规则。$\n"
# 518 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 519 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading:
# 520 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "你想读哪一项？$\n"
# 521 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 522 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules:
# 523 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "定数击倒大赛有特殊规则，\n"
# 524 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "和普通对战不同。\p"
# 525 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "第一，一场对战只持续\n"
# 526 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "三个回合。\p"
# 527 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "要是三回合后还没分出\n"
# 528 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "结果，就交给评判。\p"
# 529 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "裁判会根据宝可梦的\n"
# 530 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "对战方式选出获胜者。\p"
# 531 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "另外，在对战分出结果前，\n"
# 532 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "宝可梦不能换下。$\n"
# 533 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 534 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainMindRules:
# 535 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "第一个评判因素是“心”。\n"
# 536 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "这个因素评估对战者\l"
# 537 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "有多积极进攻。\p"
# 538 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "评判依据是训练家下达\n"
# 539 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "进攻招式指令的次数。$\n"
# 540 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 541 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules:
# 542 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "第二个评判因素是“技”。\n"
# 543 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "这个因素评估宝可梦\l"
# 544 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "招式的运用效果。\p"
# 545 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "招式要是成功生效，\n"
# 546 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "技的评价会提高。\p"
# 547 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "招式要是失败，技的\n"
# 548 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "评价会降低。\p"
# 549 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "要是进攻招式，判定为\n"
# 550 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "“效果绝佳”时技的评价\l"
# 551 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "提高，“效果不好”时\l"
# 552 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "降低。\p"
# 553 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "像守住和检测这类招式\n"
# 554 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "不会提高技的评价。\p"
# 555 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "要是对手用了守住或检测，\n"
# 556 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "而你的宝可梦招式没打中，\l"
# 557 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "技的评价不会降低。$\n"
# 558 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 559 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules:
# 560 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "第三个评判因素是“体”。\n"
# 561 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "这个因素根据对战结束时\l"
# 562 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "剩余多少HP来评判。\p"
# 563 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "评判会考虑宝可梦在对战\n"
# 564 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "开始时有多少HP，\l"
# 565 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "以及结束时还剩多少。$\n"
# 566 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 567 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon:
# 568 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "从竞技场大君手里夺得\n"
# 569 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "胜利，还横扫七位训练家！\p"
# 570 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "恭喜你完成了最精彩的\n"
# 571 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "挑战！$\n"
# 572 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 573 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints:
# 574 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "我亲爱的挑战者，为表彰\n"
# 575 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "你不屈的精神，请收下\l"
# 576 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "这些对战点数。$"
