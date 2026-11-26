Roulette_EventScript_Table1::
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 0
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Table2::
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 1
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Play::
	special PlayRoulette
	waitstate
	end

Roulette_Text_PlayMinimumWagerIsX::
	.string "这张桌子的最低赌注\n"
	.string "是{STR_VAR_1}。要玩吗？$"

Roulette_Text_NotEnoughCoins::
	.string "你的代币不够。$"

Roulette_Text_SpecialRateTable::
	.string "现在是特别赔率桌！$"

Roulette_Text_ControlsInstruction::
	.string "用十字键下注，\n"
	.string "然后按A键。$"

Roulette_Text_ItsAHit::
	.string "It's a hit!$"

Roulette_Text_Jackpot::
	.string "中大奖！$"

Roulette_Text_NothingDoing::
	.string "什么都没有！$"

Roulette_Text_YouveWonXCoins::
	.string "你赢了{STR_VAR_1}枚代币！$"

Roulette_Text_NoCoinsLeft::
	.string "代币用完了……$"

Roulette_Text_KeepPlaying::
	.string "要继续玩吗？$"

Roulette_Text_BoardWillBeCleared::
	.string "轮盘将被清空。$"

@ Unused
Roulette_Text_YouDontHaveACoinCase::
	.string "你没有代币盒。$"

Roulette_Text_CoinCaseIsFull::
	.string "你的代币盒满了！\n"
	.string "代币可以换取奖品。$"
