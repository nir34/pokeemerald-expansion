# 1 "data/maps/PacifidlogTown_House3/scripts.pory"

# 2 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_MapScripts::
# 3 "data/maps/PacifidlogTown_House3/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House3/scripts.pory"

# 5 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Trader::
# 6 "data/maps/PacifidlogTown_House3/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House3/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_TradeCompleted
# 9 "data/maps/PacifidlogTown_House3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_IRON_BUNDLE
# 10 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 11 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 12 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 13 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WillingToTradeIt, MSGBOX_YESNO
# 14 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PacifidlogTown_House3_EventScript_DeclineTrade
# 15 "data/maps/PacifidlogTown_House3/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 17 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 18 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PacifidlogTown_House3_EventScript_DeclineTrade
# 19 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 20 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 21 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 22 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, PacifidlogTown_House3_EventScript_NotRequestedMon
# 23 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 24 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 25 "data/maps/PacifidlogTown_House3/scripts.pory"
	special CreateInGameTradePokemon
# 26 "data/maps/PacifidlogTown_House3/scripts.pory"
	special DoInGameTradeScene
# 27 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 28 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 29 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou, MSGBOX_DEFAULT
# 30 "data/maps/PacifidlogTown_House3/scripts.pory"
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
# 31 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 32 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 33 "data/maps/PacifidlogTown_House3/scripts.pory"

# 34 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_DeclineTrade::
# 35 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
# 36 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 37 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 38 "data/maps/PacifidlogTown_House3/scripts.pory"

# 39 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_NotRequestedMon::
# 40 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 41 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
# 42 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 43 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 44 "data/maps/PacifidlogTown_House3/scripts.pory"

# 45 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_TradeCompleted::
# 46 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
# 47 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 48 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 49 "data/maps/PacifidlogTown_House3/scripts.pory"

# 50 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Girl::
# 51 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
# 52 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 53 "data/maps/PacifidlogTown_House3/scripts.pory"

# 54 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WillingToTradeIt:
# 55 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "我找到了这个怪模怪样\n"
# 56 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "的机器鸟……我不太\l"
# 57 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "喜欢，我想要的是\l"
# 58 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "原版。\p"
# 59 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "对了，你该不会有\n"
# 60 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "信使鸟吧？\p"
# 61 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "有的话，我用这个\n"
# 62 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "铁包袱跟你换！$"
# 63 "data/maps/PacifidlogTown_House3/scripts.pory"

# 64 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou:
# 65 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "太好了，是原版！\n"
# 66 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "我不知道这个廉价\l"
# 67 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "仿货是从哪儿来的，\l"
# 68 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "但真货永远最强。\p"
# 69 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "太谢谢你了！$"
# 70 "data/maps/PacifidlogTown_House3/scripts.pory"

# 71 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon:
# 72 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "嘿，那不是信使鸟！\n"
# 73 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "你想糊弄我？$"
# 74 "data/maps/PacifidlogTown_House3/scripts.pory"

# 75 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_NotDesperateOrAnything:
# 76 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "哦，那你不换了？\p"
# 77 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "也好。我也不是\n"
# 78 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "非要交换。$"
# 79 "data/maps/PacifidlogTown_House3/scripts.pory"

# 80 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ReallyWantedToGetBagon:
# 81 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "我都不知道你是在\n"
# 82 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "哪儿找到这只信使鸟的，\l"
# 83 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "我到处找，只找到那个\l"
# 84 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "怪机器。$"
# 85 "data/maps/PacifidlogTown_House3/scripts.pory"

# 86 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_IsThatAPokedex:
# 87 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "那是宝可梦图鉴？\p"
# 88 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "你是不是见到了很多\n"
# 89 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "不同的宝可梦？\p"
# 90 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "真希望我也像你一样。$"
