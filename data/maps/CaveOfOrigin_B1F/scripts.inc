# 1 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 2 "data/maps/CaveOfOrigin_B1F/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 4 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_MapScripts::
# 5 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 7 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_Wallace::
# 8 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 9 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	faceplayer
# 10 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
# 11 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 12 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 13 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 60
# 15 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_PIN
# 16 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_ExclamationMark
# 17 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_Delay48
# 19 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 30
# 21 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_FacePlayer
# 22 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
# 24 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 25 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 26 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 27 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza::
# 28 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
# 29 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
# 31 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
# 32 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
# 33 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
# 34 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_DontRemember
# 35 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 36 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 37 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
# 38 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
# 39 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 40 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 41 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 42 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtMtPyre::
# 43 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
# 44 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 45 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 46 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 47 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_DontRemember::
# 48 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
# 49 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 50 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 51 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 52 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtSkyPillar::
# 53 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
# 54 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 55 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 56 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 57 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 58 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 59 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject LOCALID_WALLACE
# 60 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 61 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
# 63 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 64 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 65 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WallaceStory:
# 66 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "啊，你就是{PLAYER}？\n"
# 67 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "我听过你的事迹。\p"
# 68 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "我叫亚当。\p"
# 69 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "我曾经是琉璃市的\n"
# 70 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "馆主，可后来出了点事。\p"
# 71 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "所以现在，我把道馆的\n"
# 72 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "经营交给了我的师父阿丹。\p"
# 73 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\n"
# 74 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\p"
# 75 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "在这里大肆破坏的\n"
# 76 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "固拉多和盖欧卡，\l"
# 77 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "被称为超古代宝可梦。\p"
# 78 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "可超古代宝可梦\n"
# 79 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "不只有两只。\p"
# 80 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "还有一只在某处。\p"
# 81 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "某处有一只叫烈空坐的\n"
# 82 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "超古代宝可梦。\p"
# 83 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "据说在遥远的过去，\n"
# 84 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "就是烈空坐平息了\l"
# 85 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "那两个交战者。\p"
# 86 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "可连我也不知道\n"
# 87 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "烈空坐在哪儿……$"
# 88 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 89 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WhereIsRayquaza:
# 90 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}，你也许知道\n"
# 91 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "烈空坐现在在哪儿？\p"
# 92 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "要是知道，请告诉我。$"
# 93 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 94 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
# 95 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "觉醒祠堂？\p"
# 96 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "可那就在这里啊！\n"
# 97 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "你得再想想！\p"
# 98 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "拜托，想想烈空坐\n"
# 99 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "现在可能在哪儿。$"
# 100 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 101 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
# 102 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "送神火山？\p"
# 103 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "可我早些时候在那里\n"
# 104 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "见到的老太太没提过。\p"
# 105 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "我很怀疑那位老太太\n"
# 106 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "会想对我隐瞒什么……\p"
# 107 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}，你能再\n"
# 108 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "仔细想想吗？$"
# 109 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 110 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
# 111 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "嗯？你不记得？\n"
# 112 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "嗯……那就麻烦了……\p"
# 113 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "你就不能想起来吗？$"
# 114 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 115 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
# 116 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "天空之柱？\p"
# 117 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "就是它！\n"
# 118 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "一定是天空之柱！\p"
# 119 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}，一刻都不能\n"
# 120 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "浪费！我们马上去\l"
# 121 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "天空之柱！$"
