# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_WOMAN_1, 19
# 3 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_MAN_1, 20
# 4 "data/maps/LilycoveCity/scripts.pory"

# 5 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 6 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 7 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 8 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 9 "data/maps/LilycoveCity/scripts.pory"

# 10 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 11 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 12 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 13 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 14 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 15 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/LilycoveCity/scripts.pory"
	end
# 17 "data/maps/LilycoveCity/scripts.pory"

# 18 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 19 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 20 "data/maps/LilycoveCity/scripts.pory"
	end
# 21 "data/maps/LilycoveCity/scripts.pory"

# 22 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 23 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 24 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 34 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 35 "data/maps/LilycoveCity/scripts.pory"
	return
# 36 "data/maps/LilycoveCity/scripts.pory"

# 37 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 38 "data/maps/LilycoveCity/scripts.pory"
	lock
# 39 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 40 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 41 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 42 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 43 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 44 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 45 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 46 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 47 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 48 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity/scripts.pory"
	release
# 50 "data/maps/LilycoveCity/scripts.pory"
	end
# 51 "data/maps/LilycoveCity/scripts.pory"

# 52 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 53 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 54 "data/maps/LilycoveCity/scripts.pory"
	release
# 55 "data/maps/LilycoveCity/scripts.pory"
	end
# 56 "data/maps/LilycoveCity/scripts.pory"

# 57 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 58 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 59 "data/maps/LilycoveCity/scripts.pory"
	end
# 60 "data/maps/LilycoveCity/scripts.pory"

# 61 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 62 "data/maps/LilycoveCity/scripts.pory"
	lock
# 63 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 64 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 65 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 66 "data/maps/LilycoveCity/scripts.pory"
	release
# 67 "data/maps/LilycoveCity/scripts.pory"
	end
# 68 "data/maps/LilycoveCity/scripts.pory"

# 69 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 70 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 71 "data/maps/LilycoveCity/scripts.pory"
	release
# 72 "data/maps/LilycoveCity/scripts.pory"
	end
# 73 "data/maps/LilycoveCity/scripts.pory"

# 74 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 75 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 76 "data/maps/LilycoveCity/scripts.pory"
	end
# 77 "data/maps/LilycoveCity/scripts.pory"

# 78 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 79 "data/maps/LilycoveCity/scripts.pory"
	lock
# 80 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 81 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 82 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity/scripts.pory"
	release
# 84 "data/maps/LilycoveCity/scripts.pory"
	end
# 85 "data/maps/LilycoveCity/scripts.pory"

# 86 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 87 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity/scripts.pory"
	release
# 89 "data/maps/LilycoveCity/scripts.pory"
	end
# 90 "data/maps/LilycoveCity/scripts.pory"

# 91 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 92 "data/maps/LilycoveCity/scripts.pory"
	lock
# 93 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 94 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 95 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 96 "data/maps/LilycoveCity/scripts.pory"
	release
# 97 "data/maps/LilycoveCity/scripts.pory"
	end
# 98 "data/maps/LilycoveCity/scripts.pory"

# 99 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 100 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity/scripts.pory"
	release
# 102 "data/maps/LilycoveCity/scripts.pory"
	end
# 103 "data/maps/LilycoveCity/scripts.pory"

# 104 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 105 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 106 "data/maps/LilycoveCity/scripts.pory"
	end
# 107 "data/maps/LilycoveCity/scripts.pory"

# 108 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 109 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 110 "data/maps/LilycoveCity/scripts.pory"
	end
# 111 "data/maps/LilycoveCity/scripts.pory"

# 112 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 113 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 114 "data/maps/LilycoveCity/scripts.pory"
	end
# 115 "data/maps/LilycoveCity/scripts.pory"

# 116 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 117 "data/maps/LilycoveCity/scripts.pory"
	lock
# 118 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 119 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 120 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 121 "data/maps/LilycoveCity/scripts.pory"
	release
