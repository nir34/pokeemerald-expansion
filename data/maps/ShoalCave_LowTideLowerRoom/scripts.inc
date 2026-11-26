# 1 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideLowerRoom_OnLoad
# 4 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.byte 0
# 5 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 6 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_OnLoad:
# 7 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	call ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles
# 8 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 9 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 10 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles::
# 11 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatilesEnd
# 12 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
# 13 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	return
# 14 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 15 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatilesEnd::
# 16 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	return
# 17 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 18 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4::
# 19 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	lockall
# 20 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_EventScript_ReceivedShoalSalt
# 21 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 22 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 23 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 24 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	special DrawWholeMapView
# 25 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_4
# 26 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
# 27 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 28 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 29 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ReceivedShoalSalt::
# 30 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 31 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
# 32 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end

ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner::
# 37 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	lock
# 38 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	faceplayer
# 39 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_2
# 45 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_SummonerIntro, MSGBOX_YESNO
ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_1:
# 48 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 50 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_6
ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_5:
# 55 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom
# 56 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_2:
# 41 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_SummonerIntroQuick, MSGBOX_YESNO
	goto ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_1

ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_6:
# 52 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo
	goto ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_5


ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom::
# 61 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichRoom, MSGBOX_DEFAULT
# 63 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_0, 0
# 64 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_1, 1
# 65 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_2, 2
# 66 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_3, MULTI_B_PRESSED
# 70 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 72 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_2
ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_1:
# 77 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_5
ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_4:
# 81 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_8
ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_7:
# 85 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_11
ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_10:
# 90 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_2:
# 74 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_1

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_5:
# 79 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_4

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_8:
# 83 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_InnerRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_7

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_11:
# 87 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_StairsRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_10


ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom::
# 95 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichPokemon, MSGBOX_DEFAULT
# 97 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_0, SPECIES_GREAT_TUSK
# 98 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_1, SPECIES_SCREAM_TAIL
# 99 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_2, SPECIES_BRUTE_BONNET
# 100 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_3, SPECIES_FLUTTER_MANE
# 101 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_4, SPECIES_SLITHER_WING
# 102 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_5, SPECIES_SANDY_SHOCKS
# 103 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_6, SPECIES_ROARING_MOON
# 104 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_7, SPECIES_WALKING_WAKE
# 105 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_8, SPECIES_GOUGING_FIRE
# 106 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_9, SPECIES_RAGING_BOLT
# 107 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_10, MULTI_B_PRESSED
# 111 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_GREAT_TUSK, DYN_MULTICHOICE_CB_NONE
# 113 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_2
ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_1:
# 118 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon
# 120 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_2:
# 115 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_1


ShoalCave_LowTideLowerRoom_EventScript_InnerRoom::
# 126 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichPokemon, MSGBOX_DEFAULT
# 128 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_0, SPECIES_IRON_TREADS
# 129 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_1, SPECIES_IRON_BUNDLE
# 130 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_2, SPECIES_IRON_HANDS
# 131 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_3, SPECIES_IRON_JUGULIS
# 132 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_4, SPECIES_IRON_MOTH
# 133 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_5, SPECIES_IRON_THORNS
# 134 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_6, SPECIES_IRON_VALIANT
# 135 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_7, SPECIES_IRON_LEAVES
# 136 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_8, SPECIES_IRON_BOULDER
# 137 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_9, SPECIES_IRON_CROWN
# 138 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_10, MULTI_B_PRESSED
# 142 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_IRON_TREADS, DYN_MULTICHOICE_CB_NONE
# 144 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_2
ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_1:
# 149 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon
# 151 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_2:
# 146 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_1


