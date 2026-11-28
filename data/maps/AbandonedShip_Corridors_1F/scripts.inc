# 1 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_Youngster::
# 6 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
# 7 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	end
# 8 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_Charlie::
# 10 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat
# 11 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	end
# 13 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 14 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharlieIntro:
# 15 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "我带着游泳圈上船，\n"
# 16 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "有那么好笑吗？$"
# 17 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 18 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharlieDefeat:
# 19 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "哇，你把我打\n"
# 20 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "得毫无还手之力！$"
# 21 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 22 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharliePostBattle:
# 23 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "一边抓着游泳圈一边\n"
# 24 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "扔精灵球可不容易！$"
# 25 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 26 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_IsntItFunHere:
# 27 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "这里好玩吧？\n"
# 28 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "光是待在这儿我就\l"
# 29 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "兴奋！$"
