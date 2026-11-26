NewBirchsLab_MapScripts::
# 2 "data/maps/NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchsLab_EventScript_BallDefault
# 3 "data/maps/NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, NewBirchsLab_OnWarp
# 4 "data/maps/NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
	.byte 0


NewBirchsLab_EventScript_BallDefault::
# 8 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_GEN, 0
# 9 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 1
# 10 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_MONOTYPE_STARTER, 0
	return


NewBirchsLab_EventScript_Birch::
# 14 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 15 "data/maps/NewBirchsLab/scripts.pory"
	faceplayer
# 16 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_Birch_2
NewBirchsLab_EventScript_Birch_1:
# 24 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_USE_MONOTYPE_STARTERS, NewBirchsLab_EventScript_BirchMonotypeStarters
# 26 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_Birch_7
NewBirchsLab_EventScript_Birch_6:
# 50 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, NewBirchsLab_EventScript_Birch_15
# 56 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 57 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_GoodbyePlayerFemale
# 58 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_GoodbyePlayerMale
NewBirchsLab_EventScript_Birch_4:
# 62 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 63 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_Birch_2:
# 18 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 19 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_WelcomePlayerFemale
# 20 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_WelcomePlayerMale
# 21 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_TOUCHED_BALLS
	goto NewBirchsLab_EventScript_Birch_1

NewBirchsLab_EventScript_Birch_5:
# 27 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_ChangeStarters
# 28 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_0, 0
# 29 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_1, 1
# 30 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_2, 2
# 31 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_3, 3
# 32 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_4, 4
# 33 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_5, 5
# 34 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_6, 6
# 35 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_7, 7
# 36 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_8, 8
# 37 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_9, MULTI_B_PRESSED
# 40 "data/maps/NewBirchsLab/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 42 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq NewBirchsLab_EventScript_Birch_13
NewBirchsLab_EventScript_Birch_12:
# 46 "data/maps/NewBirchsLab/scripts.pory"
	copyvar VAR_STARTER_GEN, VAR_RESULT
# 47 "data/maps/NewBirchsLab/scripts.pory"
	goto NewBirchsLab_EventScript_SayGenShowing
	goto NewBirchsLab_EventScript_Birch_4

NewBirchsLab_EventScript_Birch_7:
# 26 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_Birch_9
	goto NewBirchsLab_EventScript_Birch_6

NewBirchsLab_EventScript_Birch_9:
# 26 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_Birch_5
	goto NewBirchsLab_EventScript_Birch_6

NewBirchsLab_EventScript_Birch_13:
# 44 "data/maps/NewBirchsLab/scripts.pory"
	goto NewBirchsLab_EventScript_SayGenShowing
	goto NewBirchsLab_EventScript_Birch_12

NewBirchsLab_EventScript_Birch_15:
# 52 "data/maps/NewBirchsLab/scripts.pory"
	goto ProfBirch_EventScript_AskRatePokedex
	goto NewBirchsLab_EventScript_Birch_4


NewBirchsLab_EventScript_BirchMonotypeStarters::
# 68 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_BirchMonotypeStarters_4
NewBirchsLab_EventScript_BirchMonotypeStarters_3:
# 99 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, NewBirchsLab_EventScript_BirchMonotypeStarters_12
# 105 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 106 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_GoodbyePlayerFemale
# 107 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_GoodbyePlayerMale
NewBirchsLab_EventScript_BirchMonotypeStarters_1:
# 111 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 112 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_BirchMonotypeStarters_2:
# 69 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_ChangeStartersMonotypes
# 71 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_0, 0
# 72 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_1, 1
# 73 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_2, 2
# 74 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_3, 3
# 75 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_4, 4
# 76 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_5, 5
# 77 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_6, 6
# 78 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_7, 7
# 79 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_8, 8
# 80 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_9, 9
# 81 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_10, 10
# 82 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_11, 11
# 83 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_12, 12
# 84 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_13, 13
# 85 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_BirchMonotypeStarters_Text_14, 14
# 86 "data/maps/NewBirchsLab/scripts.pory"
	dynmultipush NewBirchsLab_EventScript_Birch_Text_9, MULTI_B_PRESSED
# 89 "data/maps/NewBirchsLab/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 91 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq NewBirchsLab_EventScript_BirchMonotypeStarters_10
NewBirchsLab_EventScript_BirchMonotypeStarters_9:
# 95 "data/maps/NewBirchsLab/scripts.pory"
	copyvar VAR_MONOTYPE_STARTER, VAR_RESULT
