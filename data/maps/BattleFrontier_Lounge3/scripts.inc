# 1 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.set BET_AMOUNT_5,  5
# 6 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.set BET_AMOUNT_10, 10
# 7 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.set BET_AMOUNT_15, 15
# 8 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 9 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Gambler::
# 10 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 11 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 12 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_GAMBLER, BattleFrontier_Lounge3_EventScript_AlreadyMetGambler
# 13 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_CountSilverSymbols
# 14 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_le VAR_0x8004, 2, BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols
# 15 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_GAMBLER
# 16 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouLookToughExplainGambling, MSGBOX_DEFAULT
# 17 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
# 18 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 20 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge::
# 21 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerLookingMessage
# 22 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 23 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 24 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe, MSGBOX_YESNO
# 25 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 26 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints, MSGBOX_YESNO
# 27 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 28 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 29 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 30 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowBattlePointsWindow
# 31 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
# 32 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 33 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 34 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChooseBetAmount::
# 35 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	multichoice 20, 4, MULTI_FRONTIER_GAMBLER_BET, FALSE
# 36 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_FRONTIER_GAMBLER_AMOUNT_BET, VAR_RESULT
# 37 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_Bet5
# 39 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_Bet10
# 40 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_Bet15
# 41 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_CANCEL, BattleFrontier_Lounge3_EventScript_CancelBet
# 42 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge3_EventScript_CancelBet
# 43 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 45 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet5::
# 46 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_5
# 47 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 48 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 49 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 50 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet10::
# 51 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_10
# 52 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 53 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 54 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 55 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet15::
# 56 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_15
# 57 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 58 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 59 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 60 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_TryPlaceBet::
# 61 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 62 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge3_EventScript_PlaceBet
# 63 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints, MSGBOX_DEFAULT
# 64 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 65 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 66 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
# 67 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 69 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_PlaceBet::
# 70 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 71 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special TakeFrontierBattlePoints
# 72 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
# 73 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special UpdateBattlePointsWindow
# 74 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	playse SE_SHOP
# 75 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThanksOffYouGo, MSGBOX_DEFAULT
# 76 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FinishBet
# 77 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 78 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 79 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FinishBet::
# 80 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 81 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 82 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 83 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 84 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 85 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 87 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols::
# 88 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, 0
# 89 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_TOWER_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 90 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_DOME_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 91 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_PALACE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 92 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_ARENA_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 93 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_FACTORY_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 94 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_PIKE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 95 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_PYRAMID_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 96 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 97 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 98 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount::
# 99 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
# 100 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 101 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 102 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols::
# 103 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere, MSGBOX_DEFAULT
# 104 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 105 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 107 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AlreadyMetGambler::
# 108 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_Oh, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_ge VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_CheckBetResults
# 110 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
# 111 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 112 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 113 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CheckBetResults::
# 114 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted
# 115 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WON, BattleFrontier_Lounge3_EventScript_WonChallenge
# 116 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_LostChallenge
# 117 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 118 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 119 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_WonChallenge::
# 120 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints, MSGBOX_DEFAULT
# 121 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_RewardBet5
# 122 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_RewardBet10
# 123 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_RewardBet15
# 124 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ObtainedBattlePoints, MSGBOX_GETPOINTS
# 125 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special GiveFrontierBattlePoints
# 126 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge, MSGBOX_DEFAULT
# 127 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
# 128 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 129 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 130 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 131 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_LostChallenge::
# 132 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints, MSGBOX_DEFAULT
# 133 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
# 134 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 135 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 136 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 137 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet5::
# 138 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, (BET_AMOUNT_5 * 2)
# 139 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, (BET_AMOUNT_5 * 2)
# 140 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 141 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 142 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet10::
# 143 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, (BET_AMOUNT_10 * 2)
# 144 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, (BET_AMOUNT_10 * 2)
# 145 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 146 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 147 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet15::
# 148 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, (BET_AMOUNT_15 * 2)
# 149 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, (BET_AMOUNT_15 * 2)
# 150 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 151 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 152 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted::
# 153 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 154 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 155 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 156 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 157 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 158 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 159 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_DeclineChallenge::
# 160 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NotInterested, MSGBOX_DEFAULT
# 161 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 162 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 163 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 164 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CancelBet::
# 165 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 166 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 167 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 168 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 169 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Man::
# 170 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges, MSGBOX_NPC
# 171 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 172 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 173 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Woman::
# 174 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 175 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 176 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_BackedWrongTrainer, MSGBOX_DEFAULT
# 177 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 178 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 179 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 180 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_PokefanF::
# 181 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 182 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 183 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 185 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 186 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 187 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FatMan::
# 188 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 189 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 190 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_TrainerGoodButRattled, MSGBOX_DEFAULT
# 191 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 192 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 193 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 194 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FaceOriginalDirection::
# 195 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	closemessage
# 196 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 197 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmovement 0
# 198 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 199 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 200 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 201 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere::
# 202 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "……你想要什么？\p"
# 203 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "你没看见我们正忙着吗？\n"
# 204 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "你的事不能以后再说吗？$"
# 205 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 206 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_YouLookToughExplainGambling::
# 207 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "……嗯？\n"
# 208 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "你看起来像个很强的训练家。\p"
# 209 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "嘿嘿……\n"
# 210 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "听我说，我有个提议。\p"
# 211 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们这儿有个小圈子，\n"
# 212 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们拿对战开拓区里的事\l"
# 213 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "来玩个小游戏。\p"
# 214 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "规则很简单。\p"
# 215 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "首先，我们挑一个对战\n"
# 216 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "开拓区里的设施。\p"
# 217 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "然后，我们各自押一位\n"
# 218 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "不同的、正在挑战那个\l"
# 219 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "设施的训练家，用我们的\l"
# 220 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战点数下注。\p"
# 221 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "押中成绩最好的训练家\n"
# 222 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "的人，拿走全部赌注\l"
# 223 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "的对战点数。\p"
# 224 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "听起来简单吧？\n"
# 225 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "所以，怎么样……$"
# 226 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 227 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle::
# 228 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 229 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战塔的单打对战房间的\l"
# 230 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 231 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 232 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 233 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 234 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 235 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble::
# 236 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 237 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战塔的双打对战房间的\l"
# 238 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 239 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 240 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 241 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 242 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 243 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti::
# 244 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 245 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战塔的多人对战房间的\l"
# 246 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 247 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 248 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 249 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 250 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 251 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle::
# 252 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 253 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战巨蛋的单打对战大赛的\l"
# 254 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 255 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 256 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 257 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 258 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 259 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble::
# 260 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 261 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战巨蛋的双打对战大赛的\l"
# 262 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 263 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 264 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 265 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 266 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 267 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle::
# 268 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 269 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战工厂的交换对战单打大赛的\l"
# 270 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 271 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 272 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 273 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 274 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 275 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble::
# 276 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 277 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战工厂的交换对战双打大赛的\l"
# 278 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 279 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 280 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 281 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 282 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 283 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle::
# 284 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 285 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战宫殿的单打对战厅的\l"
# 286 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 287 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 288 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 289 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 290 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 291 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble::
# 292 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 293 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战宫殿的双打对战厅的\l"
# 294 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 295 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 296 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 297 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 298 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 299 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleArena::
# 300 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 301 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战竞技场的定数击倒大赛的\l"
# 302 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 303 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 304 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 305 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 306 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 307 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePike::
# 308 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 309 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战管道的对战选择的\l"
# 310 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 311 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 312 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 313 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 314 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 315 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePyramid::
# 316 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我想找的是要去挑战\n"
# 317 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "对战金字塔的对战任务的\l"
# 318 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。\p"
# 319 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "可到现在，我还没见到\n"
# 320 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "有那种冠军素质的\l"
# 321 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "训练家。$"
# 322 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 323 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe::
# 324 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我也会让你得好处的。\n"
# 325 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "怎么样？\l"
# 326 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "要不要替我去参加那个\l"
# 327 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "活动？$"
# 328 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 329 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints::
# 330 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "好，那太好了。\n"
# 331 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "那么，呃……能不能借我\l"
# 332 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "一点你的对战点数？\p"
# 333 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "相信我，事成之后我会\n"
# 334 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "好好谢你的。$"
# 335 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 336 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HowMuchCanYouSpot::
# 337 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "太好了，太好了！\n"
# 338 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "那么，你能借我多少？$"
# 339 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 340 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints::
# 341 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "哦，不不不！\n"
# 342 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "你的对战点数不够！\p"
# 343 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我希望你别胡闹，\n"
# 344 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "浪费大家的时间！$"
# 345 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 346 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ThanksOffYouGo::
# 347 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "嘿嘿！多谢多谢！\n"
# 348 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "那么，去吧！$"
# 349 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 350 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerSingle::
# 351 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战塔的单打对战房间！\p"
# 352 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 353 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 354 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 355 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 356 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerDouble::
# 357 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战塔的双打对战房间！\p"
# 358 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 359 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 360 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 361 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 362 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerMulti::
# 363 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战塔的多人对战房间！\p"
# 364 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 365 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 366 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 367 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 368 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleDomeSingle::
# 369 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战巨蛋的单打对战大赛！\p"
# 370 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 371 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 372 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 373 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 374 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleDomeDouble::
# 375 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战巨蛋的双打对战大赛！\p"
# 376 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 377 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 378 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 379 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 380 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleFactorySingle::
# 381 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战工厂的交换对战单打大赛！\p"
# 382 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 383 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 384 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 385 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 386 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble::
# 387 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战工厂的交换对战双打大赛！\p"
# 388 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 389 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 390 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 391 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 392 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle::
# 393 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战宫殿的单打对战厅！\p"
# 394 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 395 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 396 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 397 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 398 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble::
# 399 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战宫殿的双打对战厅！\p"
# 400 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 401 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 402 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 403 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 404 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleArena::
# 405 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战竞技场的定数击倒大赛！\p"
# 406 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 407 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 408 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 409 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 410 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePike::
# 411 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战管道的对战选择！\p"
# 412 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 413 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 414 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 415 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 416 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePyramid::
# 417 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "快赶去对战金字塔的对战任务！\p"
# 418 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "这是必须赢的局面！\n"
# 419 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "别错过机会！\l"
# 420 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩的前途都看你的了！$"
# 421 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 422 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints::
# 423 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "哦，是你……\n"
# 424 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "想得美……\p"
# 425 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我不想这么说，可我没法\n"
# 426 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "把对战点数还你……\p"
# 427 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "就当这能激励我们下次\n"
# 428 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "更努力吧！$"
# 429 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 430 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints::
# 431 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "哦，对了！\n"
# 432 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "你好啊，冠军！\p"
# 433 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我就知道你能行！\n"
# 434 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我就知道你会！\l"
# 435 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我们俩都是大赢家！\p"
# 436 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我把对战点数还你，\n"
# 437 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "当然，还多给你一点！$"
# 438 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 439 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ObtainedBattlePoints::
# 440 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "{PLAYER}获得了\n"
# 441 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "{STR_VAR_1}点对战点数。$"
# 442 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 443 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge::
# 444 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "要是你还想再挑战，\n"
# 445 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "请一定想到我！$"
# 446 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 447 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_NotInterested::
# 448 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "没兴趣？！你不该这么\n"
# 449 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "怕冒险！$"
# 450 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 451 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_Oh::
# 452 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "哦……$"
# 453 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 454 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_BackedWrongTrainer::
# 455 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我又押错训练家了！\p"
# 456 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "也许我该像大家一样\n"
# 457 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "正常去对战……$"
# 458 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 459 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_TrainerGoodButRattled::
# 460 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "那个训练家……\p"
# 461 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "他很强，可太容易慌乱，\n"
# 462 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "在对战巨蛋撑不下去……$"
# 463 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 464 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne::
# 465 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "嘻嘻！\n"
# 466 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "我一眼就看出谁会是赢家！$"
# 467 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 468 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges::
# 469 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "那些训练家……\n"
# 470 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "他们在干什么？\l"
# 471 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "他们该去挑战才对。$"
