# 1 "data/maps/FortreeCity_Mart/scripts.pory"

# 2 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_MapScripts::
# 3 "data/maps/FortreeCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_Mart/scripts.pory"

# 5 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Clerk::
# 6 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_Mart_Pokemart
# 11 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FortreeCity_Mart/scripts.pory"
	release
# 13 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 14 "data/maps/FortreeCity_Mart/scripts.pory"

# 15 "data/maps/FortreeCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Pokemart:
# 17 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 21 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 22 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 23 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 24 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 25 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 26 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 27 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WOOD_MAIL
# 28 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 29 "data/maps/FortreeCity_Mart/scripts.pory"
	release
# 30 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 31 "data/maps/FortreeCity_Mart/scripts.pory"

# 32 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Woman::
# 33 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
# 34 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 35 "data/maps/FortreeCity_Mart/scripts.pory"

# 36 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Girl::
# 37 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
# 38 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 39 "data/maps/FortreeCity_Mart/scripts.pory"

# 40 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Boy::
# 41 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
# 42 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 43 "data/maps/FortreeCity_Mart/scripts.pory"

# 44 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_SuperRepelBetter:
# 45 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "白银喷雾持续时间长，\n"
# 46 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "效果也很好。\p"
# 47 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "比普通的驱虫喷雾\n"
# 48 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "好多了。$"
# 49 "data/maps/FortreeCity_Mart/scripts.pory"

# 50 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_StockUpOnItems:
# 51 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "我总是多买一些\n"
# 52 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "用不完的道具。\p"
# 53 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "谁知道会遇到什么呢。\n"
# 54 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "有备无患！$"
# 55 "data/maps/FortreeCity_Mart/scripts.pory"

# 56 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_RareCandyMakesMonGrow:
# 57 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "神奇糖果能让宝可梦\n"
# 58 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "立刻升一级。$"
