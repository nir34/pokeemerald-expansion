# 1 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.byte 0
# 4 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 5 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Scroll::
# 6 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	lockall
# 7 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0, Route110_TrickHousePuzzle4_EventScript_FoundScroll
# 8 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 9 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 10 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 11 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_FoundScroll::
# 12 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 1
# 13 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 14 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Cora::
# 17 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_CORA, Route110_TrickHousePuzzle4_Text_CoraIntro, Route110_TrickHousePuzzle4_Text_CoraDefeat
# 18 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_CoraPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 20 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 21 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Yuji::
# 22 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_YUJI, Route110_TrickHousePuzzle4_Text_YujiIntro, Route110_TrickHousePuzzle4_Text_YujiDefeat
# 23 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 25 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 26 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Paula::
# 27 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_PAULA, Route110_TrickHousePuzzle4_Text_PaulaIntro, Route110_TrickHousePuzzle4_Text_PaulaDefeat
# 28 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 30 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 31 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened:
# 32 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "{PLAYER}把密码写在了\n"
# 33 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "门上。\p"
# 34 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "“机关大师真酷。”\n"
# 35 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "… … … … … … … …\p"
# 36 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "锁咔嗒一声开了！$"
# 37 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 38 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraIntro:
# 39 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "想这个太麻烦了。\n"
# 40 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "我只想对战！$"
# 41 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 42 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraDefeat:
# 43 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "虽然输了，我还是\n"
# 44 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "最喜欢对战！$"
# 45 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 46 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraPostBattle:
# 47 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "你不觉得吗？只要有\n"
# 48 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "训练家，哪儿都去。$"
# 49 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 50 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiIntro:
# 51 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "嘿！这种岩石，我一根\n"
# 52 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "手指就能拨开！$"
# 53 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 54 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiDefeat:
# 55 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "我能推岩石，可解不开\n"
# 56 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "谜题……$"
# 57 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 58 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiPostBattle:
# 59 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "光有力气不够……\n"
# 60 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "得动脑子。要聪明！$"
# 61 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 62 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaIntro:
# 63 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "机关屋越来越难了，\n"
# 64 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "对吧？$"
# 65 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 66 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaDefeat:
# 67 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "啊——！$"
# 68 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 69 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaPostBattle:
# 70 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "有人走到最后了吗？$"
