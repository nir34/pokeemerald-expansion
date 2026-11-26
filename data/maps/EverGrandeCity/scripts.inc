# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
.set LOCALID_VOLKNER, 3
# 3 "data/maps/EverGrandeCity/scripts.pory"

# 4 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 5 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 6 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity/scripts.pory"

# 8 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 9 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 10 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_BEAT_BOTH_RIVALS, Common_EventScript_SetupRivalGfxId
# 11 "data/maps/EverGrandeCity/scripts.pory"
	end
# 12 "data/maps/EverGrandeCity/scripts.pory"

# 13 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 14 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 15 "data/maps/EverGrandeCity/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity/scripts.pory"

# 17 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 18 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 19 "data/maps/EverGrandeCity/scripts.pory"
	end
# 20 "data/maps/EverGrandeCity/scripts.pory"

# 21 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 22 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 23 "data/maps/EverGrandeCity/scripts.pory"
	end
# 24 "data/maps/EverGrandeCity/scripts.pory"

# 25 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_Rival::
# 26 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 27 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 28 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 29 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_EventScript_May
# 30 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_EventScript_Brendan
# 31 "data/maps/EverGrandeCity/scripts.pory"
	end
# 32 "data/maps/EverGrandeCity/scripts.pory"

# 33 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_May::
# 34 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_BeatRivalNotDawn
# 35 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_MayAskToBattleAgain
# 36 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_MayAskToBattle
# 37 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineMayBattle
# 38 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 39 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 40 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BattleMayTreecko
# 41 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BattleMayTorchic
# 42 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BattleMayMudkip
# 43 "data/maps/EverGrandeCity/scripts.pory"
	end
# 44 "data/maps/EverGrandeCity/scripts.pory"

# 45 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayAskToBattleAgain::
# 46 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayBattleMe, MSGBOX_YESNO
# 47 "data/maps/EverGrandeCity/scripts.pory"
	return
# 48 "data/maps/EverGrandeCity/scripts.pory"

# 49 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MayAskToBattle::
# 50 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 51 "data/maps/EverGrandeCity/scripts.pory"
	return
# 52 "data/maps/EverGrandeCity/scripts.pory"

# 53 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DeclineMayBattle::
# 54 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE
# 55 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 56 "data/maps/EverGrandeCity/scripts.pory"
	release
# 57 "data/maps/EverGrandeCity/scripts.pory"
	end
# 58 "data/maps/EverGrandeCity/scripts.pory"

# 59 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTreecko::
# 60 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TREECKO, EverGrandeCity_Text_MayDefeat
# 61 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 62 "data/maps/EverGrandeCity/scripts.pory"
	end
# 63 "data/maps/EverGrandeCity/scripts.pory"

# 64 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayTorchic::
# 65 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_TORCHIC, EverGrandeCity_Text_MayDefeat
# 66 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 67 "data/maps/EverGrandeCity/scripts.pory"
	end
# 68 "data/maps/EverGrandeCity/scripts.pory"

# 69 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleMayMudkip::
# 70 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_EVERGRANDE_MUDKIP, EverGrandeCity_Text_MayDefeat
# 71 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedMay
# 72 "data/maps/EverGrandeCity/scripts.pory"
	end
# 73 "data/maps/EverGrandeCity/scripts.pory"

# 74 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedMay::
# 75 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_EVERGRANDE_CITY_BEAT_RIVAL
# 76 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_RivalsFlyAway
# 77 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatDawn, MSGBOX_DEFAULT
# 78 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 79 "data/maps/EverGrandeCity/scripts.pory"
	end
# 80 "data/maps/EverGrandeCity/scripts.pory"

# 81 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_Brendan::
# 82 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_BeatRivalNotDawn
# 83 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattleAgain
# 84 "data/maps/EverGrandeCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE, EverGrandeCity_EventScript_BrendanAskToBattle
# 85 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineBrendanBattle
# 86 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 87 "data/maps/EverGrandeCity/scripts.pory"
	switch VAR_STARTER_MON
# 88 "data/maps/EverGrandeCity/scripts.pory"
	case 0, EverGrandeCity_EventScript_BattleBrendanTreecko
# 89 "data/maps/EverGrandeCity/scripts.pory"
	case 1, EverGrandeCity_EventScript_BattleBrendanTorchic
# 90 "data/maps/EverGrandeCity/scripts.pory"
	case 2, EverGrandeCity_EventScript_BattleBrendanMudkip
