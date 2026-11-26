# 1 "data/maps/MossdeepCity_House2/scripts.pory"

# 2 "data/maps/MossdeepCity_House2/scripts.pory"
.set LOCALID_WINGULL, 3
# 3 "data/maps/MossdeepCity_House2/scripts.pory"

# 4 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_MapScripts::
# 5 "data/maps/MossdeepCity_House2/scripts.pory"
	.byte 0
# 6 "data/maps/MossdeepCity_House2/scripts.pory"

# 7 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Man::
# 8 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree, MSGBOX_NPC
# 9 "data/maps/MossdeepCity_House2/scripts.pory"
	end
# 10 "data/maps/MossdeepCity_House2/scripts.pory"

# 11 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Twin::
# 12 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth, MSGBOX_NPC
# 13 "data/maps/MossdeepCity_House2/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_House2/scripts.pory"

# 15 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Wingull::
# 16 "data/maps/MossdeepCity_House2/scripts.pory"
	lock
# 17 "data/maps/MossdeepCity_House2/scripts.pory"
	faceplayer
# 18 "data/maps/MossdeepCity_House2/scripts.pory"
	waitse
# 19 "data/maps/MossdeepCity_House2/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 20 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox MossdeepCity_House2_Text_Wingull, MSGBOX_DEFAULT
# 21 "data/maps/MossdeepCity_House2/scripts.pory"
	waitmoncry
# 22 "data/maps/MossdeepCity_House2/scripts.pory"
	closemessage
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
	setflag FLAG_WINGULL_DELIVERED_MAIL
# 24 "data/maps/MossdeepCity_House2/scripts.pory"
	clearflag FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL
# 25 "data/maps/MossdeepCity_House2/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_House2_EventScript_WingullExitNorth
# 26 "data/maps/MossdeepCity_House2/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, MossdeepCity_House2_EventScript_WingullExitWest
# 27 "data/maps/MossdeepCity_House2/scripts.pory"
	removeobject LOCALID_WINGULL
# 28 "data/maps/MossdeepCity_House2/scripts.pory"
	release
# 29 "data/maps/MossdeepCity_House2/scripts.pory"
	end
# 30 "data/maps/MossdeepCity_House2/scripts.pory"

# 31 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_WingullExitNorth::
# 32 "data/maps/MossdeepCity_House2/scripts.pory"
	applymovement LOCALID_WINGULL, MossdeepCity_House2_Movement_WingullExitNorth
# 33 "data/maps/MossdeepCity_House2/scripts.pory"
	waitmovement 0
# 34 "data/maps/MossdeepCity_House2/scripts.pory"
	return
# 35 "data/maps/MossdeepCity_House2/scripts.pory"

# 36 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_WingullExitWest::
# 37 "data/maps/MossdeepCity_House2/scripts.pory"
	applymovement LOCALID_WINGULL, MossdeepCity_House2_Movement_WingullExitEast
# 38 "data/maps/MossdeepCity_House2/scripts.pory"
	waitmovement 0
# 39 "data/maps/MossdeepCity_House2/scripts.pory"
	return
# 40 "data/maps/MossdeepCity_House2/scripts.pory"

# 41 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_Movement_WingullExitNorth:
# 42 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_right
# 43 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 44 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 45 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_left
# 46 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 47 "data/maps/MossdeepCity_House2/scripts.pory"
	delay_8
# 48 "data/maps/MossdeepCity_House2/scripts.pory"
	step_end
# 49 "data/maps/MossdeepCity_House2/scripts.pory"

# 50 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_Movement_WingullExitEast:
# 51 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 52 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 53 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 54 "data/maps/MossdeepCity_House2/scripts.pory"
	delay_8
# 55 "data/maps/MossdeepCity_House2/scripts.pory"
	step_end
# 56 "data/maps/MossdeepCity_House2/scripts.pory"

# 57 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree:
# 58 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "我妹妹和茵郁市的男朋友\n"
# 59 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "互相寄邮件。\p"
# 60 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "我一点都不羡慕她。$"
# 61 "data/maps/MossdeepCity_House2/scripts.pory"

# 62 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth:
# 63 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "虽然见不到茵郁市的\n"
# 64 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "朋友，我的宝可梦\l"
# 65 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "帮我们来回送邮件。\p"
# 66 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "就算分开，我也\n"
# 67 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "不觉得孤单。$"
# 68 "data/maps/MossdeepCity_House2/scripts.pory"

# 69 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_Text_Wingull:
# 70 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "长翅鸥：呲哟！$"
