# 1 "data/maps/SSTidalRooms/scripts.pory"

# 2 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_MapScripts::
# 3 "data/maps/SSTidalRooms/scripts.pory"
	.byte 0
# 4 "data/maps/SSTidalRooms/scripts.pory"

# 5 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_SnatchGiver::
# 6 "data/maps/SSTidalRooms/scripts.pory"
	lock
# 7 "data/maps/SSTidalRooms/scripts.pory"
	faceplayer
# 8 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalRooms_EventScript_ExplainSnatch
# 9 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NotSuspiciousTakeThis, MSGBOX_DEFAULT
# 10 "data/maps/SSTidalRooms/scripts.pory"
	giveitem ITEM_TM_LEECH_LIFE
# 11 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 12 "data/maps/SSTidalRooms/scripts.pory"
	setflag FLAG_RECEIVED_TM_SNATCH
# 13 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 14 "data/maps/SSTidalRooms/scripts.pory"
	release
# 15 "data/maps/SSTidalRooms/scripts.pory"
	end
# 16 "data/maps/SSTidalRooms/scripts.pory"

# 17 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_ExplainSnatch::
# 18 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 19 "data/maps/SSTidalRooms/scripts.pory"
	release
# 20 "data/maps/SSTidalRooms/scripts.pory"
	end
# 21 "data/maps/SSTidalRooms/scripts.pory"

# 22 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Bed::
# 23 "data/maps/SSTidalRooms/scripts.pory"
	lockall
# 24 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_TakeRestOnBed, MSGBOX_DEFAULT
# 25 "data/maps/SSTidalRooms/scripts.pory"
	closemessage
# 26 "data/maps/SSTidalRooms/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 27 "data/maps/SSTidalRooms/scripts.pory"
	call SSTidalRooms_EventScript_ProgessCruiseAfterBed
# 28 "data/maps/SSTidalRooms/scripts.pory"
	releaseall
# 29 "data/maps/SSTidalRooms/scripts.pory"
	end
# 30 "data/maps/SSTidalRooms/scripts.pory"

# 31 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Colton::
# 32 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_COLTON, SSTidalRooms_Text_ColtonIntro, SSTidalRooms_Text_ColtonDefeat
# 33 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/SSTidalRooms/scripts.pory"
	end
# 35 "data/maps/SSTidalRooms/scripts.pory"

# 36 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Micah::
# 37 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_MICAH, SSTidalRooms_Text_MicahIntro, SSTidalRooms_Text_MicahDefeat
# 38 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_MicahPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/SSTidalRooms/scripts.pory"
	end
# 40 "data/maps/SSTidalRooms/scripts.pory"

# 41 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Thomas::
# 42 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_THOMAS, SSTidalRooms_Text_ThomasIntro, SSTidalRooms_Text_ThomasDefeat
# 43 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/SSTidalRooms/scripts.pory"
	end
# 45 "data/maps/SSTidalRooms/scripts.pory"

# 46 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Jed::
# 47 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_JedIntro, SSTidalRooms_Text_JedDefeat, SSTidalRooms_Text_JedNotEnoughMons
# 48 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_JedPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/SSTidalRooms/scripts.pory"
	end
# 50 "data/maps/SSTidalRooms/scripts.pory"

# 51 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Lea::
# 52 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_LeaIntro, SSTidalRooms_Text_LeaDefeat, SSTidalRooms_Text_LeaNotEnoughMons
# 53 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/SSTidalRooms/scripts.pory"
	end
# 55 "data/maps/SSTidalRooms/scripts.pory"

# 56 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Garret::
# 57 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_GARRET, SSTidalRooms_Text_GarretIntro, SSTidalRooms_Text_GarretDefeat
# 58 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/SSTidalRooms/scripts.pory"
	end
# 60 "data/maps/SSTidalRooms/scripts.pory"

# 61 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Naomi::
# 62 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NAOMI, SSTidalRooms_Text_NaomiIntro, SSTidalRooms_Text_NaomiDefeat
# 63 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/SSTidalRooms/scripts.pory"
	end
# 65 "data/maps/SSTidalRooms/scripts.pory"

# 66 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_TakeRestOnBed:
# 67 "data/maps/SSTidalRooms/scripts.pory"
	.string "这里有张床……\n"
# 68 "data/maps/SSTidalRooms/scripts.pory"
	.string "休息一下吧。$"
# 69 "data/maps/SSTidalRooms/scripts.pory"

# 70 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonIntro:
# 71 "data/maps/SSTidalRooms/scripts.pory"
	.string "我常坐船去绿岭市。\p"
# 72 "data/maps/SSTidalRooms/scripts.pory"
	.string "因为我喜欢参加\n"