# 91 "data/maps/EverGrandeCity/scripts.pory"
	end
# 92 "data/maps/EverGrandeCity/scripts.pory"

# 93 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattleAgain::
# 94 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 95 "data/maps/EverGrandeCity/scripts.pory"
	return
# 96 "data/maps/EverGrandeCity/scripts.pory"

# 97 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BrendanAskToBattle::
# 98 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 99 "data/maps/EverGrandeCity/scripts.pory"
	return
# 100 "data/maps/EverGrandeCity/scripts.pory"

# 101 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DeclineBrendanBattle::
# 102 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_EVERGRANDE
# 103 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 104 "data/maps/EverGrandeCity/scripts.pory"
	release
# 105 "data/maps/EverGrandeCity/scripts.pory"
	end
# 106 "data/maps/EverGrandeCity/scripts.pory"

# 107 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTreecko::
# 108 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TREECKO, EverGrandeCity_Text_BrendanDefeat
# 109 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 110 "data/maps/EverGrandeCity/scripts.pory"
	end
# 111 "data/maps/EverGrandeCity/scripts.pory"

# 112 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanTorchic::
# 113 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_TORCHIC, EverGrandeCity_Text_BrendanDefeat
# 114 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 115 "data/maps/EverGrandeCity/scripts.pory"
	end
# 116 "data/maps/EverGrandeCity/scripts.pory"

# 117 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BattleBrendanMudkip::
# 118 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_EVERGRANDE_MUDKIP, EverGrandeCity_Text_BrendanDefeat
# 119 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DefeatedBrendan
# 120 "data/maps/EverGrandeCity/scripts.pory"
	end
# 121 "data/maps/EverGrandeCity/scripts.pory"

# 122 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DefeatedBrendan::
# 123 "data/maps/EverGrandeCity/scripts.pory"
    setflag FLAG_EVERGRANDE_CITY_BEAT_RIVAL
# 124 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_RivalsFlyAway
# 125 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatDawn, MSGBOX_DEFAULT
# 126 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 127 "data/maps/EverGrandeCity/scripts.pory"
	end
# 128 "data/maps/EverGrandeCity/scripts.pory"

# 129 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_BeatRivalNotDawn::
# 130 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_NotMovingUntilDawn, MSGBOX_DEFAULT
# 131 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 132 "data/maps/EverGrandeCity/scripts.pory"
	end
# 133 "data/maps/EverGrandeCity/scripts.pory"

# 134 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_RivalFlyAway::
# 135 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 136 "data/maps/EverGrandeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 137 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 138 "data/maps/EverGrandeCity/scripts.pory"
	delay 50
# 139 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 140 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 141 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 142 "data/maps/EverGrandeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 143 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 144 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 145 "data/maps/EverGrandeCity/scripts.pory"
	release
# 146 "data/maps/EverGrandeCity/scripts.pory"
	end
# 147 "data/maps/EverGrandeCity/scripts.pory"

# 148 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 149 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 150 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 151 "data/maps/EverGrandeCity/scripts.pory"
	end
# 152 "data/maps/EverGrandeCity/scripts.pory"

# 153 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_MomRoamerCall::
# 154 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 155 "data/maps/EverGrandeCity/scripts.pory"
	pokenavcall MatchCall_Text_MomRoamers
# 156 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 157 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 158 "data/maps/EverGrandeCity/scripts.pory"
	special InitRoamer
# 159 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_ROAMER_MATCH_CALL
# 160 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 161 "data/maps/EverGrandeCity/scripts.pory"
	end
# 162 "data/maps/EverGrandeCity/scripts.pory"

# 163 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayShoppingLetsBattle:
# 164 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}！小光跟我说了\n"
# 165 "data/maps/EverGrandeCity/scripts.pory"
	.string "水舰队、熔岩队和源治\l"
# 166 "data/maps/EverGrandeCity/scripts.pory"
	.string "的一切！\p"
# 167 "data/maps/EverGrandeCity/scripts.pory"
	.string "真不敢相信他做了那种\n"
# 168 "data/maps/EverGrandeCity/scripts.pory"
	.string "事，不过我更加佩服\l"
# 169 "data/maps/EverGrandeCity/scripts.pory"
	.string "你一个人就把他们\l"
# 170 "data/maps/EverGrandeCity/scripts.pory"
	.string "全阻止了！\p"