# 96 "data/maps/NewBirchsLab/scripts.pory"
	goto NewBirchsLab_EventScript_SayMonoShowing
	goto NewBirchsLab_EventScript_BirchMonotypeStarters_1

NewBirchsLab_EventScript_BirchMonotypeStarters_4:
# 68 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_BirchMonotypeStarters_6
	goto NewBirchsLab_EventScript_BirchMonotypeStarters_3

NewBirchsLab_EventScript_BirchMonotypeStarters_6:
# 68 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_BirchMonotypeStarters_2
	goto NewBirchsLab_EventScript_BirchMonotypeStarters_3

NewBirchsLab_EventScript_BirchMonotypeStarters_10:
# 93 "data/maps/NewBirchsLab/scripts.pory"
	goto NewBirchsLab_EventScript_SayMonoShowing
	goto NewBirchsLab_EventScript_BirchMonotypeStarters_9

NewBirchsLab_EventScript_BirchMonotypeStarters_12:
# 101 "data/maps/NewBirchsLab/scripts.pory"
	goto ProfBirch_EventScript_AskRatePokedex
	goto NewBirchsLab_EventScript_BirchMonotypeStarters_1


NewBirchsLab_EventScript_SayGenShowing::
# 117 "data/maps/NewBirchsLab/scripts.pory"
	switch VAR_STARTER_GEN
# 119 "data/maps/NewBirchsLab/scripts.pory"
	case 0, NewBirchsLab_EventScript_SayGenShowing_3
# 121 "data/maps/NewBirchsLab/scripts.pory"
	case 1, NewBirchsLab_EventScript_SayGenShowing_4
# 123 "data/maps/NewBirchsLab/scripts.pory"
	case 2, NewBirchsLab_EventScript_SayGenShowing_5
# 125 "data/maps/NewBirchsLab/scripts.pory"
	case 3, NewBirchsLab_EventScript_SayGenShowing_6
# 127 "data/maps/NewBirchsLab/scripts.pory"
	case 4, NewBirchsLab_EventScript_SayGenShowing_7
# 129 "data/maps/NewBirchsLab/scripts.pory"
	case 5, NewBirchsLab_EventScript_SayGenShowing_8
# 131 "data/maps/NewBirchsLab/scripts.pory"
	case 6, NewBirchsLab_EventScript_SayGenShowing_9
# 133 "data/maps/NewBirchsLab/scripts.pory"
	case 7, NewBirchsLab_EventScript_SayGenShowing_10
# 135 "data/maps/NewBirchsLab/scripts.pory"
	case 8, NewBirchsLab_EventScript_SayGenShowing_11
# 138 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_9
NewBirchsLab_EventScript_SayGenShowing_1:
# 140 "data/maps/NewBirchsLab/scripts.pory"
	release
	end

NewBirchsLab_EventScript_SayGenShowing_3:
# 120 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_0
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_4:
# 122 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_1
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_5:
# 124 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_2
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_6:
# 126 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_3
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_7:
# 128 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_4
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_8:
# 130 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_5
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_9:
# 132 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_6
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_10:
# 134 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_7
	goto NewBirchsLab_EventScript_SayGenShowing_1

NewBirchsLab_EventScript_SayGenShowing_11:
# 136 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayGenShowing_Text_8
	goto NewBirchsLab_EventScript_SayGenShowing_1


NewBirchsLab_EventScript_SayMonoShowing::
# 145 "data/maps/NewBirchsLab/scripts.pory"
	switch VAR_MONOTYPE_STARTER
# 147 "data/maps/NewBirchsLab/scripts.pory"
	case 0, NewBirchsLab_EventScript_SayMonoShowing_3
# 149 "data/maps/NewBirchsLab/scripts.pory"
	case 1, NewBirchsLab_EventScript_SayMonoShowing_4
# 151 "data/maps/NewBirchsLab/scripts.pory"
	case 2, NewBirchsLab_EventScript_SayMonoShowing_5
# 153 "data/maps/NewBirchsLab/scripts.pory"
	case 3, NewBirchsLab_EventScript_SayMonoShowing_6
# 155 "data/maps/NewBirchsLab/scripts.pory"
	case 4, NewBirchsLab_EventScript_SayMonoShowing_7
