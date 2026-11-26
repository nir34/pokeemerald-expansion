# 1 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 2 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VIVI, 1
# 3 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTOR, 2
# 4 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTORIA, 3
# 5 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICKY, 4
# 6 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 7 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_MapScripts::
# 8 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.byte 0
# 9 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 10 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victor::
# 11 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 12 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTOR
# 14 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, Route111_WinstrateFamilysHouse_GiveMysticTicket
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 18 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_GiveMysticTicket::
# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_ENABLE_SHIP_BIRTH_ISLAND, Route111_WinstrateFamilysHouse_AlreadyGaveMysticTicket
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_TakeMysticTicket, MSGBOX_DEFAULT
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_EON_TICKET
# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_ENABLE_SHIP_SOUTHERN_ISLAND
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_BeSafeTicket, MSGBOX_DEFAULT
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_AlreadyGaveMysticTicket::
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_BeSafeTicket, MSGBOX_DEFAULT
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTORIA
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MEGA_STONES, Route111_WinstrateFamilysHouse_EventScript_ReceivedMegaStones
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMegaStones, MSGBOX_DEFAULT
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ALAKAZITE
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_KANGASKHANITE
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AUDINITE
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GARDEVOIRITE
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ABSOLITE
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SHARPEDONITE
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_HERACRONITE
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_LOPUNNITE
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_PIDGEOTITE
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_BEEDRILLITE
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GLALITITE
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ABOMASITE
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_MEDICHAMITE
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AGGRONITE
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_CAMERUPTITE
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_MAWILITE
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_HOUNDOOMINITE
# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_PINSIRITE
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_COALOSSITE
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SLOWBRONITE
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_ORBEETLITE
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SCIZORITE
# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_AERODACTYLITE
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_GALLADITE
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_CENTISKITE
# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_SANDACONDITE
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitemfast ITEM_APPLITE
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MEGA_STONES
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_ReceivedSeveralMegaStones, MSGBOX_DEFAULT
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitfanfare
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_ExplainMegaStones, MSGBOX_DEFAULT
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMegaStones::
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VIVI
# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 90 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICKY
# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 108 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 109 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 111 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 112 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 113 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 114 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "你是我见过第一个\n"
# 115 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "把宝可梦用得这么\l"
# 116 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "出神入化的训练家。\p"
# 117 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "不过我得告诉你——\n"
# 118 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "我儿子比你更强。\p"
# 119 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "他还挑战过宝可梦联盟，\n"
# 120 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "你知道吧。$"
# 121 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 122 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_TakeMysticTicket:
# 123 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "哎呀，你挑战了宝可梦联盟？\n"
# 124 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "还赢了？！\p"
# 125 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "连我儿子都没能\n"
# 126 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "强到那份上……\p"
# 127 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "本来我打算等儿子当上\n"
# 128 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "冠军就把这个给他，\l"
# 129 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "可既然你先做到了……\p"
# 130 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "来，拿去吧。我留得太久了，\n"
# 131 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "照这样下去，\l"
# 132 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "怕是永远用不上了。$"
# 133 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 134 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_BeSafeTicket:
# 135 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "我一直很好奇那张票\n"
# 136 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "通向哪里。\p"
# 137 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "一路平安，新科冠军。$"
# 138 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 139 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMegaStones:
# 140 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "我们这里收集了不少\n"
# 141 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "超级石。\p"
# 142 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "我儿子去挑战四天王时，\n"
# 143 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "我们给过他一套。\p"
# 144 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "我不太相信你和他一样强，\n"
# 145 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "不过这些也许\l"
# 146 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "对你还是有用的。$"
# 147 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 148 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 149 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "说到宝可梦对战，\n"
# 150 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "我们一家都特别热情。$"
# 151 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 152 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 153 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "妈妈比爸爸强。\p"
# 154 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "我比妈妈强。\p"
# 155 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "奶奶比我还强！\p"
# 156 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "可哥哥比奶奶\n"
# 157 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "还要强。$"
# 158 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 159 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 160 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "你很强，这一点\n"
# 161 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "毫无疑问。\p"
# 162 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "可要是和我孙子对战，\n"
# 163 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "你会懊恼得哭出来。\p"
# 164 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "他比我们一家认识的\n"
# 165 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "任何训练家都强得多。\p"
# 166 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "他现在一定在挑战宝可梦\n"
# 167 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "联盟冠军了吧。\p"
# 168 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "照我孙子那本事，\n"
# 169 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "说不定已经是冠军了！$"
# 170 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 171 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 172 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "我孙子现在一定在挑战\n"
# 173 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "宝可梦联盟冠军了吧。\p"
# 174 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "照我孙子那本事，\n"
# 175 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "说不定已经是冠军了！$"
# 176 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 177 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_ReceivedSeveralMegaStones::
# 178 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "{PLAYER}收到了\n"
# 179 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "好几颗超级石！$"
# 180 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 181 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_ExplainMegaStones:
# 182 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "这些是我们收集到的\n"
# 183 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "全部超级石，包括：\p"
# 184 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "胡地石、袋兽石、差不多\n"
# 185 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "娃娃石、沙奈朵石、\l"
# 186 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "阿勃梭鲁石、巨牙鲨石、\l"
# 187 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "赫拉克罗斯石、长耳兔石、\l"
# 188 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "大比鸟石、大针蜂石、\l"
# 189 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "冰鬼护石、暴雪王石、\l"
# 190 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "恰雷姆石、波士可多拉石、\l"
# 191 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "喷火驼石、大嘴娃石、\l"
# 192 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "黑鲁加石、凯罗斯石、\l"
# 193 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "巨炭山石、呆呆王石、\l"
# 194 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "以欧路普石、巨钳螳螂石、\l"
# 195 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "化石翼龙石、艾路雷朵石、\l"
# 196 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "焚焰蚣石、沙螺蟒石、\l"
# 197 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "苹裹龙石。\p"
# 198 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "这些一定能让你成为\n"
# 199 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "更强的训练家。$"