# 73 "data/maps/SSTidalRooms/scripts.pory"
	.string "华丽大赛。$"
# 74 "data/maps/SSTidalRooms/scripts.pory"

# 75 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonDefeat:
# 76 "data/maps/SSTidalRooms/scripts.pory"
	.string "这场对战真愉快！$"
# 77 "data/maps/SSTidalRooms/scripts.pory"

# 78 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonPostBattle:
# 79 "data/maps/SSTidalRooms/scripts.pory"
	.string "一想到下一场华丽大赛\n"
# 80 "data/maps/SSTidalRooms/scripts.pory"
	.string "能看到什么样的宝可梦\l"
# 81 "data/maps/SSTidalRooms/scripts.pory"
	.string "我就兴奋。光期待就\l"
# 82 "data/maps/SSTidalRooms/scripts.pory"
	.string "让人心跳！$"
# 83 "data/maps/SSTidalRooms/scripts.pory"

# 84 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahIntro:
# 85 "data/maps/SSTidalRooms/scripts.pory"
	.string "你的朋友强吗？$"
# 86 "data/maps/SSTidalRooms/scripts.pory"

# 87 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahDefeat:
# 88 "data/maps/SSTidalRooms/scripts.pory"
	.string "你的朋友果然很强。$"
# 89 "data/maps/SSTidalRooms/scripts.pory"

# 90 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahPostBattle:
# 91 "data/maps/SSTidalRooms/scripts.pory"
	.string "朋友不一定是人。\n"
# 92 "data/maps/SSTidalRooms/scripts.pory"
	.string "对我来说，宝可梦就是\l"
# 93 "data/maps/SSTidalRooms/scripts.pory"
	.string "珍贵的伙伴！$"
# 94 "data/maps/SSTidalRooms/scripts.pory"

# 95 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasIntro:
# 96 "data/maps/SSTidalRooms/scripts.pory"
	.string "孩子……\n"
# 97 "data/maps/SSTidalRooms/scripts.pory"
	.string "你敲门了吗？$"
# 98 "data/maps/SSTidalRooms/scripts.pory"

# 99 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasDefeat:
# 100 "data/maps/SSTidalRooms/scripts.pory"
	.string "输了也要从容接受，\n"
# 101 "data/maps/SSTidalRooms/scripts.pory"
	.string "不慌不忙。$"
# 102 "data/maps/SSTidalRooms/scripts.pory"

# 103 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasPostBattle:
# 104 "data/maps/SSTidalRooms/scripts.pory"
	.string "无论什么情况都不慌乱，\n"
# 105 "data/maps/SSTidalRooms/scripts.pory"
	.string "这就是绅士的准则。$"
# 106 "data/maps/SSTidalRooms/scripts.pory"

# 107 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedIntro:
# 108 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED：有点不好意思，不过……\n"
# 109 "data/maps/SSTidalRooms/scripts.pory"
	.string "让你见识我们的\l"
# 110 "data/maps/SSTidalRooms/scripts.pory"
	.string "恩爱之力！$"
# 111 "data/maps/SSTidalRooms/scripts.pory"

# 112 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedDefeat:
# 113 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED：唉……$"
# 114 "data/maps/SSTidalRooms/scripts.pory"

# 115 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedPostBattle:
# 116 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED：我们的恩爱之力还是\n"
# 117 "data/maps/SSTidalRooms/scripts.pory"
	.string "第一次不管用！\l"
# 118 "data/maps/SSTidalRooms/scripts.pory"
	.string "你一定是很棒的\l"
# 119 "data/maps/SSTidalRooms/scripts.pory"
	.string "训练家！$"
# 120 "data/maps/SSTidalRooms/scripts.pory"

# 121 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedNotEnoughMons:
# 122 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED：你只有一只宝可梦？\n"
# 123 "data/maps/SSTidalRooms/scripts.pory"
	.string "那不是太寂寞了吗？$"
# 124 "data/maps/SSTidalRooms/scripts.pory"

# 125 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaIntro:
# 126 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA：有点傻，不过……\n"
# 127 "data/maps/SSTidalRooms/scripts.pory"
	.string "让你见识我们的\l"
# 128 "data/maps/SSTidalRooms/scripts.pory"
	.string "恩爱之力！$"
# 129 "data/maps/SSTidalRooms/scripts.pory"

# 130 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaDefeat:
# 131 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA：哦，讨厌！$"
# 132 "data/maps/SSTidalRooms/scripts.pory"

# 133 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaPostBattle:
# 134 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA：真不敢相信！\n"
# 135 "data/maps/SSTidalRooms/scripts.pory"
	.string "我们的恩爱之力\l"
# 136 "data/maps/SSTidalRooms/scripts.pory"
	.string "失败了……你一定\l"