# 157 "data/maps/NewBirchsLab/scripts.pory"
	case 5, NewBirchsLab_EventScript_SayMonoShowing_8
# 159 "data/maps/NewBirchsLab/scripts.pory"
	case 6, NewBirchsLab_EventScript_SayMonoShowing_9
# 161 "data/maps/NewBirchsLab/scripts.pory"
	case 7, NewBirchsLab_EventScript_SayMonoShowing_10
# 163 "data/maps/NewBirchsLab/scripts.pory"
	case 8, NewBirchsLab_EventScript_SayMonoShowing_11
# 165 "data/maps/NewBirchsLab/scripts.pory"
	case 9, NewBirchsLab_EventScript_SayMonoShowing_12
# 167 "data/maps/NewBirchsLab/scripts.pory"
	case 10, NewBirchsLab_EventScript_SayMonoShowing_13
# 169 "data/maps/NewBirchsLab/scripts.pory"
	case 11, NewBirchsLab_EventScript_SayMonoShowing_14
# 171 "data/maps/NewBirchsLab/scripts.pory"
	case 12, NewBirchsLab_EventScript_SayMonoShowing_15
# 173 "data/maps/NewBirchsLab/scripts.pory"
	case 13, NewBirchsLab_EventScript_SayMonoShowing_16
# 175 "data/maps/NewBirchsLab/scripts.pory"
	case 14, NewBirchsLab_EventScript_SayMonoShowing_17
# 178 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_13
NewBirchsLab_EventScript_SayMonoShowing_1:
# 180 "data/maps/NewBirchsLab/scripts.pory"
	release
	end

NewBirchsLab_EventScript_SayMonoShowing_3:
# 148 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_0
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_4:
# 150 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_1
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_5:
# 152 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_2
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_6:
# 154 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_3
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_7:
# 156 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_4
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_8:
# 158 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_5
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_9:
# 160 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_6
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_10:
# 162 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_7
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_11:
# 164 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_8
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_12:
# 166 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_9
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_13:
# 168 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_10
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_14:
# 170 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_11
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_15:
# 172 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_12
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_16:
# 174 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_13
	goto NewBirchsLab_EventScript_SayMonoShowing_1

NewBirchsLab_EventScript_SayMonoShowing_17:
# 176 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_SayMonoShowing_Text_14
	goto NewBirchsLab_EventScript_SayMonoShowing_1


NewBirchsLab_EventScript_PokeballOne::
# 185 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 186 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballOne_2
# 189 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballOne_3
# 193 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballOne_6
NewBirchsLab_EventScript_PokeballOne_5:
# 203 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballOne_1:
# 205 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 206 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballOne_2:
# 187 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_3:
# 191 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_4:
# 194 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_HandleGrassStarterChoice
# 195 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballOne_13
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_6:
# 193 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballOne_8
	goto NewBirchsLab_EventScript_PokeballOne_5

NewBirchsLab_EventScript_PokeballOne_8:
# 193 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballOne_4
	goto NewBirchsLab_EventScript_PokeballOne_5

NewBirchsLab_EventScript_PokeballOne_13:
# 197 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 198 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerFemale
# 199 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballOne_1


NewBirchsLab_EventScript_HandleGrassStarterChoice::
# 211 "data/maps/NewBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 0
# 212 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 213 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_0, MSGBOX_YESNO
# 214 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_HandleGrassStarterChoice_1
# 254 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 255 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_HandleGrassStarterChoice_1:
# 215 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_GiveStarter
# 217 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_HandleGrassStarterChoice_5
# 225 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_HandleGrassStarterChoice_6
# 234 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 235 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_2
NewBirchsLab_EventScript_HandleGrassStarterChoice_4:
# 238 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 239 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 241 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 242 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 243 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 244 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 245 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 246 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 247 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 248 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 249 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 250 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 251 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_HandleGrassStarterChoice_5:
# 218 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 219 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_1
# 220 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 221 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 222 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 223 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_HandleGrassStarterChoice_4

NewBirchsLab_EventScript_HandleGrassStarterChoice_6:
# 226 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 227 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_1
# 228 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 229 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
# 230 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_GRASSSTARTER
# 231 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_HandleGrassStarterChoice_4


