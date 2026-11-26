# 1 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 2 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_MapScripts::
# 3 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
# 4 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route109_SeashoreHouse_OnWarp
# 5 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route109_SeashoreHouse_OnFrame
# 6 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.byte 0
# 7 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 8 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 9 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnWarp:
# 10 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script_2 VAR_ENTERING_HOT_HOUSE, 1, Route109_SeashoreHouse_EventScript_PlayerTurnNorth
# 11 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.2byte 0
# 12 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 13 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_PlayerTurnNorth::
# 14 "data/maps/Route109_SeashoreHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 16 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 17 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnFrame:
# 18 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script_2 VAR_ENTERING_HOT_HOUSE, 1, Route109_SeashoreHouse_EventScript_EnterRoom
# 19 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.2byte 0
# 20 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 21 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_EnterRoom::
# 22 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lockall
# 23 "data/maps/Route109_SeashoreHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 24 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setmetatile 6, 9, METATILE_BuildingNormalFloor, FALSE
# 26 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setmetatile 7, 9, METATILE_BuildingNormalFloor, FALSE
# 27 "data/maps/Route109_SeashoreHouse/scripts.pory"
	special DrawWholeMapView
# 28 "data/maps/Route109_SeashoreHouse/scripts.pory"
	playse SE_TRUCK_DOOR
# 29 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 30 "data/maps/Route109_SeashoreHouse/scripts.pory"
	cleartrainerflag TRAINER_JOHANNA
# 31 "data/maps/Route109_SeashoreHouse/scripts.pory"
	cleartrainerflag TRAINER_BRIAN
# 32 "data/maps/Route109_SeashoreHouse/scripts.pory"
	cleartrainerflag TRAINER_BRIAN_2
# 33 "data/maps/Route109_SeashoreHouse/scripts.pory"
	cleartrainerflag TRAINER_DWAYNE
# 34 "data/maps/Route109_SeashoreHouse/scripts.pory"
	releaseall
# 35 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 36 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 37 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnTransition:
# 38 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
# 39 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 41 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Dwayne::
# 42 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 43 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 45 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 46 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Johanna::
# 47 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 48 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 50 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 51 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Brian::
# 52 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_ge VAR_HOT_HOUSE_STATE, 16, Route109_SeashoreHouse_EventScript_BrianDouble
# 53 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_BRIAN, Route109_SeashoreHouse_Text_BrianIntro, Route109_SeashoreHouse_Text_BrianDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 54 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BrianPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 56 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BrianDouble::
# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_BRIAN_2, Route109_SeashoreHouse_Text_BrianIntro, Route109_SeashoreHouse_Text_BrianDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BrianPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 61 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 62 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
# 63 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 65 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call_if_ge VAR_HOT_HOUSE_STATE, 16, Route109_SeashoreHouse_EventScript_CheckBrianDoubleBattle
# 66 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call_if_lt VAR_HOT_HOUSE_STATE, 16, Route109_SeashoreHouse_EventScript_CheckBrianSingleBattle
# 67 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_DEFEATED_HOT_HOUSE
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 70 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 71 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckBrianSingleBattle::
# 72 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_BRIAN, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 73 "data/maps/Route109_SeashoreHouse/scripts.pory"
	return
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckBrianDoubleBattle::
# 76 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_BRIAN_2, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 77 "data/maps/Route109_SeashoreHouse/scripts.pory"
	return
# 78 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 79 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
# 80 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 81 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 82 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 83 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneIntro:
# 84 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "你要是在海边小屋找\n"
# 85 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "对战，没人比我更\l"
# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "火热，伙计！$"
# 87 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 88 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneDefeated:
# 89 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "好一场火热对战！\n"
# 90 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "我认输，伙计！$"
# 91 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 92 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwaynePostBattle:
# 93 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "不错，伙计，不过你想\n"
# 94 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "拿那个奖励，还得\l"
# 95 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "打赢另外两个！$"
# 96 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 97 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaIntro:
# 98 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "无聊的对战不值得\n"
# 99 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "费力气。\p"
# 100 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "灼热的对战才能让\n"
# 101 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "训练家和宝可梦\l"
# 102 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "变强！$"
# 103 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 104 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaDefeated:
# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "真是太热了！$"
# 106 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 107 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaPostBattle:
# 108 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "你这股劲说不定真能\n"
# 109 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "拿到这个奖励，\l"
# 110 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "你是个火热的\l"
# 111 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "对战者！$"
# 112 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 113 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BrianIntro:
# 114 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "名人堂？首先，兄弟，\n"
# 115 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "你永远打不赢吉他手\l"
# 116 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "布莱恩！$"
# 117 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 118 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BrianDefeated:
# 119 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "现在我得把徽章\n"
# 120 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "交给你了？\l"
# 121 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "我的NELO要受苦了……$"
# 122 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 123 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BrianPostBattle:
# 124 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "你知道贪心栗鼠会\n"
# 125 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "双倍奉还吗？\l"
# 126 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "我可是吃了苦头\l"
# 127 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "才知道的。$"

