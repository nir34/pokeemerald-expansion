# 1 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
.set LOCALID_ATTENDANT_SINGLES, 1
# 3 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
.set LOCALID_ATTENDANT_DOUBLES, 6
# 4 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 5 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_MapScripts::
# 6 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceLobby_OnFrame
# 7 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceLobby_OnWarp
# 8 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.byte 0
# 9 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 10 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_OnWarp:
# 11 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth
# 12 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 14 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth::
# 15 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 17 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 18 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 19 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_OnFrame:
# 20 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus
# 21 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving
# 22 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge
# 23 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
# 24 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge
# 25 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.2byte 0
# 26 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 27 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus::
# 28 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_getstatus
# 29 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 31 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving::
# 32 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 33 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
# 34 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 35 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK, 0
# 36 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 37 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 38 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 39 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 40 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 41 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 42 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge::
# 43 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 44 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_isbrain
# 45 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven
# 46 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak, MSGBOX_DEFAULT
# 47 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints
# 48 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 49 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven::
# 50 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers, MSGBOX_DEFAULT
# 51 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints::
# 52 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_givepoints
# 54 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 55 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded
# 56 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 57 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
# 58 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 59 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 60 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 61 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 62 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 63 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 64 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge::
# 65 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 66 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded
# 67 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 68 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 69 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
# 70 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 71 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 72 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 73 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 74 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 75 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 76 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge::
# 77 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkairshow
# 78 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 79 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special HealPlayerParty
# 80 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 81 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save 0
# 82 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 83 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 84 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 85 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 86 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch
# 87 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 88 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 89 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 91 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch
# 92 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 93 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 94 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch::
# 95 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 96 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge::
# 97 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 98 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 99 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge::
# 100 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 101 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
# 102 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
# 103 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 104 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save CHALLENGE_STATUS_SAVING
# 105 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 106 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 107 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 108 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 109 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge
# 110 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 111 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SinglesAttendant::
# 112 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock
# 113 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	faceplayer
# 114 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 115 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 116 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
# 117 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 118 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 119 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_DoublesAttendant::
# 120 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock
# 121 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	faceplayer
# 122 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 123 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 124 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
# 125 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 126 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 127 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Attendant::
# 128 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_get PALACE_DATA_PRIZE
# 129 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_ne VAR_RESULT, ITEM_NONE, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
# 130 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 131 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle
# 132 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle
# 133 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge::
# 134 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge
# 135 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge
# 136 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 137 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 138 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 139 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge
# 140 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge
# 141 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 142 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 143 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 144 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge::
# 145 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_WhichChallenge
# 146 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 147 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 148 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 149 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 150 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 151 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkineligible
# 152 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons
# 153 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 154 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons, MSGBOX_DEFAULT
# 155 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 156 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 157 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 158 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 159 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 160 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 161 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitstate
# 162 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 163 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2, MSGBOX_YESNO
# 164 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 165 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case NO, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 166 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case YES, BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge
# 167 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 168 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 169 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge::
# 170 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 171 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 172 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_init
# 173 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, TRUE
# 174 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 175 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 176 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 177 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 178 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 179 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	delay 2
# 180 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 181 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 182 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed
# 183 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge::
# 184 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 185 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 186 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FollowMe, MSGBOX_DEFAULT
# 187 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 188 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor
# 189 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, 8, 13
# 190 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 191 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitstate
# 192 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 193 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 194 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge::
# 195 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge
# 196 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge, MSGBOX_DEFAULT
# 197 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
# 198 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 199 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge::
# 200 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge, MSGBOX_DEFAULT
# 201 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
# 202 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 203 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons::
# 204 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 205 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50
# 206 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen
# 207 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 208 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50::
# 209 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 210 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge
# 211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 212 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen::
# 213 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 214 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge
# 215 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed::
# 217 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 218 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 219 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 220 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge::
# 221 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 222 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge::
# 223 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 224 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge::
# 225 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	release
# 226 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 227 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 228 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle::
# 229 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
# 230 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 231 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 232 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle::
# 233 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
# 234 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 235 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 236 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge::
# 237 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge
# 238 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 239 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 240 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge::
# 241 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge
# 242 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 243 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 244 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor::
# 245 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant
# 246 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant
# 247 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
# 248 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
# 249 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 250 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor
# 251 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor
# 252 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 253 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor
# 254 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor
# 255 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 256 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor
# 257 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor
# 258 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 259 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 260 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 261 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant::
# 262 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_SINGLES
# 263 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 264 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 265 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant::
# 266 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_DOUBLES
# 267 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 268 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 269 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor::
# 270 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 5, 4
# 271 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 272 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 273 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor::
# 274 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 19, 4
# 275 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 276 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor::
# 278 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 5, 4
# 279 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 280 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor::
# 282 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 19, 4
# 283 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor:
# 286 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 287 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 288 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 289 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor:
# 290 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 291 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
# 292 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 293 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 294 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor:
# 295 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 296 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 297 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
# 298 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 299 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 300 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ShowSinglesResults::
# 301 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 302 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_SINGLES
# 303 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 304 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 305 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 306 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 307 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 308 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ShowDoublesResults::
# 309 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 310 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_DOUBLES
# 311 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 312 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 313 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 314 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 315 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 316 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_BlackBelt::
# 317 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink, MSGBOX_NPC
# 318 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 319 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 320 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Man::
# 321 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere, MSGBOX_NPC
# 322 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 323 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 324 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Beauty::
# 325 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms, MSGBOX_NPC
# 326 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 327 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 328 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Maniac::
# 329 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway, MSGBOX_NPC
# 330 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 331 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 332 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesBoard::
# 333 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 334 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 335 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 336 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 337 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 338 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard::
# 339 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
# 340 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 341 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 16, 0, MULTI_BATTLE_PALACE_RULES, FALSE
# 342 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 343 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics
# 344 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_RulesNature
# 345 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves
# 346 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 3, BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered
# 347 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 4, BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger
# 348 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 5, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
# 349 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
# 350 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 351 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 352 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics::
# 353 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
# 354 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 355 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 356 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 357 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesNature::
# 358 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
# 359 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 360 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 361 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 362 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves::
# 363 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
# 364 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 365 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 366 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 367 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered::
# 368 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
# 369 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 370 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 371 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 372 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger::
# 373 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
# 374 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 375 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 376 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 377 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExitRules::
# 378 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 379 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 380 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 381 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle:
# 382 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "这里是考验训练家\n"
# 383 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "内心的地方。\p"
# 384 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "欢迎来到对战宫殿。\p"
# 385 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "我受理单打对战厅的挑战。$"
# 386 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 387 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge:
# 388 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你想挑战\n"
# 389 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "单打对战厅吗？$"
# 390 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 391 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge:
# 392 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "对战宫殿里有几个进行单打\n"
# 393 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "对战的厅，叫做单打对战厅。\p"
# 394 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "单打对战按平常方式进行，\n"
# 395 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "但有一条必须遵守的\l"
# 396 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "关键规则。\p"
# 397 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "训练家只能替换上下的\n"
# 398 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "宝可梦。\p"
# 399 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "除此以外，训练家不得\n"
# 400 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "指挥宝可梦。\p"
# 401 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "宝可梦会按自己的性格\n"
# 402 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "行动，自行对战。\p"
# 403 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你必须信任自己的\n"
# 404 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "宝可梦，守着它们。\p"
# 405 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "要是你连胜七位训练家，\n"
# 406 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "我们会授予你对战点数。\p"
# 407 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "想中断挑战，\n"
# 408 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "请先保存游戏。\p"
# 409 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "要是没保存就中断，\n"
# 410 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你会被取消资格。$"
# 411 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 412 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified:
# 413 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "等你的心和宝可梦都\n"
# 414 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "变强了，请再来。$"
# 415 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 416 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WhichChallenge:
# 417 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "对战厅有两种：\n"
# 418 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "50级和开放等级。\l"
# 419 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你想挑战哪一个？$"
# 420 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 421 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50:
# 422 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "唉……\p"
# 423 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你没有挑战所需的\n"
# 424 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "三只宝可梦。\p"
# 425 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "参加必须准备三种\n"
# 426 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "不同的宝可梦。\p"
# 427 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "这些宝可梦都必须\n"
# 428 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "在50级或以下。\p"
# 429 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "它们也不能携带\n"
# 430 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "同种类的道具。\p"
# 431 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "蛋不能参加。\p"
# 432 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "准备好了再来。$"
# 433 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 434 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen:
# 435 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "唉……\p"
# 436 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你没有挑战所需的\n"
# 437 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "三只宝可梦。\p"
# 438 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "参加必须准备三种\n"
# 439 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "不同的宝可梦。\p"
# 440 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "它们也不能携带\n"
# 441 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "同种类的道具。\p"
# 442 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "蛋不能参加。\p"
# 443 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "准备好了再来。$"
# 444 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 445 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons:
# 446 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "很好。现在请选择\n"
# 447 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你的三只宝可梦。$"
# 448 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 449 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2:
# 450 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "带你前往对战厅前，\n"
# 451 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "我必须保存。可以吗？$"
# 452 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 453 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FollowMe:
# 454 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "很好。\n"
# 455 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "现在跟我来。$"
# 456 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 457 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded:
# 458 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "能见到你宝可梦的\n"
# 459 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "身手，是我的荣幸。\p"
# 460 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "结果会被记录下来。\n"
# 461 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "请你稍等。$"
# 462 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 463 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak:
# 464 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "连胜七场……\p"
# 465 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你和宝可梦之间相连的\n"
# 466 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "羁绊似乎坚固而真实。$"
# 467 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 468 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded:
# 469 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你的成绩会被记录。\n"
# 470 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "请你稍等。$"
# 471 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 472 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
@ Unused
# 473 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_BattlePointsFor7WinStreak:
# 474 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "为表彰你连胜七场的\n"
# 475 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "成绩，我们授予你\l"
# 476 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "对战点数。$"
# 477 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 478 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize:
# 479 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你好像没地方放\n"
# 480 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "我们的奖品。\p"
# 481 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "请整理好包包\n"
# 482 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "再来。$"
# 483 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 484 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting:
# 485 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "我们一直在等你……$"
# 486 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 487 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge:
# 488 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "带你前往对战厅前，\n"
# 489 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "我必须保存。可以吗？$"
# 490 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 491 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge:
# 492 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "唉……\p"
# 493 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你上次结束挑战前\n"
# 494 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "没有保存。\p"
# 495 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "结果，你的挑战已被\n"
# 496 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "取消资格。真是不幸。$"
# 497 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 498 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
@ Unused
# 499 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReceivedPrize:
# 500 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "{PLAYER}获得了奖品\n"
# 501 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "{STR_VAR_1}。$"
# 502 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 503 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink:
# 504 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "对我来说，结实耐打的\n"
# 505 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "宝可梦最好。\p"
# 506 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "攻击就是最好的防守！\n"
# 507 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "不停进攻才是极致！\p"
# 508 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "不过我不是想说这个。\p"
# 509 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "偶尔有位很可爱的小姐\n"
# 510 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "会来这儿。\p"
# 511 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "她说她能看出宝可梦\n"
# 512 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "在想什么。\p"
# 513 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "那部分我不懂，\n"
# 514 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "可她真的挺可爱。\p"
# 515 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "嗯？\n"
# 516 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你为什么那样看我？$"
# 517 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 518 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere:
# 519 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "嗯……\p"
# 520 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "看来宝可梦的性格，\n"
# 521 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "以及教给它的招式，\l"
# 522 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "才是这里对战的关键。\p"
# 523 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "更准确地说，是招式和\n"
# 524 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "宝可梦性格有多契合。\p"
# 525 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "要是你的宝可梦有难、\n"
# 526 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "发挥不出实力，\l"
# 527 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "也许你该看看它的招式\l"
# 528 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "和性格搭不搭。$"
# 529 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 530 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms:
# 531 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "我的宝可梦平时很温顺。\p"
# 532 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "可一进对战厅，\n"
# 533 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "它有时就像变成了\l"
# 534 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "什么凶恶的东西！\p"
# 535 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "它会变得非常吓人。\n"
# 536 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "真让人震惊。$"
# 537 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 538 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway:
# 539 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "我在想，喜欢削弱对手、\n"
# 540 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "慢慢磨的宝可梦会是什么\l"
# 541 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "性格呢。\p"
# 542 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "要说是乐天性格，\n"
# 543 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "我会很惊讶。\p"
# 544 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "不过，不，那不可能。$"
# 545 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 546 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle:
# 547 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "这里是考验训练家\n"
# 548 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "内心的地方。\p"
# 549 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "欢迎来到对战宫殿。\p"
# 550 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "我受理双打对战厅的挑战。$"
# 551 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 552 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge:
# 553 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你想挑战\n"
# 554 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "双打对战厅吗？$"
# 555 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 556 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge:
# 557 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "对战宫殿里有几个进行双打\n"
# 558 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "对战的厅，叫做双打对战厅。\p"
# 559 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "双打对战按平常方式进行，\n"
# 560 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "但有一条必须遵守的\l"
# 561 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "关键规则。\p"
# 562 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "训练家只能替换上下的\n"
# 563 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "宝可梦。\p"
# 564 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "除此以外，训练家不得\n"
# 565 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "指挥宝可梦。\p"
# 566 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "宝可梦会按自己的性格\n"
# 567 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "行动，自行对战。\p"
# 568 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你必须信任自己的\n"
# 569 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "宝可梦，守着它们。\p"
# 570 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "要是你连胜七位训练家，\n"
# 571 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "我们会授予你对战点数。\p"
# 572 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "想中断挑战，\n"
# 573 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "请先保存游戏。\p"
# 574 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "要是没保存就中断，\n"
# 575 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你会被取消资格。$"
# 576 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 577 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers:
# 578 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "要打败宫殿大君，\n"
# 579 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "还要连胜七位训练家……$"
# 580 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 581 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints:
# 582 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "为纪念你和宝可梦之间的\n"
# 583 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "羁绊，我们授予你\l"
# 584 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "这些对战点数。$"
# 585 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 586 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch:
# 587 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "要把你最近一场对战宫殿\n"
# 588 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "比赛记到开拓区通行证\l"
# 589 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "上吗？$"
# 590 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 591 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_RulesAreListed:
# 592 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "这里列出了对战厅的规则。$"
# 593 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 594 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading:
# 595 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "你想读哪一项？$"
# 596 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 597 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics:
# 598 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "在这里，宝可梦必须自己\n"
# 599 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "思考、自己对战。\p"
# 600 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "和在野外不同，和人一起\n"
# 601 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "生活的宝可梦会因性格\l"
# 602 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "不同而有不同表现。$"
# 603 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 604 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature:
# 605 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "看性格不同，宝可梦\n"
# 606 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "可能不管怎样都想进攻。\p"
# 607 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "另一只宝可梦可能想\n"
# 608 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "保护自己不受伤害。\p"
# 609 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "还有的可能喜欢\n"
# 610 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "让对手烦恼、困惑。\p"
# 611 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "因为性格，宝可梦会有\n"
# 612 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "擅长使用的最爱招式。\p"
# 613 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "也可能讨厌某些\n"
# 614 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "用不好的招式。$"
# 615 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 616 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves:
# 617 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "有给对手造成直接伤害的\n"
# 618 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "攻击招式。\p"
# 619 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "有为应对敌人攻击做准备、\n"
# 620 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "或者回复HP等用的\l"
# 621 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "防守招式。\p"
# 622 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "还有一些有点古怪的招式，\n"
# 623 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "能用中毒、麻痹等\l"
# 624 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "能力问题削弱对手。\p"
# 625 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "宝可梦会考虑使用这\n"
# 626 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "三类的招式。$"
# 627 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 628 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered:
# 629 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "没有训练家指挥时，\n"
# 630 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "宝可梦可能用不好\l"
# 631 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "某些招式。\p"
# 632 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "宝可梦不擅长使用\n"
# 633 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "自己讨厌的招式。\p"
# 634 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "要是宝可梦只会和它\n"
# 635 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "性格不搭的招式，它常常\l"
# 636 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "发挥不出实力。$"
# 637 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 638 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger:
# 639 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "看性格不同，宝可梦\n"
# 640 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "遇到困难时可能开始使用\l"
# 641 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "和性格不搭的招式。\p"
# 642 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "要是宝可梦在危急时\n"
# 643 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "举止反常，请仔细看着它。$"
