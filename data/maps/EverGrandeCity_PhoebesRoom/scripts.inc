# 1 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_PhoebesRoom_OnLoad
# 4 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PhoebesRoom_OnWarp
# 5 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_PhoebesRoom_OnFrame
# 6 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnWarp:
# 9 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth
# 10 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 11 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth::
# 13 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 14 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnFrame:
# 17 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 1, EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor
# 18 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor::
# 21 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lockall
# 22 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 23 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 2
# 24 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	releaseall
# 25 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 27 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnLoad:
# 28 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom
# 29 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 2, EverGrandeCity_PhoebesRoom_EventScript_CloseDoor
# 30 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 31 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom::
# 33 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 34 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 35 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 36 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_CloseDoor::
# 37 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 38 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 39 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 40 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
# 41 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 42 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 43 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 44 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 45 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 46 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	random 2
# 47 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PhoebesRoom_EventScript_BattlePhoebe1
# 48 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE2, EverGrandeCity_PhoebesRoom_Text_Defeat
# 49 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
# 50 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 51 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 52 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_BattlePhoebe1::
# 53 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE1, EverGrandeCity_PhoebesRoom_Text_Defeat
# 54 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
# 55 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 56 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 57 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech::
# 58 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 59 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 60 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 61 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 62 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Defeated::
# 63 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 64 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 65 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 66 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 67 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 68 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 69 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_IntroSpeech:
# 70 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "啊哈哈哈！\p"
# 71 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "我是四天王的芙蓉。\n"
# 72 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "我在送神火山训练。\p"
# 73 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "训练时，我获得了和\n"
# 74 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "幽灵属性宝可梦\l"
# 75 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "交流的能力。\p"
# 76 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "可你知道我在训练中\n"
# 77 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "还学到了什么吗？\p"
# 78 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "我学到了毒属性和\n"
# 79 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "幽灵属性有多互补！\p"
# 80 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "想留在顶端，就得\n"
# 81 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "调整自己的风格，\l"
# 82 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "你不觉得吗？$"
# 83 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 84 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_Defeat:
# 85 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "哦，糟了。\n"
# 86 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "我输了。$"
# 87 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 88 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech:
# 89 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "你和宝可梦之间也有一份\n"
# 90 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "明确的羁绊。\p"
# 91 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "我没看出来，输了\n"
# 92 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "也是当然。\p"
# 93 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "对，我想看看你们的\n"
# 94 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "羁绊能带你走多远。\p"
# 95 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "去吧，前往\n"
# 96 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "下一个房间。$"
