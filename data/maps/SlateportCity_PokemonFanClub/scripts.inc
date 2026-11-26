# 1 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 2 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_MapScripts::
# 3 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 5 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman::
# 6 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_ENTERED_CONTEST, SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest
# 9 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_MeetChairman
# 10 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_SLATEPORT_FAN_CLUB_STATE
# 11 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment
# 12 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon
# 13 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 14 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 15 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 16 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 17 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment::
# 18 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 1
# 19 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon, MSGBOX_DEFAULT
# 20 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 21 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 22 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 23 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon::
# 24 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_2, 0
# 25 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 26 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 27 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 28 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 29 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 30 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_TEMP_2, CONTEST_CATEGORIES_COUNT, SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves
# 31 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_SLATEPORT_FAN_CLUB_STATE, 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 32 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing, MSGBOX_DEFAULT
# 33 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 34 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 35 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 36 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoMoreScarves::
# 37 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou, MSGBOX_DEFAULT
# 38 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 39 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 40 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 41 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon::
# 42 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HmHmISee, MSGBOX_DEFAULT
# 43 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 0
# 44 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonTough
# 45 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonSmart
# 46 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCute
# 47 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty
# 48 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCool
# 49 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 50 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_TEMP_1
# 51 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_NoHighConditions
# 52 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_GiveRedScarf
# 53 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf
# 54 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 3, SlateportCity_PokemonFanClub_EventScript_GivePinkScarf
# 55 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 4, SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf
# 56 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 5, SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf
# 57 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 58 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 59 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 60 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves::
# 61 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 2
# 62 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 63 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 64 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf::
# 65 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
# 66 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 67 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 68 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoHighConditions::
# 69 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks, MSGBOX_DEFAULT
# 70 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 71 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 72 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 73 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveRedScarf::
# 74 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_RED_SCARF
# 75 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 76 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 77 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_RED_SCARF
# 78 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_RED_SCARF
# 79 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainRedScarf, MSGBOX_DEFAULT
# 80 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 81 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 82 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 83 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf::
# 84 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_BLUE_SCARF
# 85 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 86 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 87 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_BLUE_SCARF
# 88 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_BLUE_SCARF
# 89 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainBlueScarf, MSGBOX_DEFAULT
# 90 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 91 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 92 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 93 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GivePinkScarf::
# 94 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_PINK_SCARF
# 95 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 96 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 97 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_PINK_SCARF
# 98 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 99 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainPinkScarf, MSGBOX_DEFAULT
# 100 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 101 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 102 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 103 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf::
# 104 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_GREEN_SCARF
# 105 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 106 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 107 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_GREEN_SCARF
# 108 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 109 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainGreenScarf, MSGBOX_DEFAULT
# 110 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 111 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 112 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 113 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf::
# 114 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_YELLOW_SCARF
# 115 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 116 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 117 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_YELLOW_SCARF
# 118 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_YELLOW_SCARF
# 119 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainYellowScarf, MSGBOX_DEFAULT
# 120 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 121 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 122 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 123 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf::
# 124 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NoSpaceForReward, MSGBOX_DEFAULT
# 125 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 126 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 127 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 128 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCool::
# 129 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCool
# 130 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCool
# 131 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 132 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 133 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCool::
# 134 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 1
# 135 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 136 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 137 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty::
# 138 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonBeauty
# 139 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonBeauty
# 140 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 141 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 142 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonBeauty::
# 143 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 2
# 144 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 145 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 146 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCute::
# 147 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCute
# 148 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCute
# 149 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 150 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 151 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCute::
# 152 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 3
# 153 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 154 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 155 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonSmart::
# 156 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSmart
# 157 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonSmart
# 158 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 159 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 160 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonSmart::
# 161 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 4
# 162 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 163 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 164 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonTough::
# 165 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonTough
# 166 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonTough
# 167 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 168 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 169 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonTough::
# 170 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 5
# 171 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 172 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 173 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest::
# 174 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest
# 175 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 176 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 177 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 178 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 179 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 180 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest::
# 181 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 183 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 184 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 185 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_MeetChairman::
# 186 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 187 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 188 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 189 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 190 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman::
# 191 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 192 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 193 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell
# 194 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou, MSGBOX_DEFAULT
# 195 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 196 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, SlateportCity_PokemonFanClub_EventScript_GiveSootheBell
# 197 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 198 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 199 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 200 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveSootheBell::
# 201 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_PIN
# 202 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 203 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 204 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 205 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 206 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonAdoresYou, MSGBOX_DEFAULT
# 207 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 208 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 209 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_SOOTHE_BELL
# 210 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 211 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 212 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 213 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell::
# 214 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove, MSGBOX_DEFAULT
# 215 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 216 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 217 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 218 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Man::
# 219 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting, MSGBOX_NPC
# 220 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 221 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 222 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Twin::
# 223 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein, MSGBOX_NPC
# 224 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 225 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 226 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Skitty::
# 227 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 228 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 229 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 230 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 231 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Skitty, MSGBOX_DEFAULT
# 232 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 233 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 234 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 235 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 236 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Zigzagoon::
# 237 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 238 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 239 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 240 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 241 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Zigzagoon, MSGBOX_DEFAULT
# 242 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 243 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 244 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 245 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 246 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Azumarill::
# 247 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 248 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 249 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 250 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 251 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Azumarill, MSGBOX_DEFAULT
# 252 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 253 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 254 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 255 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 256 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_FormerSwaggerTutor::
# 257 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_FormerSwaggerTutor, MSGBOX_NPC
# 258 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 259 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 260 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MeetChairman:
# 261 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "咳咳！我是宝可梦\n"
# 262 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "粉丝俱乐部的会长！\p"
# 263 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "身为会长，我自然是\n"
# 264 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "最重要的人！\p"
# 265 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "说到培养宝可梦，\n"
# 266 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "没人比得上我！没人！\p"
# 267 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "那么，让我给你讲讲\n"
# 268 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "宝可梦华丽大赛吧。\p"
# 269 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "那是让全世界看到\n"
# 270 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "自己宝可梦的活动！\p"
# 271 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "不过，比赛都在很远的\n"
# 272 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "城镇举行，\l"
# 273 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "我没法常去参加。\p"
# 274 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "所以我们才聚在这里，\n"
# 275 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "展示自己的宝可梦，\l"
# 276 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "也看看别人的宝可梦。$"
# 277 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 278 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon:
# 279 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "参加过宝可梦华丽大赛的\n"
# 280 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "训练家所培养的宝可梦……\l"
# 281 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "那个，我很想看看。$"
# 282 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 283 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon:
# 284 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "咳咳！我看出你参加过\n"
# 285 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "宝可梦华丽大赛！\p"
# 286 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "来吧！让我看看你是\n"
# 287 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "怎么培养宝可梦的。\p"
# 288 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "看到别的训练家培养的\n"
# 289 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "宝可梦，我真是太高兴了。\p"
# 290 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "用心培养的宝可梦\n"
# 291 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "那幸福的表情……\p"
# 292 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "养育它的训练家\n"
# 293 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "那温柔的眼神……\p"
# 294 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "光是想想，我的心就\n"
# 295 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "充满了喜悦。\p"
# 296 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "哦！失礼了！\n"
# 297 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "抱歉我唠叨了这么多！\p"
# 298 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "来吧！让我看看你的\n"
# 299 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "宝可梦成长得如何！$"
# 300 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 301 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing:
# 302 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "你的宝可梦成长得\n"
# 303 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "怎么样？让我看看。$"
# 304 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 305 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HmHmISee:
# 306 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "嗯，嗯……\n"
# 307 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "我明白了……$"
# 308 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 309 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks:
# 310 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "嗯……不算差，不过\n"
# 311 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "也说不上好……\p"
# 312 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "你作为训练家，得在\n"
# 313 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "培养上多下点功夫！\p"
# 314 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "比如说，我建议你多给它\n"
# 315 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "吃些宝可方块。$"
# 316 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 317 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NoSpaceForReward:
# 318 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "哎呀……\p"
# 319 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "你的宝可梦成长得\n"
# 320 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "相当好，该给你奖励。\p"
# 321 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "可惜你的背包里\n"
# 322 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "没地方放了。$"
# 323 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 324 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis:
# 325 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "你的{STR_VAR_1}，成长得\n"
# 326 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "非常出色！\l"
# 327 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "真是优良的个体！\p"
# 328 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "不过！要是给它这个，\n"
# 329 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "它会长得更好！一定！$"
# 330 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 331 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainRedScarf:
# 332 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "让宝可梦带上那条\n"
# 333 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "红色头巾。\p"
# 334 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "大家都会认可那只宝可梦\n"
# 335 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "有多帅气！$"
# 336 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 337 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainBlueScarf:
# 338 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "让宝可梦带上那条\n"
# 339 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "蓝色头巾。\p"
# 340 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "它的美丽会比现在\n"
# 341 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "更加突出！$"
# 342 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 343 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainPinkScarf:
# 344 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "让宝可梦带上那条\n"
# 345 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "粉色头巾。\p"
# 346 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "会更加凸显宝可梦的\n"
# 347 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "可爱！$"
# 348 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 349 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainGreenScarf:
# 350 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "让宝可梦带上那条\n"
# 351 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "绿色头巾。\p"
# 352 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "这会提升宝可梦的\n"
# 353 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "聪明！$"
# 354 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 355 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainYellowScarf:
# 356 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "让宝可梦带上那条\n"
# 357 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "黄色头巾。\p"
# 358 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "这会大幅增强宝可梦的\n"
# 359 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "强壮！$"
# 360 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 361 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou:
# 362 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "抱歉，我没别的东西\n"
# 363 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "能给你了！一样也没有！\p"
# 364 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "毕竟你天生就有不用道具\n"
# 365 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "也能培养好宝可梦的\l"
# 366 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "天赋！$"
# 367 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 368 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou:
# 369 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "我喜欢看到宝可梦\n"
# 370 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "爱着自己的训练家。\p"
# 371 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "宝可梦对训练家的感情\n"
# 372 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "非常敏感。\p"
# 373 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "你用爱和关心对待宝可梦，\n"
# 374 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "它们就会回报你。\p"
# 375 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "当你的宝可梦爱上你时，\n"
# 376 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "请带来给我看看。$"
# 377 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 378 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonAdoresYou:
# 379 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "你的宝可梦真的很\n"
# 380 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "崇拜你。\p"
# 381 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "给像你这样充满爱心的\n"
# 382 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "训练家，这是粉丝俱乐部的礼物！$"
# 383 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 384 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove:
# 385 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "宝可梦对训练家的感情\n"
# 386 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "非常敏感。\p"
# 387 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "你用爱和关心对待宝可梦，\n"
# 388 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "它们就会回报你。$"
# 389 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 390 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting:
# 391 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "要是总让宝可梦在战斗中\n"
# 392 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "倒下，它可是会记恨的。\p"
# 393 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "慢慢地，它就越来越\n"
# 394 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "不信任训练家。\p"
# 395 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "也就是说，它肯定不会\n"
# 396 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "很喜欢你。$"
# 397 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 398 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein:
# 399 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "宝可梦会喜欢被人\n"
# 400 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "使用道具吗？\p"
# 401 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "我给自己的宝可梦用了\n"
# 402 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "蛋白质，它好高兴。$"
# 403 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 404 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Skitty:
# 405 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "向尾喵：喵呜啊啊……$"
# 406 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 407 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Zigzagoon:
# 408 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "蛇纹熊：啾呜呜……$"
# 409 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 410 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Azumarill:
# 411 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "玛力露丽：玛力玛力？$"
# 412 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 413 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_FormerSwaggerTutor:
# 414 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "我以前可是很有派头的……\n"
# 415 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "唉，到底怎么了呢？$"
