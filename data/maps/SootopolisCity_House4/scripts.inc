# 1 "data/maps/SootopolisCity_House4/scripts.pory"

# 2 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_MapScripts::
# 3 "data/maps/SootopolisCity_House4/scripts.pory"
	.byte 0

SootopolisCity_House4_EventScript_RelicsMan::
# 8 "data/maps/SootopolisCity_House4/scripts.pory"
	lock
# 9 "data/maps/SootopolisCity_House4/scripts.pory"
	faceplayer
# 11 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_ADAMANT_ORB, SootopolisCity_House4_EventScript_RelicsMan_4
SootopolisCity_House4_EventScript_RelicsMan_1:
# 17 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_PleaseShowLegend, MSGBOX_DEFAULT
# 18 "data/maps/SootopolisCity_House4/scripts.pory"
	special ChoosePartyMon
# 19 "data/maps/SootopolisCity_House4/scripts.pory"
	waitstate
# 20 "data/maps/SootopolisCity_House4/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 21 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_House4_EventScript_CancelLegend
# 22 "data/maps/SootopolisCity_House4/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 23 "data/maps/SootopolisCity_House4/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/SootopolisCity_House4/scripts.pory"
	case SPECIES_DIALGA, SootopolisCity_House4_EventScript_RelicsMan_10
# 38 "data/maps/SootopolisCity_House4/scripts.pory"
	case SPECIES_PALKIA, SootopolisCity_House4_EventScript_RelicsMan_11
# 52 "data/maps/SootopolisCity_House4/scripts.pory"
	case SPECIES_GIRATINA, SootopolisCity_House4_EventScript_RelicsMan_12
# 66 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_NotLegend, MSGBOX_DEFAULT
# 67 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end

SootopolisCity_House4_EventScript_RelicsMan_2:
# 12 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_UseThoseRelics, MSGBOX_DEFAULT
# 13 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end

SootopolisCity_House4_EventScript_RelicsMan_3:
# 11 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_GRISEOUS_ORB, SootopolisCity_House4_EventScript_RelicsMan_2
	goto SootopolisCity_House4_EventScript_RelicsMan_1

SootopolisCity_House4_EventScript_RelicsMan_4:
# 11 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_LUSTROUS_ORB, SootopolisCity_House4_EventScript_RelicsMan_3
	goto SootopolisCity_House4_EventScript_RelicsMan_1

SootopolisCity_House4_EventScript_RelicsMan_8:
# 71 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_UseThatRelic, MSGBOX_DEFAULT
# 72 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end

SootopolisCity_House4_EventScript_RelicsMan_10:
# 25 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_ADAMANT_ORB, SootopolisCity_House4_EventScript_RelicsMan_14
# 32 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_PleaseTakeThisRelic, MSGBOX_DEFAULT
# 33 "data/maps/SootopolisCity_House4/scripts.pory"
	giveitem ITEM_ADAMANT_ORB
# 34 "data/maps/SootopolisCity_House4/scripts.pory"
	giveitem ITEM_ADAMANT_CRYSTAL
# 35 "data/maps/SootopolisCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_ADAMANT_ORB
	goto SootopolisCity_House4_EventScript_RelicsMan_8

SootopolisCity_House4_EventScript_RelicsMan_11:
# 39 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_LUSTROUS_ORB, SootopolisCity_House4_EventScript_RelicsMan_17
# 46 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_PleaseTakeThisRelic, MSGBOX_DEFAULT
# 47 "data/maps/SootopolisCity_House4/scripts.pory"
	giveitem ITEM_LUSTROUS_ORB
# 48 "data/maps/SootopolisCity_House4/scripts.pory"
	giveitem ITEM_LUSTROUS_GLOBE
# 49 "data/maps/SootopolisCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_LUSTROUS_ORB
	goto SootopolisCity_House4_EventScript_RelicsMan_8

SootopolisCity_House4_EventScript_RelicsMan_12:
# 53 "data/maps/SootopolisCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_GRISEOUS_ORB, SootopolisCity_House4_EventScript_RelicsMan_20
# 60 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_PleaseTakeThisRelic, MSGBOX_DEFAULT
# 61 "data/maps/SootopolisCity_House4/scripts.pory"
	giveitem ITEM_GRISEOUS_ORB
# 62 "data/maps/SootopolisCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_GRISEOUS_ORB
	goto SootopolisCity_House4_EventScript_RelicsMan_8

SootopolisCity_House4_EventScript_RelicsMan_14:
# 27 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_AlreadyGaveRelic, MSGBOX_DEFAULT
# 28 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end

SootopolisCity_House4_EventScript_RelicsMan_17:
# 41 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_AlreadyGaveRelic, MSGBOX_DEFAULT
# 42 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end

SootopolisCity_House4_EventScript_RelicsMan_20:
# 55 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_AlreadyGaveRelic, MSGBOX_DEFAULT
# 56 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end


SootopolisCity_House4_EventScript_CancelLegend::
# 77 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_DontHaveLegend, MSGBOX_DEFAULT
# 78 "data/maps/SootopolisCity_House4/scripts.pory"
	release
	end


SootopolisCity_House4_Text_PleaseShowLegend::
# 82 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "哦呀，你看起来\n"
	.string "是个很有前途的年轻训练家。\p"
	.string "我这一生走遍了\n"
	.string "天南地北，手头有些来自\l"
	.string "别的地区的强力遗物，\l"
	.string "想交给一位\l"
	.string "值得信赖的训练家。\p"
	.string "只要你能让我看到一只\n"
	.string "能用这些遗物的宝可梦，\l"
	.string "我就知道你配得上拥有。$"

SootopolisCity_House4_Text_PleaseTakeThisRelic::
# 95 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "哎呀！那正是能用\n"
	.string "这件遗物的宝可梦之一。\p"
	.string "来，你显然是位配得上\n"
	.string "驾驭它力量的训练家。$"

SootopolisCity_House4_Text_UseThatRelic::
# 102 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "我相信你能发挥出\n"
	.string "那件遗物的全部力量。$"

SootopolisCity_House4_Text_UseThoseRelics::
# 107 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "这些就是我多年收集的\n"
	.string "全部遗物。\p"
	.string "希望你好生使用。$"

SootopolisCity_House4_Text_AlreadyGaveRelic::
# 113 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "我已经把适合那只宝可梦的\n"
	.string "遗物给你了。$"

SootopolisCity_House4_Text_DontHaveLegend::
# 118 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "我明白了，你没有能用\n"
	.string "这些遗物的宝可梦。$"

SootopolisCity_House4_Text_NotLegend::
# 122 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "那只宝可梦用不了\n"
	.string "这些遗物。$"