ShoalCave_LowTideLowerRoom_EventScript_StairsRoom::
# 157 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichPokemon, MSGBOX_DEFAULT
# 159 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_0, SPECIES_NIHILEGO
# 160 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_1, SPECIES_GUZZLORD
# 161 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_2, SPECIES_XURKITREE
# 162 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_3, SPECIES_BUZZWOLE
# 163 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_4, SPECIES_BLACEPHALON
# 164 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_5, SPECIES_STAKATAKA
# 165 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_6, SPECIES_POIPOLE
# 166 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_7, SPECIES_PHEROMOSA
# 167 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_8, SPECIES_CELESTEELA
# 168 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_9, SPECIES_KARTANA
# 169 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_10, MULTI_B_PRESSED
# 173 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_NIHILEGO, DYN_MULTICHOICE_CB_NONE
# 175 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_2
ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_1:
# 180 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon
# 182 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_2:
# 177 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_1


ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon::
# 189 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 190 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8005
# 191 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_ConfirmSummon, MSGBOX_YESNO
# 193 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_2
ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_1:
# 198 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_VeryWell, MSGBOX_DEFAULT
# 199 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	delay 30
# 201 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setwildbattle VAR_0x8005, 50
# 202 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	waitse
# 203 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_ENCOUNTER
# 204 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	delay 40
# 205 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	waitmoncry
# 206 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dowildbattle
# 207 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_2:
# 195 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_1


ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo::
# 213 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_SummonWomanDeclined, MSGBOX_DEFAULT
# 214 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end


ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_0:
# 63 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "入口房间$"

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_1:
# 64 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "内部房间$"

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_2:
# 65 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "楼梯房间$"

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_3:
# 66 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "取消$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_0:
# 97 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "雄伟牙$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_1:
# 98 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "吼叫尾$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_2:
# 99 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "猛恶菇$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_3:
# 100 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "振翼发$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_4:
# 101 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "爬地翅$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_5:
# 102 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "沙铁皮$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_6:
# 103 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "轰鸣月$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_7:
# 104 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "波荡水$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_8:
# 105 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "破空焰$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_9:
# 106 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "猛雷鼓$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_10:
# 107 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "返回$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_0:
# 128 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "铁辙迹$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_1:
# 129 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "铁包袱$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_2:
# 130 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "铁臂膀$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_3:
# 131 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "铁脖颈$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_4:
# 132 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "铁毒蛾$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_5:
# 133 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "铁荆棘$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_6:
# 134 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "铁武者$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_7:
# 135 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "铁叶$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_8:
# 136 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "铁磐岩$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_9:
# 137 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "铁头壳$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_0:
# 159 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "虚吾伊德$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_1:
# 160 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "恶食大王$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_2:
# 161 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "电束木$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_3:
# 162 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "爆肌蚊$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_4:
# 163 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "砰头小丑$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_5:
# 164 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "垒磊石$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_6:
# 165 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "毒贝比$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_7:
# 166 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "费洛美螂$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_8:
# 167 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "铁火辉夜$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_9:
# 168 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "纸御剑$"

ShoalCave_LowTideLowerRoom_Text_SummonerIntro::
# 219 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "你好，年轻的训练家。\p"
	.string "我来到这个偏僻的地方，\n"
	.string "是因为学会了一门强力的\l"
	.string "技艺，能从这洞穴里几乎\l"
	.string "任何地方召唤出一只\l"
	.string "宝可梦。\p"
	.string "要我把一只宝可梦召唤\n"
	.string "到这儿来和你对战吗？$"

ShoalCave_LowTideLowerRoom_Text_SummonerIntroQuick::
# 230 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "要我把一只宝可梦召唤\n"
	.string "到这儿来和你对战吗？$"

ShoalCave_LowTideLowerRoom_Text_WhichRoom::
# 235 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "你想让我从哪个房间\n"
	.string "召唤宝可梦？$"

ShoalCave_LowTideLowerRoom_Text_WhichPokemon::
# 240 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "你想让我召唤哪只\n"
	.string "宝可梦和你对战？$"

ShoalCave_LowTideLowerRoom_Text_ConfirmSummon::
# 245 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "那么，你想让我召唤一只\n"
	.string "{STR_VAR_1}来和你对战吗？$"

ShoalCave_LowTideLowerRoom_Text_VeryWell::
# 250 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "很好，做好对战的准备吧。$"

ShoalCave_LowTideLowerRoom_SummonWomanDeclined::
# 254 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "我明白了。若你改变主意，\n"
	.string "就告诉我。$"