NewBirchsLab_EventScript_PokeballTwo::
# 261 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 262 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballTwo_2
# 265 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballTwo_3
# 269 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballTwo_6
NewBirchsLab_EventScript_PokeballTwo_5:
# 279 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballTwo_1:
# 281 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 282 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballTwo_2:
# 263 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_3:
# 267 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_4:
# 270 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_HandleFireStarterChoice
# 271 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballTwo_13
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_6:
# 269 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballTwo_8
	goto NewBirchsLab_EventScript_PokeballTwo_5

NewBirchsLab_EventScript_PokeballTwo_8:
# 269 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballTwo_4
	goto NewBirchsLab_EventScript_PokeballTwo_5

NewBirchsLab_EventScript_PokeballTwo_13:
# 273 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 274 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerFemale
# 275 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballTwo_1


NewBirchsLab_EventScript_HandleFireStarterChoice::
# 287 "data/maps/NewBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 1
# 288 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 289 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_0, MSGBOX_YESNO
# 290 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_HandleFireStarterChoice_1
# 330 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 331 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_HandleFireStarterChoice_1:
# 291 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_GiveStarter
# 293 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_HandleFireStarterChoice_5
# 301 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_HandleFireStarterChoice_6
# 310 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 311 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_2
NewBirchsLab_EventScript_HandleFireStarterChoice_4:
# 314 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 315 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 317 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 318 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 319 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 320 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 321 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 322 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 323 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 324 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 325 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 326 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 327 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_HandleFireStarterChoice_5:
# 294 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 295 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_1
# 296 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 297 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 298 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 299 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_HandleFireStarterChoice_4

NewBirchsLab_EventScript_HandleFireStarterChoice_6:
# 302 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 303 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_1
# 304 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 305 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
# 306 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_FIRESTARTER
# 307 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_HandleFireStarterChoice_4


NewBirchsLab_EventScript_PokeballThree::
# 337 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 338 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH, NewBirchsLab_EventScript_PokeballThree_2
# 341 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOUCHED_BALLS, NewBirchsLab_EventScript_PokeballThree_3
# 345 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_WATERSTARTER, NewBirchsLab_EventScript_PokeballThree_6
NewBirchsLab_EventScript_PokeballThree_5:
# 356 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_1
NewBirchsLab_EventScript_PokeballThree_1:
# 358 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 359 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_PokeballThree_2:
# 339 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotYet
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_3:
# 343 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_4:
# 346 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_EventScript_HandleWaterStarterChoice
# 347 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBirchsLab_EventScript_PokeballThree_13
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_6:
# 345 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_GRASSSTARTER, NewBirchsLab_EventScript_PokeballThree_8
	goto NewBirchsLab_EventScript_PokeballThree_5

NewBirchsLab_EventScript_PokeballThree_8:
# 345 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSE_FIRESTARTER, NewBirchsLab_EventScript_PokeballThree_4
	goto NewBirchsLab_EventScript_PokeballThree_5

NewBirchsLab_EventScript_PokeballThree_13:
# 350 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 351 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerFemale
# 352 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerMale
	goto NewBirchsLab_EventScript_PokeballThree_1


NewBirchsLab_EventScript_HandleWaterStarterChoice::
# 364 "data/maps/NewBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 2
# 365 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 366 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_0, MSGBOX_YESNO
# 367 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_HandleWaterStarterChoice_1
# 407 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 408 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_HandleWaterStarterChoice_1:
# 368 "data/maps/NewBirchsLab/scripts.pory"
	call NewBirchsLab_GiveStarter
# 370 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_HandleWaterStarterChoice_5
# 378 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_HandleWaterStarterChoice_6
# 387 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 388 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_2
NewBirchsLab_EventScript_HandleWaterStarterChoice_4:
# 391 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 392 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 394 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 395 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 396 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 397 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 398 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 399 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 400 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 401 "data/maps/NewBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 402 "data/maps/NewBirchsLab/scripts.pory"
	checkplayergender
# 403 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 404 "data/maps/NewBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

NewBirchsLab_EventScript_HandleWaterStarterChoice_5:
# 371 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 372 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_1
# 373 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 374 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 375 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 376 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto NewBirchsLab_EventScript_HandleWaterStarterChoice_4

NewBirchsLab_EventScript_HandleWaterStarterChoice_6:
# 379 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 380 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_1
# 381 "data/maps/NewBirchsLab/scripts.pory"
	waitfanfare
