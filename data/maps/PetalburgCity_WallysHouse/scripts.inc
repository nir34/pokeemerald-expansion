# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
.set LOCALID_WALLYS_DAD, 1
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts::
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp:
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_DAD, DIR_WEST
# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnFrame:
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHMSurf
# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_GiveHMSurf::
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_TM_METEOR_BEAM
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_TM_DRAGON_PULSE
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_TM_DUAL_CHOP
# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_TM_FUTURE_SIGHT
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_TM_DUAL_WINGBEAT
# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	closemessage
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	delay 30
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	waitfanfare
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	closemessage
# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	delay 30
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf
# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf::
# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "你是……\n"
# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "啊，你就是{PLAYER}吧？\p"
# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "刚才谢谢你\n"
# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "陪小胜玩了一会儿。\p"
# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "他从小身体就虚弱，\n"
# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "一直病病歪歪的。\p"
# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "我们把他送到绿荫镇的\n"
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "亲戚家住一阵子。\p"
# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "那里的空气比这里\n"
# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "干净得多。\p"
# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "什么？小胜在哪儿？\n"
# 96 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "他已经走了，我们家小胜。\p"
# 97 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "不知道他现在\n"
# 98 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "走到哪儿了呢？$"
# 99 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 101 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "不知道我们家小胜\n"
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "现在怎么样了呢？$"
# 103 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 104 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "突然把你叫到这种地方来，\n"
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "真是抱歉。\p"
# 107 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "不过我们家小胜去了绿荫镇\n"
# 108 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "以后，身体变得健康多了。\p"
# 109 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "这全都是靠你啊！\p"
# 110 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "小胜离开镇子的时候，\n"
# 111 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "是你帮他抓到宝可梦的吧？\p"
# 112 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "我想那件事让小胜\n"
# 113 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "非常开心。\p"
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "其实不只是小胜，\n"
# 115 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "连我这个当父亲的也很高兴。\p"
# 116 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "高兴他能交到\n"
# 117 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "你这样的好朋友。\p"
# 118 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "不过，我真是糟糕透了。\n"
# 119 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "本来要给你的秘传学习器\l"
# 120 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "03冲浪，竟被我丢在了\l"
# 121 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "111号道路的沙漠里。\p"
# 122 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "我拜托了几位好心的训练家\n"
# 123 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "帮忙看着，应该没事，\l"
# 124 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "他们会让你过去的！\p"
# 125 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "为了表示歉意，\n"
# 126 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "这些请收下！$"
# 127 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 128 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 129 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
# 130 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "我知道这些学习器\n"
# 131 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "有点杂，\p"
# 132 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "不过总比什么都没有好！$"
# 133 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 134 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 135 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "我真是糊里糊涂，\n"
# 136 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "竟然把秘传学习器\l"
# 137 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "03冲浪丢在了沙漠里。$"
# 138 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 139 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 140 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "哦？你在冠军之路\n"
# 141 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "见到小胜了？\p"
# 142 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "哦，{PLAYER}，\n"
# 143 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "别说傻话了。\p"
# 144 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "他身体是好了些，\n"
# 145 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "但不可能一个人跑到\l"
# 146 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "那么远的地方去。$"
# 147 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 148 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 149 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "小胜说他抓到宝可梦时，\n"
# 150 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "真的非常高兴。\p"
# 151 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "我已经很久没见过\n"
# 152 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "他那样笑了。$"
# 153 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 154 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 155 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "这件事请你别告诉我丈夫……\p"
# 156 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "可是我们家小胜，\n"
# 157 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "是瞒着所有人离开绿荫镇的。\p"
# 158 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "你知道，小胜虽然体弱，\n"
# 159 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "但意志出奇地坚强。\p"
# 160 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "我相信总有一天，\n"
# 161 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "他会平安回来的！$"