# 171 "data/maps/EverGrandeCity/scripts.pory"
	.string "说出来有点傻，不过我们\n"
# 172 "data/maps/EverGrandeCity/scripts.pory"
	.string "想在你进入冠军之路\l"
# 173 "data/maps/EverGrandeCity/scripts.pory"
	.string "之前，给你最后一场\l"
# 174 "data/maps/EverGrandeCity/scripts.pory"
	.string "考验！毕竟我们是\l"
# 175 "data/maps/EverGrandeCity/scripts.pory"
	.string "劲敌嘛！\p"
# 176 "data/maps/EverGrandeCity/scripts.pory"
	.string "别担心，我们不会让\n"
# 177 "data/maps/EverGrandeCity/scripts.pory"
	.string "你同时打我们两个。\l"
# 178 "data/maps/EverGrandeCity/scripts.pory"
	.string "不过你得打赢我们俩\l"
# 179 "data/maps/EverGrandeCity/scripts.pory"
	.string "才能过去！那么……\p"
# 180 "data/maps/EverGrandeCity/scripts.pory"
	.string "最后再打一场，\n"
# 181 "data/maps/EverGrandeCity/scripts.pory"
	.string "你说怎么样？$"
# 182 "data/maps/EverGrandeCity/scripts.pory"

# 183 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayNotRaisingPokemon:
# 184 "data/maps/EverGrandeCity/scripts.pory"
	.string "哦，那好吧。不过告诉你，\n"
# 185 "data/maps/EverGrandeCity/scripts.pory"
	.string "你不打赢小光和我，\l"
# 186 "data/maps/EverGrandeCity/scripts.pory"
	.string "我可不走！$"
# 187 "data/maps/EverGrandeCity/scripts.pory"

# 188 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayBattleMe:
# 189 "data/maps/EverGrandeCity/scripts.pory"
	.string "来，再和我打一场！\n"
# 190 "data/maps/EverGrandeCity/scripts.pory"
	.string "你说呢？$"
# 191 "data/maps/EverGrandeCity/scripts.pory"

# 192 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayWontBeBeaten:
# 193 "data/maps/EverGrandeCity/scripts.pory"
	.string "让你看看我变\n"
# 194 "data/maps/EverGrandeCity/scripts.pory"
	.string "多强了！$"
# 195 "data/maps/EverGrandeCity/scripts.pory"

# 196 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayDefeat:
# 197 "data/maps/EverGrandeCity/scripts.pory"
	.string "… … … … … … … …\p"
# 198 "data/maps/EverGrandeCity/scripts.pory"
	.string "我还记得在103号道路\n"
# 199 "data/maps/EverGrandeCity/scripts.pory"
	.string "和你打的那一场，\l"
# 200 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}。\p"
# 201 "data/maps/EverGrandeCity/scripts.pory"
	.string "就是那一战让你变\n"
# 202 "data/maps/EverGrandeCity/scripts.pory"
	.string "这么强的吧？$"
# 203 "data/maps/EverGrandeCity/scripts.pory"

# 204 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MayGoingBackToLittleroot:
# 205 "data/maps/EverGrandeCity/scripts.pory"
	.string "总之，我打算不久\n"
# 206 "data/maps/EverGrandeCity/scripts.pory"
	.string "就回未白镇。\p"
# 207 "data/maps/EverGrandeCity/scripts.pory"
	.string "我抓了一批不错的\n"
# 208 "data/maps/EverGrandeCity/scripts.pory"
	.string "宝可梦，图鉴也\l"
# 209 "data/maps/EverGrandeCity/scripts.pory"
	.string "有进展了，所以想\l"
# 210 "data/maps/EverGrandeCity/scripts.pory"
	.string "回去给我爸看看。\p"
# 211 "data/maps/EverGrandeCity/scripts.pory"
	.string "就像小光说的，你能行，\n"
# 212 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}。我知道你\l"
# 213 "data/maps/EverGrandeCity/scripts.pory"
	.string "强得足以成为冠军！\p"
# 214 "data/maps/EverGrandeCity/scripts.pory"
	.string "哦，还有一件事。我们\n"
# 215 "data/maps/EverGrandeCity/scripts.pory"
	.string "刚到这里时，看到\l"
# 216 "data/maps/EverGrandeCity/scripts.pory"
	.string "小胜走进了\l"
# 217 "data/maps/EverGrandeCity/scripts.pory"
	.string "冠军之路。\p"