# 137 "data/maps/SSTidalRooms/scripts.pory"
	.string "是很棒训练家！$"
# 138 "data/maps/SSTidalRooms/scripts.pory"

# 139 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaNotEnoughMons:
# 140 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA：我本想对战的……\n"
# 141 "data/maps/SSTidalRooms/scripts.pory"
	.string "可你连两只宝可梦\l"
# 142 "data/maps/SSTidalRooms/scripts.pory"
	.string "都没有……$"
# 143 "data/maps/SSTidalRooms/scripts.pory"

# 144 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretIntro:
# 145 "data/maps/SSTidalRooms/scripts.pory"
	.string "啊，你来得正好。\p"
# 146 "data/maps/SSTidalRooms/scripts.pory"
	.string "你看，我正无聊。\n"
# 147 "data/maps/SSTidalRooms/scripts.pory"
	.string "你可以陪我消遣。$"
# 148 "data/maps/SSTidalRooms/scripts.pory"

# 149 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretDefeat:
# 150 "data/maps/SSTidalRooms/scripts.pory"
	.string "……这样可以了。$"
# 151 "data/maps/SSTidalRooms/scripts.pory"

# 152 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretPostBattle:
# 153 "data/maps/SSTidalRooms/scripts.pory"
	.string "也许我该让父亲给\n"
# 154 "data/maps/SSTidalRooms/scripts.pory"
	.string "我买艘游艇。\l"
# 155 "data/maps/SSTidalRooms/scripts.pory"
	.string "给我和宝可梦的游艇！$"
# 156 "data/maps/SSTidalRooms/scripts.pory"

# 157 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiIntro:
# 158 "data/maps/SSTidalRooms/scripts.pory"
	.string "哦，你真是个可爱的\n"
# 159 "data/maps/SSTidalRooms/scripts.pory"
	.string "训练家。要喝茶吗？\l"
# 160 "data/maps/SSTidalRooms/scripts.pory"
	.string "还是想对战？$"
# 161 "data/maps/SSTidalRooms/scripts.pory"

# 162 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiDefeat:
# 163 "data/maps/SSTidalRooms/scripts.pory"
	.string "我明白了。\n"
# 164 "data/maps/SSTidalRooms/scripts.pory"
	.string "你是好动的那种。$"
# 165 "data/maps/SSTidalRooms/scripts.pory"

# 166 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiPostBattle:
# 167 "data/maps/SSTidalRooms/scripts.pory"
	.string "坐豪华客轮环游世界\n"
# 168 "data/maps/SSTidalRooms/scripts.pory"
	.string "当然有它的魅力……\p"
# 169 "data/maps/SSTidalRooms/scripts.pory"
	.string "不过我得承认，坐渡轮\n"
# 170 "data/maps/SSTidalRooms/scripts.pory"
	.string "逛丰缘也别有\l"
# 171 "data/maps/SSTidalRooms/scripts.pory"
	.string "一番趣味。$"
# 172 "data/maps/SSTidalRooms/scripts.pory"

# 173 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NotSuspiciousTakeThis:
# 174 "data/maps/SSTidalRooms/scripts.pory"
	.string "呃……嗨！我……我可没\n"
# 175 "data/maps/SSTidalRooms/scripts.pory"
	.string "在干什么可疑的事！\l"
# 176 "data/maps/SSTidalRooms/scripts.pory"
	.string "呃……这个给你！\l"
# 177 "data/maps/SSTidalRooms/scripts.pory"
	.string "免费！\p"
# 178 "data/maps/SSTidalRooms/scripts.pory"
	.string "说……说实话，这可不是\n"
# 179 "data/maps/SSTidalRooms/scripts.pory"
	.string "我从别人那儿\l"
# 180 "data/maps/SSTidalRooms/scripts.pory"
	.string "抢来的！我绝不\l"
# 181 "data/maps/SSTidalRooms/scripts.pory"
	.string "会那种事！\l"
# 182 "data/maps/SSTidalRooms/scripts.pory"
	.string "东西干净的！\l"
# 183 "data/maps/SSTidalRooms/scripts.pory"
	.string "你可以用！$"
# 184 "data/maps/SSTidalRooms/scripts.pory"

# 185 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ExplainSnatch:
# 186 "data/maps/SSTidalRooms/scripts.pory"
	.string "抢夺会抢走某些招式\n"
# 187 "data/maps/SSTidalRooms/scripts.pory"
	.string "的有益效果，在\l"
# 188 "data/maps/SSTidalRooms/scripts.pory"
	.string "对手或同伴用出前\l"
# 189 "data/maps/SSTidalRooms/scripts.pory"
	.string "先夺过来。$"
