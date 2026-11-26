# 1 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 2 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_MapScripts::
# 3 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 5 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9::
# 6 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_9, MagmaHideout_3F_1R_Text_Grunt9Intro, MagmaHideout_3F_1R_Text_Grunt9Defeat
# 7 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	end
# 9 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 10 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt16::
# 11 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_16, MagmaHideout_3F_1R_Text_Grunt16Intro, MagmaHideout_3F_1R_Text_Grunt16Defeat
# 12 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	end
# 14 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 15 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9Intro:
# 16 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "我到底做了什么，要被\n"
# 17 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "派到这种守卫岗？\p"
# 18 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "我左耳朵都快烧起来了！$"
# 19 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 20 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9Defeat:
# 21 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "我快热中暑了……$"
# 22 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 23 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9PostBattle:
# 24 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "你不觉得在这全是岩浆\n"
# 25 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "的火山里戴兜帽很怪吗？$"
# 26 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 27 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16Intro:
# 28 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "我们加入，是为了帮老大\n"
# 29 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "实现他伟大的梦想。\p"
# 30 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "我不管你是水舰队的，\n"
# 31 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "还是路过的孩子。\p"
# 32 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "谁也别想插手我们\n"
# 33 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "的事还全身而退！$"
# 34 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 35 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16Defeat:
# 36 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "哦，不！\n"
# 37 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "你完全不能信！$"
# 38 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 39 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16PostBattle:
# 40 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "听我说。\n"
# 41 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "熔岩队是对的！\p"
# 42 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "别听水舰队的。\n"
# 43 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "别信他们的谎话！$"