# 122 "data/maps/LilycoveCity/scripts.pory"
	end
# 123 "data/maps/LilycoveCity/scripts.pory"

# 124 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 125 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 126 "data/maps/LilycoveCity/scripts.pory"
	release
# 127 "data/maps/LilycoveCity/scripts.pory"
	end
# 128 "data/maps/LilycoveCity/scripts.pory"

# 129 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 130 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 131 "data/maps/LilycoveCity/scripts.pory"
	end
# 132 "data/maps/LilycoveCity/scripts.pory"

# 133 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 134 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 135 "data/maps/LilycoveCity/scripts.pory"
	end
# 136 "data/maps/LilycoveCity/scripts.pory"

# 137 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 138 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 139 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 140 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 141 "data/maps/LilycoveCity/scripts.pory"
	end
# 142 "data/maps/LilycoveCity/scripts.pory"

# 143 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 144 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 145 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 146 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 147 "data/maps/LilycoveCity/scripts.pory"
	end
# 148 "data/maps/LilycoveCity/scripts.pory"

# 149 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 150 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 151 "data/maps/LilycoveCity/scripts.pory"
	end
# 152 "data/maps/LilycoveCity/scripts.pory"

# 153 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 154 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 155 "data/maps/LilycoveCity/scripts.pory"
	end
# 156 "data/maps/LilycoveCity/scripts.pory"

# 157 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 158 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 159 "data/maps/LilycoveCity/scripts.pory"
	end
# 160 "data/maps/LilycoveCity/scripts.pory"

# 161 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 162 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 163 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 164 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 165 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 166 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 167 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 168 "data/maps/LilycoveCity/scripts.pory"
	end
# 169 "data/maps/LilycoveCity/scripts.pory"

# 170 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 171 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 172 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 173 "data/maps/LilycoveCity/scripts.pory"
	end
# 174 "data/maps/LilycoveCity/scripts.pory"

# 175 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 176 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 177 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 178 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 179 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 180 "data/maps/LilycoveCity/scripts.pory"
	end
# 181 "data/maps/LilycoveCity/scripts.pory"

# 182 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 183 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 184 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 185 "data/maps/LilycoveCity/scripts.pory"
	end
# 186 "data/maps/LilycoveCity/scripts.pory"

# 187 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 188 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 189 "data/maps/LilycoveCity/scripts.pory"
	end
# 190 "data/maps/LilycoveCity/scripts.pory"

# 191 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 192 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 193 "data/maps/LilycoveCity/scripts.pory"
	end
# 194 "data/maps/LilycoveCity/scripts.pory"

# 195 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 196 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 197 "data/maps/LilycoveCity/scripts.pory"
	end
# 198 "data/maps/LilycoveCity/scripts.pory"

# 199 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ErenYeagerGrunt::
# 200 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Enemies, MSGBOX_NPC
# 201 "data/maps/LilycoveCity/scripts.pory"
	end
# 202 "data/maps/LilycoveCity/scripts.pory"

# 203 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 204 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 205 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 206 "data/maps/LilycoveCity/scripts.pory"
	end
# 207 "data/maps/LilycoveCity/scripts.pory"

# 208 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 209 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 210 "data/maps/LilycoveCity/scripts.pory"
	end
# 211 "data/maps/LilycoveCity/scripts.pory"

# 212 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 213 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 214 "data/maps/LilycoveCity/scripts.pory"
	end
# 215 "data/maps/LilycoveCity/scripts.pory"

# 216 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 217 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 218 "data/maps/LilycoveCity/scripts.pory"
	end
# 219 "data/maps/LilycoveCity/scripts.pory"

# 220 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 221 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 222 "data/maps/LilycoveCity/scripts.pory"
	end
# 223 "data/maps/LilycoveCity/scripts.pory"

# 224 "data/maps/LilycoveCity/scripts.pory"

# 225 "data/maps/LilycoveCity/scripts.pory"

# 226 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 227 "data/maps/LilycoveCity/scripts.pory"
	lock
