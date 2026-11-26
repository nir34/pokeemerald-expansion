# 1 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 2 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts::
# 3 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel::
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_AskSwitchBikes
# 9 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_SkipGreeting
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting::
# 18 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike::
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne, MSGBOX_DEFAULT
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GetOutThere, MSGBOX_DEFAULT
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_NotFar::
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_YesFar::
# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike::
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
# 46 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike::
# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes::
# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	special SwapRegisteredBike
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes::
# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes, MSGBOX_DEFAULT
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 68 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 69 "data/maps/MauvilleCity_BikeShop/scripts.pory"
@ If the player does not have a bike on them Rydel assumes its stored in the PC
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes::
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchAcroForMach
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchMachForAcro
# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
# 77 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_KeepBike::
# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchAcroForMach::
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchMachForAcro::
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting:
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "哎呀呀，这是谁？\n"
# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "好有精神的客人！\p"
# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "我？你叫我莱德尔就行。\n"
# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "我是这家自行车店的老板。$"
# 186 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 187 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway:
# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "你的跑步鞋……\n"
# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "脏得可真厉害。\p"
# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "你是从很远的地方\n"
# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "走来的吗？$"
# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GuessYouDontNeedBike:
# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "这样啊？\p"
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "那看来我的自行车\n"
# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "你都不需要了。$"
# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne:
# 199 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "嗯，嗯…………\p"
# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "你说你是从\n"
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "未白镇来的？\p"
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "天哪！\n"
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "那可真够远的！\p"
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "要是有我的自行车，你就能\n"
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "轻轻松松去任何地方，\l"
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "还能感受微风拂面！\p"
# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "这样吧！\n"
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "我送你一辆自行车！\p"
# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "哎呀不管了！\n"
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "我送你两辆！\p"
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "我忘了告诉你，\n"
# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "自行车有两种！\p"
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "就是高速自行车和\n"
# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "技巧自行车！\p"
# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "高速自行车适合想用身体\n"
# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "感受风的骑手！\p"
# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "技巧自行车则适合喜欢\n"
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "花式骑法的人！\p"
# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "我这个人特别大方，\n"
# 220 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "两辆都送你，免费！$"
# 221 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 222 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GetOutThere:
# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "我最爱看新骑手\n"
# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "那笑脸！\p"
# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "还等什么，\n"
# 226 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "出去骑吧！$"
# 227 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 228 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 229 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseMachBike:
# 230 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER}选择了\n"
# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "高速自行车。$"
# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseAcroBike:
# 234 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER}选择了\n"
# 235 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "技巧自行车。$"
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 237 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes:
# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "要是想换自行车，\n"
# 239 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "就来找我！$"
# 240 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 241 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_WantToSwitchBikes:
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "哦？你是不是\n"
# 243 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "很喜欢那辆自行车！$"
# 244 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_IllSwitchBikes:
# 246 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "好，没问题！\n"
# 247 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "我帮你换一辆！$"
# 248 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro:
# 250 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER}把高速自行车\n"
# 251 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "换成了技巧自行车。$"
# 252 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 253 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach:
# 254 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER}把技巧自行车\n"
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "换成了高速自行车。$"
# 256 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 257 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt:
# 258 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "好，好！\n"
# 259 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "你喜欢我就高兴！$"
# 260 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 261 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC:
# 262 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "哦？我给你的那辆自行车\n"
# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "怎么了？\p"
# 264 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "哦，我明白了，你把它\n"
# 265 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "存进电脑了。\p"
# 266 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "那就从电脑里拿出来，\n"
# 267 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "我很乐意帮你换！\p"
# 268 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "愿风永远在你冒险的路上\n"
# 269 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "推着你前行！$"
# 270 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 271 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack:
# 272 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "我在这里工作的同时\n"
# 273 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "也在学自行车的知识。\p"
# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "要是想了解怎么骑，\n"
# 275 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "后面有几本手册。$"
# 276 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 277 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "这是高速自行车的\n"
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "手册。\p"
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "你想读哪一页？$"
# 281 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 282 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike:
# 283 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "自行车会朝十字键\n"
# 284 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "按下的方向前进。\p"
# 285 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "骑起来之后会加速。\p"
# 286 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "要停下就松开十字键。\n"
# 287 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "自行车会慢慢停下。\p"
# 288 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "要读别的页吗？$"
# 289 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 290 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike:
# 291 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "高速自行车很快，\n"
# 292 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "但不太容易急停。\p"
# 293 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "转弯时会有点难控制。\p"
# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "在转弯前稍微松开\n"
# 295 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "十字键减速。\p"
# 296 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "要读别的页吗？$"
# 297 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 298 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes:
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "丰缘地区到处都有\n"
# 300 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "小沙坡。\p"
# 301 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "松散的沙子让人\n"
# 302 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "没法正常爬上去。\p"
# 303 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "不过要是有高速自行车，\n"
# 304 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "就能冲上沙坡。\p"
# 305 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "要读别的页吗？$"
# 306 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 307 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
# 308 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "这是技巧自行车的\n"
# 309 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "手册。\p"
# 310 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "你想读哪一页？$"
# 311 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 312 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies:
# 313 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "骑车时按B键，\n"
# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "前轮就会抬起来。\p"
# 315 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "用十字键就能\n"
# 316 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "抬着前轮四处跑。\p"
# 317 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "这种技巧叫翘前轮。\p"
# 318 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "要读别的页吗？$"
# 319 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 320 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops:
# 321 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "一直按着B键，\n"
# 322 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "自行车就能原地跳。\p"
# 323 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "这种技巧叫兔跳。\p"
# 324 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "也能边跳边骑。\p"
# 325 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "要读别的页吗？$"
# 326 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 327 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps:
# 328 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "同时按B键和十字键\n"
# 329 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "就能跳。\p"
# 330 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "按十字键的左右\n"
# 331 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "就能侧跳。\p"
# 332 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "按后方向键就能在\n"
# 333 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "跳起时改变方向。\p"
# 334 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "要读别的页吗？$"
