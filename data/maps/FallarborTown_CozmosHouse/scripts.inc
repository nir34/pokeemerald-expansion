# 1 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 2 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MapScripts::
# 3 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 5 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo::
# 6 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 9 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 11 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 12 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife::
# 13 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 14 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 15 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
# 16 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
# 17 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 18 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 19 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 20 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
# 21 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 24 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 25 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "科斯莫博士：唉……\n"
# 27 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "我真不该被骗，\l"
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "把能找到陨石的地方\l"
# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "告诉熔岩队……\p"
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "流星瀑布那颗陨石……\n"
# 31 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "再也不会属于我了……$"
# 32 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 33 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "科斯莫博士：唉，可是……\n"
# 35 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "我真是失望透顶……$"
# 36 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 37 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
# 38 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "科斯莫博士和几个\n"
# 39 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "熔岩队的人去了\l"
# 40 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "114号道路的\l"
# 41 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "流星瀑布。$"
# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 43 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "可怜的科斯莫博士……\n"
# 45 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "他那么沮丧……真让人心疼。$"