# 218 "data/maps/EverGrandeCity/scripts.pory"
	.string "他看起来特别坚决，\n"
# 219 "data/maps/EverGrandeCity/scripts.pory"
	.string "简直不像你在紫堇\l"
# 220 "data/maps/EverGrandeCity/scripts.pory"
	.string "打赢的那个胆小的\l"
# 221 "data/maps/EverGrandeCity/scripts.pory"
	.string "孩子……\p"
# 222 "data/maps/EverGrandeCity/scripts.pory"
	.string "就想提醒你一下！\n"
# 223 "data/maps/EverGrandeCity/scripts.pory"
	.string "总之，保重，{PLAYER}，\l"
# 224 "data/maps/EverGrandeCity/scripts.pory"
	.string "我们很快会再见的！$"
# 225 "data/maps/EverGrandeCity/scripts.pory"

# 226 "data/maps/EverGrandeCity/scripts.pory"

# 227 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_RivalTakeKubfu:
# 228 "data/maps/EverGrandeCity/scripts.pory"
	.string "来，{PLAYER}，我出发前\n"
# 229 "data/maps/EverGrandeCity/scripts.pory"
	.string "还有最后一件礼物。$"
# 230 "data/maps/EverGrandeCity/scripts.pory"

# 231 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanShoppingLetsBattle:
# 232 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}！小光跟我说了\n"
# 233 "data/maps/EverGrandeCity/scripts.pory"
	.string "水舰队、熔岩队和源治\l"
# 234 "data/maps/EverGrandeCity/scripts.pory"
	.string "的一切！\p"
# 235 "data/maps/EverGrandeCity/scripts.pory"
	.string "真不敢相信他做了那种\n"
# 236 "data/maps/EverGrandeCity/scripts.pory"
	.string "事，不过我更加佩服\l"
# 237 "data/maps/EverGrandeCity/scripts.pory"
	.string "你一个人就把他们\l"
# 238 "data/maps/EverGrandeCity/scripts.pory"
	.string "全阻止了！\p"
# 239 "data/maps/EverGrandeCity/scripts.pory"
	.string "说出来有点傻，不过我们\n"
# 240 "data/maps/EverGrandeCity/scripts.pory"
	.string "想在你进入冠军之路\l"
# 241 "data/maps/EverGrandeCity/scripts.pory"
	.string "之前，给你最后一场\l"
# 242 "data/maps/EverGrandeCity/scripts.pory"
	.string "考验！毕竟我们是\l"
# 243 "data/maps/EverGrandeCity/scripts.pory"
	.string "劲敌嘛！\p"
# 244 "data/maps/EverGrandeCity/scripts.pory"
	.string "别担心，我们不会让\n"
# 245 "data/maps/EverGrandeCity/scripts.pory"
	.string "你同时打我们两个。\l"
# 246 "data/maps/EverGrandeCity/scripts.pory"
	.string "不过你得打赢我们俩\l"
# 247 "data/maps/EverGrandeCity/scripts.pory"
	.string "才能过去！那么……\p"
# 248 "data/maps/EverGrandeCity/scripts.pory"
	.string "最后再打一场，\n"
# 249 "data/maps/EverGrandeCity/scripts.pory"
	.string "你说怎么样？$"
# 250 "data/maps/EverGrandeCity/scripts.pory"

# 251 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanNoConfidence:
# 252 "data/maps/EverGrandeCity/scripts.pory"
	.string "你这么说的话……不过\n"
# 253 "data/maps/EverGrandeCity/scripts.pory"
	.string "没打过我可不会走！$"
# 254 "data/maps/EverGrandeCity/scripts.pory"

# 255 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanBattleMe:
# 256 "data/maps/EverGrandeCity/scripts.pory"
	.string "来啊，{PLAYER}。这次我\n"
# 257 "data/maps/EverGrandeCity/scripts.pory"
	.string "真的要赢你！\l"
# 258 "data/maps/EverGrandeCity/scripts.pory"
	.string "你说怎么样？$"
# 259 "data/maps/EverGrandeCity/scripts.pory"

# 260 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanWontBeBeaten:
# 261 "data/maps/EverGrandeCity/scripts.pory"
	.string "让你看看我变\n"
# 262 "data/maps/EverGrandeCity/scripts.pory"
	.string "多强了！$"
# 263 "data/maps/EverGrandeCity/scripts.pory"

