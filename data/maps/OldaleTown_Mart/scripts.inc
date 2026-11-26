# 1 "data/maps/OldaleTown_Mart/scripts.pory"

# 2 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_Mart/scripts.pory"

# 5 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 15 "data/maps/OldaleTown_Mart/scripts.pory"

# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 25 "data/maps/OldaleTown_Mart/scripts.pory"

# 26 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 31 "data/maps/OldaleTown_Mart/scripts.pory"

# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 42 "data/maps/OldaleTown_Mart/scripts.pory"

# 43 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 46 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 47 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 50 "data/maps/OldaleTown_Mart/scripts.pory"

# 51 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 52 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 55 "data/maps/OldaleTown_Mart/scripts.pory"

# 56 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 59 "data/maps/OldaleTown_Mart/scripts.pory"

# 60 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "店员说全都卖完了。\n"
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "我买不到精灵球。$"
# 63 "data/maps/OldaleTown_Mart/scripts.pory"

# 64 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "我要买一堆精灵球，\n"
# 66 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "抓一堆宝可梦！$"
# 67 "data/maps/OldaleTown_Mart/scripts.pory"

# 68 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 69 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "宝可梦受伤失去HP倒下后，\n"
# 70 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "就无法战斗了。\p"
# 71 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "为了防止宝可梦倒下，\n"
# 72 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "就用伤药回复HP吧。$"