# 382 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
# 383 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSE_WATERSTARTER
# 384 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto NewBirchsLab_EventScript_HandleWaterStarterChoice_4


NewBirchsLab_GiveStarter::
# 414 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_USE_MONOTYPE_STARTERS, NewBirchsLab_GiveStarter_2
# 427 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_GiveStarter_8
# 433 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom VAR_0x8006, 5
NewBirchsLab_GiveStarter_1:
	return

NewBirchsLab_GiveStarter_2:
# 416 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, NewBirchsLab_GiveStarter_5
# 422 "data/maps/NewBirchsLab/scripts.pory"
	givemon VAR_0x8006, 5
	goto NewBirchsLab_GiveStarter_1

NewBirchsLab_GiveStarter_5:
# 418 "data/maps/NewBirchsLab/scripts.pory"
	givemon VAR_0x8006, 5, isShiny = TRUE
	goto NewBirchsLab_GiveStarter_1

NewBirchsLab_GiveStarter_8:
# 429 "data/maps/NewBirchsLab/scripts.pory"
	givemonrandom VAR_0x8006, 5, isShiny = TRUE
	goto NewBirchsLab_GiveStarter_1


NewBirchsLab_EventScript_WelcomePlayerMale::
# 441 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_USE_MONOTYPE_STARTERS, NewBirchsLab_EventScript_WelcomePlayerMale_2
# 448 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_WelcomePlayerMale
NewBirchsLab_EventScript_WelcomePlayerMale_1:
	return

NewBirchsLab_EventScript_WelcomePlayerMale_2:
# 443 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_WelcomePlayerMaleMonotype
	goto NewBirchsLab_EventScript_WelcomePlayerMale_1


NewBirchsLab_EventScript_WelcomePlayerFemale::
# 454 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_USE_MONOTYPE_STARTERS, NewBirchsLab_EventScript_WelcomePlayerFemale_2
# 461 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_WelcomePlayerFemale
NewBirchsLab_EventScript_WelcomePlayerFemale_1:
	return

NewBirchsLab_EventScript_WelcomePlayerFemale_2:
# 456 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_WelcomePlayerFemaleMonotype
	goto NewBirchsLab_EventScript_WelcomePlayerFemale_1


NewBirchsLab_EventScript_GoodbyePlayerMale::
# 467 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
	return


NewBirchsLab_EventScript_GoodbyePlayerFemale::
# 472 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
	return


NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerMale::
# 477 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTreeckoPlayerMale
# 478 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
# 479 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NewBirchsLab_EventScript_RivalTreeckoGoodbyePlayerFemale::
# 484 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTreeckoPlayerFemale
# 485 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
# 486 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerMale::
# 491 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterMudkipPlayerMale
# 492 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
# 493 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NewBirchsLab_EventScript_RivalMudkipGoodbyePlayerFemale::
# 498 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterMudkipPlayerFemale
# 499 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
# 500 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerMale::
# 505 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTorchicPlayerMale
# 506 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerMale
# 507 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NewBirchsLab_EventScript_RivalTorchicGoodbyePlayerFemale::
# 512 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_RivalStarterTorchicPlayerFemale
# 513 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_Route103PlayerFemale
# 514 "data/maps/NewBirchsLab/scripts.pory"
	callnative UpdateFollowingPokemon
	return


NicknamePartyMon::
# 524 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 525 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 526 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 527 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 528 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 535 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 536 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 537 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 540 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 538 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchsLab_EventScript_Birch_Text_0:
# 28 "data/maps/NewBirchsLab/scripts.pory"
	.string "第1世代$"

NewBirchsLab_EventScript_Birch_Text_1:
# 29 "data/maps/NewBirchsLab/scripts.pory"
	.string "第2世代$"

NewBirchsLab_EventScript_Birch_Text_2:
# 30 "data/maps/NewBirchsLab/scripts.pory"
	.string "第3世代$"

NewBirchsLab_EventScript_Birch_Text_3:
# 31 "data/maps/NewBirchsLab/scripts.pory"
	.string "第4世代$"

NewBirchsLab_EventScript_Birch_Text_4:
# 32 "data/maps/NewBirchsLab/scripts.pory"
	.string "第5世代$"

NewBirchsLab_EventScript_Birch_Text_5:
# 33 "data/maps/NewBirchsLab/scripts.pory"
	.string "第6世代$"

