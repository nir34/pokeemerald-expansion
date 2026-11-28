# 1 "data/maps/SootopolisCity_House2/scripts.pory"

# 2 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_MapScripts::
# 3 "data/maps/SootopolisCity_House2/scripts.pory"
	.byte 0

SootopolisCity_House2_EventScript_ExpertF::
# 8 "data/maps/SootopolisCity_House2/scripts.pory"
	lock
# 9 "data/maps/SootopolisCity_House2/scripts.pory"
	faceplayer
# 10 "data/maps/SootopolisCity_House2/scripts.pory"
	goto_if_unset FLAG_MET_ARCEUS_EXPERT, SootopolisCity_House2_EventScript_ExpertF_2
# 19 "data/maps/SootopolisCity_House2/scripts.pory"
	checkitemplate
# 20 "data/maps/SootopolisCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_House2_EventScript_ExpertF_5
# 27 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox ArceusExpertSwapPlate
# 28 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_0, ITEM_FIST_PLATE
# 29 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_1, ITEM_SKY_PLATE
# 30 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_2, ITEM_TOXIC_PLATE
# 31 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_3, ITEM_EARTH_PLATE
# 32 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_4, ITEM_STONE_PLATE
# 33 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_5, ITEM_INSECT_PLATE
# 34 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_6, ITEM_SPOOKY_PLATE
# 35 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_7, ITEM_IRON_PLATE
# 36 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_8, ITEM_FLAME_PLATE
# 37 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_9, ITEM_SPLASH_PLATE
# 38 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_10, ITEM_MEADOW_PLATE
# 39 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_11, ITEM_ZAP_PLATE
# 40 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_12, ITEM_MIND_PLATE
# 41 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_13, ITEM_ICICLE_PLATE
# 42 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_14, ITEM_DRACO_PLATE
# 43 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_15, ITEM_DREAD_PLATE
# 44 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_16, ITEM_PIXIE_PLATE
# 45 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultipush SootopolisCity_House2_EventScript_ExpertF_Text_17, MULTI_B_PRESSED
# 48 "data/maps/SootopolisCity_House2/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, ITEM_FIST_PLATE, DYN_MULTICHOICE_CB_NONE
# 50 "data/maps/SootopolisCity_House2/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq SootopolisCity_House2_EventScript_ExpertF_8
SootopolisCity_House2_EventScript_ExpertF_7:
# 55 "data/maps/SootopolisCity_House2/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 56 "data/maps/SootopolisCity_House2/scripts.pory"
	removeitem VAR_0x8004
# 57 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_EventScript_ExpertF_Text_18
# 58 "data/maps/SootopolisCity_House2/scripts.pory"
	giveitem VAR_0x8005
# 59 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_EventScript_ExpertF_Text_19
# 60 "data/maps/SootopolisCity_House2/scripts.pory"
	release
	end

SootopolisCity_House2_EventScript_ExpertF_2:
# 12 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_ArceusExpertIntro
# 13 "data/maps/SootopolisCity_House2/scripts.pory"
	giveitem ITEM_DRACO_PLATE
# 14 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_SeeGoodPlate
# 15 "data/maps/SootopolisCity_House2/scripts.pory"
	setflag FLAG_MET_ARCEUS_EXPERT
# 16 "data/maps/SootopolisCity_House2/scripts.pory"
	release
	end

SootopolisCity_House2_EventScript_ExpertF_5:
# 22 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_NoPlates
# 23 "data/maps/SootopolisCity_House2/scripts.pory"
	release
	end

SootopolisCity_House2_EventScript_ExpertF_8:
# 52 "data/maps/SootopolisCity_House2/scripts.pory"
	goto SootopolisCity_House2_EventScript_ArceusExpertNo
	goto SootopolisCity_House2_EventScript_ExpertF_7


SootopolisCity_House2_EventScript_ArceusExpertNo::
# 66 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_EventScript_ArceusExpertNo_Text_0
# 67 "data/maps/SootopolisCity_House2/scripts.pory"
	release
	end


SootopolisCity_House2_EventScript_ExpertF_Text_0:
# 28 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "格斗$"

SootopolisCity_House2_EventScript_ExpertF_Text_1:
# 29 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "飞行$"

SootopolisCity_House2_EventScript_ExpertF_Text_2:
# 30 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "毒$"

SootopolisCity_House2_EventScript_ExpertF_Text_3:
# 31 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "地面$"

SootopolisCity_House2_EventScript_ExpertF_Text_4:
# 32 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "岩石$"

SootopolisCity_House2_EventScript_ExpertF_Text_5:
# 33 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "虫$"

SootopolisCity_House2_EventScript_ExpertF_Text_6:
# 34 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "幽灵$"

SootopolisCity_House2_EventScript_ExpertF_Text_7:
# 35 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "钢$"

SootopolisCity_House2_EventScript_ExpertF_Text_8:
# 36 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "火$"

SootopolisCity_House2_EventScript_ExpertF_Text_9:
# 37 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "水$"

SootopolisCity_House2_EventScript_ExpertF_Text_10:
# 38 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "草$"

SootopolisCity_House2_EventScript_ExpertF_Text_11:
# 39 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "电$"

SootopolisCity_House2_EventScript_ExpertF_Text_12:
# 40 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "超能力$"

SootopolisCity_House2_EventScript_ExpertF_Text_13:
# 41 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "冰$"

SootopolisCity_House2_EventScript_ExpertF_Text_14:
# 42 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "龙$"

SootopolisCity_House2_EventScript_ExpertF_Text_15:
# 43 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "恶$"

SootopolisCity_House2_EventScript_ExpertF_Text_16:
# 44 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "妖精$"

SootopolisCity_House2_EventScript_ExpertF_Text_17:
# 45 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "取消$"

SootopolisCity_House2_EventScript_ExpertF_Text_18:
# 57 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "好选择，我们交换石板吧。$"

SootopolisCity_House2_EventScript_ExpertF_Text_19:
# 59 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "想再交换石板\n就再来吧。$"

SootopolisCity_House2_EventScript_ArceusExpertNo_Text_0:
# 66 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "我明白了，改主意\n再来吧。$"

SootopolisCity_House2_ArceusExpertIntro::
# 71 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "你好，年轻的训练家。从你的\n"
	.string "表情我就看得出，你有能力\l"
	.string "正确使用这件道具；我一直在\l"
	.string "等像你这样的人。$"

SootopolisCity_House2_SeeGoodPlate::
# 78 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "我花了好几年收集这些\n"
	.string "石板，想换一块别的\l"
	.string "属性的石板就再来。$"

ArceusExpertSwapPlate::
# 84 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "欢迎回来，年轻的训练家。看来\n"
	.string "你想交换石板。\p"
	.string "你想要哪块石板？$"

SootopolisCity_House2_Text_NoPlates::
# 90 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "啊，看来你身上\n"
	.string "没有石板。有了再来吧。$"
