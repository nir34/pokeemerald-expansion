# 1 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
.set LOCALID_WALDAS_DAD, 6
# 3 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 4 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_MapScripts::
# 5 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.byte 0
# 6 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 7 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDad::
# 8 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	lock
# 9 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	faceplayer
# 10 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryBufferWaldaPhrase
# 11 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase
# 12 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase
# 13 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 14 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase::
# 15 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	special DoWaldaNamingScreen
# 16 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitstate
# 17 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 1, RustboroCity_Flat1_2F_EventScript_CancelGivePhrase
# 18 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase
# 19 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
# 20 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase
# 21 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase
# 22 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 23 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 24 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase::
# 25 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase, MSGBOX_YESNO
# 26 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 27 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 28 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 29 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 30 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase::
# 31 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase, MSGBOX_YESNO
# 32 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 33 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 35 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 36 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase::
# 37 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight, MSGBOX_DEFAULT
# 38 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 39 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 40 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 41 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGivePhrase::
# 42 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhYouDontKnowAny, MSGBOX_DEFAULT
# 43 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 44 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 45 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 46 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase::
# 47 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 49 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2, MSGBOX_DEFAULT
# 50 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 51 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 52 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 53 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase::
# 54 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry2, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 56 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhShesLaughing, MSGBOX_DEFAULT
# 57 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	applymovement LOCALID_WALDAS_DAD, Common_Movement_FacePlayer
# 58 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper, MSGBOX_DEFAULT
# 60 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 61 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 62 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 63 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase::
# 64 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry, MSGBOX_DEFAULT
# 65 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 66 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll, MSGBOX_DEFAULT
# 67 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 68 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 69 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 70 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda::
# 71 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 72 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	return
# 73 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 74 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasMom::
# 75 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
# 76 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 77 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 78 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_PokeDoll::
# 79 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
# 80 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 81 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 82 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard:
# 83 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "唉，每天真辛苦……\p"
# 84 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "辛苦什么？\n"
# 85 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "这还用问吗？\p"
# 86 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "每天都得想今天做什么饭，\n"
# 87 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "真是难啊。\p"
# 88 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "天天想菜单，\n"
# 89 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "真的不容易。$"
# 90 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 91 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase:
# 92 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "哦，你好！\n"
# 93 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "欢迎来到佩帕家。\p"
# 94 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "我有个问题想问你。\n"
# 95 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "你带过孩子吗？\p"
# 96 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "你看，我刚当爸爸，\n"
# 97 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "带孩子的事全是头一回。\p"
# 98 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "而且我有个烦恼。我女儿\n"
# 99 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "瓦露达笑得不够多。\p"
# 100 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "要是我说点什么好笑的，\n"
# 101 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "她应该会笑吧。\p"
# 102 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "你知道什么好笑的词\n"
# 103 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "或句子能告诉我吗？$"
# 104 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 105 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase:
# 106 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "我最近一直对她说\n"
# 107 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "“{STR_VAR_1}”逗她。\p"
# 108 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "你知道更好的词\n"
# 109 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "或句子吗？$"
# 110 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 111 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion:
# 112 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "哦，那太好了。\n"
# 113 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "那就说来听听吧。$"
# 114 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 115 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhIsThatRight:
# 116 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "哦，是这样吗？\p"
# 117 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "要是你想到了好主意，\n"
# 118 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "我随时都愿意听。$"
# 119 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 120 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry2:
# 121 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "啊，我明白了。\n"
# 122 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "那就试试看吧？$"
# 123 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 124 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhShesLaughing:
# 125 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}。\n"
# 126 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}。\p"
# 127 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "哦，太好了！她笑了！\n"
# 128 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "我也和她一样开心！$"
# 129 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 130 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry:
# 131 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "啊，我明白了。\n"
# 132 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "那就试试看吧？$"
# 133 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 134 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll:
# 135 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}。\n"
# 136 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}。\p"
# 137 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "嗯……她一点都不笑。\n"
# 138 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "也许瓦露达\l"
# 139 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "是个严肃的孩子……$"
# 140 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 141 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase:
# 142 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "哦，原来你不知道\n"
# 143 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "什么好词啊。\p"
# 144 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "那我还是自己想吧。\p"
# 145 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "嗯……\n"
# 146 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "“{STR_VAR_1}”怎么样？\l"
# 147 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "试试看有没有用。$"
# 148 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 149 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2:
# 150 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}。\n"
# 151 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}。\p"
# 152 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "嗯……她一点都不笑。\n"
# 153 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "也许瓦露达\l"
# 154 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "是个严肃的孩子……$"
# 155 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 156 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhYouDontKnowAny:
# 157 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "哦，原来你不知道\n"
# 158 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "什么好词啊。\p"
# 159 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "那我就用以前说过的\n"
# 160 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "话逗逗她吧。\p"
# 161 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "总之，你要是想到好主意，\n"
# 162 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "一定要告诉我，好吗？$"
# 163 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 164 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper:
# 165 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "谢谢你！\p"
# 166 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "多亏了你，我心爱的\n"
# 167 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "瓦露达对我笑了！\p"
# 168 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "其实，我看起来可能\n"
# 169 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "不起眼，但我是得文公司的\l"
# 170 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "顶尖研究员之一。\p"
# 171 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "所以，让我为你\n"
# 172 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "做点什么回报你吧？\p"
# 173 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "对了，我给电脑宝可梦\n"
# 174 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "寄存系统里的盒子\l"
# 175 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "加一些新壁纸图案吧。\p"
# 176 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "在壁纸图案菜单里\n"
# 177 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "选择“朋友”。\p"
# 178 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "这样就能用上新的\n"
# 179 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "壁纸图案了。$"
# 180 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 181 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll:
# 182 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "是宝可梦的布娃娃！$"
