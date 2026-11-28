# 1 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 2 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_MapScripts::
# 3 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 5 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
# 6 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 7 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 8 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 9 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	checkitem ITEM_SCANNER
# 10 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
# 11 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 12 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
# 13 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 14 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 15 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 16 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
# 17 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
# 18 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 19 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 20 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 21 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
# 22 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
# 23 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 24 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 25 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 26 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner:
# 27 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "我是替史登船长来\n"
# 28 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "调查这条船的。\p"
# 29 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "他也让我找一台扫描仪，\n"
# 30 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "可我没什么收获……$"
# 31 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 32 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner:
# 33 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "哦！那是扫描仪！\p"
# 34 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "听我说，你能把这个\n"
# 35 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "交给史登船长吗？\p"
# 36 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "我还想再调查\n"
# 37 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "这条船一会儿。$"
# 38 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 39 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus:
# 40 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "这条船叫仙人掌号。\n"
# 41 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "好像是更早年代的船。$"