# 228 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 229 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 230 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 231 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 232 "data/maps/LilycoveCity/scripts.pory"
	release
# 233 "data/maps/LilycoveCity/scripts.pory"
	end
# 234 "data/maps/LilycoveCity/scripts.pory"

# 235 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 236 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 237 "data/maps/LilycoveCity/scripts.pory"
	return
# 238 "data/maps/LilycoveCity/scripts.pory"

# 239 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 240 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 241 "data/maps/LilycoveCity/scripts.pory"
	return
# 242 "data/maps/LilycoveCity/scripts.pory"

# 243 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_Enemies:
# 244 "data/maps/LilycoveCity/scripts.pory"
	.string "嘿……如果我们把敌人\n"
# 245 "data/maps/LilycoveCity/scripts.pory"
	.string "全杀光……\l"
# 246 "data/maps/LilycoveCity/scripts.pory"
	.string "那边的……我们终于\l"
# 247 "data/maps/LilycoveCity/scripts.pory"
	.string "能自由了吗？\p"
# 248 "data/maps/LilycoveCity/scripts.pory"
	.string "……\p"
# 249 "data/maps/LilycoveCity/scripts.pory"
	.string "什——我是说，呃，你看\n"
# 250 "data/maps/LilycoveCity/scripts.pory"
	.string "那些吼吼鲸！对吧，米凯拉？$"
# 251 "data/maps/LilycoveCity/scripts.pory"

# 252 "data/maps/LilycoveCity/scripts.pory"

# 253 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 254 "data/maps/LilycoveCity/scripts.pory"
	.string "亚伦你看！我们终于\n"
# 255 "data/maps/LilycoveCity/scripts.pory"
	.string "到海边了！亚伦？$"
# 256 "data/maps/LilycoveCity/scripts.pory"

# 257 "data/maps/LilycoveCity/scripts.pory"

# 258 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 259 "data/maps/LilycoveCity/scripts.pory"
	.string "亚伦这样发呆，我\n"
# 260 "data/maps/LilycoveCity/scripts.pory"
	.string "看着难受，阿米也一样。$"
# 261 "data/maps/LilycoveCity/scripts.pory"

# 262 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 263 "data/maps/LilycoveCity/scripts.pory"
	.string "喂，你！\p"
# 264 "data/maps/LilycoveCity/scripts.pory"
	.string "别靠近小湾里的\n"
# 265 "data/maps/LilycoveCity/scripts.pory"
	.string "那个洞窟！\p"
# 266 "data/maps/LilycoveCity/scripts.pory"
	.string "为什么？你不需要理由！\n"
# 267 "data/maps/LilycoveCity/scripts.pory"
	.string "我是大人，你听话就行！$"
# 268 "data/maps/LilycoveCity/scripts.pory"

# 269 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 270 "data/maps/LilycoveCity/scripts.pory"
	.string "如果这整个世界都变成\n"
# 271 "data/maps/LilycoveCity/scripts.pory"
	.string "我们水舰队的，宝可梦\l"
# 272 "data/maps/LilycoveCity/scripts.pory"
	.string "也会过得更幸福。$"
# 273 "data/maps/LilycoveCity/scripts.pory"

# 274 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 275 "data/maps/LilycoveCity/scripts.pory"
	.string "就现在！吼吼鲸！\n"
# 276 "data/maps/LilycoveCity/scripts.pory"
	.string "从水里跳出来！$"
# 277 "data/maps/LilycoveCity/scripts.pory"

# 278 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 279 "data/maps/LilycoveCity/scripts.pory"
	.string "嗯？你想干什么？\p"
# 280 "data/maps/LilycoveCity/scripts.pory"
	.string "你妨碍我们训练了，\n"
# 281 "data/maps/LilycoveCity/scripts.pory"
	.string "能不能走开？$"
# 282 "data/maps/LilycoveCity/scripts.pory"

