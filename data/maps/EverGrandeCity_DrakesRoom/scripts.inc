# 1 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesRoom_OnFrame
# 4 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesRoom_OnLoad
# 5 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 6 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
@ Unused, Drake uses Sidneys identical OnWarp for some reason
# 9 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnWarp:
# 10 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
# 11 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 12 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 13 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
# 14 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 17 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnFrame:
# 18 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 3, EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor
# 19 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 20 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 21 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor::
# 22 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lockall
# 23 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 24 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 4
# 25 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	releaseall
# 26 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 27 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 28 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnLoad:
# 29 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_CYNTHIA, EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom
# 30 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_DrakesRoom_EventScript_CloseDoor
# 31 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 32 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 33 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom::
# 34 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 35 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 36 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 37 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_CloseDoor::
# 38 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 39 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 40 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 41 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Cynthia::
# 42 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 43 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	faceplayer
# 44 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_CYNTHIA, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
# 45 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_CHAMPION, FALSE
# 46 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 47 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CYNTHIA, EverGrandeCity_DrakesRoom_Text_Defeat
# 48 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
# 49 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 50 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 51 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
# 52 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 53 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 54 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 55 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 56 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Defeated::
# 57 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
# 58 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 59 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_CYNTHIA
# 60 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 61 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 62 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 63 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 64 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 65 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_IntroSpeech:
# 66 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "哎呀哎呀。你一定是\n"
# 67 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "{PLAYER}。我从小光、\l"
# 68 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "大吾和亚当那里\l"
# 69 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "听了很多你的事。\p"
# 70 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "那场危机在丰缘爆发时，\n"
# 71 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "小光给我打了电话，\l"
# 72 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "可我到的时候，你\l"
# 73 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "已经把一切处理好了。\p"
# 74 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "不过，既然我在这儿，\n"
# 75 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "而源治计划失败后\l"
# 76 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "逃走了，他们就\l"
# 77 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "请我暂时顶替\l"
# 78 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "第四位四天王。\p"
# 79 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "对你来说真不幸，\n"
# 80 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "你已经单独面对过\l"
# 81 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "源治，现在又要面对\l"
# 82 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "可能是各地区最强\l"
# 83 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "的四天王……\p"
# 84 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "俗话说，好事\n"
# 85 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "不得好报！\p"
# 86 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "不过别担心，我不会\n"
# 87 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "让同情心妨碍我全力\l"
# 88 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "对付你。\p"
# 89 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "准备好，等我打完，\n"
# 90 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "我保证你会希望\l"
# 91 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "坐在这里的是源治。$"
# 92 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 93 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_Defeat:
# 94 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "我很佩服，这话可不\n"
# 95 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "随便说。看来我听到\l"
# 96 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "关于你的一切都是真的。$"
# 97 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 98 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
# 99 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "看来你经历的所有考验，\n"
# 100 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "确实把你变成了\l"
# 101 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "强大的训练家。\p"
# 102 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "但更让我佩服的，是你\n"
# 103 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "和宝可梦之间的羁绊。\p"
# 104 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "我外表看起来严厉\n"
# 105 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "难对付，可我心里\l"
# 106 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "明白，真正的强大\l"
# 107 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "来自和宝可梦\l"
# 108 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "结下的羁绊。\p"
# 109 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "看来你也懂这一点，\n"
# 110 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "为此我比什么都\l"
# 111 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "尊敬你。\p"
# 112 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "去吧，冠军在等你！\n"
# 113 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "或者我该说，“冠军们”？$"
