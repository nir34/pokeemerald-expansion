# 1 "data/maps/FallarborTown/scripts.pory"

# 2 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 3 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 4 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 5 "data/maps/FallarborTown/scripts.pory"

# 6 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 7 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 8 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 9 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 10 "data/maps/FallarborTown/scripts.pory"
	end
# 11 "data/maps/FallarborTown/scripts.pory"

# 12 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 13 "data/maps/FallarborTown/scripts.pory"
	lock
# 14 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 15 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 16 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 17 "data/maps/FallarborTown/scripts.pory"
	release
# 18 "data/maps/FallarborTown/scripts.pory"
	end
# 19 "data/maps/FallarborTown/scripts.pory"

# 20 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 21 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 22 "data/maps/FallarborTown/scripts.pory"
	release
# 23 "data/maps/FallarborTown/scripts.pory"
	end
# 24 "data/maps/FallarborTown/scripts.pory"

# 25 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 26 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 27 "data/maps/FallarborTown/scripts.pory"
	end
# 28 "data/maps/FallarborTown/scripts.pory"

# 29 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 30 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 31 "data/maps/FallarborTown/scripts.pory"
	end
# 32 "data/maps/FallarborTown/scripts.pory"

# 33 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 34 "data/maps/FallarborTown/scripts.pory"
	lock
# 35 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 36 "data/maps/FallarborTown/scripts.pory"
	waitse
# 37 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 38 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 39 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 40 "data/maps/FallarborTown/scripts.pory"
	release
# 41 "data/maps/FallarborTown/scripts.pory"
	end
# 42 "data/maps/FallarborTown/scripts.pory"

# 43 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 44 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 45 "data/maps/FallarborTown/scripts.pory"
	end
# 46 "data/maps/FallarborTown/scripts.pory"

# 47 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 48 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 49 "data/maps/FallarborTown/scripts.pory"
	end
# 50 "data/maps/FallarborTown/scripts.pory"

# 51 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 52 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 53 "data/maps/FallarborTown/scripts.pory"
	end
# 54 "data/maps/FallarborTown/scripts.pory"

# 55 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 56 "data/maps/FallarborTown/scripts.pory"
	.string "出事了，我可不\n"
# 57 "data/maps/FallarborTown/scripts.pory"
	.string "喜欢这样！\p"
# 58 "data/maps/FallarborTown/scripts.pory"
	.string "我看见一些可疑的家伙\n"
# 59 "data/maps/FallarborTown/scripts.pory"
	.string "在科斯莫博士家\l"
# 60 "data/maps/FallarborTown/scripts.pory"
	.string "进进出出……$"
# 61 "data/maps/FallarborTown/scripts.pory"

# 62 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 63 "data/maps/FallarborTown/scripts.pory"
	.string "这个地方自古以来\n"
# 64 "data/maps/FallarborTown/scripts.pory"
	.string "就以陨石闻名。\p"
# 65 "data/maps/FallarborTown/scripts.pory"
	.string "据说流星瀑布是很久\n"
# 66 "data/maps/FallarborTown/scripts.pory"
	.string "以前一颗落下的陨石\l"
# 67 "data/maps/FallarborTown/scripts.pory"
	.string "砸出来的。$"
# 68 "data/maps/FallarborTown/scripts.pory"

# 69 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 70 "data/maps/FallarborTown/scripts.pory"
	.string "看！你看！\n"
# 71 "data/maps/FallarborTown/scripts.pory"
	.string "这是我最宝贝的露力丽！\p"
# 72 "data/maps/FallarborTown/scripts.pory"
	.string "它又滑又软，还毛茸茸的！$"
# 73 "data/maps/FallarborTown/scripts.pory"

# 74 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 75 "data/maps/FallarborTown/scripts.pory"
	.string "露力丽：露哩噜噜。$"
# 76 "data/maps/FallarborTown/scripts.pory"

# 77 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "你挑战过釜炎道馆的\n"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "馆主亚莎了吗？\p"
# 80 "data/maps/FallarborTown/scripts.pory"
	.string "那姑娘的爷爷很有名。\n"
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "他曾经是宝可梦联盟\l"
# 82 "data/maps/FallarborTown/scripts.pory"
	.string "四天王之一。\p"
# 83 "data/maps/FallarborTown/scripts.pory"
	.string "亚莎凭自己的本事\n"
# 84 "data/maps/FallarborTown/scripts.pory"
	.string "成为了不起的训练家，\l"
# 85 "data/maps/FallarborTown/scripts.pory"
	.string "我一点也不意外。$"
# 86 "data/maps/FallarborTown/scripts.pory"

# 87 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 88 "data/maps/FallarborTown/scripts.pory"
	.string "对战帐篷 秋叶会场\n"
# 89 "data/maps/FallarborTown/scripts.pory"
	.string "“愿最强的队伍齐聚！”$"
# 90 "data/maps/FallarborTown/scripts.pory"

# 91 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 92 "data/maps/FallarborTown/scripts.pory"
	.string "秋叶镇\n"
# 93 "data/maps/FallarborTown/scripts.pory"
	.string "“带小菜园的农庄小镇。”$"
# 94 "data/maps/FallarborTown/scripts.pory"

# 95 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 96 "data/maps/FallarborTown/scripts.pory"
	.string "招式教学之家\n"
# 97 "data/maps/FallarborTown/scripts.pory"
	.string "“教宝可梦新招式。”$"