Route109_SeashoreHouse_EventScript_Owner::
# 131 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 132 "data/maps/Route109_SeashoreHouse/scripts.pory"
	faceplayer
# 133 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HOT_HOUSE_GIFT_MON, Route109_SeashoreHouse_EventScript_AlreadyReceivedPokemon
# 134 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_HOT_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
# 135 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
# 136 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
# 137 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 138 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
# 143 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
# 144 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_DefeatedTrainers::
# 149 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_LEAVING_HOT_HOUSE, 1
# 150 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setmetatile 6, 9, METATILE_BuildingWarpLeft, FALSE
# 151 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setmetatile 7, 9, METATILE_BuildingWarpRight, FALSE
# 152 "data/maps/Route109_SeashoreHouse/scripts.pory"
	special DrawWholeMapView
# 153 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_TakeThisPokemon, MSGBOX_DEFAULT
# 154 "data/maps/Route109_SeashoreHouse/scripts.pory"
	switch VAR_HOT_HOUSE_STATE
# 156 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 1, Route109_SeashoreHouse_EventScript_DefeatedTrainers_3
# 160 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 2, Route109_SeashoreHouse_EventScript_DefeatedTrainers_4
# 164 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 3, Route109_SeashoreHouse_EventScript_DefeatedTrainers_5
# 168 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 4, Route109_SeashoreHouse_EventScript_DefeatedTrainers_6
# 172 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 5, Route109_SeashoreHouse_EventScript_DefeatedTrainers_7
# 176 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 6, Route109_SeashoreHouse_EventScript_DefeatedTrainers_8
# 180 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 7, Route109_SeashoreHouse_EventScript_DefeatedTrainers_9
# 184 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 8, Route109_SeashoreHouse_EventScript_DefeatedTrainers_10
# 188 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 9, Route109_SeashoreHouse_EventScript_DefeatedTrainers_11
# 192 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 10, Route109_SeashoreHouse_EventScript_DefeatedTrainers_12
# 196 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 11, Route109_SeashoreHouse_EventScript_DefeatedTrainers_13
# 200 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 12, Route109_SeashoreHouse_EventScript_DefeatedTrainers_14
# 204 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 13, Route109_SeashoreHouse_EventScript_DefeatedTrainers_15
# 208 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 14, Route109_SeashoreHouse_EventScript_DefeatedTrainers_16
# 212 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 15, Route109_SeashoreHouse_EventScript_DefeatedTrainers_17
# 216 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 16, Route109_SeashoreHouse_EventScript_DefeatedTrainers_18
# 220 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case 17, Route109_SeashoreHouse_EventScript_DefeatedTrainers_19
# 225 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYROGUE
# 226 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TYROGUE, 25
# 227 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
Route109_SeashoreHouse_EventScript_DefeatedTrainers_1:
# 230 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route109_SeashoreHouse_EventScript_ReceiveRewardParty
# 231 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route109_SeashoreHouse_EventScript_ReceiveRewardPC
# 232 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 233 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end

