# 1 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 2 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_MapScripts::
# 3 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 5 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Clerk::
# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_Mart_Pokemart
# 11 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 13 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 14 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 15 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Pokemart:
# 17 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 18 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 19 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 20 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 21 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 22 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 23 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 24 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 25 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 26 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 27 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 28 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 29 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 30 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 31 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 32 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 33 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 34 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 35 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Boy::
# 36 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
# 37 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 38 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 39 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_ExpertF::
# 40 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
# 41 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 42 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 43 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Lass::
# 44 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
# 45 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 46 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 47 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_XSpecialIsCrucial:
# 48 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "不管什么宝可梦对战，\n"
# 49 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "特攻强化都很关键。\p"
# 50 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "虽然只在一场战斗里有效，\n"
# 51 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "但它能大幅提升\l"
# 52 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "某些招式的威力。$"
# 53 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 54 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent:
# 55 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "他们好像不卖对战帐篷\n"
# 56 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "的必胜攻略……\p"
# 57 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "看来还是只能靠\n"
# 58 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "自己的头脑……$"
# 59 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 60 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon:
# 61 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "巢穴球对虚弱的宝可梦\n"
# 62 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "效果更好。\p"
# 63 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "只有绿荫镇能\n"
# 64 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "买到它。$"
