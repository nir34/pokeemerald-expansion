# 1 "data/maps/SootopolisCity_House3/scripts.pory"

# 2 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_MapScripts::
# 3 "data/maps/SootopolisCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House3/scripts.pory"

# 5 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_Woman::
# 6 "data/maps/SootopolisCity_House3/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_House3/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_JuanHasManyFansDoYou, MSGBOX_YESNO
# 9 "data/maps/SootopolisCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_House3_EventScript_HaveFans
# 10 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_LonesomeTryWorkingHarder, MSGBOX_DEFAULT
# 11 "data/maps/SootopolisCity_House3/scripts.pory"
	release
# 12 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 13 "data/maps/SootopolisCity_House3/scripts.pory"

# 14 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_HaveFans::
# 15 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_YouMustBePrettyStrong, MSGBOX_DEFAULT
# 16 "data/maps/SootopolisCity_House3/scripts.pory"
	release
# 17 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 18 "data/maps/SootopolisCity_House3/scripts.pory"

# 19 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_Girl::
# 20 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_TrainerFanClubWasWild, MSGBOX_NPC
# 21 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_House3/scripts.pory"

# 23 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_JuanHasManyFansDoYou:
# 24 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "你是宝可梦训练家吧？\p"
# 25 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "琉璃市的阿丹有很多粉丝。\n"
# 26 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "比他的学生亚当还多！\p"
# 27 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "你有粉丝吗？$"
# 28 "data/maps/SootopolisCity_House3/scripts.pory"

# 29 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_YouMustBePrettyStrong:
# 30 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "哦，那你一定\n"
# 31 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "相当强。$"
# 32 "data/maps/SootopolisCity_House3/scripts.pory"

# 33 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_LonesomeTryWorkingHarder:
# 34 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "哦，天啊……\n"
# 35 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "那有点寂寞。\p"
# 36 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "多用点力，争取\n"
# 37 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "有粉丝追随吧。$"
# 38 "data/maps/SootopolisCity_House3/scripts.pory"

# 39 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_TrainerFanClubWasWild:
# 40 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "连丰缘以外都有忠实的\n"
# 41 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "粉丝赶来。\p"
# 42 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "我去水静市的训练家\n"
# 43 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "粉丝俱乐部时，\l"
# 44 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "那里真是疯狂。$"