Route109_SeashoreHouse_EventScript_DefeatedTrainers_3:
# 157 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYROGUE
# 158 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TYROGUE, 25
# 159 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_4:
# 161 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PANSAGE
# 162 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_PANSAGE, 25
# 163 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PANSAGE
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_5:
# 165 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PANPOUR
# 166 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_PANPOUR, 25
# 167 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PANPOUR
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_6:
# 169 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PANSEAR
# 170 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_PANSEAR, 25
# 171 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PANSEAR
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_7:
# 173 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MISDREAVUS
# 174 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_MISDREAVUS, 25
# 175 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MISDREAVUS
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_8:
# 177 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PINSIR
# 178 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_PINSIR, 25
# 179 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PINSIR
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_9:
# 181 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HERACROSS
# 182 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_HERACROSS, 25
# 183 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HERACROSS
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_10:
# 185 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SCYTHER
# 186 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_SCYTHER, 25
# 187 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SCYTHER
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_11:
# 189 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EEVEE
# 190 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_EEVEE, 25
# 191 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_12:
# 193 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MAGBY
# 194 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_MAGBY, 25
# 195 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGBY
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_13:
# 197 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ELEKID
# 198 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_ELEKID, 25
# 199 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ELEKID
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_14:
# 201 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SMOOCHUM
# 202 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_SMOOCHUM, 25
# 203 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SMOOCHUM
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_15:
# 205 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_RIOLU
# 206 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_RIOLU, 25
# 207 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_RIOLU
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_16:
# 209 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOGEPI
# 210 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TOGEPI, 25
# 211 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOGEPI
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_17:
# 213 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYPE_NULL
# 214 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_TYPE_NULL, 25
# 215 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYPE_NULL
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_18:
# 217 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHARCADET
# 218 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_CHARCADET, 25
# 219 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARCADET
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1

Route109_SeashoreHouse_EventScript_DefeatedTrainers_19:
# 221 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AERODACTYL
# 222 "data/maps/Route109_SeashoreHouse/scripts.pory"
	givemonrandom SPECIES_AERODACTYL, 25
# 223 "data/maps/Route109_SeashoreHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1


Route109_SeashoreHouse_EventScript_ReceiveRewardParty::
# 238 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_ReceivedRewardFanfare
# 239 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 240 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_ExplainReward
# 241 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 242 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 243 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_ExplainReward
	end


Route109_SeashoreHouse_EventScript_ReceiveRewardPC::
# 248 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_ReceivedRewardFanfare
# 249 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 250 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_SeashoreHouse_EventScript_SendRewardToPC
# 251 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 252 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_SendRewardToPC
	end


Route109_SeashoreHouse_EventScript_SendRewardToPC::
# 257 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 258 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_ExplainReward
	end


Route109_SeashoreHouse_EventScript_ReceivedRewardFanfare::
# 263 "data/maps/Route109_SeashoreHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 264 "data/maps/Route109_SeashoreHouse/scripts.pory"
	message Route109_SeashoreHouse_Text_PlayerReceivedReward
# 265 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmessage
# 266 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitfanfare
	return


Route109_SeashoreHouse_EventScript_ExplainReward::
# 271 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_PokemonDescribe, MSGBOX_DEFAULT
# 272 "data/maps/Route109_SeashoreHouse/scripts.pory"
	playse SE_TRUCK_DOOR
# 273 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_RECEIVED_HOT_HOUSE_GIFT_MON
# 274 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_AlreadyReceivedPokemon::
# 279 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ThanksForCompeting, MSGBOX_DEFAULT
# 280 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_Text_SeashoreHouseIntro::
# 284 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "我是热焰馆的老板。\n"
	.string "你叫我海先生就行！\p"
	.string "我最爱看的就是\n"
	.string "火热的宝可梦对战。\p"
	.string "让我看看你心中的热火！\p"
	.string "你要是能打赢这儿所有\n"
	.string "训练家，我就奖励你。$"

Route109_SeashoreHouse_Text_ShowMeSomeHotMatches::
# 294 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "让我看点火热的对战！\p"
	.string "我经营这热焰馆，\n"
	.string "就为这一个理由！$"

Route109_SeashoreHouse_Text_TakeThisPokemon::
# 300 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "你真是炙热无比！\n"
	.string "那些对战烧得旺！\l"
	.string "我可不只是满意！\p"
	.string "就像我女儿答应的，作为打赢\n"
	.string "那些灼热训练家的奖励，\l"
	.string "请收下这只宝可梦。$"

Route109_SeashoreHouse_Text_PlayerReceivedReward::
# 309 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "{PLAYER}得到了{STR_VAR_1}！$"

Route109_SeashoreHouse_Text_PokemonDescribe::
# 313 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "那只宝可梦和你一样，是\n"
	.string "炽热的战斗者！\l"
	.string "我知道你能培育好它！\p"
	.string "随时欢迎再来挑战\n"
	.string "热焰馆！$"

Route109_SeashoreHouse_Text_ThanksForCompeting::
# 321 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "谢谢你来参赛，你真是\n"
	.string "个火热的训练家！\p"
	.string "之后一定要再来试试\n"
	.string "别的挑战！$"
