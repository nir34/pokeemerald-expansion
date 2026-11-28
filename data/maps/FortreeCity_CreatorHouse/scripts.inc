# 1 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 2 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_MapScripts::
# 3 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 5 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 6 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_Iriv24PC::
# 7 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_Iriv24sComputer, MSGBOX_SIGN
# 8 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 9 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 10 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_Iriv24sComputer:
# 11 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "嘿，这是作者的电脑！等等，\n"
# 12 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "他让源治去做什么？$"
# 13 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 14 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_Iriv24PCTwo::
# 15 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_Iriv24sComputerTwo, MSGBOX_SIGN
# 16 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 17 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 18 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_Iriv24sComputerTwo:
# 19 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "那是我吗？这些都是\n"
# 20 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "安排好的剧本？$"
# 21 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 22 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 23 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_CapPC::
# 24 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_CapsComputer, MSGBOX_SIGN
# 25 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 26 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 27 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_CapsComputer:
# 28 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "老兄，他真让这家伙编辑\n"
# 29 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "普通训练家、野生遭遇，\l"
# 30 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "还手动从RRDex抄数据。\l"
# 31 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "太夸张了。$"
# 32 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 33 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_XPC::
# 34 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_XsComputer, MSGBOX_SIGN
# 35 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 36 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 37 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_XsComputer:
# 38 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "原来超级土台龟的图\n"
# 39 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "是这么做出来的。$"
# 40 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 41 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_Empoleon::
# 42 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lock
# 43 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	faceplayer
# 44 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitse
# 45 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	playmoncry SPECIES_EMPOLEON, CRY_MODE_NORMAL
# 46 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_Text_Empoleon, MSGBOX_DEFAULT
# 47 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitmoncry
# 48 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
# 49 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 50 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 51 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_Text_Empoleon:
# 52 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "帝王拿波：布咿咿咿咿！$"
# 53 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 54 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_Torterra::
# 55 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lock
# 56 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	faceplayer
# 57 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitse
# 58 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	playmoncry SPECIES_TORTERRA, CRY_MODE_NORMAL
# 59 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_Text_Torterra, MSGBOX_DEFAULT
# 60 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitmoncry
# 61 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
# 62 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 63 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 64 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_Text_Torterra:
# 65 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "土台龟：呜噜噜噜噜！$"
# 66 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 67 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_EventScript_Lanturn::
# 68 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lock
# 69 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	faceplayer
# 70 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitse
# 71 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	playmoncry SPECIES_LANTURN, CRY_MODE_NORMAL
# 72 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_Text_Lanturn, MSGBOX_DEFAULT
# 73 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	waitmoncry
# 74 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
# 75 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	end
# 76 "data/maps/FortreeCity_CreatorHouse/scripts.pory"

# 77 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
FortreeCity_CreatorHouse_Text_Lanturn:
# 78 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "电灯怪：滋滋滋滋！$"

FortreeCity_CreatorHouse_EventScript_Iriv24::
# 83 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 84 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 85 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_defeated TRAINER_IRIV24, FortreeCity_CreatorHouse_EventScript_Iriv24Defeated
# 86 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, FortreeCity_CreatorHouse_EventScript_Iriv24RequestBattleAgain
# 87 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_Greeting, MSGBOX_YESNO
# 88 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleIriv24Prompt
	end


FortreeCity_CreatorHouse_EventScript_Iriv24RequestBattleAgain::
# 93 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_ReadyYet, MSGBOX_YESNO
# 94 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleIriv24Prompt
	end


FortreeCity_CreatorHouse_EventScript_BattleIriv24Prompt::
# 99 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleIriv24
# 100 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineIriv24Battle
# 101 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineIriv24Battle::
# 106 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 107 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_ComeBackWhenReady, MSGBOX_DEFAULT
# 108 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleIriv24::
# 113 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleIriv24_Text_0, MSGBOX_DEFAULT
# 114 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_IRIV24, Iriv24_Outro
# 115 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_Iriv24GiveItems
	return


