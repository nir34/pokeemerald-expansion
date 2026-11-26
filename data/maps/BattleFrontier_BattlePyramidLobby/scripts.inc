# 1 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
.set LOCALID_HINT_GIVER, 2
# 4 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 5 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_MapScripts::
# 6 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidLobby_OnFrame
# 7 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
# 8 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.byte 0
# 9 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 10 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused. Pyramid uses Dome's OnWarp (presumably by mistake). Their effects are identical
# 11 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_OnWarp:
# 12 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth
# 13 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.2byte 0
# 14 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 15 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth:
# 16 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 18 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 20 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_OnFrame:
# 21 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus
# 22 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving
# 23 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge
# 24 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge
# 25 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge
# 26 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.2byte 0
# 27 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 28 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus::
# 29 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_getstatus
# 30 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 31 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 32 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving::
# 33 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 34 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag
# 35 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 36 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 37 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 38 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 39 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK, 0
# 40 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
# 41 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 42 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 43 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 44 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 46 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge::
# 47 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 48 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_isbrain
# 49 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing
# 50 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid, MSGBOX_DEFAULT
# 51 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints
# 52 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 53 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing::
# 54 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing, MSGBOX_DEFAULT
# 55 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints::
# 56 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special DoBattlePyramidMonsHaveHeldItem
# 57 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag
# 58 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	clearflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
# 59 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkairshow
# 60 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 61 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_clearhelditems
# 62 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 63 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 64 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept
# 65 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 66 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 67 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 68 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints, MSGBOX_DEFAULT
# 69 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_givepoints
# 70 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 71 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
# 72 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 73 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_setprize
# 74 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_save 0
# 75 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_SAVE
# 76 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 77 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
# 78 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 79 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 80 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 81 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 82 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 83 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge::
# 84 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkairshow
# 85 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 86 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_clearhelditems
# 87 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 88 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 89 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 90 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag
# 91 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 92 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 93 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 94 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
# 95 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 96 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
# 97 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_save 0
# 98 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_SAVE
# 99 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 100 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 102 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 103 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 104 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 105 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 106 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge::
# 107 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge
# 108 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 109 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_Attendant::
# 110 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lock
# 111 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	faceplayer
# 112 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PYRAMID
# 113 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 114 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special SavePlayerParty
# 115 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid, MSGBOX_DEFAULT
# 116 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge::
# 117 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge
# 118 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 119 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 120 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 121 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge
# 122 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge
# 123 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 124 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 125 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 126 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge::
# 127 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode
# 128 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 129 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 130 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 132 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 133 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkineligible
# 134 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons
# 135 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 136 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 137 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 138 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 139 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 140 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 141 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 142 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 143 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 144 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 145 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 146 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 147 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case NO, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 148 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case YES, BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge
# 149 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 150 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 151 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge::
# 152 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 153 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 154 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_init
# 155 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, TRUE
# 156 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 157 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 158 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_seedfloor
# 159 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_settrainers
# 160 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 161 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 162 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	delay 2
# 163 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 164 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 165 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallengeSaveFailed
# 166 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge::
# 167 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special SavePlayerParty
# 168 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 169 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid, MSGBOX_DEFAULT
# 170 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 171 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag
# 172 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 173 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 174 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 177 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 178 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 179 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 180 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge::
# 181 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid, MSGBOX_DEFAULT
# 182 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge
# 183 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 184 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons::
# 185 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 186 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLv50
# 187 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLvOpen
# 188 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 189 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLv50::
# 190 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 191 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge
# 192 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 193 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLvOpen::
# 194 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 195 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge
# 196 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 197 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_CancelChallengeSaveFailed::
# 198 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 199 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 200 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 201 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge::
# 202 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 203 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 204 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge::
# 205 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge, MSGBOX_DEFAULT
# 206 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge::
# 207 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	release
# 208 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 209 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 210 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintGiver::
# 211 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 212 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_HINT_GIVER, Common_Movement_FacePlayer
# 213 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 214 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait, MSGBOX_DEFAULT
# 215 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_BattlePyramidLobby_EventScript_GiveHint
# 216 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot, MSGBOX_DEFAULT
# 217 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 218 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 219 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 220 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHint::
# 221 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 222 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 223 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50
# 224 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen
# 225 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_NoHint
# 226 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_NoHint
# 227 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 228 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 229 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Shouldnt occur
# 230 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NoHint::
# 231 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 232 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 233 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50::
# 234 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
# 235 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_50
# 236 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLv50Streak
# 237 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 238 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 239 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 240 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 241 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLv50Streak::
# 242 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_50
# 243 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 244 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 245 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 246 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen::
# 247 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
# 248 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_OPEN
# 249 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLvOpenStreak
# 250 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 251 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 252 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 253 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 254 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLvOpenStreak::
# 255 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_OPEN
# 256 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 257 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 258 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 259 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment::
# 260 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 261 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special GetBattlePyramidHint
# 262 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 263 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis
# 264 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_HintPoison
# 265 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_HintBurn
# 266 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste
# 267 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate
# 268 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 5, BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility
# 269 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 6, BattleFrontier_BattlePyramidLobby_EventScript_HintIce
# 270 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 7, BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion
# 271 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 8, BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic
# 272 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 9, BattleFrontier_BattlePyramidLobby_EventScript_HintRock
# 273 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 10, BattleFrontier_BattlePyramidLobby_EventScript_HintFighting
# 274 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 11, BattleFrontier_BattlePyramidLobby_EventScript_HintWeather
# 275 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 12, BattleFrontier_BattlePyramidLobby_EventScript_HintBug
# 276 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 13, BattleFrontier_BattlePyramidLobby_EventScript_HintDark
# 277 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 14, BattleFrontier_BattlePyramidLobby_EventScript_HintWater
# 278 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 15, BattleFrontier_BattlePyramidLobby_EventScript_HintGhost
# 279 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 16, BattleFrontier_BattlePyramidLobby_EventScript_HintSteel
# 280 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 17, BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon
# 281 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 18, BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve
# 282 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 19, BattleFrontier_BattlePyramidLobby_EventScript_HintNormal
# 283 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis::
# 286 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintParalysis, MSGBOX_DEFAULT
# 287 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 288 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 289 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPoison::
# 290 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPoison, MSGBOX_DEFAULT
# 291 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 292 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 293 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintBurn::
# 294 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBurn, MSGBOX_DEFAULT
# 295 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 296 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 297 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste::
# 298 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPPWaste, MSGBOX_DEFAULT
# 299 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 300 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate::
# 302 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintLevitate, MSGBOX_DEFAULT
# 303 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 304 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 305 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility::
# 306 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility, MSGBOX_DEFAULT
# 307 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 308 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 309 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintIce::
# 310 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintIce, MSGBOX_DEFAULT
# 311 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 312 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 313 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion::
# 314 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintExplosion, MSGBOX_DEFAULT
# 315 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 316 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 317 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic::
# 318 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPsychic, MSGBOX_DEFAULT
# 319 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 320 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 321 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintRock::
# 322 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintRock, MSGBOX_DEFAULT
# 323 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 324 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 325 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintFighting::
# 326 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFighting, MSGBOX_DEFAULT
# 327 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 328 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 329 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintWeather::
# 330 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWeather, MSGBOX_DEFAULT
# 331 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 332 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 333 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintBug::
# 334 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBug, MSGBOX_DEFAULT
# 335 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 336 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 337 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintDark::
# 338 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintDark, MSGBOX_DEFAULT
# 339 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 340 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 341 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintWater::
# 342 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWater, MSGBOX_DEFAULT
# 343 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 344 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 345 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintGhost::
# 346 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintGhost, MSGBOX_DEFAULT
# 347 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 348 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 349 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintSteel::
# 350 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintSteel, MSGBOX_DEFAULT
# 351 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 352 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 353 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon::
# 354 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon, MSGBOX_DEFAULT
# 355 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 356 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 357 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve::
# 358 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve, MSGBOX_DEFAULT
# 359 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 360 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 361 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintNormal::
# 362 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintNormal, MSGBOX_DEFAULT
# 363 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 364 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 365 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ShowResults::
# 366 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 367 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PYRAMID
# 368 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitbuttonpress
# 369 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special RemoveRecordsWindow
# 370 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 371 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 372 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 373 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag::
# 374 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel
# 375 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel
# 376 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 377 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping, MSGBOX_DEFAULT
# 378 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK
# 379 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag
# 380 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag, MSGBOX_DEFAULT
# 381 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag
# 382 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 383 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag::
# 384 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag, MSGBOX_DEFAULT
# 385 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag::
# 386 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag
# 387 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 388 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 389 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 390 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel, MSGBOX_DEFAULT
# 391 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 392 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside
# 393 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 394 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel
# 395 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 396 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 397 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 398 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel:
# 399 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 400 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 401 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 402 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 403 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 404 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 405 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 406 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	face_down
# 407 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 408 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 409 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel:
# 410 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 411 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 412 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 413 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 414 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 415 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 416 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 417 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 418 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 419 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside:
# 420 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_right
# 421 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	face_left
# 422 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 423 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 424 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel:
# 425 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 426 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 427 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 428 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 429 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag::
# 430 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake, MSGBOX_DEFAULT
# 431 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
# 432 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special TryStoreHeldItemsInPyramidBag
# 433 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag
# 434 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep
# 435 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 436 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 437 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 438 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 439 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag::
# 440 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag, MSGBOX_DEFAULT
# 441 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 442 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 443 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ When exiting Battle Pyramid with a full pyramid bag and held items the player must select to keep/toss party held items and make room for any kept items by tossing from the pyramid bag
# 444 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep::
# 445 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_FRONTIER_ITEM_CHOOSE, FALSE
# 446 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 447 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag
# 448 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty
# 449 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems
# 450 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems
# 451 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 452 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 453 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag::
# 454 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special ChooseItemsToTossFromPyramidBag
# 455 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 456 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 457 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 458 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 459 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 460 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 461 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty::
# 462 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special BattlePyramidChooseMonHeldItems
# 463 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 464 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 465 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 466 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 467 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 468 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 469 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems::
# 470 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special DoBattlePyramidMonsHaveHeldItem
# 471 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems
# 472 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 473 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 474 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems::
# 475 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem, MSGBOX_DEFAULT
# 476 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 477 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 478 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 479 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 480 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 481 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_Woman::
# 482 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning, MSGBOX_NPC
# 483 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 484 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 485 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_FatMan::
# 486 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems, MSGBOX_NPC
# 487 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 488 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 489 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesBoard::
# 490 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 491 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 492 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 493 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 494 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 495 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard::
# 496 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading
# 497 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 498 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 15, 2, MULTI_BATTLE_PYRAMID_RULES, FALSE
# 499 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 500 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon
# 501 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers
# 502 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze
# 503 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_RulesBag
# 504 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_ExitRules
# 505 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ExitRules
# 506 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 507 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 508 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon::
# 509 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 510 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 511 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 512 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 513 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers::
# 514 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules, MSGBOX_DEFAULT
# 515 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 516 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 517 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 518 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze::
# 519 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules, MSGBOX_DEFAULT
# 520 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 521 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 522 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 523 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesBag::
# 524 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules, MSGBOX_DEFAULT
# 525 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 526 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 527 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 528 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExitRules::
# 529 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 530 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 531 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 532 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid:
# 533 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "这里是考验训练家\n"
# 534 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "勇气的地方！\p"
# 535 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "欢迎来到对战金字塔！\p"
# 536 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我是你的任务向导。$"
# 537 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 538 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge:
# 539 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你有勇气来挑战\n"
# 540 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "对战任务吗？$"
# 541 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 542 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge:
# 543 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我们期待你日后的\n"
# 544 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "挑战！$"
# 545 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 546 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid:
# 547 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "对战任务是深入金字塔、\n"
# 548 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "努力到达塔顶的对战\l"
# 549 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "活动。\p"
# 550 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "金字塔里有七层迷宫，\n"
# 551 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "到处不仅有厉害的训练家，\l"
# 552 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "还有野生宝可梦。\p"
# 553 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你必须带三只宝可梦进入，\n"
# 554 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "且都不能携带道具。\p"
# 555 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "攀登途中，我们会发给你\n"
# 556 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "装道具的对战背包。\p"
# 557 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "挑战失败的话，放进对战\n"
# 558 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "背包的道具都会消失。\p"
# 559 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "想中断挑战，你必须选择\n"
# 560 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "“休息”并保存游戏。\p"
# 561 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "要是没保存就中断，\n"
# 562 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你会被取消资格。$"
# 563 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 564 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode:
# 565 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "金字塔有两个课程：\n"
# 566 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "50级和开放等级。\l"
# 567 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你要进哪个？$"
# 568 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 569 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons:
# 570 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "很好。现在请选择\n"
# 571 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你想带的三只宝可梦。$"
# 572 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 573 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen:
# 574 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "有个小问题，冒险者！\p"
# 575 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你好像没有三只\n"
# 576 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "符合挑战条件的宝可梦。\p"
# 577 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "也请记得把宝可梦身上的\n"
# 578 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "道具全部取下。\p"
# 579 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "蛋不能参加。\p"
# 580 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "准备好了再来找我。$"
# 581 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 582 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50:
# 583 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "有个小问题，冒险者！\p"
# 584 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你好像没有三只\n"
# 585 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "符合挑战条件的宝可梦。\p"
# 586 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "三只宝可梦必须不同，\n"
# 587 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "且都不能超过50级。\p"
# 588 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "也请记得把宝可梦身上的\n"
# 589 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "道具全部取下。\p"
# 590 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "蛋不能参加。\p"
# 591 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "准备好了再来找我。$"
# 592 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 593 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge:
# 594 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "进入对战金字塔前，\n"
# 595 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "必须保存游戏。可以吗？$"
# 596 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 597 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid:
# 598 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "很好。我现在带你\n"
# 599 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "进入对战金字塔。$"
# 600 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 601 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping:
# 602 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你在探索期间，{PLAYER}，\n"
# 603 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你的包包由我们保管。$"
# 604 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 605 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag:
# 606 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "作为交换，请拿上这个\n"
# 607 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "对战背包，就是你上次用的\n"
# 608 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "那个。$"
# 609 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 610 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag:
# 611 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "作为交换，请拿上这个\n"
# 612 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "对战背包。$"
# 613 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 614 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag:
# 615 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER}用包包换到了\n"
# 616 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "对战背包。$"
# 617 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 618 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel:
# 619 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "踩上这块地板，你就会被\n"
# 620 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "送到金字塔更高的楼层。\p"
# 621 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "希望你的任务\n"
# 622 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "一路平安！$"
# 623 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 624 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag:
# 625 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "出了大问题，探险者！\p"
# 626 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你上次结束挑战前\n"
# 627 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "没有保存。\p"
# 628 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "因此，你的挑战已被\n"
# 629 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "取消资格，我很遗憾。\p"
# 630 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "这是替你保管的包包。\p"
# 631 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER}拿回了包包。$"
# 632 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 633 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid:
# 634 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "看到你回来真好！\p"
# 635 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你征服了金字塔！\n"
# 636 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "太棒了！$"
# 637 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 638 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake:
# 639 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "啊，有个小问题。\p"
# 640 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "至少有一只宝可梦\n"
# 641 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "携带了道具。\p"
# 642 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "很遗憾，在金字塔里得到的\n"
# 643 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "道具不能带出去。$"
# 644 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 645 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag:
# 646 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER}，你宝可梦携带的\n"
# 647 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "道具都会移到对战背包里。$"
# 648 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 649 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep:
# 650 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "很遗憾，对战背包装不下\n"
# 651 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你所有的道具。\p"
# 652 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "请挑选要留在对战背包和\n"
# 653 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦身上的道具。$"
# 654 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 655 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem:
# 656 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "至少还有一只宝可梦\n"
# 657 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "携带道具。$"
# 658 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 659 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep:
# 660 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "请挑选要留在对战背包和\n"
# 661 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦身上的道具。$"
# 662 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 663 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 664 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld:
# 665 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER}把宝可梦携带的\n"
# 666 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "东西都还回去了。$"
# 667 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 668 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept:
# 669 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你用过的对战背包会保存\n"
# 670 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "下来，供下次挑战使用。\p"
# 671 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER}交出了对战背包，\n"
# 672 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "换回了包包。$"
# 673 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 674 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait:
# 675 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我要记录你的成绩。\n"
# 676 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "请稍等。$"
# 677 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 678 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 679 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis:
# 680 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "作为征服对战金字塔的\n"
# 681 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "纪念，请收下这个。$"
# 682 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 683 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 684 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReceivedPrizeItem:
# 685 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER}获得了奖品\n"
# 686 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{STR_VAR_1}。$"
# 687 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 688 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 689 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BagIsFull:
# 690 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……唉……\n"
# 691 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你的包包好像满了。\p"
# 692 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "请整理好包包里的东西\n"
# 693 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "再来。$"
# 694 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 695 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag:
# 696 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "真让人失望……\p"
# 697 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "这是替你保管的包包。\p"
# 698 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER}拿回了包包。$"
# 699 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 700 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge:
# 701 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我们期待你的\n"
# 702 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "下次挑战！$"
# 703 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 704 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 705 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HereIsPrize:
# 706 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我们一直在等\n"
# 707 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你到来！\p"
# 708 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "这是你征服金字塔的奖品。$"
# 709 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 710 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait:
# 711 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "欢迎……\p"
# 712 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我很乐意告诉你金字塔里\n"
# 713 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "有什么厄运在等着你……$"
# 714 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 715 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_Aah:
# 716 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\n"
# 717 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\p"
# 718 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\n"
# 719 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "啊！$"
# 720 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 721 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintParalysis:
# 722 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见一阵火花……\p"
# 723 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……在火花中，我看见你的\n"
# 724 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦被麻痹折磨……$"
# 725 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 726 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPoison:
# 727 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见毒……\p"
# 728 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 729 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "受着毒的效果折磨……$"
# 730 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 731 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintBurn:
# 732 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见鲜红的火焰……\p"
# 733 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 734 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "被灼伤折磨……$"
# 735 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 736 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPPWaste:
# 737 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我感到一股无处宣泄的\n"
# 738 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "愤怒的重压……\p"
# 739 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "那是诅咒……\p"
# 740 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 741 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "PP耗尽，只能使用\l"
# 742 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "挣扎……$"
# 743 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 744 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintLevitate:
# 745 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见宝可梦高高飘在\n"
# 746 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "空中……\p"
# 747 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 748 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "被无力化的地面属性\l"
# 749 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "招式弄得无计可施……$"
# 750 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 751 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility:
# 752 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我感到地底涌起\n"
# 753 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "巨大的能量……\p"
# 754 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 755 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "逃不出那力量的魔掌……$"
# 756 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 757 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintIce:
# 758 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见冰属性的\n"
# 759 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 760 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 761 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "对抗冰的冰冻效果……$"
# 762 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 763 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintExplosion:
# 764 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见一连串会危及\n"
# 765 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "使用者的招式……\p"
# 766 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 767 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "倒在这些招式下……$"
# 768 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 769 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPsychic:
# 770 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见超能力属性的\n"
# 771 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 772 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 773 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "被超能力招式折磨……$"
# 774 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 775 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintRock:
# 776 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见岩石属性的\n"
# 777 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 778 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 779 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "受着岩石招式的苦……$"
# 780 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 781 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintFighting:
# 782 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见格斗属性的\n"
# 783 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 784 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 785 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "被格斗招式痛打……$"
# 786 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 787 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintWeather:
# 788 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "求雨……大晴天……\n"
# 789 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "沙暴……冰雹……\p"
# 790 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见会随天气变强的\n"
# 791 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 792 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 793 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "被各种不同的招式困住……$"
# 794 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 795 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintBug:
# 796 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见虫属性的\n"
# 797 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 798 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 799 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "受着各种攻击的苦……$"
# 800 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 801 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintDark:
# 802 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见恶属性的\n"
# 803 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 804 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 805 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "受着恶属性招式的苦……$"
# 806 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 807 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintWater:
# 808 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见水属性的\n"
# 809 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 810 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 811 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "受着水属性招式的苦……$"
# 812 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 813 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintGhost:
# 814 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见幽灵属性的\n"
# 815 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 816 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 817 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "受着幽灵属性招式的苦……$"
# 818 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 819 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintSteel:
# 820 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见钢属性的\n"
# 821 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 822 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 823 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "受着极强招式的苦……$"
# 824 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 825 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon:
# 826 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见会飞的\n"
# 827 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 828 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 829 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "受着极强招式的苦……$"
# 830 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 831 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve:
# 832 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见靠石头之力\n"
# 833 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "进化而来的宝可梦……\p"
# 834 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我还感觉到火、水，\n"
# 835 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "还有电……\p"
# 836 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 837 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "受着这三种力量的苦……$"
# 838 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 839 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintNormal:
# 840 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我看见一般属性的\n"
# 841 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "宝可梦……\p"
# 842 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "……而且，我看见你的宝可梦\n"
# 843 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "受着极强招式的苦……$"
# 844 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 845 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot:
# 846 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "信不信我的预言，\n"
# 847 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "都由你……\p"
# 848 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "未来随时都能改变……\n"
# 849 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "愿你一路平安……$"
# 850 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 851 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning:
# 852 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你知道吗？\p"
# 853 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "要是你跑得快，训练家\n"
# 854 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "可能会注意到你、追上来\l"
# 855 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "跟你对战。\p"
# 856 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "所以想避开训练家，就别\n"
# 857 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "吸引他们的目光，要小心\l"
# 858 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "又安静地从旁边溜过去。$"
# 859 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 860 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems:
# 861 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "哇啊啊啊啊！\p"
# 862 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我带了好多道具，可一输\n"
# 863 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "就全丢了！\p"
# 864 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "哇啊啊啊啊！$"
# 865 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 866 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing:
# 867 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "欢迎回来！\n"
# 868 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你做了不可思议的事！\p"
# 869 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你打败了金字塔之王，\n"
# 870 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "征服了对战金字塔！$"
# 871 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 872 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints:
# 873 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "年轻的探险者！\n"
# 874 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "为表彰你的勇气，\l"
# 875 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "我们授予你这几点\l"
# 876 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "对战点数！$"
# 877 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 878 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_RulesAreListed:
# 879 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "这里列出了对战任务的规则。$"
# 880 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 881 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading:
# 882 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你想读哪一项？$"
# 883 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 884 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules:
# 885 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "每次征服金字塔后，\n"
# 886 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "在里面出现的野生宝可梦\l"
# 887 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "会换成不同的种类。\p"
# 888 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "去探索、观察，了解会遇到\n"
# 889 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "什么样的野生宝可梦吧。$"
# 890 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 891 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules:
# 892 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "金字塔里有训练家\n"
# 893 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "在等着你。\p"
# 894 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "每层最多有\n"
# 895 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "八位训练家。\p"
# 896 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "打赢一位训练家，你就能\n"
# 897 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "得到对冒险有用的提示。$"
# 898 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 899 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules:
# 900 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "金字塔的迷宫每次进入\n"
# 901 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "都会重新排列。\p"
# 902 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "迷宫里光线很暗。\n"
# 903 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "你必须小心前进。\p"
# 904 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "每打赢一只野生宝可梦或\n"
# 905 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "一位训练家，光线就会变亮。$"
# 906 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 907 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules:
# 908 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "在金字塔里，对战背包\n"
# 909 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "就充当你的包包。\p"
# 910 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "对战背包分两种——\n"
# 911 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "50级冒险和开放等级\l"
# 912 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "冒险各一个。\p"
# 913 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "每个能装十种道具，\n"
# 914 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "每种最多99个。\p"
# 915 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "任务失败的话，对战背包里\n"
# 916 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "的东西都会丢失。$"