# 283 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 284 "data/maps/LilycoveCity/scripts.pory"
	.string "这个镇上就有宝可梦\n"
# 285 "data/maps/LilycoveCity/scripts.pory"
	.string "华丽大赛会场。\p"
# 286 "data/maps/LilycoveCity/scripts.pory"
	.string "这意味全国养得好的\n"
# 287 "data/maps/LilycoveCity/scripts.pory"
	.string "宝可梦都会来这里。\p"
# 288 "data/maps/LilycoveCity/scripts.pory"
	.string "我兴奋得心都胀了！$"
# 289 "data/maps/LilycoveCity/scripts.pory"

# 290 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 291 "data/maps/LilycoveCity/scripts.pory"
	.string "你看到镇子边上小湾里\n"
# 292 "data/maps/LilycoveCity/scripts.pory"
	.string "那个奇怪的洞窟了吗？$"
# 293 "data/maps/LilycoveCity/scripts.pory"

# 294 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 295 "data/maps/LilycoveCity/scripts.pory"
	.string "我要教我的宝可梦\n"
# 296 "data/maps/LilycoveCity/scripts.pory"
	.string "一些参加大赛的新招式。$"
# 297 "data/maps/LilycoveCity/scripts.pory"

# 298 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 299 "data/maps/LilycoveCity/scripts.pory"
	.string "我从关都来的。\p"
# 300 "data/maps/LilycoveCity/scripts.pory"
	.string "丰缘地区到处是水和\n"
# 301 "data/maps/LilycoveCity/scripts.pory"
	.string "绿色的自然，真美。\p"
# 302 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm？等一下……\p"
# 303 "data/maps/LilycoveCity/scripts.pory"
	.string "会不会有只在这片\n"
# 304 "data/maps/LilycoveCity/scripts.pory"
	.string "地区生活的稀有宝可梦？$"
# 305 "data/maps/LilycoveCity/scripts.pory"

# 306 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 307 "data/maps/LilycoveCity/scripts.pory"
	.string "水舰队一直在小湾里\n"
# 308 "data/maps/LilycoveCity/scripts.pory"
	.string "训练他们的吼吼鲸。\p"
# 309 "data/maps/LilycoveCity/scripts.pory"
	.string "那些家伙挡着，我们的\n"
# 310 "data/maps/LilycoveCity/scripts.pory"
	.string "船出不了海！$"
# 311 "data/maps/LilycoveCity/scripts.pory"

# 312 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 313 "data/maps/LilycoveCity/scripts.pory"
	.string "嗨，你知道吗？\p"
# 314 "data/maps/LilycoveCity/scripts.pory"
	.string "有人替我们把水舰队\n"
# 315 "data/maps/LilycoveCity/scripts.pory"
	.string "赶走了！\p"
# 316 "data/maps/LilycoveCity/scripts.pory"
	.string "吼吼鲸也离开了小湾，\n"
# 317 "data/maps/LilycoveCity/scripts.pory"
	.string "我们的船又能出海了。$"
# 318 "data/maps/LilycoveCity/scripts.pory"

# 319 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 320 "data/maps/LilycoveCity/scripts.pory"
	.string "我在海边旅馆听着\n"
# 321 "data/maps/LilycoveCity/scripts.pory"
	.string "海浪打盹……\p"
# 322 "data/maps/LilycoveCity/scripts.pory"
	.string "结果有人偷走了\n"
# 323 "data/maps/LilycoveCity/scripts.pory"
	.string "我的宝可梦！\p"
# 324 "data/maps/LilycoveCity/scripts.pory"
	.string "犯人是谁？\n"
# 325 "data/maps/LilycoveCity/scripts.pory"
	.string "水舰队？是水舰队吗？$"
# 326 "data/maps/LilycoveCity/scripts.pory"

# 327 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 328 "data/maps/LilycoveCity/scripts.pory"
	.string "我丢的宝可梦……\n"
