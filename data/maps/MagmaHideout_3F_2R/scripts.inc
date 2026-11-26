# 1 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 2 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_MapScripts::
# 3 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 5 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_EventScript_Grunt10::
# 6 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, MagmaHideout_3F_2R_Text_Grunt10Intro, MagmaHideout_3F_2R_Text_Grunt10Defeat
# 7 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_Text_Grunt10PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	end
# 9 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 10 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Intro:
# 11 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "老大说的我都懂。\n"
# 12 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "可你知道吗？\p"
# 13 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "挖出超古代宝可梦、\n"
# 14 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "骗走人家的陨石\l"
# 15 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "这种事……\p"
# 16 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "我觉得我们做得\n"
# 17 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "有点过头了。\p"
# 18 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "你怎么想？$"
# 19 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 20 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Defeat:
# 21 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "是啊，我总觉得我们\n"
# 22 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "在做错事。$"
# 23 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 24 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10PostBattle:
# 25 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "你知道吗，输给你之后\n"
# 26 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "我脑子清楚了。\p"
# 27 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "下次见到老大，我要问\n"
# 28 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "他我们到底在干什么。$"
