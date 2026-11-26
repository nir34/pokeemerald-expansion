# 1 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 2 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_MapScripts::
# 3 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wally::
# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech
# 9 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_WALLY_SPEECH
# 11 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 12 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 13 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 14 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech::
# 15 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 17 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 18 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 19 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 20 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 21 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 22 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
# 24 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
# 25 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 26 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 27 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 28 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
# 29 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
# 30 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 31 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 32 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 33 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
# 34 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
# 35 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 36 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 37 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 38 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 39 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
# 40 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 41 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 42 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda::
# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 44 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 45 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
# 46 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_MeetWanda
# 47 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 48 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 49 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 50 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 51 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_MeetWanda::
# 52 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
# 53 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 54 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 55 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 56 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
# 57 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 58 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 59 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 60 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 61 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 62 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 63 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 64 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
# 65 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
# 66 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
# 67 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
# 68 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 69 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 70 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 71 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
# 72 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
# 73 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 74 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 75 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 76 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
# 77 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
# 78 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 79 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 80 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 81 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
# 82 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
# 83 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 84 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 85 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 86 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeech:
# 87 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "小胜：{PLAYER}，\n"
# 88 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "我输给了你，\l"
# 89 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "可我已经不再沮丧了。\p"
# 90 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "因为我有了新的目标。\n"
# 91 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "我要和拉鲁拉丝一起\l"
# 92 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "挑战道馆，成为\l"
# 93 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "了不起的训练家。\p"
# 94 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{PLAYER}，请看着我。\n"
# 95 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "我会比你更强。\p"
# 96 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "到那时候，我还要再\n"
# 97 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "向你挑战一次。$"
# 98 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 99 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeechShort:
# 100 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "小胜：{PLAYER}，请看着我。\n"
# 101 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "我会比你更强。\p"
# 102 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "到那时候，我还要再\n"
# 103 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "向你挑战一次。$"
# 104 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 105 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallysNextDoor:
# 106 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "叔叔：哦！{PLAYER}！\n"
# 107 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "小胜在隔壁。\p"
# 108 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "不过，我有件事\n"
# 109 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "一定要告诉你。\p"
# 110 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "这里的自然环境对小胜\n"
# 111 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "的身体大有好处。\p"
# 112 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "也许不只是环境。\n"
# 113 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "让那孩子燃起希望的，\l"
# 114 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "可能是宝可梦。$"
# 115 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 116 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallySlippedOff:
# 117 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "小胜走了……\n"
# 118 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "他自己悄悄走的……$"
# 119 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 120 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyGoneThatFar:
# 121 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "叔叔：是这样吗？\n"
# 122 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "小胜一个人跑到\l"
# 123 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "那么远的地方去了……\p"
# 124 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "不过我得说，他真行——\n"
# 125 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "毕竟是我弟弟的儿子。$"
# 126 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 127 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_MeetWanda:
# 128 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "瓦达：你是？\n"
# 129 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "哦，对，我知道了！\p"
# 130 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "你就是小胜跟我\n"
# 131 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "说过的{PLAYER}。\p"
# 132 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "我是小胜的表姐。\n"
# 133 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "很高兴见到你！\p"
# 134 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "我觉得小胜来了以后，\n"
# 135 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "变得活泼健康多了。$"
# 136 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 137 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DontWorryAboutWally:
# 138 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "瓦达：别担心小胜。\n"
# 139 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "他会没事的。\p"
# 140 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "我了解我这个小表弟，\n"
# 141 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "而且他还有宝可梦陪着。$"
# 142 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 143 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay:
# 144 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "多亏了你，我每天都能\n"
# 145 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "见到女朋友了。\l"
# 146 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "高兴？当然高兴！$"
# 147 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 148 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven:
# 149 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "我女儿的男朋友是个\n"
# 150 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "非常拼命又热情的人。\p"
# 151 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "他为了见我女儿，\n"
# 152 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "一刻不停地挖隧道。\p"
# 153 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "我女儿有点担心，\n"
# 154 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "所以常去隧道那边。$"
# 155 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 156 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging:
# 157 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "真厉害。我女儿的男朋友\n"
# 158 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "竟然徒手在挖隧道！\p"
# 159 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "太惊人了！$"
# 160 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 161 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally:
# 162 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "小胜要是出了什么事，\n"
# 163 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "我真没脸去见他\l"
# 164 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "在橙华市的父母……$"
# 165 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 166 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande:
# 167 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "小胜去了彩幽？\p"
# 168 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "他在橙华市的父母\n"
# 169 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "听了准会大吃一跳！$"
