# 1 "data/maps/MossdeepCity_Mart/scripts.pory"

# 2 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_MapScripts::
# 3 "data/maps/MossdeepCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_Mart/scripts.pory"

# 5 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Clerk::
# 6 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCity_Mart_Pokemart
# 11 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 13 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_Mart/scripts.pory"

# 15 "data/maps/MossdeepCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Pokemart:
# 17 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 18 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 19 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 20 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 21 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 22 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 23 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 24 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 25 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 26 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 27 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 28 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 29 "data/maps/MossdeepCity_Mart/scripts.pory"

# 30 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Woman::
# 31 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
# 32 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 33 "data/maps/MossdeepCity_Mart/scripts.pory"

# 34 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Boy::
# 35 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
# 36 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 37 "data/maps/MossdeepCity_Mart/scripts.pory"

# 38 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Sailor::
# 39 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
# 40 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 41 "data/maps/MossdeepCity_Mart/scripts.pory"

# 42 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_ReviveIsFantastic:
# 43 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "活力碎片太棒了！\p"
# 44 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "给昏厥的宝可梦用，\n"
# 45 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "它就能站起来。\p"
# 46 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "不过小心，活力碎片\n"
# 47 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "不会回复用掉的PP。$"
# 48 "data/maps/MossdeepCity_Mart/scripts.pory"

# 49 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_MaxRepelLastsLongest:
# 50 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "黄金喷雾能让所有弱小的\n"
# 51 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "宝可梦都不靠近。\p"
# 52 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "在各种喷雾里，它的\n"
# 53 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "持续时间最长。$"
# 54 "data/maps/MossdeepCity_Mart/scripts.pory"

# 55 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_NetAndDiveBallsRare:
# 56 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "巢穴球和潜水球是只在\n"
# 57 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "绿岭才做的稀有精灵球。\p"
# 58 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "巢穴球对虫属性和\n"
# 59 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "水属性宝可梦有效。\p"
# 60 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "潜水球对海底的宝可梦\n"
# 61 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "最好用。$"
