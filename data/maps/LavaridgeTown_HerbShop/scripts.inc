# 1 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 2 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_MapScripts::
# 3 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 11 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart:
# 17 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 18 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 21 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_POWER_HERB
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NONE
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM::
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan::
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	giveitem ITEM_CHARCOAL
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "欢迎光临药草店，这里\n"
# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "都是有效又便宜的药品！$"
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "你是来釜炎看药草\n"
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "制品的？\p"
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "真是值得称赞。\p"
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "我喜欢你！拿去吧！$"
# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_ExplainCharcoal:
# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "我给你的那根木炭，\n"
# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "是用来制药草的。\p"
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "宝可梦带着它\n"
# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "也很有效。\p"
# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "它能增强火属性\n"
# 65 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "招式的威力。$"
# 66 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 67 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
# 68 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "药草的效果好得惊人。\n"
# 69 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "可宝可梦会因此讨厌你。\l"
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "那味道一定苦极了！$"