# 329 "data/maps/LilycoveCity/scripts.pory"
	.string "自己偷偷回来了！$"
# 330 "data/maps/LilycoveCity/scripts.pory"

# 331 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 332 "data/maps/LilycoveCity/scripts.pory"
	.string "我是画商。\p"
# 333 "data/maps/LilycoveCity/scripts.pory"
	.string "我做美术品买卖，\n"
# 334 "data/maps/LilycoveCity/scripts.pory"
	.string "尤其是画作。\p"
# 335 "data/maps/LilycoveCity/scripts.pory"
	.string "我听说这里的博物馆\n"
# 336 "data/maps/LilycoveCity/scripts.pory"
	.string "展出着了不起的作品……$"
# 337 "data/maps/LilycoveCity/scripts.pory"

# 338 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 339 "data/maps/LilycoveCity/scripts.pory"
	.string "就算我们变老长皱纹，\n"
# 340 "data/maps/LilycoveCity/scripts.pory"
	.string "大海也永远年轻，\l"
# 341 "data/maps/LilycoveCity/scripts.pory"
	.string "闪着生命的光辉……\p"
# 342 "data/maps/LilycoveCity/scripts.pory"
	.string "呼呵呵呵呵……$"
# 343 "data/maps/LilycoveCity/scripts.pory"

# 344 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 345 "data/maps/LilycoveCity/scripts.pory"
	.string "六十年前，我丈夫\n"
# 346 "data/maps/LilycoveCity/scripts.pory"
	.string "就是在这里向我求婚的。\l"
# 347 "data/maps/LilycoveCity/scripts.pory"
	.string "大海还和从前一样美。\p"
# 348 "data/maps/LilycoveCity/scripts.pory"
	.string "呵呵呵呵呵……$"
# 349 "data/maps/LilycoveCity/scripts.pory"

# 350 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 351 "data/maps/LilycoveCity/scripts.pory"
	.string "嗯，你知道这个小湾里\n"
# 352 "data/maps/LilycoveCity/scripts.pory"
	.string "那个奇特的洞窟吗？\p"
# 353 "data/maps/LilycoveCity/scripts.pory"
	.string "那本来是天然形成的，\n"
# 354 "data/maps/LilycoveCity/scripts.pory"
	.string "后来水舰队那群家伙\l"
# 355 "data/maps/LilycoveCity/scripts.pory"
	.string "来改造过。\p"
# 356 "data/maps/LilycoveCity/scripts.pory"
	.string "他们自称“热爱自然的\n"
# 357 "data/maps/LilycoveCity/scripts.pory"
	.string "水舰队”！\p"
# 358 "data/maps/LilycoveCity/scripts.pory"
	.string "可他们的所作所为和\n"
# 359 "data/maps/LilycoveCity/scripts.pory"
	.string "嘴上说的完全不一样！$"
# 360 "data/maps/LilycoveCity/scripts.pory"

# 361 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 362 "data/maps/LilycoveCity/scripts.pory"
	.string "小湾里那个洞窟……\p"
# 363 "data/maps/LilycoveCity/scripts.pory"
	.string "我没马上注意到，\n"
# 364 "data/maps/LilycoveCity/scripts.pory"
	.string "不过现在里面空了。\p"
# 365 "data/maps/LilycoveCity/scripts.pory"
	.string "水舰队那群人，\n"
# 366 "data/maps/LilycoveCity/scripts.pory"
	.string "一定彻底走了。$"
# 367 "data/maps/LilycoveCity/scripts.pory"

# 368 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 369 "data/maps/LilycoveCity/scripts.pory"
	.string "水静市\p"
# 370 "data/maps/LilycoveCity/scripts.pory"
	.string "“大地尽头，\n"
# 371 "data/maps/LilycoveCity/scripts.pory"
	.string "海洋起点。”$"
# 372 "data/maps/LilycoveCity/scripts.pory"

# 373 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 374 "data/maps/LilycoveCity/scripts.pory"
	.string "宝可梦华丽大赛会场\n"
