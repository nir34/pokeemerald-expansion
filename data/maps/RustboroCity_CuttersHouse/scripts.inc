# 1 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 2 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_MapScripts::
# 3 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Cutter::
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_ExplainCut
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, RustboroCity_CuttersHouse_NoBadgeYet
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 14 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 15 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 16 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_ExplainCut::
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 20 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 21 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 22 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_NoBadgeYet::
# 23 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_NoBadge, MSGBOX_DEFAULT
# 24 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 25 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 26 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 27 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Lass::
# 28 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
# 29 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 30 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 31 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse:
# 32 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "嘿，那是岩石徽章！\n"
# 33 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "干得好，这个给你！\p"
# 34 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "我相信你一定能好好\n"
# 35 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "使用这个秘传学习器。\p"
# 36 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "别客气，别害羞。\n"
# 37 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "来，拿去吧！$"
# 38 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 39 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_ExplainCut:
# 40 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "这个秘传学习器，\n"
# 41 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "就是居合斩。\p"
# 42 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "秘传招式就是能在战斗\n"
# 43 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "以外使用的招式。\p"
# 44 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "不过现在，不需要让\n"
# 45 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "宝可梦学会秘传招式，\l"
# 46 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "也能在战斗之外使用。\p"
# 47 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "只要背包里带着它，\n"
# 48 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "并且拥有相应的徽章，\l"
# 49 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "就可以随时使用！\p"
# 50 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "而且，秘传招式随时可以\n"
# 51 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "忘记，就像普通招式一样！\l"
# 52 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "很神奇吧？$"
# 53 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 54 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	RustboroCity_CuttersHouse_Text_NoBadge:
# 55 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "等你拿到第一个道馆\n"
# 56 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "徽章再来吧，\l我会给你奖励的。$"
# 57 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 58 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees:
# 59 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "当年卡那兹市扩建时，\n"
# 60 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "我爸爸也出了一份力。\p"
# 61 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "他让宝可梦用居合斩\n"
# 62 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "清掉了那些树木。$"
