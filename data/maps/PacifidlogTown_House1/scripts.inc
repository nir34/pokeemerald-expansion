# 1 "data/maps/PacifidlogTown_House1/scripts.pory"

# 2 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_MapScripts::
# 3 "data/maps/PacifidlogTown_House1/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House1/scripts.pory"

# 5 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_EventScript_Woman::
# 6 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_Text_SixDotsOpenThreeDoors, MSGBOX_NPC
# 7 "data/maps/PacifidlogTown_House1/scripts.pory"
	end
# 8 "data/maps/PacifidlogTown_House1/scripts.pory"

# 9 "data/maps/PacifidlogTown_House1/scripts.pory"
PacifidlogTown_House1_Text_SixDotsOpenThreeDoors:
# 10 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "“六个点开三道门。”\p"
# 11 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "爷爷以前常这么说，\n"
# 12 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "可我不知道什么意思。$"

PacifidlogTown_House1_EventScript_Man::
# 17 "data/maps/PacifidlogTown_House1/scripts.pory"
	lock
# 18 "data/maps/PacifidlogTown_House1/scripts.pory"
	faceplayer
# 19 "data/maps/PacifidlogTown_House1/scripts.pory"
	goto_if_unset FLAG_MET_GENESECT_GUY, PacifidlogTown_House1_EventScript_Man_2
# 28 "data/maps/PacifidlogTown_House1/scripts.pory"
	checkitemdrive
# 29 "data/maps/PacifidlogTown_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_House1_EventScript_Man_5
# 36 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox GenesectManSwapDrive
# 37 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultipush PacifidlogTown_House1_EventScript_Man_Text_0, ITEM_DOUSE_DRIVE
# 38 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultipush PacifidlogTown_House1_EventScript_Man_Text_1, ITEM_SHOCK_DRIVE
# 39 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultipush PacifidlogTown_House1_EventScript_Man_Text_2, ITEM_BURN_DRIVE
# 40 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultipush PacifidlogTown_House1_EventScript_Man_Text_3, ITEM_CHILL_DRIVE
# 41 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultipush PacifidlogTown_House1_EventScript_Man_Text_4, MULTI_B_PRESSED
# 44 "data/maps/PacifidlogTown_House1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, ITEM_DOUSE_DRIVE, DYN_MULTICHOICE_CB_NONE
# 46 "data/maps/PacifidlogTown_House1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq PacifidlogTown_House1_EventScript_Man_8
PacifidlogTown_House1_EventScript_Man_7:
# 51 "data/maps/PacifidlogTown_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 52 "data/maps/PacifidlogTown_House1/scripts.pory"
	removeitem VAR_0x8004
# 53 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_EventScript_Man_Text_5
# 54 "data/maps/PacifidlogTown_House1/scripts.pory"
	giveitem VAR_0x8005
# 55 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_EventScript_Man_Text_6
# 56 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end

PacifidlogTown_House1_EventScript_Man_2:
# 21 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_GenesectManIntro
# 22 "data/maps/PacifidlogTown_House1/scripts.pory"
	giveitem ITEM_DOUSE_DRIVE
# 23 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_SeeGoodDrive
# 24 "data/maps/PacifidlogTown_House1/scripts.pory"
	setflag FLAG_MET_GENESECT_GUY
# 25 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end

PacifidlogTown_House1_EventScript_Man_5:
# 31 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_Text_NoDrives
# 32 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end

PacifidlogTown_House1_EventScript_Man_8:
# 48 "data/maps/PacifidlogTown_House1/scripts.pory"
	goto PacifidlogTown_House1_EventScript_GenesectManNo
	goto PacifidlogTown_House1_EventScript_Man_7


PacifidlogTown_House1_EventScript_GenesectManNo::
# 62 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_EventScript_GenesectManNo_Text_0
# 63 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end


PacifidlogTown_House1_EventScript_Man_Text_0:
# 37 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "水流$"

PacifidlogTown_House1_EventScript_Man_Text_1:
# 38 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "闪电$"

PacifidlogTown_House1_EventScript_Man_Text_2:
# 39 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "火焰$"

PacifidlogTown_House1_EventScript_Man_Text_3:
# 40 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "冰冻$"

PacifidlogTown_House1_EventScript_Man_Text_4:
# 41 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "取消$"

PacifidlogTown_House1_EventScript_Man_Text_5:
# 53 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "好啊，那我们交换卡带吧。$"

PacifidlogTown_House1_EventScript_Man_Text_6:
# 55 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "想再交换卡带的话\n就再来吧！$"

PacifidlogTown_House1_EventScript_GenesectManNo_Text_0:
# 62 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "没关系，你随时都可以\n回来找我交换卡带。$"

PacifidlogTown_House1_GenesectManIntro::
# 67 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "大家都说我特别有\n"
	.string "干劲，可他们不知道，\l"
	.string "我只是有很多卡带。\p"
	.string "想看看我什么意思吗？\n"
	.string "来，拿着这个。$"

PacifidlogTown_House1_SeeGoodDrive::
# 75 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "想要别的卡带，\n"
	.string "随时再来。$"

GenesectManSwapDrive::
# 80 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "哦，你回来了！是说\n"
	.string "你想交换卡带吗？\p"
	.string "太好了！你想要哪张卡带？$"

PacifidlogTown_House1_Text_NoDrives::
# 86 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "嗯？你身上没有\n"
	.string "能和我交换的卡带。$"