NewBirchsLab_EventScript_Birch_Text_6:
# 34 "data/maps/NewBirchsLab/scripts.pory"
	.string "第7世代$"

NewBirchsLab_EventScript_Birch_Text_7:
# 35 "data/maps/NewBirchsLab/scripts.pory"
	.string "第8世代$"

NewBirchsLab_EventScript_Birch_Text_8:
# 36 "data/maps/NewBirchsLab/scripts.pory"
	.string "第9世代$"

NewBirchsLab_EventScript_Birch_Text_9:
# 37 "data/maps/NewBirchsLab/scripts.pory"
	.string "取消$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_0:
# 71 "data/maps/NewBirchsLab/scripts.pory"
	.string "格斗$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_1:
# 72 "data/maps/NewBirchsLab/scripts.pory"
	.string "飞行$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_2:
# 73 "data/maps/NewBirchsLab/scripts.pory"
	.string "毒$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_3:
# 74 "data/maps/NewBirchsLab/scripts.pory"
	.string "地面$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_4:
# 75 "data/maps/NewBirchsLab/scripts.pory"
	.string "岩石$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_5:
# 76 "data/maps/NewBirchsLab/scripts.pory"
	.string "虫$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_6:
# 77 "data/maps/NewBirchsLab/scripts.pory"
	.string "幽灵$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_7:
# 78 "data/maps/NewBirchsLab/scripts.pory"
	.string "钢$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_8:
# 79 "data/maps/NewBirchsLab/scripts.pory"
	.string "电$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_9:
# 80 "data/maps/NewBirchsLab/scripts.pory"
	.string "超能力$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_10:
# 81 "data/maps/NewBirchsLab/scripts.pory"
	.string "冰$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_11:
# 82 "data/maps/NewBirchsLab/scripts.pory"
	.string "龙$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_12:
# 83 "data/maps/NewBirchsLab/scripts.pory"
	.string "恶$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_13:
# 84 "data/maps/NewBirchsLab/scripts.pory"
	.string "普通$"

NewBirchsLab_EventScript_BirchMonotypeStarters_Text_14:
# 85 "data/maps/NewBirchsLab/scripts.pory"
	.string "妖精$"

NewBirchsLab_EventScript_SayGenShowing_Text_0:
# 120 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示第1世代的初始宝可梦。$"

NewBirchsLab_EventScript_SayGenShowing_Text_1:
# 122 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示第2世代的初始宝可梦。$"

NewBirchsLab_EventScript_SayGenShowing_Text_2:
# 124 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示第3世代的初始宝可梦。$"

NewBirchsLab_EventScript_SayGenShowing_Text_3:
# 126 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示第4世代的初始宝可梦。$"

NewBirchsLab_EventScript_SayGenShowing_Text_4:
# 128 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示第5世代的初始宝可梦。$"

NewBirchsLab_EventScript_SayGenShowing_Text_5:
# 130 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示第6世代的初始宝可梦。$"

NewBirchsLab_EventScript_SayGenShowing_Text_6:
# 132 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示第7世代的初始宝可梦。$"

NewBirchsLab_EventScript_SayGenShowing_Text_7:
# 134 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示第8世代的初始宝可梦。$"

NewBirchsLab_EventScript_SayGenShowing_Text_8:
# 136 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示第9世代的初始宝可梦。$"

NewBirchsLab_EventScript_SayGenShowing_Text_9:
# 138 "data/maps/NewBirchsLab/scripts.pory"
	.string "现在显示初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_0:
# 148 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示格斗属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_1:
# 150 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示飞行属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_2:
# 152 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示毒属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_3:
# 154 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示地面属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_4:
# 156 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示岩石属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_5:
# 158 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示虫属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_6:
# 160 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示幽灵属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_7:
# 162 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示钢属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_8:
# 164 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示电属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_9:
# 166 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示超能力属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_10:
# 168 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示冰属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_11:
# 170 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示龙属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_12:
# 172 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示恶属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_13:
# 174 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示普通属性初始宝可梦。$"

NewBirchsLab_EventScript_SayMonoShowing_Text_14:
# 176 "data/maps/NewBirchsLab/scripts.pory"
	.string "正在显示妖精属性初始宝可梦。$"

NewBirchsLab_EventScript_PokeballOne_Text_0:
# 191 "data/maps/NewBirchsLab/scripts.pory"
	.string "去问问小田卷博士吧！$"