# 264 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanDefeat:
# 265 "data/maps/EverGrandeCity/scripts.pory"
	.string "… … … … … … … …\p"
# 266 "data/maps/EverGrandeCity/scripts.pory"
	.string "我还记得在103号道路\n"
# 267 "data/maps/EverGrandeCity/scripts.pory"
	.string "和你打的那一场，\l"
# 268 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}。\p"
# 269 "data/maps/EverGrandeCity/scripts.pory"
	.string "就是那一战让你变\n"
# 270 "data/maps/EverGrandeCity/scripts.pory"
	.string "这么强的吧？$"
# 271 "data/maps/EverGrandeCity/scripts.pory"

# 272 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_BrendanGoingBackToLittleroot:
# 273 "data/maps/EverGrandeCity/scripts.pory"
	.string "总之，我……\n"
# 274 "data/maps/EverGrandeCity/scripts.pory"
	.string "我打算回未白镇。\p"
# 275 "data/maps/EverGrandeCity/scripts.pory"
	.string "你知道我在帮我爸做\n"
# 276 "data/maps/EverGrandeCity/scripts.pory"
	.string "图鉴。进展还挺\l"
# 277 "data/maps/EverGrandeCity/scripts.pory"
	.string "不错，所以该回去\l"
# 278 "data/maps/EverGrandeCity/scripts.pory"
	.string "给他看看。\p"
# 279 "data/maps/EverGrandeCity/scripts.pory"
	.string "就像小光说的，你能行，\n"
# 280 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}。我知道你\l"
# 281 "data/maps/EverGrandeCity/scripts.pory"
	.string "强得足以成为冠军！\p"
# 282 "data/maps/EverGrandeCity/scripts.pory"
	.string "哦，还有一件事。我们\n"
# 283 "data/maps/EverGrandeCity/scripts.pory"
	.string "刚到这里时，看到\l"
# 284 "data/maps/EverGrandeCity/scripts.pory"
	.string "小胜走进了\l"
# 285 "data/maps/EverGrandeCity/scripts.pory"
	.string "冠军之路。\p"
# 286 "data/maps/EverGrandeCity/scripts.pory"
	.string "他看起来特别坚决，\n"
# 287 "data/maps/EverGrandeCity/scripts.pory"
	.string "简直不像你在紫堇\l"
# 288 "data/maps/EverGrandeCity/scripts.pory"
	.string "打赢的那个胆小的\l"
# 289 "data/maps/EverGrandeCity/scripts.pory"
	.string "孩子……\p"
# 290 "data/maps/EverGrandeCity/scripts.pory"
	.string "就想提醒你一下！\n"
# 291 "data/maps/EverGrandeCity/scripts.pory"
	.string "总之，保重，{PLAYER}，\l"
# 292 "data/maps/EverGrandeCity/scripts.pory"
	.string "我们很快会再见的！$"
# 293 "data/maps/EverGrandeCity/scripts.pory"

# 294 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 295 "data/maps/EverGrandeCity/scripts.pory"
	.string "进入冠军之路$"
# 296 "data/maps/EverGrandeCity/scripts.pory"

# 297 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 298 "data/maps/EverGrandeCity/scripts.pory"
	.string "进入宝可梦联盟\n"
# 299 "data/maps/EverGrandeCity/scripts.pory"
	.string "中央大门$"
# 300 "data/maps/EverGrandeCity/scripts.pory"

# 301 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 302 "data/maps/EverGrandeCity/scripts.pory"
	.string "彩幽市\p"
# 303 "data/maps/EverGrandeCity/scripts.pory"
	.string "“花、海与宝可梦的\n"
# 304 "data/maps/EverGrandeCity/scripts.pory"
	.string "乐园。”$"

EverGrandeCity_EventScript_Dawn::
# 309 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 310 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 311 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_BEAT_DAWN_EVERGRANDE, EverGrandeCity_EventScript_BeatDawnNotRival
# 312 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_DECLINED_DAWN_EVERGRANDE, EverGrandeCity_EventScript_DawnRequestBattleAgain
# 313 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Dawn_GreetingEvergrande, MSGBOX_YESNO
# 314 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleDawnPrompt
	end


EverGrandeCity_EventScript_DawnRequestBattleAgain::
# 319 "data/maps/EverGrandeCity/scripts.pory"
	msgbox ReadyYetFinal, MSGBOX_YESNO
# 320 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleDawnPrompt
	end


