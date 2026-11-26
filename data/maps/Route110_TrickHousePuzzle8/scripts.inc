# 1 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.byte 0
# 4 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 5 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Scroll::
# 6 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	lockall
# 7 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0, Route110_TrickHousePuzzle8_EventScript_FoundScroll
# 8 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 9 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 10 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 11 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_FoundScroll::
# 12 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 1
# 13 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 14 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Vincent::
# 17 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_VINCENT, Route110_TrickHousePuzzle8_Text_VincentIntro, Route110_TrickHousePuzzle8_Text_VincentDefeat
# 18 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 20 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 21 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Keira::
# 22 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_KEIRA, Route110_TrickHousePuzzle8_Text_KeiraIntro, Route110_TrickHousePuzzle8_Text_KeiraDefeat
# 23 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_KeiraPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 25 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 26 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Leroy::
# 27 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_LEROY, Route110_TrickHousePuzzle8_Text_LeroyIntro, Route110_TrickHousePuzzle8_Text_LeroyDefeat
# 28 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 30 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 31 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened::
# 32 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "{PLAYER}把密码写在了\n"
# 33 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "门上。\p"
# 34 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "“我爱机关大师。”\n"
# 35 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "… … … … … … … …\p"
# 36 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "锁咔嗒一声开了！$"
# 37 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 38 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentIntro:
# 39 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "没多少训练家能\n"
# 40 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "走到这里。$"
# 41 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 42 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentDefeat:
# 43 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "那说明你也很强……$"
# 44 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 45 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentPostBattle:
# 46 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "你打赢了宝可梦联盟\n"
# 47 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "冠军？太厉害了！$"
# 48 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 49 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraIntro:
# 50 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "能和我对战，你\n"
# 51 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "该觉得走运！$"
# 52 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 53 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraDefeat:
# 54 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "不对劲！\n"
# 55 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "我不能输！$"
# 56 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 57 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraPostBattle:
# 58 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "你打赢我是奇迹。\n"
# 59 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "你可以去炫耀。$"
# 60 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 61 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyIntro:
# 62 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "你也是一路闯过\n"
# 63 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "机关屋挑战来的。$"
# 64 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 65 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyDefeat:
# 66 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "我明白了……\n"
# 67 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "你的风格非同一般。$"
# 68 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 69 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyPostBattle:
# 70 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "见到你这样的人，机关\n"
# 71 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "大师应该会高兴。$"
