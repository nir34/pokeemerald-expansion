# 1 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
# 6 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 10 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
# 11 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 13 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 15 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 16 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins:
# 17 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTEIN
# 18 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CALCIUM
# 19 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_IRON
# 20 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ZINC
# 21 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CARBOS
# 22 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HP_UP
# 23 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 24 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 25 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 27 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
# 28 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 29 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 31 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 32 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
# 33 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 34 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 35 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 36 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 37 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 38 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
# 39 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SPEED
# 40 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 41 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ATTACK
# 42 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 43 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 44 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 45 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 46 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 47 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 48 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 49 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 50 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
# 51 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
# 52 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 54 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
# 55 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
# 56 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 57 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 58 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_Woman::
# 59 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
# 60 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 61 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 62 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
# 63 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "想让宝可梦迅速变强，\n"
# 64 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "道具最好。\p"
# 65 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "蛋白质提升攻击，\n"
# 66 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "钙片提升特攻。$"
# 67 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 68 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
# 69 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "我想让宝可梦更耐打。\p"
# 70 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "我正犹豫是用铁提升\n"
# 71 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "防御，还是用锌提升\l"
# 72 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "特防。$"
# 73 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 74 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
# 75 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "我给宝可梦喝了碳水\n"
# 76 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "饮料，速度提升了。$"
