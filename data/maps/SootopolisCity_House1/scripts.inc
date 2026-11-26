# 1 "data/maps/SootopolisCity_House1/scripts.pory"

# 2 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_MapScripts::
# 3 "data/maps/SootopolisCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House1/scripts.pory"

# 5 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_BrickBreakBlackBelt::
# 6 "data/maps/SootopolisCity_House1/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
# 9 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 10 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 11 "data/maps/SootopolisCity_House1/scripts.pory"

# 12 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_ReceivedBrickBreak::
# 13 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
# 14 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 15 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 16 "data/maps/SootopolisCity_House1/scripts.pory"

# 17 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_Kecleon::
# 18 "data/maps/SootopolisCity_House1/scripts.pory"
	lock
# 19 "data/maps/SootopolisCity_House1/scripts.pory"
	faceplayer
# 20 "data/maps/SootopolisCity_House1/scripts.pory"
	waitse
# 21 "data/maps/SootopolisCity_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 22 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_Kecleon, MSGBOX_DEFAULT
# 23 "data/maps/SootopolisCity_House1/scripts.pory"
	waitmoncry
# 24 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 25 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 26 "data/maps/SootopolisCity_House1/scripts.pory"

# 27 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_DevelopedThisTM:
# 28 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "我在琉璃市待了三十年，\n"
# 29 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "磨练本事。\p"
# 30 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "我开发了一个学习器，\n"
# 31 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "能把一切劈开。\l"
# 32 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "就传给你吧！$"
# 33 "data/maps/SootopolisCity_House1/scripts.pory"

# 34 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_ExplainBrickBreak:
# 35 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "噗 噗呀啊。\n"
# 36 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "我的变隐龙总是这么说。$"
# 37 "data/maps/SootopolisCity_House1/scripts.pory"

# 38 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_Kecleon:
# 39 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "噗 噗呀啊。$"
