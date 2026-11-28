# 1 "data/maps/MagmaHideout_1F/scripts.pory"

# 2 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_MapScripts::
# 3 "data/maps/MagmaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
# 4 "data/maps/MagmaHideout_1F/scripts.pory"
	.byte 0
# 5 "data/maps/MagmaHideout_1F/scripts.pory"

# 6 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_OnTransition:
# 7 "data/maps/MagmaHideout_1F/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 8 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 9 "data/maps/MagmaHideout_1F/scripts.pory"

# 10 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1::
# 11 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Intro, MagmaHideout_1F_Text_Grunt1Defeat
# 12 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 14 "data/maps/MagmaHideout_1F/scripts.pory"

# 15 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt2::
# 16 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Intro, MagmaHideout_1F_Text_Grunt2Defeat
# 17 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 19 "data/maps/MagmaHideout_1F/scripts.pory"

# 20 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Intro:
# 21 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "水舰队点名的时候，我们\n"
# 22 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "按站队的顺序领\l"
# 23 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "重要守卫任务。\p"
# 24 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "所以我才被塞在\n"
# 25 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "这个角落。我点名\l"
# 26 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "总是迟到！$"
# 27 "data/maps/MagmaHideout_1F/scripts.pory"

# 28 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Defeat:
# 29 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "我训练也总是迟到！\p"
# 30 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "不想承认，不过\n"
# 31 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "我真是个软脚虾……$"
# 32 "data/maps/MagmaHideout_1F/scripts.pory"

# 33 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1PostBattle:
# 34 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "好吧，我从现在起\n"
# 35 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "会多用点力……$"
# 36 "data/maps/MagmaHideout_1F/scripts.pory"

# 37 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Intro:
# 38 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "老大让我们往烟囱山\n"
# 39 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "里挖，我们就一直挖。\p"
# 40 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "挖的过程中，我们挖到了\n"
# 41 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "让人瞠目结舌的东西！\p"
# 42 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "挖到了什么？\p"
# 43 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "哈哈哈！\n"
# 44 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "你打赢我我就告诉你！$"
# 45 "data/maps/MagmaHideout_1F/scripts.pory"

# 46 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Defeat:
# 47 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "呃啊！\n"
# 48 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "被打倒了！$"
# 49 "data/maps/MagmaHideout_1F/scripts.pory"

# 50 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2PostBattle:
# 51 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "算了，我不告诉你。\n"
# 52 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "你到了那儿就知道了！\p"
# 53 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "惊喜留到最后比较\n"
# 54 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "好吧，你不觉得吗？$"
