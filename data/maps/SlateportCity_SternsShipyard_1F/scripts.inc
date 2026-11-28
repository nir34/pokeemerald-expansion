# 1 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 2 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
.set LOCALID_DOCK, 1
# 3 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 4 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_MapScripts::
# 5 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.byte 0
# 6 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 7 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock::
# 8 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	lockall
# 9 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_SternsShipyard_1F_EventScript_FerryReady
# 10 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined
# 11 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran
# 12 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_GoFindStern
# 13 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails, MSGBOX_DEFAULT
# 14 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 15 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern, MSGBOX_DEFAULT
# 17 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 18 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 19 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
# 21 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 22 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 23 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 24 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 25 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_FerryReady::
# 26 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 27 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_FerryIsReady, MSGBOX_DEFAULT
# 29 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 30 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 31 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 32 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined::
# 33 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 34 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs, MSGBOX_DEFAULT
# 36 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 37 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 38 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 39 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_GoFindStern::
# 40 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 41 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern, MSGBOX_DEFAULT
# 43 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 44 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 45 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 47 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 48 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 49 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran::
# 50 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 51 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 52 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran, MSGBOX_DEFAULT
# 53 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 54 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 55 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 56 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist1::
# 57 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing, MSGBOX_NPC
# 58 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 59 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 60 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist2::
# 61 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily, MSGBOX_NPC
# 62 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 63 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 64 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Briney::
# 65 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock, MSGBOX_NPC
# 66 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 67 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 68 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails:
# 69 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "嗯……如果这个放这里，\n"
# 70 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "那个放那边……\p"
# 71 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "那这个东西放哪儿？\n"
# 72 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "还有这个小玩意儿呢？\p"
# 73 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "啊啊啊！我完全\n"
# 74 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "搞不懂！$"
# 75 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 76 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern:
# 77 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "嗯？\n"
# 78 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "嗨，我叫多克。\p"
# 79 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "斯图船长委托我\n"
# 80 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "设计一艘渡轮。\p"
# 81 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "哦！那个是……\n"
# 82 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "是得文的货物吗？\p"
# 83 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "可是，嗯……\n"
# 84 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "这可不行……\p"
# 85 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "斯图船长去哪儿了。\n"
# 86 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "他说有点工作要办。\p"
# 87 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "能不能请你去找斯图船长，\n"
# 88 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "把这个交给他？$"
# 89 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 90 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern:
# 91 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "多克：斯图船长\n"
# 92 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "到底去哪儿了？\p"
# 93 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "能不能请你去找斯图船长，\n"
# 94 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "把包裹交给他？$"
# 95 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 96 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran:
# 97 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "多克：造船是一门艺术。\p"
# 98 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "很多事情光靠计算\n"
# 99 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "是弄不明白的。\p"
# 100 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "我真想听听熟悉大海的\n"
# 101 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "老前辈的意见……$"
# 102 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 103 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs:
# 104 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "多克：嗨！布林尼先生来帮\n"
# 105 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "我们的忙了。\p"
# 106 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "多亏这位老船员，\n"
# 107 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "渡轮正稳步成形。$"
# 108 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 109 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_FerryIsReady:
# 110 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "多克：渡轮终于完工了！\p"
# 111 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "新的潮汐号真是\n"
# 112 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "技术的奇迹！\p"
# 113 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "不过我总觉得，我们还能\n"
# 114 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "造出更好的东西。\p"
# 115 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "你知道，技术的脚步\n"
# 116 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "永远不会停。$"
# 117 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 118 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock:
# 119 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "布林尼先生：啊，{PLAYER}！\n"
# 120 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "好久不见！\p"
# 121 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "自从遇见你，我这老水手\n"
# 122 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "又精神起来了！\p"
# 123 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "所以我决定帮多克\n"
# 124 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "造渡轮。\p"
# 125 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "毕竟渡轮能载\n"
# 126 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "很多人啊。\p"
# 127 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "不过，那个多克真是\n"
# 128 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "了不起。\p"
# 129 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "凭他的技术和我的经验，\n"
# 130 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "我们一定能造出\l"
# 131 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "一艘好船，没错！$"
# 132 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 133 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing:
# 134 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "季节、天气、月亮\n"
# 135 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "在天空中的位置……\p"
# 136 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "这些条件让大海\n"
# 137 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "不断变换表情。\p"
# 138 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "没错！\n"
# 139 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "大海就像活的一样！$"
# 140 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 141 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily:
# 142 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "我特别容易晕船。\n"
# 143 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "所以就在这里帮忙了。$"
