# 1 "data/maps/LilycoveCity_House2/scripts.pory"

# 2 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_MapScripts::
# 3 "data/maps/LilycoveCity_House2/scripts.pory"
	.byte 0

LilycoveCity_House2_EventScript_FatMan::
# 8 "data/maps/LilycoveCity_House2/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_House2/scripts.pory"
	faceplayer
# 10 "data/maps/LilycoveCity_House2/scripts.pory"
	goto_if_unset FLAG_MET_SILVALLY_GUY, LilycoveCity_House2_EventScript_FatMan_2
# 19 "data/maps/LilycoveCity_House2/scripts.pory"
	checkitemmemory
# 20 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_House2_EventScript_FatMan_5
# 27 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox SilvallyManSwapMemory
# 28 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_0, ITEM_FIGHTING_MEMORY
# 29 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_1, ITEM_FLYING_MEMORY
# 30 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_2, ITEM_POISON_MEMORY
# 31 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_3, ITEM_GROUND_MEMORY
# 32 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_4, ITEM_ROCK_MEMORY
# 33 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_5, ITEM_BUG_MEMORY
# 34 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_6, ITEM_GHOST_MEMORY
# 35 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_7, ITEM_STEEL_MEMORY
# 36 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_8, ITEM_FIRE_MEMORY
# 37 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_9, ITEM_WATER_MEMORY
# 38 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_10, ITEM_GRASS_MEMORY
# 39 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_11, ITEM_ELECTRIC_MEMORY
# 40 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_12, ITEM_PSYCHIC_MEMORY
# 41 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_13, ITEM_ICE_MEMORY
# 42 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_14, ITEM_DRAGON_MEMORY
# 43 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_15, ITEM_DARK_MEMORY
# 44 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_16, ITEM_FAIRY_MEMORY
# 45 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultipush LilycoveCity_House2_EventScript_FatMan_Text_17, MULTI_B_PRESSED
# 48 "data/maps/LilycoveCity_House2/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, ITEM_FIGHTING_MEMORY, DYN_MULTICHOICE_CB_NONE
# 50 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq LilycoveCity_House2_EventScript_FatMan_8
LilycoveCity_House2_EventScript_FatMan_7:
# 55 "data/maps/LilycoveCity_House2/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 56 "data/maps/LilycoveCity_House2/scripts.pory"
	removeitem VAR_0x8004
# 57 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_EventScript_FatMan_Text_18
# 58 "data/maps/LilycoveCity_House2/scripts.pory"
	giveitem VAR_0x8005
# 59 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_EventScript_FatMan_Text_19
# 60 "data/maps/LilycoveCity_House2/scripts.pory"
	release
	end

LilycoveCity_House2_EventScript_FatMan_2:
# 12 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_SilvallyManIntro
# 13 "data/maps/LilycoveCity_House2/scripts.pory"
	giveitem ITEM_DRAGON_MEMORY
# 14 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_SeeGoodMemory
# 15 "data/maps/LilycoveCity_House2/scripts.pory"
	setflag FLAG_MET_SILVALLY_GUY
# 16 "data/maps/LilycoveCity_House2/scripts.pory"
	release
	end

LilycoveCity_House2_EventScript_FatMan_5:
# 22 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_Text_NoMemories
# 23 "data/maps/LilycoveCity_House2/scripts.pory"
	release
	end

LilycoveCity_House2_EventScript_FatMan_8:
# 52 "data/maps/LilycoveCity_House2/scripts.pory"
	goto LilycoveCity_House2_EventScript_SilvallyManNo
	goto LilycoveCity_House2_EventScript_FatMan_7


LilycoveCity_House2_EventScript_SilvallyManNo::
# 66 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_EventScript_SilvallyManNo_Text_0
# 67 "data/maps/LilycoveCity_House2/scripts.pory"
	release
	end


LilycoveCity_House2_EventScript_FatMan_Text_0:
# 28 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "格斗$"

LilycoveCity_House2_EventScript_FatMan_Text_1:
# 29 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "飞行$"

LilycoveCity_House2_EventScript_FatMan_Text_2:
# 30 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "毒$"

LilycoveCity_House2_EventScript_FatMan_Text_3:
# 31 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "地面$"

LilycoveCity_House2_EventScript_FatMan_Text_4:
# 32 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "岩石$"

LilycoveCity_House2_EventScript_FatMan_Text_5:
# 33 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "虫$"

LilycoveCity_House2_EventScript_FatMan_Text_6:
# 34 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "幽灵$"

LilycoveCity_House2_EventScript_FatMan_Text_7:
# 35 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "钢$"

LilycoveCity_House2_EventScript_FatMan_Text_8:
# 36 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "火$"

LilycoveCity_House2_EventScript_FatMan_Text_9:
# 37 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "水$"

LilycoveCity_House2_EventScript_FatMan_Text_10:
# 38 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "草$"

LilycoveCity_House2_EventScript_FatMan_Text_11:
# 39 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "电$"

LilycoveCity_House2_EventScript_FatMan_Text_12:
# 40 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "超能力$"

LilycoveCity_House2_EventScript_FatMan_Text_13:
# 41 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "冰$"

LilycoveCity_House2_EventScript_FatMan_Text_14:
# 42 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "龙$"

LilycoveCity_House2_EventScript_FatMan_Text_15:
# 43 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "恶$"

LilycoveCity_House2_EventScript_FatMan_Text_16:
# 44 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "妖精$"

LilycoveCity_House2_EventScript_FatMan_Text_17:
# 45 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "取消$"

LilycoveCity_House2_EventScript_FatMan_Text_18:
# 57 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "好吧，那我们就交换记忆吧。$"

LilycoveCity_House2_EventScript_FatMan_Text_19:
# 59 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "想再交换记忆的话，\n就再来吧！$"

LilycoveCity_House2_EventScript_SilvallyManNo_Text_0:
# 66 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "随便你，反正我也不想再\n给你记忆了。$"

LilycoveCity_House2_SilvallyManIntro::
# 71 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "我不知道你听说了什么，\n"
	.string "不过我可是有很好的记忆。\p"
	.string "不信？来，看看这个。$"

LilycoveCity_House2_SeeGoodMemory::
# 77 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "想要别的记忆的话，\n"
	.string "随时再来。$"

SilvallyManSwapMemory::
# 82 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "怎么了？那块记忆还\n"
	.string "不够好吗？\p"
	.string "没关系，我多得是。\p"
	.string "来，我甚至让你自己挑，\n"
	.string "不过你得把那块还给我\l"
	.string "作为交换。\p"
	.string "你想要哪块记忆？$"

LilycoveCity_House2_Text_NoMemories::
# 92 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "想得美，你根本\n"
	.string "没有记忆能和我交换！$"