FortreeCity_CreatorHouse_EventScript_Iriv24Defeated::
# 121 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_Iriv24, MSGBOX_DEFAULT
# 122 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_Iriv24GiveItems::
# 127 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_EMPOLEONITE_O
# 128 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_BLASTOISINITE
# 129 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_SWAMPERTITE
# 130 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TM_SUBSTITUTE
# 131 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_SCARF
# 132 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Iriv24_ExplainItems
# 133 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_Cap::
# 193 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 194 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 195 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_defeated TRAINER_CAP, FortreeCity_CreatorHouse_EventScript_CapDefeated
# 196 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, FortreeCity_CreatorHouse_EventScript_CapRequestBattleAgain
# 197 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_Greeting, MSGBOX_YESNO
# 198 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleCapPrompt
	end


FortreeCity_CreatorHouse_EventScript_CapRequestBattleAgain::
# 203 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_ReadyYet, MSGBOX_YESNO
# 204 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleCapPrompt
	end


FortreeCity_CreatorHouse_EventScript_BattleCapPrompt::
# 209 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleCap
# 210 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineCapBattle
# 211 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineCapBattle::
# 216 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 217 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_ComeBackWhenReady, MSGBOX_DEFAULT
# 218 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleCap::
# 223 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleCap_Text_0, MSGBOX_DEFAULT
# 224 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_CAP, Cap_Outro
# 225 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_CapGiveItems
	return


FortreeCity_CreatorHouse_EventScript_CapDefeated::
# 231 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_Cap, MSGBOX_DEFAULT
# 232 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_CapGiveItems::
# 237 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X
# 238 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y
# 239 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_INFERNAPITE
# 240 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TM_DRAGON_DANCE
# 241 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_SPECS
# 242 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox Cap_ExplainItems
# 243 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_X::
# 288 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	lockall
# 289 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 290 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_defeated TRAINER_X, FortreeCity_CreatorHouse_EventScript_XDefeated
# 291 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, FortreeCity_CreatorHouse_EventScript_XRequestBattleAgain
# 292 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_Greeting, MSGBOX_YESNO
# 293 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleXPrompt
	end


FortreeCity_CreatorHouse_EventScript_XRequestBattleAgain::
# 298 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_ReadyYet, MSGBOX_YESNO
# 299 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_BattleXPrompt
	end


FortreeCity_CreatorHouse_EventScript_BattleXPrompt::
# 304 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, FortreeCity_CreatorHouse_EventScript_BattleX
# 305 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FortreeCity_CreatorHouse_EventScript_DeclineXBattle
# 306 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	closemessage
	end


FortreeCity_CreatorHouse_EventScript_DeclineXBattle::
# 311 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 312 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_ComeBackWhenReady, MSGBOX_DEFAULT
# 313 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleX::
# 318 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox FortreeCity_CreatorHouse_EventScript_BattleX_Text_0, MSGBOX_DEFAULT
# 319 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_X, X_Outro
# 320 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	goto FortreeCity_CreatorHouse_EventScript_XGiveItems
	return


FortreeCity_CreatorHouse_EventScript_XDefeated::
# 326 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox PostBattle_X, MSGBOX_DEFAULT
# 327 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	releaseall
	end


FortreeCity_CreatorHouse_EventScript_XGiveItems::
# 332 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TORTERRITE
# 333 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_VENUSAURITE
# 334 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_SCEPTILITE
# 335 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE
# 336 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 337 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	msgbox X_ExplainItems
# 338 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	release
	end


FortreeCity_CreatorHouse_EventScript_BattleIriv24_Text_0:
# 113 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "好，那就开始吧。$"

FortreeCity_CreatorHouse_EventScript_BattleCap_Text_0:
# 223 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "朋友，你完蛋了。$"

FortreeCity_CreatorHouse_EventScript_BattleX_Text_0:
# 318 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "来啊！$"

