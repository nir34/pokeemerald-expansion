# 1 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 2 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_MapScripts::
# 3 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 5 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_EventScript_PokefanM::
# 6 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox FortreeCity_DecorationShop_Text_MerchandiseSentToPC, MSGBOX_NPC
# 7 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	end
# 8 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 9 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_EventScript_Girl::
# 10 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox FortreeCity_DecorationShop_Text_BuyingDeskForDolls, MSGBOX_NPC
# 11 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	end
# 12 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 13 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_EventScript_ClerkDesks::
# 14 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	lock
# 15 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	faceplayer
# 16 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	waitmessage
# 18 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	pokemartdecoration FortreeCity_DecorationShop_PokemartDecor_Desks
# 19 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 20 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	release
# 21 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	end
# 22 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 23 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.align 2
# 24 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_PokemartDecor_Desks:
# 25 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_SMALL_DESK
# 26 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_POKEMON_DESK
# 27 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_HEAVY_DESK
# 28 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_RAGGED_DESK
# 29 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_COMFORT_DESK
# 30 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_BRICK_DESK
# 31 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_CAMP_DESK
# 32 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_HARD_DESK
# 33 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_NONE
# 34 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	release
# 35 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	end
# 36 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 37 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_EventScript_ClerkChairs::
# 38 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	lock
# 39 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	faceplayer
# 40 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	message gText_HowMayIServeYou
# 41 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	waitmessage
# 42 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	pokemartdecoration FortreeCity_DecorationShop_PokemartDecor_Chairs
# 43 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 44 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	release
# 45 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	end
# 46 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 47 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.align 2
# 48 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_PokemartDecor_Chairs:
# 49 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_SMALL_CHAIR
# 50 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_POKEMON_CHAIR
# 51 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_HEAVY_CHAIR
# 52 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_RAGGED_CHAIR
# 53 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_COMFORT_CHAIR
# 54 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_BRICK_CHAIR
# 55 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_CAMP_CHAIR
# 56 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_HARD_CHAIR
# 57 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_NONE
# 58 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	release
# 59 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	end
# 60 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 61 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_Text_MerchandiseSentToPC:
# 62 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "在这里买的东西会送到\n"
# 63 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "你自己的电脑里。\p"
# 64 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "太棒了！真希望他们也能\n"
# 65 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "这样把我送回家。$"
# 66 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 67 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_Text_BuyingDeskForDolls:
# 68 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "我在买一张漂亮的桌子，\n"
# 69 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "要把可爱的玩偶放上去。\p"
# 70 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "不然装饰秘密基地时，\n"
# 71 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "玩偶会弄脏，\l"
# 72 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "还会被木刺扎到。$"
