# 1 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_SCOTT, 4
# 4 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_EGG_TUTOR, 6
# 5 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_MapScripts::
# 7 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonCenter_1F_OnTransition
# 8 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 9 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 10 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_OnTransition:
# 12 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY
# 13 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_unset FLAG_MET_SCOTT_IN_EVERGRANDE, EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott
# 14 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_TryShowScott::
# 17 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Common_EventScript_NopReturn
# 18 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 19 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 20 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Nurse::
# 22 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 23 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 24 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 25 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 26 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 27 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Woman::
# 30 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad, MSGBOX_NPC
# 31 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott::
# 34 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 36 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou, MSGBOX_DEFAULT
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 38 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth
# 39 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 40 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit
# 41 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 42 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 43 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 44 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitse
# 45 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_SCOTT
# 46 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
# 47 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	end
# 48 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExitNorth::
# 50 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth
# 51 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 52 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 53 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_ScottExit::
# 55 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SCOTT, EverGrandeCity_PokemonCenter_1F_Movement_ScottExit
# 56 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	return
# 58 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 59 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExitNorth:
# 60 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 61 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 62 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 63 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 64 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 65 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 66 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 67 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 68 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Movement_ScottExit:
# 69 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 70 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 71 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 72 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 73 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 74 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 75 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	step_end
# 76 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 77 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad:
# 78 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "宝可梦联盟就在冠军之路\n"
# 79 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "过去不远。\p"
# 80 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "你都走到这里了，除了\n"
# 81 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "继续前进还有\l"
# 82 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "什么选择？$"
# 83 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"

# 84 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou:
# 85 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "史考特：{PLAYER}，你一路\n"
# 86 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "爬上来，要挑战宝可梦\l"
# 87 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "联盟了！\p"
# 88 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "我为你高兴！\n"
# 89 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "我的加油没白费！\p"
# 90 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER}，要是你成了\n"
# 91 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "宝可梦联盟冠军……\p"
# 92 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "到时候我会\n"
# 93 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "联系你。\p"
# 94 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "好，{PLAYER}。\n"
# 95 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "去成就伟大吧！$"

EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM::
# 100 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock
# 101 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 103 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_ZYGARDE_CUBE, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_2
# 109 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_IHaveCube, MSGBOX_DEFAULT
# 110 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 111 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 112 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 113 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, EverGrandeCity_PokemonCenter_1F_EventScript_CancelLegend
# 114 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 115 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 117 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_50, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 118 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_10, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 119 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_10_AURA_BREAK, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 120 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_10_POWER_CONSTRUCT, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 121 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_50_POWER_CONSTRUCT, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 122 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	case SPECIES_ZYGARDE_COMPLETE, EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6
# 128 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_NotLegend, MSGBOX_DEFAULT
# 129 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
	end

EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_2:
# 104 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_UseThatCube, MSGBOX_DEFAULT
# 105 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
	end

EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_4:
# 133 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_UseThatCube, MSGBOX_DEFAULT
# 134 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
	end

EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_6:
# 123 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_PleaseTakeThisCube, MSGBOX_DEFAULT
# 124 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_ZYGARDE_CUBE
# 125 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_ZYGARDE_CUBE
	goto EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM_4


EverGrandeCity_PokemonCenter_1F_EventScript_CancelLegend::
# 139 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_DontHaveLegend, MSGBOX_DEFAULT
# 140 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	release
	end


EverGrandeCity_PokemonCenter_1F_Text_IHaveCube::
# 144 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "我看出你是个有前途的训练家。我就\n"
	.string "知道只要在这宝可梦中心等，\l"
	.string "迟早会有你这种水准的\l"
	.string "训练家出现。\p"
	.string "我花了很长时间收集细胞，\n"
	.string "做成了一个能改变某只\l"
	.string "宝可梦形态的高级核心。\p"
	.string "只要让我看看你有那只宝可梦，\n"
	.string "我就把核心送你。$"

EverGrandeCity_PokemonCenter_1F_Text_PleaseTakeThisCube::
# 156 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "就是它！这个核心正是\n"
	.string "用在那只宝可梦上的。\p"
	.string "请把这项技术\n"
	.string "发挥到极致。$"

EverGrandeCity_PokemonCenter_1F_Text_UseThatCube::
# 163 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "这个核心能引出基格尔德\n"
	.string "真正的力量。\p"
	.string "我花了好几年才找齐\n"
	.string "制作它所需的细胞，请好好使用。$"

EverGrandeCity_PokemonCenter_1F_Text_DontHaveLegend::
# 170 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "我明白了，你没有我\n"
	.string "在找的宝可梦。$"

EverGrandeCity_PokemonCenter_1F_Text_NotLegend::
# 174 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "那只宝可梦用不了\n"
	.string "这个核心。$"
