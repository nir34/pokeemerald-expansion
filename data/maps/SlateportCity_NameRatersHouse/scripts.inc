# 1 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 2 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_MapScripts::
# 3 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 5 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_MoveDeleterOriginal::
# 6 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	lockall
# 7 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
# 8 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitmovement 0
# 9 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
# 10 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	switch VAR_RESULT
# 11 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case YES, SlateportCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 12 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case NO, SlateportCity_MoveDeletersHouse_EventScript_ComeAgain
# 13 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 14 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 15 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 16 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
# 17 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
# 18 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special ChoosePartyMon
# 19 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 20 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_MoveDeletersHouse_EventScript_ComeAgain
# 21 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special IsSelectedMonEgg
# 22 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
# 23 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special GetNumMovesSelectedMonHas
# 24 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SlateportCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
# 25 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
# 26 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 28 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 29 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, SlateportCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 30 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 31 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 32 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	switch VAR_RESULT
# 33 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case YES, SlateportCity_MoveDeletersHouse_EventScript_TryForgetMove
# 34 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case NO, SlateportCity_MoveDeletersHouse_EventScript_ComeAgain
# 35 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 36 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 37 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 38 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_TryForgetMove::
# 39 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special MoveDeleterForgetMove
# 40 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 41 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitfanfare
# 42 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
# 43 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 44 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 45 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 46 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove::
# 47 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 48 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
# 49 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 50 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 51 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 52 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_EggCantForgetMoves::
# 53 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
# 54 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 55 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 56 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 57 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_EventScript_ComeAgain::
# 58 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
# 59 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	releaseall
# 60 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 61 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 62 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater::
# 63 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_NPC
# 64 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 65 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 66 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate::
# 67 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
# 68 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special ChoosePartyMon
# 69 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 70 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_RateMonNickname
# 71 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 72 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 73 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 74 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
# 75 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
# 76 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 77 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 78 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 79 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
# 80 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 81 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, SlateportCity_NameRatersHouse_EventScript_CantRateEgg
# 82 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 83 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special IsMonOTIDNotPlayers
# 84 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 85 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 86 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 87 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 88 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
# 89 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChangeNickname
# 90 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 91 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 92 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 93 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_CantRateEgg::
# 94 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 96 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 97 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 98 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
# 99 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
# 100 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 101 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 102 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 103 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
# 104 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
# 105 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 106 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 107 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 108 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
# 109 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
# 110 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 111 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 112 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 113 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NewNameDifferent::
# 114 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
# 115 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 116 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 117 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 118 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname:
# 119 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "你好，你好！我是\n"
# 120 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "改名的达人！\p"
# 121 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "不过我现在懒得管，你的\n"
# 122 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "昵称看起来都很好！或者很糟！\p"
# 123 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "我其实不在乎，\n"
# 124 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "我已经退休了。$"
# 125 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 126 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
# 127 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "你想让我点评哪只\n"
# 128 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "宝可梦的昵称？$"
# 129 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 130 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
# 131 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "嗯……{STR_VAR_1}，是吧？\n"
# 132 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "你起的名字还真不错。\p"
# 133 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "不过！要是我来提个\n"
# 134 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "更好的名字，怎么样？$"
# 135 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 136 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe:
# 137 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "啊，好。那么新的昵称\n"
# 138 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "要叫什么呢？$"
# 139 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 140 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName:
# 141 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "好了！从今以后，这只\n"
# 142 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "宝可梦就叫{STR_VAR_1}！\p"
# 143 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "这比原来好听多了！\n"
# 144 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "你真有福气！$"
# 145 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 146 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_DoVisitAgain:
# 147 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "我明白了。\n"
# 148 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "欢迎再来。$"
# 149 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 150 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
# 151 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "好了！从今以后，这只\n"
# 152 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "宝可梦就叫{STR_VAR_1}！\p"
# 153 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "看起来和以前没什么不同，\n"
# 154 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "不过这可是高明多了！\p"
# 155 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "你真有福气！$"
# 156 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 157 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MagnificentName:
# 158 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "嗯……叫{STR_VAR_1}！\p"
# 159 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "这是个了不起的昵称！\n"
# 160 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "完美得无可挑剔！\p"
# 161 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "你就好好珍惜你的\n"
# 162 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_1}吧。$"
# 163 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 164 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
# 165 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "喂喂。\n"
# 166 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "那只是一颗蛋！$"
# 167 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 168 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 169 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 170 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove:
# 171 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "呃……\n"
# 172 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "哦，对，我是忘招师。\p"
# 173 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "我能让宝可梦忘记招式。\p"
# 174 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "要我帮你吗？$"
# 175 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 176 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_WhichMonShouldForget:
# 177 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "要让哪只宝可梦\n"
# 178 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "忘记招式？$"
# 179 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 180 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten:
# 181 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "要让哪个招式\n"
# 182 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "被忘记？$"
# 183 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 184 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove:
# 185 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_1}只学会了一个招式，\n"
# 186 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "没得忘……$"
# 187 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 188 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten:
# 189 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "哦！{STR_VAR_1}的\n"
# 190 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_2}？\l"
# 191 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "要忘记这个招式？$"
# 192 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 193 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_MonHasForgottenMove:
# 194 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "完美成功！\p"
# 195 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_1}已经把\n"
# 196 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_2}忘得干干净净。$"
# 197 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 198 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_ComeAgain:
# 199 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "要是有招式需要忘记，\n"
# 200 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "再来找我吧。$"
# 201 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 202 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_MoveDeletersHouse_Text_EggCantForgetMoves:
# 203 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "什么？\n"
# 204 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "蛋可不会什么招式。$"
