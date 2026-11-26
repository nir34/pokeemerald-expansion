# 1 "data/maps/DewfordTown_House2/scripts.pory"

# 2 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_MapScripts::
# 3 "data/maps/DewfordTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_House2/scripts.pory"

# 5 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Man::
# 6 "data/maps/DewfordTown_House2/scripts.pory"
	lock
# 7 "data/maps/DewfordTown_House2/scripts.pory"
	faceplayer
# 8 "data/maps/DewfordTown_House2/scripts.pory"
	call_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, DewfordTown_House2_EventScript_SetEggMoveFlag
# 9 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_HowToUseRelearnMoves, MSGBOX_DEFAULT
# 10 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 11 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 12 "data/maps/DewfordTown_House2/scripts.pory"

# 13 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_SetEggMoveFlag::
# 14 "data/maps/DewfordTown_House2/scripts.pory"
	setflag FLAG_MET_REGULAR_MOVE_TUTOR
# 15 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_ImEggMoveTutor, MSGBOX_DEFAULT
# 16 "data/maps/DewfordTown_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 17 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_ObtainedMoveTutorOption, MSGBOX_DEFAULT
# 18 "data/maps/DewfordTown_House2/scripts.pory"
	waitfanfare
# 19 "data/maps/DewfordTown_House2/scripts.pory"
	return
# 20 "data/maps/DewfordTown_House2/scripts.pory"

# 21 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Boy::
# 22 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
# 23 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 24 "data/maps/DewfordTown_House2/scripts.pory"

# 25 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_ImEggMoveTutor:
# 26 "data/maps/DewfordTown_House2/scripts.pory"
	.string "哟！\p"
# 27 "data/maps/DewfordTown_House2/scripts.pory"
	.string "大家都说我记性特别好，\n"
# 28 "data/maps/DewfordTown_House2/scripts.pory"
	.string "连我的宝可梦都被带动了！\p"
# 29 "data/maps/DewfordTown_House2/scripts.pory"
	.string "来，我也把记性好的\n"
# 30 "data/maps/DewfordTown_House2/scripts.pory"
	.string "秘诀教给你。$"
# 31 "data/maps/DewfordTown_House2/scripts.pory"

# 32 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_ObtainedMoveTutorOption:
# 33 "data/maps/DewfordTown_House2/scripts.pory"
	.string "获得了重新学习\n"
# 34 "data/maps/DewfordTown_House2/scripts.pory"
	.string "升级招式的选项！$"
# 35 "data/maps/DewfordTown_House2/scripts.pory"

# 36 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_HowToUseRelearnMoves:
# 37 "data/maps/DewfordTown_House2/scripts.pory"
	.string "打开队伍菜单选择宝可梦，\n"
# 38 "data/maps/DewfordTown_House2/scripts.pory"
	.string "应该会多出一个叫\l"
# 39 "data/maps/DewfordTown_House2/scripts.pory"
	.string "“重新学习”的选项。\p"
# 40 "data/maps/DewfordTown_House2/scripts.pory"
	.string "我听说还有人能教别的\n"
# 41 "data/maps/DewfordTown_House2/scripts.pory"
	.string "招式，不过我只知道\l"
# 42 "data/maps/DewfordTown_House2/scripts.pory"
	.string "怎么重新学习宝可梦\l"
# 43 "data/maps/DewfordTown_House2/scripts.pory"
	.string "升级时学会的招式。\p"
# 44 "data/maps/DewfordTown_House2/scripts.pory"
	.string "要是你看不到新选项，\n"
# 45 "data/maps/DewfordTown_House2/scripts.pory"
	.string "就说明你的宝可梦没有\l"
# 46 "data/maps/DewfordTown_House2/scripts.pory"
	.string "能重新学的招式，真可惜！\p"
# 47 "data/maps/DewfordTown_House2/scripts.pory"
	.string "等你出名了，\n"
# 48 "data/maps/DewfordTown_House2/scripts.pory"
	.string "希望你还记得我！$"
# 49 "data/maps/DewfordTown_House2/scripts.pory"

# 50 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_BrawlySoCool:
# 51 "data/maps/DewfordTown_House2/scripts.pory"
	.string "哇，你特地渡海来武斗玩？\p"
# 52 "data/maps/DewfordTown_House2/scripts.pory"
	.string "你是不是听说了藤树\n"
# 53 "data/maps/DewfordTown_House2/scripts.pory"
	.string "才来的？\p"
# 54 "data/maps/DewfordTown_House2/scripts.pory"
	.string "他真酷……\n"
# 55 "data/maps/DewfordTown_House2/scripts.pory"
	.string "大家都崇拜他。$"
