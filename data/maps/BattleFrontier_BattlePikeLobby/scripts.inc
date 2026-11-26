# 1 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 4 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_MapScripts::
# 5 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeLobby_OnFrame
# 6 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeLobby_OnWarp
# 7 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_OnFrame:
# 10 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus
# 11 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving
# 12 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePikeLobby_EventScript_WonChallenge
# 13 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePikeLobby_EventScript_LostChallenge
# 14 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.2byte 0
# 15 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 16 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_OnWarp:
# 17 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth
# 18 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.2byte 0
# 19 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 20 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth::
# 21 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 22 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 23 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 24 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 25 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus::
# 26 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_getstatus
# 27 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 28 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 29 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving::
# 30 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 31 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 32 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 33 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting, MSGBOX_DEFAULT
# 34 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 35 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK, 0
# 36 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 37 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 38 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 39 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 40 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 41 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 42 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WonChallenge::
# 43 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 44 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_isbrain
# 45 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen
# 46 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance, MSGBOX_DEFAULT
# 47 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 48 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints
# 49 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 50 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen::
# 51 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 53 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints::
# 54 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 55 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_givepoints
# 56 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 57 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 58 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_get PIKE_DATA_TOTAL_STREAKS
# 59 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	addvar VAR_RESULT, 1
# 60 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_TOTAL_STREAKS, VAR_RESULT
# 61 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 62 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 63 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 64 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 65 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ShallRecordResults
# 66 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 67 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_save 0
# 68 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_SAVE
# 69 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 70 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 71 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 72 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 73 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 74 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 75 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 76 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_LostChallenge::
# 77 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 78 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults
# 79 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 80 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 81 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, 0
# 82 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 83 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 84 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 85 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 86 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 87 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_save 0
# 88 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_SAVE
# 89 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 90 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 91 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 92 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 93 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 94 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 95 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 96 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Attendant::
# 97 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lock
# 98 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	faceplayer
# 99 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PIKE
# 100 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 101 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 102 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike, MSGBOX_DEFAULT
# 103 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge::
# 104 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_TakeChallenge
# 105 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 106 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 107 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge
# 109 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge
# 110 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 111 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 112 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 113 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge::
# 114 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode
# 115 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 116 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 117 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 118 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 119 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 120 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkineligible
# 121 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons
# 122 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 123 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons, MSGBOX_DEFAULT
# 124 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 125 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 126 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 127 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 128 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 129 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 130 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 131 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 132 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 133 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 134 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case NO, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 135 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case YES, BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge
# 136 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 137 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 138 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge::
# 139 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 140 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 0
# 141 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 142 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_init
# 143 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 144 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, TRUE
# 145 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 146 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 147 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 148 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 149 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	delay 2
# 150 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 151 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 152 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 153 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed
# 154 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 155 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 156 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 157 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 158 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_settrainers
# 159 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor
# 160 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 161 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_BattlePike_EventScript_CloseCurtain
# 162 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_CORRIDOR, 6, 7
# 163 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 164 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 165 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 166 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 167 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge::
# 168 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike, MSGBOX_DEFAULT
# 169 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge
# 170 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 171 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons::
# 172 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50
# 174 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen
# 175 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 176 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50::
# 177 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 178 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge
# 179 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 180 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen::
# 181 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 182 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge
# 183 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 184 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed::
# 185 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 186 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 187 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 188 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge::
# 189 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 190 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 191 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge::
# 192 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 193 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge::
# 194 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	release
# 195 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 196 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 197 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ShowResults::
# 198 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 199 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PIKE
# 200 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitbuttonpress
# 201 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special RemoveRecordsWindow
# 202 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 203 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 204 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 205 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor::
# 206 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor
# 207 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor
# 208 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmovement 0
# 209 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 210 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 211 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor:
# 212 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 213 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor:
# 214 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 215 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 216 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	set_invisible
# 217 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	step_end
# 218 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 219 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Hiker::
# 220 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal, MSGBOX_NPC
# 221 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 222 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 223 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Twin::
# 224 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer, MSGBOX_NPC
# 225 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 226 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 227 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Beauty::
# 228 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere, MSGBOX_NPC
# 229 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 230 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 231 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesBoard::
# 232 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 233 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 234 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 235 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 236 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 237 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard::
# 238 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading
# 239 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 240 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_PIKE_RULES, FALSE
# 241 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 242 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag
# 243 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems
# 244 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder
# 245 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 3, BattleFrontier_BattlePikeLobby_EventScript_ExitRules
# 246 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_ExitRules
# 247 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 248 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 249 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag::
# 250 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules, MSGBOX_DEFAULT
# 251 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 252 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 253 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 254 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems::
# 255 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules, MSGBOX_DEFAULT
# 256 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 257 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 258 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 259 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder::
# 260 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules, MSGBOX_DEFAULT
# 261 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 262 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 263 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 264 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ExitRules::
# 265 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 266 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 267 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 268 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePike_EventScript_CloseCurtain::
# 269 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_PIKE_CURTAIN_CLOSE
# 270 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special CloseBattlePikeCurtain
# 271 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 272 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 273 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 274 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 275 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike:
# 276 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "这里是考验训练家\n"
# 277 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "运气的地方……\p"
# 278 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "欢迎来到对战管道……\p"
# 279 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "我是你的对战管道向导……$"
# 280 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_TakeChallenge:
# 282 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你想挑战对战选择吗？$"
# 283 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 284 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike:
# 285 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "这里举办的活动叫\n"
# 286 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "对战选择。\p"
# 287 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "对战选择的规则\n"
# 288 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "很简单……\p"
# 289 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "从三条路里选一条，\n"
# 290 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "一路走到对战管道尽头的\l"
# 291 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "目标房间。就这么简单。\p"
# 292 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "不过，选的那条路上\n"
# 293 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "会发生什么，全看挑战者\l"
# 294 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "的运气……\p"
# 295 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "要是到达目标，你会\n"
# 296 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "得到对战点数的奖励。\p"
# 297 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "想中断挑战，请去路上\n"
# 298 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "的大房间找我们的\l"
# 299 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "工作人员说一声。\p"
# 300 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "要是中断前没保存，\n"
# 301 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你会被取消资格。$"
# 302 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 303 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou:
# 304 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "我们期待在别的\n"
# 305 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "时候见到你……$"
# 306 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 307 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode:
# 308 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "有两种课程可选：\n"
# 309 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "50级和开放等级。\l"
# 310 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你要挑战哪个？$"
# 311 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 312 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50:
# 313 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "打扰一下……\p"
# 314 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你没有对战选择活动所需的\n"
# 315 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "三只符合条件的宝可梦。\p"
# 316 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "参加必须带三只不同、\n"
# 317 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "50级或以下的宝可梦。\p"
# 318 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "它们还必须分别携带\n"
# 319 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "不同种类的道具。\p"
# 320 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "蛋不能参加。\p"
# 321 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "准备好之后\n"
# 322 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "请来找我……$"
# 323 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 324 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen:
# 325 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "打扰一下……\p"
# 326 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你没有对战选择活动所需的\n"
# 327 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "三只符合条件的宝可梦。\p"
# 328 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "参加必须带三只\n"
# 329 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "不同的宝可梦。\p"
# 330 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "它们还必须分别携带\n"
# 331 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "不同种类的道具。\p"
# 332 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "蛋不能参加。\p"
# 333 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "准备好之后\n"
# 334 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "请来找我……$"
# 335 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 336 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons:
# 337 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "请选择你想参加挑战的\n"
# 338 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "三只宝可梦……$"
# 339 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 340 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge:
# 341 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "开始对战选择挑战前，\n"
# 342 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "我必须保存游戏。\l"
# 343 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "可以吗？$"
# 344 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 345 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_StepThisWay:
# 346 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "请往这边走……$"
# 347 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 348 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults:
# 349 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你的挑战结束了……\p"
# 350 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "我来记录你的结果。\n"
# 351 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "请稍等……$"
# 352 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 353 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance:
# 354 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你完成了挑战……\p"
# 355 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "我得说……你好像拥有\n"
# 356 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "丰沛的运气……$"
# 357 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 358 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ShallRecordResults:
# 359 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "我来记录你的结果。\n"
# 360 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "请稍等……$"
# 361 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 362 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 363 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints2:
# 364 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "为纪念你完成对战选择\n"
# 365 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "挑战，我们授予你这些\l"
# 366 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "对战点数……$"
# 367 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 368 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 369 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ReachedBattlePointLimit:
# 370 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你的对战点数好像\n"
# 371 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "已经到上限了……\p"
# 372 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "请先兑换一些对战点数\n"
# 373 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "换奖品，再回来……$"
# 374 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 375 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting:
# 376 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "打扰一下……\p"
# 377 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你上次退出挑战前\n"
# 378 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "没有保存。\p"
# 379 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "因此，你之前的挑战\n"
# 380 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "成绩已被取消。抱歉……$"
# 381 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 382 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen:
# 383 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "恭喜……\p"
# 384 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你从管道女王手里夺走了\n"
# 385 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "胜利，通关了活动……$"
# 386 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 387 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints:
# 388 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "为表彰你惊人的运气，\n"
# 389 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "我们授予你这些对战点数……$"
# 390 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 391 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal:
# 392 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "呃啊！我错过了机会！\n"
# 393 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "我只差一个房间就到目标了！\p"
# 394 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "在这种地方，你最好小心\n"
# 395 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "中毒、冰冻之类的。$"
# 396 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 397 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer:
# 398 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "我现在已经通关十次了，\n"
# 399 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "可一次都没打过训练家。$"
# 400 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 401 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere:
# 402 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "听着！听着！\p"
# 403 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你不觉得宝可梦的特殊\n"
# 404 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "特性在这里会很有用吗？$"
# 405 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 406 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 407 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_TrainersWhicheverPathIChoose:
# 408 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "这是什么怪地方？\n"
# 409 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "我完全搞不懂！\p"
# 410 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "我挑战了好多次，可不管\n"
# 411 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "选哪条路，都只会碰上\l"
# 412 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "训练家。$"
# 413 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 414 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_RulesAreListed:
# 415 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "这里列出了对战选择的规则。$"
# 416 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 417 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading:
# 418 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "你想读哪一项？$"
# 419 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 420 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules:
# 421 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "在对战选择挑战中，\n"
# 422 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "不能使用包包和宝可梦导航。$"
# 423 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 424 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules:
# 425 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "在对战选择挑战中，\n"
# 426 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "宝可梦携带的树果或香草\l"
# 427 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "只会生效一次。$"
# 428 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 429 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules:
# 430 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "在对战选择挑战中，\n"
# 431 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "宝可梦的顺序不能更改。\p"
# 432 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "必须在开始挑战前\n"
# 433 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "确定顺序。$"
