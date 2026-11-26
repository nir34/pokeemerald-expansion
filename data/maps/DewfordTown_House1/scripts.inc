# 1 "data/maps/DewfordTown_House1/scripts.pory"

# 2 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_MapScripts::
# 3 "data/maps/DewfordTown_House1/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_House1/scripts.pory"

# 5 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Man::
# 6 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
# 7 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 8 "data/maps/DewfordTown_House1/scripts.pory"

# 9 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Woman::
# 10 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
# 11 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 12 "data/maps/DewfordTown_House1/scripts.pory"

# 13 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Zigzagoon::
# 14 "data/maps/DewfordTown_House1/scripts.pory"
	lock
# 15 "data/maps/DewfordTown_House1/scripts.pory"
	faceplayer
# 16 "data/maps/DewfordTown_House1/scripts.pory"
	waitse
# 17 "data/maps/DewfordTown_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 18 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 19 "data/maps/DewfordTown_House1/scripts.pory"
	waitmoncry
# 20 "data/maps/DewfordTown_House1/scripts.pory"
	release
# 21 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 22 "data/maps/DewfordTown_House1/scripts.pory"

# 23 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
# 24 "data/maps/DewfordTown_House1/scripts.pory"
	.string "住在这种小岛上，和宝可梦、\n"
# 25 "data/maps/DewfordTown_House1/scripts.pory"
	.string "家人和睦相处，\l"
# 26 "data/maps/DewfordTown_House1/scripts.pory"
	.string "好处真是说不完。$"
# 27 "data/maps/DewfordTown_House1/scripts.pory"

# 28 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
# 29 "data/maps/DewfordTown_House1/scripts.pory"
	.string "我离开大港口凯那市，\n"
# 30 "data/maps/DewfordTown_House1/scripts.pory"
	.string "嫁到这里来。\p"
# 31 "data/maps/DewfordTown_House1/scripts.pory"
	.string "这座小岛上的日子过得很慢。\n"
# 32 "data/maps/DewfordTown_House1/scripts.pory"
	.string "不过被美丽的大海\l"
# 33 "data/maps/DewfordTown_House1/scripts.pory"
	.string "包围着——那也是一种幸福。$"
# 34 "data/maps/DewfordTown_House1/scripts.pory"

# 35 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_Zigzagoon:
# 36 "data/maps/DewfordTown_House1/scripts.pory"
	.string "蛇纹熊：咕咕呜！$"