NewBirchsLab_EventScript_PokeballOne_Text_1:
# 203 "data/maps/NewBirchsLab/scripts.pory"
	.string "还是别太贪心！$"

NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_0:
# 213 "data/maps/NewBirchsLab/scripts.pory"
	.string "要选{STR_VAR_1}吗？$"

NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_1:
# 219 "data/maps/NewBirchsLab/scripts.pory"
	.string "{PLAYER}得到了{STR_VAR_1}！$"

NewBirchsLab_EventScript_HandleGrassStarterChoice_Text_2:
# 235 "data/maps/NewBirchsLab/scripts.pory"
	.string "没有位置了$"

NicknamePartyMon_Text_0:
# 524 "data/maps/NewBirchsLab/scripts.pory"
	.string "要起个昵称吗？$"

NicknameBoxMon_Text_0:
# 540 "data/maps/NewBirchsLab/scripts.pory"
	.string "已传送到电脑。$"

NewBirchsLab_NotChosen::
# 543 "data/maps/NewBirchsLab/scripts.pory"
	.string "你没有选择这只宝可梦。$"

NewBirchsLab_NotYet::
# 547 "data/maps/NewBirchsLab/scripts.pory"
	.string "还是先别碰这些！\p"
	.string "也许你该去和{RIVAL}谈谈。$"

NewBirchsLab_WelcomePlayerMale::
# 552 "data/maps/NewBirchsLab/scripts.pory"
	.string "你好！我是小田卷博士，你\n"
	.string "就是{PLAYER}吧。你刚错过\l"
	.string "{RIVAL}，她刚才来过，拿了\l"
	.string "一只初始宝可梦就\l"
	.string "冲出去了。\p"
	.string "我让她留意一位\n"
	.string "叫{PLAYER}的训练家，他刚\l"
	.string "搬到隔壁！\p"
	.string "希望你们俩能成为朋友，\n"
	.string "一起踏上新的宝可梦\l"
	.string "旅程。\p"
	.string "这样吧，我给你一只\n"
	.string "初始宝可梦，然后你若能用\l"
	.string "你的宝可梦打赢{RIVAL}，\l"
	.string "回来我就送你宝可梦图鉴！\p"
	.string "你选完我再告诉你她选了\n"
	.string "哪只，在你选之前就说\l"
	.string "可就不公平了！\p"
	.string "我可以让你从任意\n"
	.string "世代的初始宝可梦里选，\l"
	.string "想换的话就找我。$"

NewBirchsLab_WelcomePlayerFemale::
# 576 "data/maps/NewBirchsLab/scripts.pory"
	.string "你好！我是小田卷博士，你\n"
	.string "就是{PLAYER}吧。你刚错过\l"
	.string "{RIVAL}，他刚才来过，拿了\l"
	.string "一只初始宝可梦就\l"
	.string "冲出去了。\p"
	.string "我让他留意一位\n"
	.string "叫{PLAYER}的训练家，他刚\l"
	.string "搬到隔壁！\p"
	.string "希望你们俩能成为朋友，\n"
	.string "一起踏上新的宝可梦\l"
	.string "旅程。\p"
	.string "这样吧，我给你一只\n"
	.string "初始宝可梦，然后你若能用\l"
	.string "你的宝可梦打赢{RIVAL}，\l"
	.string "回来我就送你宝可梦图鉴！\p"
	.string "你选完我再告诉你他选了\n"
	.string "哪只，在你选之前就说\l"
	.string "可就不公平了！\p"
	.string "我可以让你从任意\n"
	.string "世代的初始宝可梦里选，\l"
	.string "想换的话就找我。$"

NewBirchsLab_WelcomePlayerMaleMonotype::
# 600 "data/maps/NewBirchsLab/scripts.pory"
	.string "你好！我是小田卷博士，你\n"
	.string "就是{PLAYER}吧。你刚错过\l"
	.string "{RIVAL}，她刚才来过，拿了\l"
	.string "一只初始宝可梦就\l"
	.string "冲出去了。\p"
	.string "我让她留意一位\n"
	.string "叫{PLAYER}的训练家，他刚\l"
	.string "搬到隔壁！\p"
	.string "希望你们俩能成为朋友，\n"
	.string "一起踏上新的宝可梦\l"
	.string "旅程。\p"
	.string "这样吧，我给你一只\n"
	.string "初始宝可梦，然后你若能用\l"
	.string "你的宝可梦打赢{RIVAL}，\l"
	.string "回来我就送你宝可梦图鉴！\p"
	.string "你选完我再告诉你她选了\n"
	.string "哪只，在你选之前就说\l"
	.string "可就不公平了！\p"
	.string "我可以让你从任意\n"
	.string "属性的初始宝可梦里选，\l"
	.string "想换的话就找我。$"

