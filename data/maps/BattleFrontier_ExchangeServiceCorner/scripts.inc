# 1 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 2 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_MapScripts::
# 3 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 5 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome::
# 6 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
# 7 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowBattlePointsWindow
# 8 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 9 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 10 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye::
# 11 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
# 12 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 13 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 14 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 16 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize::
# 17 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 18 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize
# 19 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
# 20 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 21 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 22 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 23 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 24 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 26 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize::
# 27 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
# 28 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
# 29 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem
# 30 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 31 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 32 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor::
# 33 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	checkdecorspace VAR_0x8009
# 34 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor
# 35 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 36 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special TakeFrontierBattlePoints
# 37 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	adddecoration VAR_0x8009
# 38 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special UpdateBattlePointsWindow
# 39 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	playse SE_SHOP
# 40 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC, MSGBOX_DEFAULT
# 41 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 42 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 43 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 45 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor::
# 46 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_PCIsFull, MSGBOX_DEFAULT
# 47 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 48 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 49 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 50 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 51 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem::
# 52 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	checkitemspace VAR_0x8009
# 53 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_BagFull
# 54 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 55 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special TakeFrontierBattlePoints
# 56 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	additem VAR_0x8009
# 57 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special UpdateBattlePointsWindow
# 58 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	playse SE_SHOP
# 59 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize, MSGBOX_DEFAULT
# 60 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 61 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 62 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 63 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 64 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_BagFull::
# 65 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
# 66 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 67 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 68 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 69 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 70 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk1::
# 71 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 72 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 73 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
# 74 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 75 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 76 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 77 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 78 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1::
# 79 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1
# 80 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 81 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 82 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 83 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 84 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster
# 86 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion
# 87 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll
# 88 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll
# 89 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll
# 90 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll
# 91 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll
# 92 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll
# 93 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll
# 94 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll
# 95 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 10, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 96 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 97 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 99 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster::
# 100 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmKissPoster, MSGBOX_YESNO
# 101 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 102 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 103 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_KISS_POSTER
# 104 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 105 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 107 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion::
# 108 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmKissCushion, MSGBOX_YESNO
# 109 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 110 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 32
# 111 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_KISS_CUSHION
# 112 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 113 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 114 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 115 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll::
# 116 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmSmoochumDoll, MSGBOX_YESNO
# 117 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 118 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 32
# 119 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_SMOOCHUM_DOLL
# 120 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 121 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 122 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 123 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll::
# 124 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmTogepiDoll, MSGBOX_YESNO
# 125 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 126 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 127 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_TOGEPI_DOLL
# 128 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 129 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 130 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 131 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll::
# 132 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmMeowthDoll, MSGBOX_YESNO
# 133 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 134 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 135 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_MEOWTH_DOLL
# 136 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 137 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 138 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 139 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll::
# 140 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmClefairyDoll, MSGBOX_YESNO
# 141 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 142 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 143 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_CLEFAIRY_DOLL
# 144 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 145 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 146 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 147 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll::
# 148 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmDittoDoll, MSGBOX_YESNO
# 149 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 150 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 151 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_DITTO_DOLL
# 152 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 153 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 154 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 155 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll::
# 156 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmCyndaquilDoll, MSGBOX_YESNO
# 157 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 158 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 80
# 159 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_CYNDAQUIL_DOLL
# 160 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 161 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 162 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 163 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll::
# 164 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmChikoritaDoll, MSGBOX_YESNO
# 165 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 166 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 80
# 167 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_CHIKORITA_DOLL
# 168 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 169 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 170 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 171 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll::
# 172 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmTotodileDoll, MSGBOX_YESNO
# 173 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 174 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 80
# 175 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_TOTODILE_DOLL
# 176 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 177 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 178 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 179 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk2::
# 180 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 181 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 182 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
# 183 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 184 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 185 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 186 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 187 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2::
# 188 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2
# 189 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 190 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 191 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 192 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 193 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 194 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll
# 195 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll
# 196 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll
# 197 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll
# 198 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll
# 199 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 200 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 201 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 202 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 203 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll::
# 204 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmLaprasDoll, MSGBOX_YESNO
# 205 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 206 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 128
# 207 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_LAPRAS_DOLL
# 208 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 209 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 210 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 211 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll::
# 212 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmSnorlaxDoll, MSGBOX_YESNO
# 213 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 214 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 128
# 215 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_SNORLAX_DOLL
# 216 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 217 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 218 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 219 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll::
# 220 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmVenusaurDoll, MSGBOX_YESNO
# 221 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 222 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 256
# 223 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_VENUSAUR_DOLL
# 224 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 225 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 226 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 227 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll::
# 228 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmCharizardDoll, MSGBOX_YESNO
# 229 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 230 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 256
# 231 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_CHARIZARD_DOLL
# 232 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 233 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 234 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 235 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll::
# 236 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmBlastoiseDoll, MSGBOX_YESNO
# 237 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 238 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 256
# 239 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, DECOR_BLASTOISE_DOLL
# 240 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 241 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 242 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 243 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_VitaminClerk::
# 244 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 245 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 246 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
# 247 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 248 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 249 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 250 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 251 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin::
# 252 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR
# 253 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 254 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 255 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 256 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 257 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 258 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_Protein
# 259 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_Calcium
# 260 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_Iron
# 261 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_Zinc
# 262 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_Carbos
# 263 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_HPUp
# 264 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 265 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 266 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 267 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 268 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Protein::
# 269 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmProtein, MSGBOX_YESNO
# 270 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 271 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 272 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_PROTEIN
# 273 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 274 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 275 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 276 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Calcium::
# 277 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmCalcium, MSGBOX_YESNO
# 278 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 279 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 280 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_CALCIUM
# 281 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 282 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 283 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 284 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Iron::
# 285 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmIron, MSGBOX_YESNO
# 286 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 287 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 288 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_IRON
# 289 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 290 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 291 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 292 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Zinc::
# 293 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmZinc, MSGBOX_YESNO
# 294 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 295 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 296 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_ZINC
# 297 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 298 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 299 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 300 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Carbos::
# 301 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmCarbos, MSGBOX_YESNO
# 302 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 303 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 304 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_CARBOS
# 305 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 306 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 307 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 308 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_HPUp::
# 309 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmHPUp, MSGBOX_YESNO
# 310 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 311 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 312 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_HP_UP
# 313 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 314 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 315 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 316 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_HoldItemClerk::
# 317 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 318 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 319 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK
# 320 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 321 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 322 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 323 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 324 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem::
# 325 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR
# 326 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 327 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 328 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 329 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 330 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 331 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers
# 332 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb
# 333 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw
# 334 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb
# 335 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder
# 336 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand
# 337 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock
# 338 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand
# 339 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens
# 340 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 341 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 342 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 343 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 344 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers::
# 345 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmLeftovers, MSGBOX_YESNO
# 346 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 347 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 348 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_LEFTOVERS
# 349 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 350 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 351 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 352 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb::
# 353 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmWhiteHerb, MSGBOX_YESNO
# 354 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 355 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 356 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_WHITE_HERB
# 357 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 358 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 359 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 360 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw::
# 361 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmQuickClaw, MSGBOX_YESNO
# 362 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 363 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 364 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_QUICK_CLAW
# 365 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 366 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 367 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 368 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb::
# 369 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmMentalHerb, MSGBOX_YESNO
# 370 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 371 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 372 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_MENTAL_HERB
# 373 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 374 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 375 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 376 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder::
# 377 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmBrightpowder, MSGBOX_YESNO
# 378 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 379 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 380 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_BRIGHT_POWDER
# 381 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 382 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 383 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 384 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand::
# 385 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmChoiceBand, MSGBOX_YESNO
# 386 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 387 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 388 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_CHOICE_BAND
# 389 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 390 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 391 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 392 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock::
# 393 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmKingsRock, MSGBOX_YESNO
# 394 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 395 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 396 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_KINGS_ROCK
# 397 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 398 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 399 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 400 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand::
# 401 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmFocusBand, MSGBOX_YESNO
# 402 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 403 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 404 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_FOCUS_BAND
# 405 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 406 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 407 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 408 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens::
# 409 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmScopeLens, MSGBOX_YESNO
# 410 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 411 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 412 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_SCOPE_LENS
# 413 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 414 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 415 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 416 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Man::
# 417 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
# 418 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 419 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 420 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Sailor::
# 421 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
# 422 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 423 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 424 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PokefanF::
# 425 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 426 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
# 427 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 428 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 429 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 430 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_RichBoy::
# 431 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
# 432 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 433 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 434 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Girl::
# 435 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
# 436 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 437 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 438 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize:
# 439 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你好，这里是兑换服务\n"
# 440 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "处。\p"
# 441 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "我们把您积攒的对战\n"
# 442 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "点数换成精美奖品。\p"
# 443 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "请从这份清单里选\n"
# 444 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "一件奖品。$"
# 445 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 446 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
@ Unused
# 447 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PleaseChoosePrize:
# 448 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "请从这份清单里选\n"
# 449 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "一件奖品。$"
# 450 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 451 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmKissPoster:
# 452 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了迷唇姐海报。\n"
# 453 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 454 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 455 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmKissCushion:
# 456 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了迷唇姐坐垫。\n"
# 457 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 458 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 459 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmSmoochumDoll:
# 460 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了迷唇娃人偶。\n"
# 461 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 462 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 463 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmTogepiDoll:
# 464 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了波克比人偶。\n"
# 465 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 466 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 467 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmMeowthDoll:
# 468 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了喵喵人偶。\n"
# 469 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 470 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 471 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmClefairyDoll:
# 472 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了皮皮人偶。\n"
# 473 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 474 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 475 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmDittoDoll:
# 476 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了百变怪人偶。\n"
# 477 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 478 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 479 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmCyndaquilDoll:
# 480 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了火球鼠人偶。\n"
# 481 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 482 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 483 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmChikoritaDoll:
# 484 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了菊草叶人偶。\n"
# 485 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 486 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 487 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmTotodileDoll:
# 488 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了小锯鳄人偶。\n"
# 489 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 490 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 491 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmLaprasDoll:
# 492 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了拉普拉斯人偶。\n"
# 493 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 494 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 495 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmSnorlaxDoll:
# 496 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了卡比兽人偶。\n"
# 497 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 498 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 499 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmVenusaurDoll:
# 500 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了妙蛙花人偶。\n"
# 501 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 502 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 503 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmCharizardDoll:
# 504 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了喷火龙人偶。\n"
# 505 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 506 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 507 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmBlastoiseDoll:
# 508 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了水箭龟人偶。\n"
# 509 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 510 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 511 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmProtein:
# 512 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了蛋白粉。\n"
# 513 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 514 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 515 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmCalcium:
# 516 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了钙片。\n"
# 517 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 518 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 519 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmIron:
# 520 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了铁片。\n"
# 521 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 522 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 523 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmZinc:
# 524 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了锌片。\n"
# 525 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 526 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 527 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmCarbos:
# 528 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了卡波司。\n"
# 529 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 530 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 531 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmHPUp:
# 532 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了增强剂。\n"
# 533 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 534 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 535 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmBrightpowder:
# 536 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了光粉。\n"
# 537 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 538 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 539 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmWhiteHerb:
# 540 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了白色香草。\n"
# 541 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 542 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 543 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmQuickClaw:
# 544 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了先制之爪。\n"
# 545 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 546 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 547 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmMentalHerb:
# 548 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了心灵香草。\n"
# 549 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 550 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 551 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmChoiceBand:
# 552 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了讲究头带。\n"
# 553 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 554 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 555 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmKingsRock:
# 556 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了王者之证。\n"
# 557 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 558 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 559 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmFocusBand:
# 560 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了气势头带。\n"
# 561 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 562 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 563 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmScopeLens:
# 564 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了焦点镜片。\n"
# 565 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 566 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 567 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmLeftovers:
# 568 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你选择了吃剩的东西。\n"
# 569 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吗？$"
# 570 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 571 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC:
# 572 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "谢谢！\n"
# 573 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "我们会把它送到您家里的\l"
# 574 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "电脑。$"
# 575 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 576 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize:
# 577 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "这是您的奖品！$"
# 578 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 579 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints:
# 580 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "非常抱歉……\n"
# 581 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "您的对战点数不够……$"
# 582 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 583 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PCIsFull:
# 584 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "非常抱歉……\n"
# 585 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "您的电脑好像满了……$"
# 586 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 587 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt:
# 588 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "非常抱歉……\n"
# 589 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "您没地方拿它……$"
# 590 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 591 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints:
# 592 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "非常感谢。\p"
# 593 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "等您攒下对战点数，\n"
# 594 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "请再来。$"
# 595 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 596 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls:
# 597 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "哦，它们真好！\n"
# 598 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "我真想要！\l"
# 599 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "可爱的坐垫！\l"
# 600 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "大个毛绒人偶！\l"
# 601 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "小个毛绒人偶！\l"
# 602 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "我全都想要！$"
# 603 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 604 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant:
# 605 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "交给你妈妈吧！\p"
# 606 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "只要是你想要的，宝贝，\n"
# 607 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "我什么都会去弄来！$"
# 608 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 609 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher:
# 610 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "要是能弄到这里的东西，\n"
# 611 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "我的宝可梦会变强。\p"
# 612 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "一定会！\n"
# 613 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "毫无疑问！$"
# 614 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 615 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll:
# 616 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "哈？\n"
# 617 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你在瞪什么？\p"
# 618 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "我不喜欢你那样盯着\n"
# 619 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "我的毛绒人偶。\p"
# 620 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "想要的话，自己去弄一个！\n"
# 621 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对吧，迷唇娃？$"
# 622 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 623 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord:
# 624 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "你知道吗？\p"
# 625 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "要是在任何对战设施\n"
# 626 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "刷新记录，他们给你的\l"
# 627 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "对战点数会越来越多。$"
# 628 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 629 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc::
# 630 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "印着迷唇娃图案的\n"
# 631 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "大海报。$"
# 632 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 633 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc::
# 634 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "迷唇娃坐垫。\n"
# 635 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "放在垫子或桌上。$"
# 636 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 637 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc::
# 638 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "迷唇娃人偶。\n"
# 639 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "放在垫子或桌上。$"
# 640 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 641 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc::
# 642 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "波克比人偶。\n"
# 643 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "放在垫子或桌上。$"
# 644 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 645 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc::
# 646 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "喵喵人偶。\n"
# 647 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "放在垫子或桌上。$"
# 648 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 649 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc::
# 650 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "皮皮人偶。\n"
# 651 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "放在垫子或桌上。$"
# 652 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 653 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc::
# 654 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "百变怪人偶。\n"
# 655 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "放在垫子或桌上。$"
# 656 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 657 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc::
# 658 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "火球鼠人偶。\n"
# 659 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "放在垫子或桌上。$"
# 660 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 661 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc::
# 662 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "菊草叶人偶。\n"
# 663 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "放在垫子或桌上。$"
# 664 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 665 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc::
# 666 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "小锯鳄人偶。\n"
# 667 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "放在垫子或桌上。$"
# 668 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 669 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc::
# 670 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "一个大人偶。\n"
# 671 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "放在垫子或桌上。$"
# 672 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 673 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc::
# 674 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "提高一只宝可梦的\n"
# 675 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "攻击。$"
# 676 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 677 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc::
# 678 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "提高一只宝可梦的\n"
# 679 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "特攻。$"
# 680 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 681 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_IronDesc::
# 682 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "提高一只宝可梦的\n"
# 683 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "防御。$"
# 684 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 685 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ZincDesc::
# 686 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "提高一只宝可梦的\n"
# 687 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "特防。$"
# 688 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 689 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc::
# 690 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "提高一只宝可梦的\n"
# 691 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "速度。$"
# 692 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 693 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc::
# 694 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "提高一只宝可梦的\n"
# 695 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "HP。$"
# 696 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 697 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc::
# 698 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "携带道具，对战中\n"
# 699 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "渐渐回复HP。$"
# 700 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 701 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WhiteHerbDesc::
# 702 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "携带道具，能恢复\n"
# 703 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "被降低的能力。$"
# 704 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 705 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_QuickClawDesc::
# 706 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "携带道具，有时能\n"
# 707 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "先制攻击。$"
# 708 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 709 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MentalHerbDesc::
# 710 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "携带道具，能让宝可梦\n"
# 711 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "摆脱着迷状态。$"
# 712 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 713 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_BrightpowderDesc::
# 714 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "携带道具，以光晕\n"
# 715 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "降低命中率。$"
# 716 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 717 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc::
# 718 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "提高招式威力，\n"
# 719 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "但只能用那一招。$"
# 720 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 721 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KingsRockDesc::
# 722 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "携带道具，击中对手\n"
# 723 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "时可能使其畏缩。$"
# 724 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 725 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_FocusBandDesc::
# 726 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "携带道具，有时能\n"
# 727 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "避免倒下。$"
# 728 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 729 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ScopeLensDesc::
# 730 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "携带道具，提高\n"
# 731 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "击中要害率。$"
