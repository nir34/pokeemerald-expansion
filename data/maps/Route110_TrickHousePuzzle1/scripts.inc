# 1 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle1_OnLoad
# 4 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.byte 0
# 5 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 6 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_OnLoad:
# 7 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2, Route110_TrickHousePuzzle1_EventScript_OpenDoor
# 8 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 9 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 10 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_OpenDoor::
# 11 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 12 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 13 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 14 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Scroll::
# 15 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	lockall
# 16 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0, Route110_TrickHousePuzzle1_EventScript_FoundScroll
# 17 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 18 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 19 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 20 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_FoundScroll::
# 21 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 1
# 22 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 23 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 24 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 25 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Sally::
# 26 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_SALLY, Route110_TrickHousePuzzle1_Text_SallyIntro, Route110_TrickHousePuzzle1_Text_SallyDefeat
# 27 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 29 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 30 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Eddie::
# 31 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_EDDIE, Route110_TrickHousePuzzle1_Text_EddieIntro, Route110_TrickHousePuzzle1_Text_EddieDefeat
# 32 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_EddiePostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 34 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 35 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Robin::
# 36 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_ROBIN, Route110_TrickHousePuzzle1_Text_RobinIntro, Route110_TrickHousePuzzle1_Text_RobinDefeat
# 37 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 39 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 40 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened::
# 41 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "{PLAYER}把密码写在了\n"
# 42 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "门上。\p"
# 43 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "“机关大师真了不起。”\n"
# 44 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "… … … … … … … …\p"
# 45 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "锁咔嗒一声开了！$"
# 46 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 47 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyIntro:
# 48 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "我要用刚学会的居合斩\n"
# 49 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "一路砍到胜利！$"
# 50 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 51 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyDefeat:
# 52 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "你为什么这么认真？$"
# 53 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 54 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyPostBattle:
# 55 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "我砍啊砍，永远\n"
# 56 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "砍不腻！$"
# 57 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 58 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddieIntro:
# 59 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "我不小心闯进了这间\n"
# 60 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "怪房子……$"
# 61 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 62 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddieDefeat:
# 63 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "然后我现在输了……$"
# 64 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 65 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddiePostBattle:
# 66 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "我迷了路、输了比赛，\n"
# 67 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "现在更迷路了……\l"
# 68 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "我出不去了……$"
# 69 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 70 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinIntro:
# 71 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "机关大师到底是谁？$"
# 72 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 73 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinDefeat:
# 74 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "我一边想事一边\n"
# 75 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "就输了！$"
# 76 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 77 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinPostBattle:
# 78 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "你好强！\n"
# 79 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "你到底是谁？$"