NewBirchsLab_WelcomePlayerFemaleMonotype::
# 624 "data/maps/NewBirchsLab/scripts.pory"
	.string "你好！我是小田卷博士，你\n"
	.string "就是{PLAYER}吧。你刚错过\l"
	.string "{RIVAL}，他刚才来过，拿了\l"
	.string "一只初始宝可梦就\l"
	.string "冲出去了。\p"
	.string "我让他留意一位\n"
	.string "叫{PLAYER}的训练家，他刚\l"
	.string "搬到隔壁！\p"
	.string "希望你们俩能成为朋友，\n"
	.string "一起踏上新的宝可梦\l"
	.string "旅程。\p"
	.string "这样吧，我给你一只\n"
	.string "初始宝可梦，然后你若能用\l"
	.string "你的宝可梦打赢{RIVAL}，\l"
	.string "回来我就送你宝可梦图鉴！\p"
	.string "你选完我再告诉你他选了\n"
	.string "哪只，在你选之前就说\l"
	.string "可就不公平了！\p"
	.string "我可以让你从任意\n"
	.string "属性的初始宝可梦里选，\l"
	.string "想换的话就找我。$"

NewBirchsLab_Route103PlayerMale::
# 648 "data/maps/NewBirchsLab/scripts.pory"
	.string "{RIVAL}喊着要出门，\n"
	.string "跑去103号道路了，\l"
	.string "也许你该去那儿找她。$"

NewBirchsLab_Route103PlayerFemale::
# 655 "data/maps/NewBirchsLab/scripts.pory"
	.string "{RIVAL}喊着要出门，\n"
	.string "跑去103号道路了，\l"
	.string "也许你该去那儿找他。$"

NewBirchsLab_RivalStarterTreeckoPlayerMale::
# 662 "data/maps/NewBirchsLab/scripts.pory"
	.string "好选择，不过运气不太好！\n"
	.string "{RIVAL}选了木守宫做\l"
	.string "她的初始宝可梦！$"

NewBirchsLab_RivalStarterTreeckoPlayerFemale::
# 669 "data/maps/NewBirchsLab/scripts.pory"
	.string "好选择，不过运气不太好！\n"
	.string "{RIVAL}选了木守宫做\l"
	.string "他的初始宝可梦！$"

NewBirchsLab_RivalStarterMudkipPlayerMale::
# 676 "data/maps/NewBirchsLab/scripts.pory"
	.string "好选择，不过运气不太好！\n"
	.string "{RIVAL}选了水跃鱼做\l"
	.string "她的初始宝可梦！$"

NewBirchsLab_RivalStarterMudkipPlayerFemale::
# 683 "data/maps/NewBirchsLab/scripts.pory"
	.string "好选择，不过运气不太好！\n"
	.string "{RIVAL}选了水跃鱼做\l"
	.string "他的初始宝可梦！$"

NewBirchsLab_RivalStarterTorchicPlayerMale::
# 690 "data/maps/NewBirchsLab/scripts.pory"
	.string "好选择，不过运气不太好！\n"
	.string "{RIVAL}选了火稚鸡做\l"
	.string "她的初始宝可梦！$"

NewBirchsLab_RivalStarterTorchicPlayerFemale::
# 697 "data/maps/NewBirchsLab/scripts.pory"
	.string "好选择，不过运气不太好！\n"
	.string "{RIVAL}选了火稚鸡做\l"
	.string "他的初始宝可梦！$"

NewBirchsLab_ChangeStarters::
# 704 "data/maps/NewBirchsLab/scripts.pory"
	.string "你想看哪个世代的\n"
	.string "初始宝可梦？\l"
	.string "世代可以随便换多少次。$"

NewBirchsLab_ChangeStartersMonotypes::
# 710 "data/maps/NewBirchsLab/scripts.pory"
	.string "你想看哪种属性的\n"
	.string "初始宝可梦？\l"
	.string "属性可以随便换多少次。$"
