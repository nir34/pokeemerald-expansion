# 1 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 2 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
.set LOCALID_MOVE_DELETER, 1
# 3 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 4 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_MapScripts::
# 5 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 7 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_EggMoveTutor::
# 8 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	faceplayer
# 10 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, LilycoveCity_MoveDeletersHouse_EventScript_CantTeachYet
# 11 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	call_if_unset FLAG_MET_EGG_MOVE_TUTOR, LilycoveCity_MoveDeletersHouse_EventScript_SetEggMoveFlag
# 12 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_HowToUseEggMoves, MSGBOX_DEFAULT
# 13 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	release
# 14 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 15 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 16 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_SetEggMoveFlag::
# 17 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	setflag FLAG_MET_EGG_MOVE_TUTOR
# 18 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ImEggMoveTutor, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ObtainedEggMoveTutorOption, MSGBOX_DEFAULT
# 21 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 22 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	return
# 23 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 24 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_CantTeachYet::
# 25 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantTeachYet, MSGBOX_DEFAULT
# 26 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	release
# 27 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 28 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 29 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 30 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 31 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_CantTeachYet:
# 32 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "嗯，什么？\n"
# 33 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "看来你对重新学招式\l"
# 34 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "一无所知，那我也\l"
# 35 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "没什么可教你的。\p"
# 36 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "我听说武斗镇有人\n"
# 37 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "懂一点这些。$"
# 38 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 39 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ImEggMoveTutor:
# 40 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "哦，你好啊，年轻的\n"
# 41 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "训练家。我最近\l"
# 42 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "换了行当。\p"
# 43 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "我以前人称招式\n"
# 44 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "遗忘师，可现在\l"
# 45 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "谁都能自己忘了，\l"
# 46 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "所以只好学新本事。\p"
# 47 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "现在，我能教你让\n"
# 48 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "宝可梦学会蛋招式。\l"
# 49 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "瞧好了！$"
# 50 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 51 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ObtainedEggMoveTutorOption:
# 52 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "获得了重新学习蛋招式\n"
# 53 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "的选项！$"
# 54 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 55 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_HowToUseEggMoves:
# 56 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "去队伍菜单，选一只\n"
# 57 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "宝可梦，再选“重新学习”，\l"
# 58 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "就会出现新选项\l"
# 59 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "“蛋招式”——前提是\l"
# 60 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "你的宝可梦真的有\l"
# 61 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "蛋招式可学！\p"
# 62 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "是不是很方便？$"
