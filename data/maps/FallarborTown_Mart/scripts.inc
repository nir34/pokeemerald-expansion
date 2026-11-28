# 1 "data/maps/FallarborTown_Mart/scripts.pory"

# 2 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_MapScripts::
# 3 "data/maps/FallarborTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_Mart/scripts.pory"

# 5 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk::
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 11 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 14 "data/maps/FallarborTown_Mart/scripts.pory"

# 15 "data/maps/FallarborTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart:
# 17 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 22 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 23 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 24 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 25 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 26 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 27 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 28 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 29 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 30 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 31 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 32 "data/maps/FallarborTown_Mart/scripts.pory"

# 33 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Woman::
# 34 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
# 35 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 36 "data/maps/FallarborTown_Mart/scripts.pory"

# 37 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_PokefanM::
# 38 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
# 39 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 40 "data/maps/FallarborTown_Mart/scripts.pory"

# 41 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Skitty::
# 42 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 43 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 44 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 45 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 46 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 47 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 48 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 49 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 50 "data/maps/FallarborTown_Mart/scripts.pory"

# 51 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_FormerMetronomeTutor::
# 52 "data/maps/FallarborTown_Mart/scripts.pory"
	lockall
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 54 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_FormerMetronomeTutor, MSGBOX_DEFAULT
# 55 "data/maps/FallarborTown_Mart/scripts.pory"
	releaseall
# 56 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 57 "data/maps/FallarborTown_Mart/scripts.pory"

# 58 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_FormerMetronomeTutor:
# 59 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "我以前节奏感可好了……\n"
# 60 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "唉，到底怎么了呢？$"
# 61 "data/maps/FallarborTown_Mart/scripts.pory"

# 62 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_DecidingSkittyEvolve:
# 63 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "我一直在犹豫要不要\n"
# 64 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "让我的向尾喵进化。\p"
# 65 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "只要用这块月之石就行，\n"
# 66 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "可就是下不了决心……\p"
# 67 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "让它进化，它会变得\n"
# 68 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "强很多。\p"
# 69 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "可样子也会变得\n"
# 70 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "完全不一样。$"
# 71 "data/maps/FallarborTown_Mart/scripts.pory"

# 72 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_Skitty:
# 73 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "向尾喵：喵哟？$"
# 74 "data/maps/FallarborTown_Mart/scripts.pory"

# 75 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_SellNuggetIFound:
# 76 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "我在这里捡到的金珠……\n"
# 77 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "反正也没别的用，\l"
# 78 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "看来只能卖掉了。$"