# 375 "data/maps/LilycoveCity/scripts.pory"
	.string "“训练家的聚集地！”$"
# 376 "data/maps/LilycoveCity/scripts.pory"

# 377 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 378 "data/maps/LilycoveCity/scripts.pory"
	.string "水静湾旅馆\p"
# 379 "data/maps/LilycoveCity/scripts.pory"
	.string "“请记住水静市的\n"
# 380 "data/maps/LilycoveCity/scripts.pory"
	.string "水静湾。”$"
# 381 "data/maps/LilycoveCity/scripts.pory"

# 382 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 383 "data/maps/LilycoveCity/scripts.pory"
	.string "水静博物馆\p"
# 384 "data/maps/LilycoveCity/scripts.pory"
	.string "“宝可梦名作收藏展\n"
# 385 "data/maps/LilycoveCity/scripts.pory"
	.string "正在展出！”$"
# 386 "data/maps/LilycoveCity/scripts.pory"

# 387 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 388 "data/maps/LilycoveCity/scripts.pory"
	.string "水静博物馆\p"
# 389 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}的宝可梦\n"
# 390 "data/maps/LilycoveCity/scripts.pory"
	.string "收藏展正在展出！”$"
# 391 "data/maps/LilycoveCity/scripts.pory"

# 392 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 393 "data/maps/LilycoveCity/scripts.pory"
	.string "水静市港口\p"
# 394 "data/maps/LilycoveCity/scripts.pory"
	.string "“渡轮潮汐号正在\n"
# 395 "data/maps/LilycoveCity/scripts.pory"
	.string "凯那市建造中。\p"
# 396 "data/maps/LilycoveCity/scripts.pory"
	.string "“预计不久后\n"
# 397 "data/maps/LilycoveCity/scripts.pory"
	.string "开始运营。”$"
# 398 "data/maps/LilycoveCity/scripts.pory"

# 399 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 400 "data/maps/LilycoveCity/scripts.pory"
	.string "水静市港口\p"
# 401 "data/maps/LilycoveCity/scripts.pory"
	.string "“欢迎乘坐渡轮潮汐号\n"
# 402 "data/maps/LilycoveCity/scripts.pory"
	.string "享受愉快航程。”$"
# 403 "data/maps/LilycoveCity/scripts.pory"

# 404 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 405 "data/maps/LilycoveCity/scripts.pory"
	.string "宝可梦训练家粉丝俱乐部\p"
# 406 "data/maps/LilycoveCity/scripts.pory"
	.string "牌子上到处涂满了\n"
# 407 "data/maps/LilycoveCity/scripts.pory"
	.string "训练家的名字……$"
# 408 "data/maps/LilycoveCity/scripts.pory"

# 409 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 410 "data/maps/LilycoveCity/scripts.pory"
	.string "水静百货\p"
# 411 "data/maps/LilycoveCity/scripts.pory"
	.string "“好商品和兴奋感\n"
# 412 "data/maps/LilycoveCity/scripts.pory"
	.string "满得要溢出来！\p"
# 413 "data/maps/LilycoveCity/scripts.pory"
	.string "“找你需要的东西，\n"
# 414 "data/maps/LilycoveCity/scripts.pory"
	.string "这里最合适！”$"
# 415 "data/maps/LilycoveCity/scripts.pory"

# 416 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 417 "data/maps/LilycoveCity/scripts.pory"
	.string "蛋招式教学之家\p"
# 418 "data/maps/LilycoveCity/scripts.pory"
	.string "“教宝可梦蛋招式。”$"
# 419 "data/maps/LilycoveCity/scripts.pory"

# 420 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "你知道做宝可方块的\n"
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "机器——宝可方块混合器吗？$"
# 423 "data/maps/LilycoveCity/scripts.pory"

# 424 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 425 "data/maps/LilycoveCity/scripts.pory"
	.string "得大家合作才能让它\n"