EverGrandeCity_EventScript_BattleDawnPrompt::
# 325 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, EverGrandeCity_EventScript_BattleDawn
# 326 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineDawnBattle
# 327 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
	end


EverGrandeCity_EventScript_DeclineDawnBattle::
# 332 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_DECLINED_DAWN_EVERGRANDE
# 333 "data/maps/EverGrandeCity/scripts.pory"
	msgbox ComeBackWhenReadyFinal, MSGBOX_DEFAULT
# 334 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleDawn::
# 339 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BattleDawn_Text_0, MSGBOX_DEFAULT
# 340 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_DAWN_EVERGRANDE, Dawn_OutroEvergrande
# 341 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_DawnDefeated
	return


EverGrandeCity_EventScript_DawnDefeated::
# 347 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_DAWN_EVERGRANDE
# 348 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_EVERGRANDE_CITY_BEAT_RIVAL, EverGrandeCity_EventScript_RivalsFlyAway
# 349 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CanYouBeatRival, MSGBOX_DEFAULT
# 350 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BeatDawnNotRival::
# 355 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_NotMovingUntilRival, MSGBOX_DEFAULT
# 356 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_RivalsFlyAway::
# 362 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 363 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 364 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnFarewell, MSGBOX_DEFAULT
# 365 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_DRACO_METEOR
# 366 "data/maps/EverGrandeCity/scripts.pory"
	msgbox DawnFarewell2, MSGBOX_DEFAULT
# 367 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 368 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 369 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 370 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 371 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 372 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 2
# 373 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 374 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 375 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_RivalFarewellStart
# 376 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_RivalFarewellStart::
# 381 "data/maps/EverGrandeCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 382 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 383 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_RivalTakeKubfu, MSGBOX_DEFAULT
# 384 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 385 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_RivalGiveKubfu
# 386 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_MayFarewell::
# 391 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 392 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 393 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 394 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 395 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 396 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 397 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 398 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 399 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 400 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 401 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 402 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 403 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_BOTH_RIVALS
# 404 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_BrendanFarewell::
# 409 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 410 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 411 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 412 "data/maps/EverGrandeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 413 "data/maps/EverGrandeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 414 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 415 "data/maps/EverGrandeCity/scripts.pory"
	removeobject 1
# 416 "data/maps/EverGrandeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 417 "data/maps/EverGrandeCity/scripts.pory"
	delay 15
# 418 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 419 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 420 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 421 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_BEAT_BOTH_RIVALS
# 422 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_RivalGiveKubfu::
# 427 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KUBFU
# 428 "data/maps/EverGrandeCity/scripts.pory"
	givemonrandom SPECIES_KUBFU, 40
# 429 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, EverGrandeCity_EventScript_ReceiveKubfuParty
# 430 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, EverGrandeCity_EventScript_ReceiveKubfuPC
# 431 "data/maps/EverGrandeCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 432 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_ReceiveKubfuParty::
# 437 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedKubfuFanfare
# 438 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 439 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_ExplainKubfu
# 440 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 441 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 442 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainKubfu
	end


EverGrandeCity_EventScript_ReceiveKubfuPC::
# 448 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedKubfuFanfare
# 449 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 450 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_SendKubfuToPC
# 451 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 452 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_SendKubfuToPC
	end


EverGrandeCity_EventScript_SendKubfuToPC::
# 458 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_TransferredToPC
# 459 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainKubfu
	end


EverGrandeCity_EventScript_ReceivedKubfuFanfare::
# 465 "data/maps/EverGrandeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 466 "data/maps/EverGrandeCity/scripts.pory"
	message EverGrandeCity_Text_PlayerReceivedKubfu
# 467 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 468 "data/maps/EverGrandeCity/scripts.pory"
	waitfanfare
# 469 "data/maps/EverGrandeCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KUBFU
	return


EverGrandeCity_EventScript_ExplainKubfu::
# 475 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Rival_ExplainKubfu, MSGBOX_DEFAULT
# 476 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_RECEIVED_KUBFU
# 477 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 478 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_EventScript_MayFarewell
# 479 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_EventScript_BrendanFarewell
# 480 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_Volkner::
# 570 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 571 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_VOLKNER, Common_Movement_FacePlayer
# 572 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_defeated TRAINER_VOLKNER, EverGrandeCity_EventScript_VolknerDefeated
# 573 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_TEMP_1, EverGrandeCity_EventScript_VolknerRequestBattleAgain
# 574 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_Greeting, MSGBOX_YESNO
# 575 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleVolknerPrompt
	end


