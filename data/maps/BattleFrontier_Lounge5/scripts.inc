# 1 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirl::
# 6 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 7 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 8 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlGreeting, MSGBOX_YESNO
# 9 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
# 10 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	special ChoosePartyMon
# 11 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitstate
# 12 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 13 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 14 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
# 15 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 16 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge5_EventScript_NatureGirlEgg
# 17 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	special ShowNatureGirlMessage
# 18 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitmessage
# 19 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitbuttonpress
# 20 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 21 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 23 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirlEgg::
# 24 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlEgg, MSGBOX_DEFAULT
# 25 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 26 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 28 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown::
# 29 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlNoneShown, MSGBOX_DEFAULT
# 30 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 31 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 32 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 33 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_Gentleman::
# 34 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon, MSGBOX_NPC
# 35 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 36 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 37 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_BlackBelt::
# 38 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound, MSGBOX_NPC
# 39 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 41 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_LittleBoy::
# 42 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot, MSGBOX_NPC
# 43 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 45 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlGreeting::
# 46 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "呵呵！\n"
# 47 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "我能看出宝可梦在想什么！\p"
# 48 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "拜托！\n"
# 49 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "能让我看看你的宝可梦吗？$"
# 50 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 51 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlNoneShown::
# 52 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "呸！\n"
# 53 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "小气鬼！$"
# 54 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 55 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlHardy::
# 56 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 57 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢对战！\n"
# 58 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "就算身上好多疼疼，\l"
# 59 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它也会对战！$"
# 60 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 61 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlLonely::
# 62 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 63 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢偷偷摸摸！\n"
# 64 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 65 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会还手！$"
# 66 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 67 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlBrave::
# 68 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 69 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢对战！\n"
# 70 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 71 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会担心自己！$"
# 72 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 73 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlAdamant::
# 74 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 75 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢对战！\n"
# 76 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "就算身上好多疼疼，\l"
# 77 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它也会对战！$"
# 78 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 79 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlNaughty::
# 80 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 81 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它只顾自己！\n"
# 82 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 83 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会还手！$"
# 84 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 85 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlBold::
# 86 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 87 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢偷偷摸摸！\n"
# 88 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 89 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会担心自己！$"
# 90 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 91 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlDocileNaiveQuietQuirky::
# 92 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 93 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢对战！\n"
# 94 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "就算身上好多疼疼，\l"
# 95 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它也会对战！$"
# 96 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 97 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlRelaxed::
# 98 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 99 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢偷偷摸摸！\n"
# 100 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 101 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会还手！$"
# 102 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 103 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlImpish::
# 104 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 105 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢对战！\n"
# 106 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 107 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会担心自己！$"
# 108 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 109 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlLax::
# 110 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 111 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢偷偷摸摸！\n"
# 112 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它说就算疼疼很多，\l"
# 113 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它也喜欢偷偷摸摸！$"
# 114 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 115 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlTimid::
# 116 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 117 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢对战！\n"
# 118 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 119 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会变得偷偷摸摸！$"
# 120 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 121 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlHasty::
# 122 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 123 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢对战！\n"
# 124 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "就算身上好多疼疼，\l"
# 125 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它也会对战！$"
# 126 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 127 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSerious::
# 128 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 129 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢偷偷摸摸！\n"
# 130 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它说就算疼疼很多，\l"
# 131 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它也喜欢偷偷摸摸！$"
# 132 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 133 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlJolly::
# 134 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 135 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢偷偷摸摸！\n"
# 136 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 137 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会担心自己！$"
# 138 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 139 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlModest::
# 140 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 141 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它只顾自己！\n"
# 142 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它说不管疼疼多不多，\l"
# 143 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它都会担心自己！$"
# 144 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 145 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlMild::
# 146 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 147 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它只顾自己！\n"
# 148 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 149 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会变得偷偷摸摸！$"
# 150 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 151 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlBashful::
# 152 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 153 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它只顾自己！\n"
# 154 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它说就算疼疼很多，\l"
# 155 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它也担心自己！$"
# 156 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 157 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlRash::
# 158 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 159 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢偷偷摸摸！\n"
# 160 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它说就算疼疼很多，\l"
# 161 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它也喜欢偷偷摸摸！$"
# 162 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 163 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlCalm::
# 164 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 165 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它只顾自己！\n"
# 166 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它说就算疼疼很多，\l"
# 167 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它也担心自己！$"
# 168 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 169 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlGentle::
# 170 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 171 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它只顾自己！\n"
# 172 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 173 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会还手！$"
# 174 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 175 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSassy::
# 176 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 177 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它喜欢对战！\n"
# 178 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 179 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会变得偷偷摸摸！$"
# 180 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 181 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlCareful::
# 182 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "嗯哼……\p"
# 183 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "这只说它只顾自己！\n"
# 184 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "可要是疼疼够多，\l"
# 185 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "它就会变得偷偷摸摸！$"
# 186 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 187 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlEgg::
# 188 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "真傻！蛋在睡觉！\n"
# 189 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "我没法跟它说话！$"
# 190 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 191 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon::
# 192 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "真可爱！\n"
# 193 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "那位小姑娘说她能\l"
# 194 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "听懂宝可梦的话！$"
# 195 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 196 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound::
# 197 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "我总觉得那小姑娘在说\n"
# 198 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "什么深奥的话。$"
# 199 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 200 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot::
# 201 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "我知道一件事！\p"
# 202 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "那小姑娘常在那栋红房子\n"
# 203 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "玩！$"