# 426 "data/maps/LilycoveCity/scripts.pory"
	.string "转得更快。\p"
# 427 "data/maps/LilycoveCity/scripts.pory"
	.string "听说转得越快，\n"
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "做出的{POKEBLOCK}越好。$"
# 429 "data/maps/LilycoveCity/scripts.pory"

# 430 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 431 "data/maps/LilycoveCity/scripts.pory"
	.string "它是用来做一种叫\n"
# 432 "data/maps/LilycoveCity/scripts.pory"
	.string "{POKEBLOCK}的糖果的。\p"
# 433 "data/maps/LilycoveCity/scripts.pory"
	.string "给宝可梦吃好的{POKEBLOCK}，\n"
# 434 "data/maps/LilycoveCity/scripts.pory"
	.string "它的状态会提升很多。$"
# 435 "data/maps/LilycoveCity/scripts.pory"

# 436 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 437 "data/maps/LilycoveCity/scripts.pory"
	.string "我听说海上的某条航路\n"
# 438 "data/maps/LilycoveCity/scripts.pory"
	.string "上有一座塔。\p"
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "听说叫天空之柱。$"
# 440 "data/maps/LilycoveCity/scripts.pory"

# 441 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 442 "data/maps/LilycoveCity/scripts.pory"
	.string "我在131号道路附近\n"
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "看到过一座高塔。\p"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "那难道就是……？$"
# 445 "data/maps/LilycoveCity/scripts.pory"

# 446 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 447 "data/maps/LilycoveCity/scripts.pory"
	.string "我们刚到这里度\n"
# 448 "data/maps/LilycoveCity/scripts.pory"
	.string "蜜月假期。\p"
# 449 "data/maps/LilycoveCity/scripts.pory"
	.string "碰巧看到一只龙属性\n"
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "宝可梦在高空飞。\p"
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "丰缘地区有那种\n"
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "帅气的宝可梦吗？$"
# 453 "data/maps/LilycoveCity/scripts.pory"

# 454 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 455 "data/maps/LilycoveCity/scripts.pory"
	.string "蜜月时我们发誓要\n"
# 456 "data/maps/LilycoveCity/scripts.pory"
	.string "看尽量多的稀有宝可梦。\p"
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "所以一到就看见一只\n"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "稀有宝可梦，太开心了。\p"
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "我的意思是，我们\n"
# 460 "data/maps/LilycoveCity/scripts.pory"
	.string "幸福得不得了！$"

LilycoveCity_EventScript_DawnTrigger1::
# 465 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8008, 1
# 466 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DawnScene
	end


LilycoveCity_EventScript_DawnTrigger2::
# 472 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_0x8008, 2
# 473 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DawnScene
	end


LilycoveCity_EventScript_DawnScene::
# 479 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 480 "data/maps/LilycoveCity/scripts.pory"
	call Route104_EventScript_PlayDawnMusic
# 481 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, Common_Movement_WalkInPlaceFasterDown
# 482 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 483 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, Common_Movement_ExclamationMark
# 484 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 485 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, Common_Movement_Delay48
# 486 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 487 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 488 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, LilycoveCity_EventScript_DawnApproachPlayer1
# 489 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, LilycoveCity_EventScript_DawnApproachPlayer2
# 490 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DawnRivalBattle
# 491 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


LilycoveCity_EventScript_DawnRivalBattle::
# 496 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Dawn_Greeting
# 497 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_LILYCOVE, LilycoveCity_Text_Dawn_Defeated
# 498 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DawnDefeated
	end


LilycoveCity_EventScript_DawnDefeated::
# 503 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_Dawn_MagmaAndAqua
# 504 "data/maps/LilycoveCity/scripts.pory"
	giveitem ITEM_EMPOLEONITE_D
# 505 "data/maps/LilycoveCity/scripts.pory"
	giveitem ITEM_AIR_BALLOON, 10
# 506 "data/maps/LilycoveCity/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 507 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DawnGoodbye
# 508 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DawnExit
	end