EverGrandeCity_EventScript_VolknerRequestBattleAgain::
# 580 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_ReadyYet, MSGBOX_YESNO
# 581 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_BattleVolknerPrompt
	end


EverGrandeCity_EventScript_BattleVolknerPrompt::
# 586 "data/maps/EverGrandeCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, EverGrandeCity_EventScript_BattleVolkner
# 587 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_DeclineVolknerBattle
# 588 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
	end


EverGrandeCity_EventScript_DeclineVolknerBattle::
# 593 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_TEMP_1
# 594 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_ComeBackWhenReady, MSGBOX_DEFAULT
# 595 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleVolkner::
# 600 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_BattleVolkner_Text_0, MSGBOX_DEFAULT
# 601 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_VOLKNER, Volkner_Outro
# 602 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_RISING_VOLTAGE
# 603 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_TM_SUPERCELL_SLAM
# 604 "data/maps/EverGrandeCity/scripts.pory"
	giveitem ITEM_EJECT_BUTTON
# 605 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_VolknerGiveZeraora
	return


EverGrandeCity_EventScript_VolknerDefeated::
# 611 "data/maps/EverGrandeCity/scripts.pory"
	msgbox PostBattle_Volkner, MSGBOX_DEFAULT
# 612 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_VolknerGiveZeraora::
# 617 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZERAORA
# 618 "data/maps/EverGrandeCity/scripts.pory"
	givemonrandom SPECIES_ZERAORA, 50
# 619 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, EverGrandeCity_EventScript_ReceiveZeraoraParty
# 620 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, EverGrandeCity_EventScript_ReceiveZeraoraPC
# 621 "data/maps/EverGrandeCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 622 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_ReceiveZeraoraParty::
# 627 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedZeraoraFanfare
# 628 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 629 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_ExplainZeraora
# 630 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 631 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 632 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainZeraora
	end


EverGrandeCity_EventScript_ReceiveZeraoraPC::
# 638 "data/maps/EverGrandeCity/scripts.pory"
	call EverGrandeCity_EventScript_ReceivedZeraoraFanfare
# 639 "data/maps/EverGrandeCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 640 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EverGrandeCity_EventScript_SendZeraoraToPC
# 641 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 642 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_SendZeraoraToPC
	end


EverGrandeCity_EventScript_SendZeraoraToPC::
# 648 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_TransferredToPC
# 649 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_EventScript_ExplainZeraora
	end


EverGrandeCity_EventScript_ReceivedZeraoraFanfare::
# 655 "data/maps/EverGrandeCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 656 "data/maps/EverGrandeCity/scripts.pory"
	message EverGrandeCity_Text_PlayerReceivedZeraora
# 657 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 658 "data/maps/EverGrandeCity/scripts.pory"
	waitfanfare
# 659 "data/maps/EverGrandeCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZERAORA
	return


EverGrandeCity_EventScript_ExplainZeraora::
# 665 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Volkner_ExplainZeraora, MSGBOX_DEFAULT
# 666 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_BattleDawn_Text_0:
# 339 "data/maps/EverGrandeCity/scripts.pory"
	.string "最后再打一场吧！$"

EverGrandeCity_EventScript_BattleVolkner_Text_0:
# 600 "data/maps/EverGrandeCity/scripts.pory"
	.string "这会是一场电光四射的对战！$"

EverGrandeCity_Text_PlayerReceivedKubfu::
# 484 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}得到了熊徒弟！$"

Rival_ExplainKubfu::
# 488 "data/maps/EverGrandeCity/scripts.pory"
	.string "熊徒弟有两种进化方式。\n"
	.string "用暗之石可以让它进化成\l"
	.string "我这只一击流形态，\l"
	.string "或者用水之石让它进化成\l"
	.string "连击流形态。\p"
	.string "两种都相当强。$"

Dawn_GreetingEvergrande::
# 498 "data/maps/EverGrandeCity/scripts.pory"
	.string "嘿，{PLAYER}！琉璃市那些事\n"
	.string "之后，我联系了{RIVAL}，\l"
	.string "我们决定来这儿等你。\p"
	.string "你已经赢过我们俩好几次了，\n"
	.string "不过我们说好，不能就这么\l"
	.string "让你去冠军之路，\l"
	.string "得再各打一场才行！\p"
	.string "放心，不会让你同时打我们\n"
	.string "两个。但你得把我们两个\l"
	.string "都打赢才能过去！\p"
	.string "怎么样，准备好来\n"
	.string "最后一场对战了吗？$"

