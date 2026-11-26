# 1 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 2 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
.set LOCALID_SUDOWOODO, 14
# 3 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 4 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_MapScripts::
# 5 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_OutsideEast_OnResume
# 6 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideEast_OnTransition
# 7 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 9 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnResume:
# 10 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo
# 11 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 12 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 13 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo::
# 14 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 16 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	return
# 18 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 19 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnTransition:
# 20 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 21 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 22 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	call_if_unset FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_ShowSudowoodo
# 23 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 24 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 25 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ShowSudowoodo::
# 26 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
# 27 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	return
# 28 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 29 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattleTowerSign::
# 30 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerSign, MSGBOX_SIGN
# 31 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 32 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 33 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattlePalaceSign::
# 34 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePalaceSign, MSGBOX_SIGN
# 35 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 36 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 37 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattleArenaSign::
# 38 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleArenaSign, MSGBOX_SIGN
# 39 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 41 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattlePyramidSign::
# 42 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePyramidSign, MSGBOX_SIGN
# 43 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 45 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_NinjaBoy::
# 46 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial, MSGBOX_NPC
# 47 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 49 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man1::
# 50 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier, MSGBOX_NPC
# 51 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 52 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 53 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Hiker::
# 54 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PyramidTooHarsh, MSGBOX_NPC
# 55 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 56 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 57 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_HexManiac::
# 58 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ThriveInDarkness, MSGBOX_NPC
# 59 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 60 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 61 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BlackBelt1::
# 62 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam, MSGBOX_NPC
# 63 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 64 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 65 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Cook::
# 66 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 67 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BelieveInYouBuddy, MSGBOX_DEFAULT
# 68 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 69 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 70 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 71 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Zigzagoon::
# 72 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 73 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 74 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 75 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 76 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant, MSGBOX_DEFAULT
# 77 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmoncry
# 78 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 79 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 80 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 81 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_RichBoy::
# 82 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody, MSGBOX_NPC
# 83 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 84 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 85 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ExpertF::
# 86 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceBeatGymLeader, MSGBOX_NPC
# 87 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 88 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 89 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TriathleteF::
# 90 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles, MSGBOX_NPC
# 91 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 92 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 93 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Twin::
# 94 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon, MSGBOX_NPC
# 95 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 96 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 97 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man2::
# 98 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 99 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy, MSGBOX_DEFAULT
# 100 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 101 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 102 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 103 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TriathleteM::
# 104 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_DidScottBringYouHere, MSGBOX_NPC
# 105 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 107 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Sudowoodo::
# 108 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 109 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 110 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 111 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 112 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	applymovement LOCALID_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 113 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmovement 0
# 114 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 115 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 116 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 117 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_WaterSudowoodo::
# 118 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 119 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 120 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	special DoWateringBerryTreeAnim
# 121 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitstate
# 122 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 123 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 124 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	applymovement LOCALID_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 125 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmovement 0
# 126 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
# 127 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	closemessage
# 128 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 129 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
# 130 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay 40
# 131 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmoncry
# 132 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SUDOWOODO
# 133 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 40
# 134 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 135 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	dowildbattle
# 136 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 137 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 138 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 139 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 140 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 141 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 142 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 143 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 144 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 145 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo::
# 146 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 147 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 148 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 149 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 150 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Movement_SudowoodoShake:
# 151 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_right
# 152 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 153 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 154 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 155 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_left
# 156 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 157 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 158 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 159 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_right
# 160 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 161 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 162 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 163 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_left
# 164 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 165 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 166 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	step_end
# 167 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 168 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Maniac1::
# 169 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena, MSGBOX_NPC
# 170 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 171 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 172 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Girl::
# 173 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere, MSGBOX_NPC
# 174 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 175 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 176 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_PsychicM::
# 177 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid, MSGBOX_NPC
# 178 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 179 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 180 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man3::
# 181 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GotWipedOut, MSGBOX_NPC
# 182 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 183 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 184 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman1::
# 185 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower, MSGBOX_NPC
# 186 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 187 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 188 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman2::
# 189 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll, MSGBOX_NPC
# 190 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 191 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 192 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BlackBelt2::
# 193 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere, MSGBOX_NPC
# 194 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 195 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 196 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Maniac2::
# 197 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 198 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou, MSGBOX_DEFAULT
# 199 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 200 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 201 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 202 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman3::
# 203 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 204 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome, MSGBOX_DEFAULT
# 205 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 206 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 207 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 208 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_RankingHallSign::
# 209 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_RankingHallSign, MSGBOX_SIGN
# 210 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 211 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 212 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ExchangeCornerSign::
# 213 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ExchangeCornerSign, MSGBOX_SIGN
# 214 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 215 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 216 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Gentleman::
# 217 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers, MSGBOX_NPC
# 218 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 219 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 220 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWoman::
# 221 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 222 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 223 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_set FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone
# 224 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle, MSGBOX_DEFAULT
# 225 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 226 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 227 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 228 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone::
# 229 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere, MSGBOX_DEFAULT
# 230 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 231 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 232 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 233 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Camper::
# 234 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_StickyMonWithLongTail, MSGBOX_NPC
# 235 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 236 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 237 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleTowerSign:
# 238 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "这里是对战塔！\n"
# 239 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "保持连胜，做最强的\l"
# 240 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "训练家！$"
# 241 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 242 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattlePalaceSign:
# 243 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "这里是对战宫殿！\n"
# 244 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "紧盯宝可梦对战！$"
# 245 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 246 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleArenaSign:
# 247 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "这里是对战竞技场！\n"
# 248 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "让最强的队伍聚集于此！$"
# 249 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 250 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattlePyramidSign:
# 251 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "这里是对战金字塔！\n"
# 252 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "闯过对战任务！$"
# 253 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 254 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_RankingHallSign:
# 255 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "对战开拓区排行榜大厅\n"
# 256 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "以新纪录为目标！$"
# 257 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 258 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ExchangeCornerSign:
# 259 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "对战点数兑换服务处\n"
# 260 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "兑换你的对战点数！$"
# 261 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 262 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial:
# 263 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "哇！\n"
# 264 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "好大！\p"
# 265 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "对战塔感觉特别。\n"
# 266 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "它跟别的都不一样。$"
# 267 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 268 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier:
# 269 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我的宏愿是征服对战\n"
# 270 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "开拓区和宝可梦\l"
# 271 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "联盟。\p"
# 272 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "要是梦想成真……\p"
# 273 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我……我就去问隔壁的\n"
# 274 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "咪咪，愿不愿跟我做朋友！$"
# 275 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 276 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PyramidTooHarsh:
# 277 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "对战金字塔太难了！\n"
# 278 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我怎么都到不了顶！\p"
# 279 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "既然没别的办法，也许\n"
# 280 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我可以从外面爬上去……$"
# 281 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 282 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ThriveInDarkness:
# 283 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我在黑暗中茁壮……\n"
# 284 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "对……什么配得上我？\l"
# 285 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "只有对战金字塔……\p"
# 286 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "要不要在黑暗中、在彻底的\n"
# 287 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "绝望中漫步？$"
# 288 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 289 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam:
# 290 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我一星期没睡，然后\n"
# 291 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "组出了终极队伍！\p"
# 292 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我不是自夸，真觉得自己\n"
# 293 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "不会输。我们这就冲进\l"
# 294 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "对战竞技场！$"
# 295 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 296 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_DidScottBringYouHere:
# 297 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "史考特也把你带来了？\n"
# 298 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "那家伙到底怎么回事？\p"
# 299 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "听说他确实很会\n"
# 300 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "发掘有才华的训练家，不过……\p"
# 301 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我从没见过他亲自\n"
# 302 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "对战。$"
# 303 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 304 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BelieveInYouBuddy:
# 305 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "ZIGG！\n"
# 306 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我相信你，小家伙！\p"
# 307 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "你要是赢了，我给我这只\n"
# 308 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "小ZIGG做什么你爱吃的\l"
# 309 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "好吃的都行！$"
# 310 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 311 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant:
# 312 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "蛇纹熊看起来很茫然……$"
# 313 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 314 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody:
# 315 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "大家都说我爱管闲事，\n"
# 316 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "可我忍不住。\p"
# 317 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "你的帽子歪了！\n"
# 318 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "哦，不，地上有垃圾！\l"
# 319 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "哎呀，快到晚饭时间了！\p"
# 320 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我不知道能不能就那样\n"
# 321 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "在看台上看对战宫殿……$"
# 322 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 323 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OnceBeatGymLeader:
# 324 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我现在也许不那么\n"
# 325 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "起眼，可我以前打赢过\l"
# 326 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "道馆馆主。\p"
# 327 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "谁知道呢，也许我该再\n"
# 328 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "试着追求一次荣耀。$"
# 329 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 330 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles:
# 331 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我骑车快，对战\n"
# 332 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "也快。\p"
# 333 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我一眨眼就赢下\n"
# 334 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "比赛！$"
# 335 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 336 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon:
# 337 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我玩宝可梦比我爸爸\n"
# 338 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "厉害。$"
# 339 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 340 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy:
# 341 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "去吧，我的宝贝！\n"
# 342 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "去给爸爸赢几场回来！\p"
# 343 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "你就像你妈妈一样，\n"
# 344 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "一定会碾压全场！$"
# 345 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 346 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena:
# 347 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我好不容易才来这儿，\n"
# 348 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "因为我听说对战竞技场有个\l"
# 349 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "超级漂亮的女孩。\p"
# 350 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "结果我没找到她，\n"
# 351 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "你猜我找到了什么？\p"
# 352 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "一大群满身汗味、臭烘烘、\n"
# 353 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "野蛮的武术家！$"
# 354 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 355 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere:
# 356 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我有时看见一位看起来\n"
# 357 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "很重要的老先生进去。\p"
# 358 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "他有很厉害的宝可梦。\n"
# 359 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "不过他看起来人很好。$"
# 360 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 361 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid:
# 362 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "你知道吗？\n"
# 363 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "对战金字塔的传说？\p"
# 364 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "当一位有自信的训练家\n"
# 365 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "伸手去够金色巅峰时，\l"
# 366 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "会出现一位人中之男。\p"
# 367 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "不知道这个传说？\n"
# 368 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "当然不知道！\l"
# 369 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我刚编的！\p"
# 370 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "那是什么意思？\n"
# 371 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "朋友，这我可说不上来！$"
# 372 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 373 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_GotWipedOut:
# 374 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "天啊！哦天啊！\n"
# 375 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我以前从没输过！\p"
# 376 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "结果我被彻底打爆，\n"
# 377 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "一点面子都没留！\p"
# 378 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "然后还被告知我没什么\n"
# 379 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "才能？！天啊！$"
# 380 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 381 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower:
# 382 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "这家伙挑战对战塔时，\n"
# 383 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "碰上了一位强得可怕的\l"
# 384 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "训练家。\p"
# 385 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "你看看他现在……\p"
# 386 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "你要是决定去对战塔，\n"
# 387 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "可得小心点。$"
# 388 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 389 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll:
# 390 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "太好了！\n"
# 391 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我终于攒够对战点数！\p"
# 392 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我想我要再换一个\n"
# 393 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "大毛绒人偶！$"
# 394 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 395 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere:
# 396 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "哦，对，好！\n"
# 397 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "所以这就是排行榜大厅！\p"
# 398 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我想作为超级冠军名留\n"
# 399 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "青史，让我的名字\l"
# 400 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "被后人记在这儿。$"
# 401 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 402 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou:
# 403 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "有你在身边，我什么都\n"
# 404 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "做得到。$"
# 405 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 406 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome:
# 407 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "哦，亲爱的，你太棒了！\p"
# 408 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "哦，我一刻都等不了！\p"
# 409 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我们现在就去多人\n"
# 410 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "对战房间！\p"
# 411 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "要是我俩在对战沙龙\n"
# 412 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "凑到一起，我们的爱之力\l"
# 413 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "会战胜所有对手。\p"
# 414 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "亲爱的，在我们面前，\n"
# 415 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "一切都会像多米诺\l"
# 416 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "一样倒下！$"
# 417 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 418 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers:
# 419 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "对战开拓区并不是只给\n"
# 420 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "强训练家的。\p"
# 421 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "好像很多有特殊能力的人\n"
# 422 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "都被邀请来了。\p"
# 423 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "那个史考特……\p"
# 424 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "他建这个地方，也许\n"
# 425 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "有更大的目的……$"
# 426 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 427 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle:
# 428 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "打扰一下，年轻人。\n"
# 429 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "你眼力好吗？\p"
# 430 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "这前头有棵怪树，在我\n"
# 431 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "这双昏花的老眼里，\l"
# 432 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "它好像在扭。$"
# 433 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 434 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere:
# 435 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "打扰一下，年轻人。\n"
# 436 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "你记性好吗？\p"
# 437 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我总觉得这前头曾经\n"
# 438 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "有过一棵怪树。$"
# 439 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 440 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_StickyMonWithLongTail:
# 441 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我……\n"
# 442 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "我看见了！\p"
# 443 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "前面有一只黏糊糊的、\n"
# 444 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "尾巴很长的宝可梦！\p"
# 445 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "它躲在岩石下面，\n"
# 446 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "一直盯着我看！$"
