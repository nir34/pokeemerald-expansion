# 1 "data/maps/Route114_LanettesHouse/scripts.pory"

# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_MapScripts::
# 3 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
# 4 "data/maps/Route114_LanettesHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route114_LanettesHouse/scripts.pory"

# 6 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_OnTransition:
# 7 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
# 8 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 9 "data/maps/Route114_LanettesHouse/scripts.pory"

# 10 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Lanette::
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 12 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOLL_LANETTE, Route114_LanettesHouse_EventScript_OfferAdvice
# 14 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 15 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EverythingClutteredKeepThis, MSGBOX_DEFAULT
# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
	givedecoration DECOR_LOTAD_DOLL
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowNoRoomForDecor
# 18 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_RECEIVED_DOLL_LANETTE
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 20 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 21 "data/maps/Route114_LanettesHouse/scripts.pory"

# 22 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_OfferAdvice::
# 23 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_OrganizeYourBoxes, MSGBOX_DEFAULT
# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"

# 27 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Notebook::
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
	lockall
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage1, MSGBOX_YESNO
# 30 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage2
# 31 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ClosedTheNotebook, MSGBOX_DEFAULT
# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 33 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"

# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage2::
# 36 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage2, MSGBOX_YESNO
# 37 "data/maps/Route114_LanettesHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage3
# 38 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 40 "data/maps/Route114_LanettesHouse/scripts.pory"

# 41 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage3::
# 42 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage3, MSGBOX_DEFAULT
# 43 "data/maps/Route114_LanettesHouse/scripts.pory"
	return
# 44 "data/maps/Route114_LanettesHouse/scripts.pory"

# 45 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_PC::
# 46 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
# 47 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 48 "data/maps/Route114_LanettesHouse/scripts.pory"

# 49 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EverythingClutteredKeepThis:
# 50 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "拉奈特：哦！{PLAYER}！\p"
# 51 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "抱歉这里这么乱……\n"
# 52 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "我一埋头研究，\l"
# 53 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "就会变成这样……\p"
# 54 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "太丢人了……这个给你，\n"
# 55 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "请你替我保密。$"
# 56 "data/maps/Route114_LanettesHouse/scripts.pory"

# 57 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_OrganizeYourBoxes:
# 58 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "要我讲讲我的宝可梦\n"
# 59 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "寄存系统吗？\p"
# 60 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "你该整理一下盒子，\n"
# 61 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "这样才能看清\l"
# 62 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "里面有哪些宝可梦。$"
# 63 "data/maps/Route114_LanettesHouse/scripts.pory"

# 64 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage1:
# 65 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "这是拉奈特的研究笔记。\n"
# 66 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "里面有关于盒子的资料。\p"
# 67 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "把每个盒子设计成\n"
# 68 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "能放30只宝可梦。\p"
# 69 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "每个训练家应该能\n"
# 70 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "在电脑系统里\l"
# 71 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "存420只宝可梦。\p"
# 72 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "继续读吗？$"
# 73 "data/maps/Route114_LanettesHouse/scripts.pory"

# 74 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage2:
# 75 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "应该加入标记系统，\n"
# 76 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "让宝可梦更容易整理。\p"
# 77 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "每个盒子的名称和壁纸\n"
# 78 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "都做成可更改的，\l"
# 79 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "好让存放的宝可梦高兴。\p"
# 80 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "继续读吗？$"
# 81 "data/maps/Route114_LanettesHouse/scripts.pory"

# 82 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage3:
# 83 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "存放宝可梦时，应该\n"
# 84 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "送进最后查看过的盒子。\p"
# 85 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "如果那个盒子满了，\n"
# 86 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "收到的宝可梦\l"
# 87 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "就存进下一个盒子。\p"
# 88 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "也就是说，查看一个\n"
# 89 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "盒子时，它就会自动\l"
# 90 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "被选为接收宝可梦的盒子。$"
# 91 "data/maps/Route114_LanettesHouse/scripts.pory"

# 92 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ClosedTheNotebook:
# 93 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{PLAYER}合上了笔记本。$"
# 94 "data/maps/Route114_LanettesHouse/scripts.pory"

# 95 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EmailFromBill:
# 96 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "电脑里有一封某人\n"
# 97 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "发来的邮件。\p"
# 98 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“…… … … … … …\p"
# 99 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“你的寄存系统比我的\n"
# 100 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "更方便。\p"
# 101 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“它有很多贴心的功能，\n"
# 102 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "又好用又好玩。\p"
# 103 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“能为它的开发出一份力，\n"
# 104 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "我很自豪。\p"
# 105 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“希望你能继续研究\n"
# 106 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "寄存系统。\p"
# 107 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“——正辉\n"
# 108 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "… … … … … … … …”$"