ReadyYetFinal::
# 513 "data/maps/EverGrandeCity/scripts.pory"
	.string "准备好最后一场对战了吗？$"

ComeBackWhenReadyFinal::
# 517 "data/maps/EverGrandeCity/scripts.pory"
	.string "准备好了再来，我就在\n"
	.string "这儿等你！$"

Dawn_OutroEvergrande::
# 522 "data/maps/EverGrandeCity/scripts.pory"
	.string "看来你漂亮地通过了\n"
	.string "我最后的考验，{PLAYER}。\p"
	.string "虽然我从没怀疑过，不过你\n"
	.string "确实已经准备好挑战\l"
	.string "宝可梦联盟了。$"

EverGrandeCity_Text_CanYouBeatRival::
# 530 "data/maps/EverGrandeCity/scripts.pory"
	.string "谢谢你陪我打最后这一场，\n"
	.string "{PLAYER}。不过在你打赢\l"
	.string "{RIVAL}之前，我不会走！$"

EverGrandeCity_Text_NotMovingUntilRival::
# 537 "data/maps/EverGrandeCity/scripts.pory"
	.string "在你打赢小光之前，\n"
	.string "我不会走！$"

EverGrandeCity_Text_CanYouBeatDawn::
# 542 "data/maps/EverGrandeCity/scripts.pory"
	.string "打得真好，{PLAYER}，不过\n"
	.string "你也能打赢小光吗？$"

EverGrandeCity_Text_NotMovingUntilDawn::
# 547 "data/maps/EverGrandeCity/scripts.pory"
	.string "在你打赢小光之前，\n"
	.string "我不会走！$"

DawnFarewell::
# 552 "data/maps/EverGrandeCity/scripts.pory"
	.string "小光：唉，{PLAYER}，我们俩\n"
	.string "又一次不是你的对手。\p"
	.string "我还有一招学习器能帮你，\n"
	.string "希望你在那儿能用它对付\l"
	.string "四天王……等你\l"
	.string "到那儿的时候。$"

DawnFarewell2::
# 561 "data/maps/EverGrandeCity/scripts.pory"
	.string "去成为冠军吧，{PLAYER}，\n"
	.string "你一定行！\p"
	.string "再会了，朋友，后会有期！$"

Volkner_Greeting::
# 670 "data/maps/EverGrandeCity/scripts.pory"
	.string "哇，又来了一个训练家。\n"
	.string "当一个地区最强的道馆馆主，\l"
	.string "其实挺无聊的……\p"
	.string "………………\p"
	.string "我怎么知道？我叫电次，\n"
	.string "是神奥地区的\l"
	.string "第八位道馆馆主。\p"
	.string "通常，弱小的训练家还没到\n"
	.string "我这儿就被淘汰了。\p"
	.string "不过你是我在这儿遇到的\n"
	.string "第四个看起来很强的训练家，\l"
	.string "弄得我手都痒了，\l"
	.string "想来一场吗？$"

Volkner_ReadyYet::
# 686 "data/maps/EverGrandeCity/scripts.pory"
	.string "准备好和我对战了吗？$"

Volkner_ComeBackWhenReady::
# 690 "data/maps/EverGrandeCity/scripts.pory"
	.string "真无趣，我还以为你会\n"
	.string "跟普通训练家不一样。$"

EverGrandeCity_Text_PlayerReceivedZeraora::
# 695 "data/maps/EverGrandeCity/scripts.pory"
	.string "{PLAYER}得到了捷拉奥拉！$"

Volkner_ExplainZeraora::
# 699 "data/maps/EverGrandeCity/scripts.pory"
	.string "捷拉奥拉绝对是我的最爱，\n"
	.string "它电光闪烁的拳头能点亮\l"
	.string "任何一场对战！\p"
	.string "希望你能好好培育它！$"

Volkner_Outro::
# 706 "data/maps/EverGrandeCity/scripts.pory"
	.string "哈！哇，这儿训练家可比\n"
	.string "神奥强多了，真让人兴奋！$"

PostBattle_Volkner::
# 712 "data/maps/EverGrandeCity/scripts.pory"
	.string "我干脆待在这儿等更多\n"
	.string "强手吧，道馆随便谁\l"
	.string "来管都行。$"