Iriv24_Greeting::
# 138 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "{PLAYER}，你好，我是这个改版的\n"
	.string "作者。\l"
	.string "希望你玩得开心。\p"
	.string "既然你一路走到了这里，\n"
	.string "我想由衷地感谢你\l"
	.string "玩这个游戏。\p"
	.string "制作它非常有趣，我\n"
	.string "希望自己成功把它做得\l"
	.string "既有挑战，又并非打不过。\p"
	.string "说正事：我这里有一支我最喜欢的\n"
	.string "宝可梦队伍，随时可以\l"
	.string "对战。\p"
	.string "如果你赢了，我就送你水系初始\n"
	.string "宝可梦的超级石，\l"
	.string "包括帝王拿波的第二种超级形态。\p"
	.string "我还会送你替身的招式学习器\n"
	.string "（顺带一提这招是坏的），\l还有讲究围巾。\p"
	.string "如果这些奖励对你值得，\n"
	.string "说一声，我们就开打。\l"
	.string "怎么样？$"

Iriv24_ReadyYet::
# 161 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "现在要打吗？$"

Iriv24_ComeBackWhenReady::
# 165 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "想对战时告诉我。$"

Iriv24_ExplainItems::
# 169 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "说好的，给你。接下来继续\n"
	.string "前进吧！前方还有很多\l"
	.string "艰难的对战，但你既然能\l"
	.string "走到这里，我相信你能打通\l"
	.string "这个游戏。\p"
	.string "再次感谢你游玩，\n"
	.string "{PLAYER}，外面好运！$"

Iriv24_Outro::
# 179 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "看来你的队伍挺不错！$"

PostBattle_Iriv24::
# 183 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "不敢相信我在自己的游戏里被打了，\n"
	.string "下个版本我一定要给自己\l"
	.string "配一套变态队伍。$"

Cap_Greeting::
# 247 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "我懒得给作者写脚本，\n"
	.string "所以只好说这些废话！\p"
	.string "你要是输给我，说明你是个\n"
	.string "彻头彻尾的菜鸟，因为这游戏\l"
	.string "简单得很。\p"
	.string "要是你能打赢我，我就送你\n"
	.string "火系初始宝可梦的超级石，\l"
	.string "龙之舞的招式学习器，还有一套\l"
	.string "讲究眼镜。\p"
	.string "那到底打不打？$"

Cap_ReadyYet::
# 260 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "准备好了没？$"

Cap_ComeBackWhenReady::
# 264 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "真没劲。$"

Cap_ExplainItems::
# 268 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "说实话，打赢我的奖励\n"
	.string "超值，大概值这点\l"
	.string "麻烦。$"

Cap_Outro::
# 274 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "看来我组的队伍\n"
	.string "太烂了，希望下个改版运气好点。$"

PostBattle_Cap::
# 280 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "回去……继续什么都不干。$"

X_Greeting::
# 342 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "哟！我正要在土台龟的背上\n"
	.string "吃午饭，不过那事\l"
	.string "可以等等。你要趁现在\l"
	.string "打一场吗？\p"
	.string "你要是能打赢我，我就送你\n"
	.string "草系初始宝可梦的超级石，\l"
	.string "地震的招式学习器，还有\l"
	.string "讲究头带。来不来？$"

X_ReadyYet::
# 353 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "现在来吗？$"

X_ComeBackWhenReady::
# 357 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "要是改主意，\n"
	.string "你知道在哪儿找我。$"

X_ExplainItems::
# 362 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "当年这一招地震，\n"
	.string "帮我打通了好多次珍珠版\l"
	.string "流程。\p"
	.string "不过这个游戏应该会\n"
	.string "难上一点（当然，除非你用\l"
	.string "土台龟，因为它是神，别\l"
	.string "听别人乱说）。\p"
	.string "还有比在他背上野餐\n"
	.string "更棒的吗？也许树上还有姆克儿。\p"
	.string "总之，希望你喜欢超级形态的\n"
	.string "图，我自己设计的！$"

X_Outro::
# 376 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "你啊，把我的\n"
	.string "胃口都弄没了……$"

PostBattle_X::
# 382 "data/maps/FortreeCity_CreatorHouse/scripts.pory"
	.string "……连这顿三明治都不配吃……$"