LilycoveCity_EventScript_DawnApproachPlayer1::
# 515 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, LilycoveCity_Movement_DawnApproachPlayer1
# 516 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Movement_DawnApproachPlayer1::
# 521 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 522 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 523 "data/maps/LilycoveCity/scripts.pory"
	step_end
	return


LilycoveCity_EventScript_DawnApproachPlayer2::
# 527 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, LilycoveCity_Movement_DawnApproachPlayer2
# 528 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Movement_DawnApproachPlayer2::
# 533 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 534 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 535 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 536 "data/maps/LilycoveCity/scripts.pory"
	step_end
	return


LilycoveCity_EventScript_DawnExit::
# 541 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 542 "data/maps/LilycoveCity/scripts.pory"
	delay 45
# 543 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, LilycoveCity_EventScript_ApplyMovementDawn1
# 544 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, LilycoveCity_EventScript_ApplyMovementDawn2
# 545 "data/maps/LilycoveCity/scripts.pory"
	removeobject 22
# 546 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAWN_LILYCOVE
# 547 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_FOUGHT_DAWN_LILYCOVE, 1
# 548 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 549 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 550 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 551 "data/maps/LilycoveCity/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 552 "data/maps/LilycoveCity/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 553 "data/maps/LilycoveCity/scripts.pory"
	waitfanfare
# 554 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 555 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 556 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 557 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 558 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


LilycoveCity_EventScript_ApplyMovementDawn1::
# 603 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, LilycoveCity_EventScript_DawnExit1
# 604 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
	return


LilycoveCity_EventScript_DawnExit1::
# 609 "data/maps/LilycoveCity/scripts.pory"
	walk_right
# 610 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 611 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 612 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 613 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 614 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 615 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 616 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 617 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 618 "data/maps/LilycoveCity/scripts.pory"
	step_end
	return


LilycoveCity_EventScript_ApplyMovementDawn2::
# 622 "data/maps/LilycoveCity/scripts.pory"
	applymovement 22, LilycoveCity_EventScript_DawnExit2
# 623 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
	return


LilycoveCity_EventScript_DawnExit2::
# 628 "data/maps/LilycoveCity/scripts.pory"
	walk_left
# 629 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 630 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 631 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 632 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 633 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 634 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 635 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 636 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 637 "data/maps/LilycoveCity/scripts.pory"
	step_end
	return


LilycoveCity_Text_Dawn_Greeting::
# 562 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}！真巧在这儿遇到你！\p"
	.string "{RIVAL}跟我说这里的\n"
	.string "百货商店很棒，所以\l"
	.string "我特意来看看。\p"
	.string "果然没让我失望！\p"
	.string "说不定比我家那边\n"
	.string "帷幕市的\l"
	.string "还棒。\p"
	.string "总之，也有一阵子没见了，\n"
	.string "来打一场怎么样？$"

LilycoveCity_Text_Dawn_Defeated::
# 575 "data/maps/LilycoveCity/scripts.pory"
	.string "还是一如既往地厉害，{PLAYER}。$"

LilycoveCity_Text_Dawn_MagmaAndAqua::
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "哎呀，我都快没什么\n"
	.string "能送你的了，希望这些够用。$"

LilycoveCity_Text_DawnGoodbye::
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "说正经的，我开始对\n"
	.string "水舰队和熔岩队的\l"
	.string "动向有点担心了。\p"
	.string "他们好像越来越活跃，\n"
	.string "我总有种不祥的预感……\p"
	.string "我还听说四天王的源治\n"
	.string "正在调查到底\l"
	.string "发生了什么。\p"
	.string "你一路阻止他们，\n"
	.string "做得很棒，不过我想\l"
	.string "联络神奥地区的一位朋友。\p"
	.string "看看能不能请些\n"
	.string "支援过来，以防万一。\p"
	.string "在此之前，注意安全，{PLAYER}，\n"
	.string "继续加油！$"
