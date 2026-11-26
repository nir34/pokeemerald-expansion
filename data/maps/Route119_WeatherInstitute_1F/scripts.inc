# 1 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 3 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_MapScripts::
# 4 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
# 5 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.byte 0
# 6 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 7 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_OnTransition:
# 8 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setflag FLAG_VISITED_WEATHER_INST
# 9 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 10 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 11 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 13 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 14 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_StudyingRain
# 15 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 17 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 18 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_1F_EventScript_StudyingRain  @ Both defeated
# 19 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
# 20 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 21 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 22 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated::
# 24 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
# 25 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 27 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_StudyingRain::
# 28 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
# 29 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 30 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker2::
# 33 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
# 34 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 35 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 36 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Bed::
# 37 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lockall
# 38 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
# 39 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 41 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
# 42 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 43 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 44 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt1::
# 45 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
# 46 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 48 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 49 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt4::
# 50 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
# 51 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 53 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 54 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Intro:
# 55 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "老板对这里做的研究\n"
# 56 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "很感兴趣，\l"
# 57 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "就派我们来了。\p"
# 58 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "你别多管闲事！$"
# 59 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 60 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
# 61 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "可恶……\n"
# 62 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "居然被小鬼打倒了……$"
# 63 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 64 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
# 65 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "我们老板什么都懂。\p"
# 66 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "可我只是个小兵。他\n"
# 67 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "在想什么我哪知道？$"
# 68 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 69 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Intro:
# 70 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "嗯？\n"
# 71 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "小孩来这里干什么？$"
# 72 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 73 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
# 74 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "嗯？\n"
# 75 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "我输了？！$"
# 76 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 77 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
# 78 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "哦，不……\n"
# 79 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "输给小鬼肯定要\l"
# 80 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "被骂一顿了……\p"
# 81 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "我还是睡一觉吧……$"
# 82 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs:
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "我睡觉的时候，大家都\n"
# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "上楼去了！$"
# 86 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 87 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WowYoureStrong:
# 88 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "哇，你真强！\p"
# 89 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "我也想成为像你\n"
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "这样的宝可梦训练家！$"
# 91 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 92 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_ProfStudyingRain:
# 93 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "教授喜欢雨。\n"
# 94 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "这是事实。\p"
# 95 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "可要是一直下雨，人们\n"
# 96 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "就会遭殃。这也是事实。\p"
# 97 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "所以教授在研究，能不能\n"
# 98 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "把雨水好好利用起来。$"
# 99 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 100 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather:
# 101 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "在研究所二楼，我们研究\n"
# 102 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "丰缘地区的\l"
# 103 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "天气变化。\p"
# 104 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "最近我们注意到一些\n"
# 105 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "局部、短暂的\l"
# 106 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "干旱和暴雨……$"
# 107 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 108 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo:
# 109 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "你好！\n"
# 110 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "我们被你救了！\p"
# 111 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "我不明白的是，水舰队\n"
# 112 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "到底想干什么。$"
# 113 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 114 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_TakeRestInBed:
# 115 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "有张床……\n"
# 116 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "休息一下吧。$"
