# 1 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_MapScripts::
# 3 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1::
# 6 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, SeafloorCavern_Room1_Text_Grunt1Intro, SeafloorCavern_Room1_Text_Grunt1Defeat
# 7 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 9 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 10 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Intro:
# 11 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "我们不需要小鬼！\n"
# 12 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "快回家去！$"
# 13 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 14 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Defeat:
# 15 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "我想回家……$"
# 16 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 17 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1PostBattle:
# 18 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "我想升职，好使唤\n"
# 19 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "那些小兵……$"
