# 1 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 2 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
.set LOCALID_SCOTT, 1
# 3 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 4 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_MapScripts::
# 5 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 7 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Scott::
# 8 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	faceplayer
# 10 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, BattleFrontier_ScottsHouse_EventScript_GivenBerry
# 11 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, BattleFrontier_ScottsHouse_EventScript_GivenShield
# 12 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints
# 13 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems
# 14 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 16 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems::
# 17 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SCOTT_GIVES_BATTLE_POINTS, BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier
# 18 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_SILVER_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols
# 19 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_GOLD_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols
# 20 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 21 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 23 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveShield::
# 24 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SILVER_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield
# 25 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOLD_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield
# 26 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 27 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 28 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 29 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols::
# 30 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 31 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 32 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 33 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 34 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 35 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 36 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 37 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols, MSGBOX_DEFAULT
# 38 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	giveitem ITEM_LANSAT_BERRY
# 39 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
# 40 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_SILVER_SYMBOLS
# 41 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 42 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 43 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 45 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols::
# 46 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 47 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 48 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 49 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 50 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 51 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 52 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 53 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols, MSGBOX_DEFAULT
# 54 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	giveitem ITEM_STARF_BERRY
# 55 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
# 56 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_GOLD_SYMBOLS
# 57 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 58 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 59 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 60 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 61 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_BerryPocketFull::
# 62 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_BerryPocketStuffed, MSGBOX_DEFAULT
# 63 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 64 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 65 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 66 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenBerry::
# 67 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere, MSGBOX_DEFAULT
# 68 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 69 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 70 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 71 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_RandomComment::
# 72 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	random 3
# 73 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment
# 74 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment
# 75 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers, MSGBOX_DEFAULT
# 76 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 77 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 78 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 79 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment::
# 80 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain, MSGBOX_DEFAULT
# 81 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 82 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 83 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 84 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment::
# 85 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier, MSGBOX_DEFAULT
# 86 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 87 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 88 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 89 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield::
# 90 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 91 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 92 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 93 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
# 94 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 95 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 96 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
# 97 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 98 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 99 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 100 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveSilverShield::
# 101 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow, MSGBOX_DEFAULT
# 102 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	givedecoration DECOR_SILVER_SHIELD
# 103 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
# 104 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_SILVER_SHIELD
# 105 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 106 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
# 107 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 108 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 109 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_NoRoomForShield::
# 110 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ComeBackForThisLater, MSGBOX_DEFAULT
# 111 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 112 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 113 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 114 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenShield::
# 115 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings, MSGBOX_DEFAULT
# 116 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 117 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 118 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 119 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield::
# 120 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 121 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 122 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 123 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
# 124 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 125 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 126 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
# 127 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 128 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 129 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 130 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveGoldShield::
# 131 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow, MSGBOX_DEFAULT
# 132 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	givedecoration DECOR_GOLD_SHIELD
# 133 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
# 134 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_GOLD_SHIELD
# 135 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 136 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
# 137 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 138 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 139 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints::
# 140 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingGreatThings, MSGBOX_DEFAULT
# 141 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 142 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 143 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 144 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier::
# 145 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 146 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	closemessage
# 147 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	delay 30
# 148 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth
# 149 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth
# 150 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast
# 151 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest
# 152 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal, MSGBOX_DEFAULT
# 153 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_FacePlayer
# 154 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 155 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing, MSGBOX_DEFAULT
# 156 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_SCOTT_STATE, 13, BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints
# 157 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_SCOTT_STATE, 9, BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints
# 158 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_SCOTT_STATE, 6, BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints
# 159 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint
# 160 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 161 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 162 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints::
# 163 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 4
# 164 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 4
# 165 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 166 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 167 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 168 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints::
# 169 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 3
# 170 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 3
# 171 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 172 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 173 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 174 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints::
# 175 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 2
# 176 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 2
# 177 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 178 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 179 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 180 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint::
# 181 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 1
# 182 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 1
# 183 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 184 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 185 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 186 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints::
# 187 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	special GiveFrontierBattlePoints
# 188 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 189 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExplainBattlePoints, MSGBOX_DEFAULT
# 190 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_SCOTT_GIVES_BATTLE_POINTS
# 191 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 192 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 193 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 194 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 195 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth::
# 196 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterUp
# 197 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 198 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 199 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 200 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth::
# 201 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterDown
# 202 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 203 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 204 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 205 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast::
# 206 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 207 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 208 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 209 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 210 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest::
# 211 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 212 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 213 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 214 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 215 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier:
# 216 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "史考特：哎呀，欢迎欢迎！\n"
# 217 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "呵呵……抱歉地方有点挤。\p"
# 218 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "总之，{PLAYER}{KUN}，让我正式\n"
# 219 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "欢迎你来到对战开拓区。\p"
# 220 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "这是我梦想成真。\n"
# 221 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "花了好多年，我终于\l"
# 222 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "把梦想变成了现实。$"
# 223 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 224 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal:
# 225 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "回想起来，那是段好长的\n"
# 226 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "旅程……\p"
# 227 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "我独自离家，去寻找\n"
# 228 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "强大的训练家。\p"
# 229 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "谁也想象不到把它变成现实\n"
# 230 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "花了多少心血和时间。$"
# 231 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 232 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing:
# 233 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "不过那些都是过去了。\n"
# 234 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "没必要老想着！\p"
# 235 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "我只希望你能在这里尽情\n"
# 236 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "享受对战。\p"
# 237 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER}{KUN}，这个给你，\n"
# 238 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "作为我们旅程中\l"
# 239 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "相遇一次的纪念。$"
# 240 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 241 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints:
# 242 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER}获得了\n"
# 243 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{STR_VAR_1}点对战点数。$"
# 244 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 245 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExplainBattlePoints:
# 246 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "史考特：你可以在开拓区\n"
# 247 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "通行证上查看对战点数。\p"
# 248 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你在对战开拓区越成功，\n"
# 249 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "收集的对战点数越多。\p"
# 250 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "对战点数怎么用随你，\n"
# 251 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "比如拿去换道具。$"
# 252 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 253 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExpectingGreatThings:
# 254 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "我对你抱着很大的期待！$"
# 255 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 256 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers:
# 257 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "史考特：每个训练家都是\n"
# 258 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "独立的。他们都有自己的生活。\p"
# 259 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "可一到对战时，\n"
# 260 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "他们是谁都不重要了。\p"
# 261 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "他们全都一样！\p"
# 262 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "我喜欢对战的纯粹，\n"
# 263 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "在那儿人人平等。\p"
# 264 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "所以我才到处寻找认真\n"
# 265 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "对战的训练家，\l"
# 266 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "把他们请到这儿来。$"
# 267 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 268 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain:
# 269 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "史考特：你见过开拓区\n"
# 270 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "首领了吗？\p"
# 271 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "不如说，你从他们那里\n"
# 272 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "拿到象征了吗？\p"
# 273 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "我挑出来的开拓区首领，\n"
# 274 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "都是顶尖的训练家。\p"
# 275 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "不过我相信，看到你有多强，\n"
# 276 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "连他们都会吃惊！$"
# 277 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 278 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier:
# 279 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "史考特：你不只是为对战\n"
# 280 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "而训练，对吧？\p"
# 281 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "我记得你也在做\n"
# 282 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "宝可梦图鉴。\p"
# 283 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "那么，你猜怎么着？\p"
# 284 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你说不定会在对战开拓区\n"
# 285 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "的某个地方遇到野生宝可梦……\l"
# 286 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "呵呵！$"
# 287 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 288 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols:
# 289 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "史考特：你在对战开拓区\n"
# 290 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "玩得开心吗？\p"
# 291 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "……等一下……\n"
# 292 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "哦！\p"
# 293 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你的开拓区通行证！\n"
# 294 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你把银象征全套\l"
# 295 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "都收集齐了！\p"
# 296 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "太了不起了！\n"
# 297 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你果然很强，我没看错！\p"
# 298 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "平时我不会做这种事，\n"
# 299 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "可这是特别的时刻！\p"
# 300 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "这个给你。\n"
# 301 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "我相信你能好好利用。$"
# 302 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 303 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols:
# 304 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "史考特：希望你在对战开拓区\n"
# 305 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "过得开心。\p"
# 306 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "……等一下……\n"
# 307 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "哦，我的眼睛都不敢信！\p"
# 308 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你的开拓区通行证！\n"
# 309 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你把金象征全套\l"
# 310 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "都收集齐了！\p"
# 311 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "太惊人了！\n"
# 312 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你果然了不起，我没看错！\p"
# 313 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "… … … … … …\p"
# 314 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER}，这个你一定得收下！\p"
# 315 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "我想你会明白\n"
# 316 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "我这份礼物的价值！$"
# 317 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 318 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere:
# 319 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "我得说，我看人的眼光\n"
# 320 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "不错，一眼就能认出好训练家。\p"
# 321 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "幸好我有先见之明，\n"
# 322 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "把你带到这里来！$"
# 323 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 324 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_BerryPocketStuffed:
# 325 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你的树果袋好像\n"
# 326 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "塞满了。$"
# 327 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 328 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow:
# 329 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "史考特：哦，我听说你了！\n"
# 330 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你把对战塔统治得多厉害！\l"
# 331 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你连胜了50多位训练家？\p"
# 332 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "太棒了！\n"
# 333 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "这个给你！$"
# 334 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 335 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow:
# 336 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "史考特：天啊！我听说你了！\n"
# 337 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你把对战塔压得多惨！\l"
# 338 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "你连胜了100多位训练家？\p"
# 339 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "简直好得离谱！\n"
# 340 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "这个你一定得收下！$"
# 341 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 342 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings:
# 343 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "我现在期待听到关于你\n"
# 344 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "更了不起的事！$"
# 345 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 346 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ComeBackForThisLater:
# 347 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "哎呀，要是你的东西太多了，\n"
# 348 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "下次再来拿这个吧。$"
