# 1 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
.set LOCALID_FOSSIL_SCIENTIST, 5
# 3 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition:
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 12 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 17 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 19 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 25 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 2, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_StillRegenerating
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil
# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ This whole section has needless duplication and could be condensed considerably
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil::
# 47 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 54 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil::
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil::
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 73 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil::
# 84 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_StillRegenerating::
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 1, RustboroCity_DevonCorp_2F_EventScript_LileepReady
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 2, RustboroCity_DevonCorp_2F_EventScript_AnorithReady
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_LileepReady::
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_AnorithReady::
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep::
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemonrandom SPECIES_LILEEP, 20
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty::
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC::
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC::
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare::
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep::
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith::
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemonrandom SPECIES_ANORITH, 20
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty::
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC::
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC::
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare::
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith::
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 208 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	multichoice 17, 6, MULTI_FOSSIL, FALSE
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil
# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil::
# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil::
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect::
# 229 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 230 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 231 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 244 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
# 247 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我们正在开发能和宝可梦\n"
# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "说话的装置。\p"
# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "不过还没什么进展……$"
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我想开发能把宝可梦的梦\n"
# 253 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "变成画面的装置……\p"
# 254 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "可是进行得不顺利。$"
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我一直在开发能从化石里\n"
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "让宝可梦复活的装置……\p"
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "而且，成功了！$"
# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "等等！你手上的那个……\n"
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "是宝可梦的化石吗？\p"
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "你想不想让那只宝可梦\n"
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "复活过来？\p"
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "用我新开发的\n"
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "化石复原机就能做到。$"
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "哦，是这样啊。\p"
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "得文的技术实力\n"
# 272 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "可是很了不起的。$"
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne:
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "哦，这倒让我吃了一惊！\n"
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "你不止一块，有两块化石？\p"
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "可惜我的机器一次只能\n"
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "复原一只宝可梦。\p"
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "你想从两块化石里\n"
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "挑一块来复原吗？$"
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher:
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "太好了！\n"
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我们马上开始吧。\p"
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER}把{STR_VAR_1}交给了\n"
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "得文的研究员。$"
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime:
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我做的化石复原机\n"
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "非常厉害。\p"
# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "不过有个缺点——\n"
# 292 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "它要花很长时间。\p"
# 293 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "所以……你要不要\n"
# 294 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "出去转转，等一会儿？$"
# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife:
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "让你久等了！\p"
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "你的化石宝可梦\n"
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "已经复活过来了！\p"
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "这块化石是古代宝可梦。\n"
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "是{STR_VAR_2}！$"
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher:
# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER}从得文研究员那里\n"
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "得到了{STR_VAR_2}。$"
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ Unused
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TooManyPokemon:
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "糟糕，你的宝可梦太多了。\n"
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "没地方放这一只。$"
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我正在给宝可梦导航\n"
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "开发新功能……\p"
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "可是进行得不顺利。$"
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "那么，接下来开发\n"
# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "什么好呢？\p"
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "公司允许我们把灵感\n"
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "变成现实。\p"
# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "作为工程师，\n"
# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "没有比这更好的环境了。$"

RustboroCity_DevonCorp_2F_EventScript_DNASplicers::
# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 332 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, RustboroCity_DevonCorp_2F_EventScript_DNASplicers_2
# 338 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_DNA_SPLICERS, RustboroCity_DevonCorp_2F_EventScript_DNASplicers_5
# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DnaSplicersReady, MSGBOX_DEFAULT
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	special ChoosePartyMon
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitstate
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, RustboroCity_DevonCorp_2F_EventScript_CancelKyurem
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 350 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_KYUREM, RustboroCity_DevonCorp_2F_EventScript_DNASplicers_9
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_KYUREM_WHITE, RustboroCity_DevonCorp_2F_EventScript_DNASplicers_9
# 353 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_KYUREM_BLACK, RustboroCity_DevonCorp_2F_EventScript_DNASplicers_9
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_NotKyurem, MSGBOX_DEFAULT
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DNASplicers_2:
# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_DoingFusionResearch, MSGBOX_DEFAULT
# 334 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DNASplicers_5:
# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataDnaSplicers, MSGBOX_DEFAULT
# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DNASplicers_7:
# 364 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataDnaSplicers, MSGBOX_DEFAULT
# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DNASplicers_9:
# 354 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseSplicers, MSGBOX_DEFAULT
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	giveitem ITEM_DNA_SPLICERS
# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_DNA_SPLICERS
	goto RustboroCity_DevonCorp_2F_EventScript_DNASplicers_7


RustboroCity_DevonCorp_2F_EventScript_CancelKyurem::
# 370 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DontHaveKyurem, MSGBOX_DEFAULT
# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity::
# 418 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 419 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 421 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_2
# 427 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REINS_OF_UNITY, RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_5
# 433 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_ReinsReady, MSGBOX_DEFAULT
# 434 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	special ChoosePartyMon
# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitstate
# 436 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 437 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, RustboroCity_DevonCorp_2F_EventScript_CancelCalyrex
# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 439 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_CALYREX, RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_9
# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_CALYREX_ICE, RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_9
# 442 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_CALYREX_SHADOW, RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_9
# 448 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_NotCalyrex, MSGBOX_DEFAULT
# 449 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_2:
# 422 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_DoingFusionResearch, MSGBOX_DEFAULT
# 423 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_5:
# 428 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataReinsOfUnity, MSGBOX_DEFAULT
# 429 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_7:
# 453 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataReinsOfUnity, MSGBOX_DEFAULT
# 454 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_9:
# 443 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseReins, MSGBOX_DEFAULT
# 444 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	giveitem ITEM_REINS_OF_UNITY
# 445 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REINS_OF_UNITY
	goto RustboroCity_DevonCorp_2F_EventScript_ReinsOfUnity_7


RustboroCity_DevonCorp_2F_EventScript_CancelCalyrex::
# 459 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DontHaveCalyrex, MSGBOX_DEFAULT
# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_2F_EventScript_NFusions::
# 498 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 499 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 501 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, RustboroCity_DevonCorp_2F_EventScript_NFusions_2
# 507 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_NECROZMA_FUSION, RustboroCity_DevonCorp_2F_EventScript_NFusions_5
# 513 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_NFusionsReady, MSGBOX_DEFAULT
# 514 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	special ChoosePartyMon
# 515 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitstate
# 516 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 517 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, RustboroCity_DevonCorp_2F_EventScript_CancelNecrozma
# 518 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 519 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 520 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_NECROZMA, RustboroCity_DevonCorp_2F_EventScript_NFusions_9
# 521 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_NECROZMA_DUSK_MANE, RustboroCity_DevonCorp_2F_EventScript_NFusions_9
# 522 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_NECROZMA_DAWN_WINGS, RustboroCity_DevonCorp_2F_EventScript_NFusions_9
# 523 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case SPECIES_NECROZMA_ULTRA, RustboroCity_DevonCorp_2F_EventScript_NFusions_9
# 530 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_NotNecrozma, MSGBOX_DEFAULT
# 531 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_NFusions_2:
# 502 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_DoingFusionResearch, MSGBOX_DEFAULT
# 503 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_NFusions_5:
# 508 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataNFusions, MSGBOX_DEFAULT
# 509 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_NFusions_7:
# 535 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_GiveUsDataNFusions, MSGBOX_DEFAULT
# 536 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_NFusions_9:
# 524 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseNFusions, MSGBOX_DEFAULT
# 525 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 526 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	giveitem ITEM_N_LUNARIZER
# 527 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_NECROZMA_FUSION
	goto RustboroCity_DevonCorp_2F_EventScript_NFusions_7


RustboroCity_DevonCorp_2F_EventScript_CancelNecrozma::
# 541 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DontHaveNecrozma, MSGBOX_DEFAULT
# 542 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_2F_Text_DnaSplicersReady::
# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我们的研究终于完成了！\n"
	.string "我在找一位拥有酋雷姆、\l"
	.string "愿意试试这些基因之楔\l"
	.string "的训练家。\p"
	.string "你有酋雷姆吗？$"

RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseSplicers::
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "太棒了！来，这些基因之楔给你。$"

RustboroCity_DevonCorp_2F_DoingFusionResearch::
# 387 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我和同事们正在研究如何\n"
	.string "把各种宝可梦融合起来。\p"
	.string "我觉得研究进展得\n"
	.string "不错，不过还需要一点时间，\l"
	.string "才能把技术交给\l"
	.string "真正的训练家。$"

RustboroCity_DevonCorp_2F_Text_GiveUsDataDnaSplicers::
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "用那些基因之楔，可以把酋雷姆\n"
	.string "和捷克罗姆或莱希拉姆融合。\l"
	.string "想拆开也可以！\p"
	.string "记得回来告诉我们\n"
	.string "这套融合技术的\l"
	.string "使用效果！\p"
	.string "我们很想收集更多来自\n"
	.string "实际使用的数据！$"

RustboroCity_DevonCorp_2F_Text_DontHaveKyurem::
# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我明白了，你没有酋雷姆。$"

RustboroCity_DevonCorp_2F_Text_NotKyurem::
# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "那不是酋雷姆。$"

RustboroCity_DevonCorp_2F_Text_ReinsReady::
# 464 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我们的研究终于完成了！\n"
	.string "我在找一位拥有蕾冠王、\l"
	.string "愿意试试这根牵绊缰绳\l"
	.string "的训练家。\p"
	.string "你有蕾冠王吗？$"

RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseReins::
# 472 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "太惊人了！来，这根牵绊\n"
	.string "缰绳给你。$"

RustboroCity_DevonCorp_2F_Text_GiveUsDataReinsOfUnity::
# 477 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "用那根牵绊缰绳，可以把蕾冠王\n"
	.string "和雪暴马或灵幽马\l"
	.string "融合。\l"
	.string "想拆开也可以！\p"
	.string "记得回来告诉我们\n"
	.string "这套融合技术的\l"
	.string "使用效果！\p"
	.string "我们很想收集更多来自\n"
	.string "实际使用的数据！$"

RustboroCity_DevonCorp_2F_Text_DontHaveCalyrex::
# 489 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我明白了，你没有蕾冠王。$"

RustboroCity_DevonCorp_2F_Text_NotCalyrex::
# 492 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "那不是蕾冠王。$"

RustboroCity_DevonCorp_2F_Text_NFusionsReady::
# 546 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我们的研究终于完成了！\n"
	.string "我在找一位拥有奈克洛兹玛、\l"
	.string "愿意试试合体器与\l"
	.string "合体器的训练家。\p"
	.string "你有奈克洛兹玛吗？$"

RustboroCity_DevonCorp_2F_Text_PleaseTakeTheseNFusions::
# 554 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "太好了！来，这两件奈克洛索尔\n"
	.string "合体器和奈克洛露奈合体器，给你。$"

RustboroCity_DevonCorp_2F_Text_GiveUsDataNFusions::
# 559 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "用奈克洛索尔合体器可以把\n"
	.string "奈克洛兹玛和索尔迦雷欧融合，\l"
	.string "用奈克洛露奈合体器则可以把\l"
	.string "奈克洛兹玛和露奈雅拉融合。\l"
	.string "想拆开也可以！\p"
	.string "记得回来告诉我们\n"
	.string "这套融合技术的\l"
	.string "使用效果！\p"
	.string "我们很想收集更多来自\n"
	.string "实际使用的数据！$"

RustboroCity_DevonCorp_2F_Text_DontHaveNecrozma::
# 572 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "我明白了，你没有奈克洛兹玛。$"

RustboroCity_DevonCorp_2F_Text_NotNecrozma::
# 575 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "那不是奈克洛兹玛。$"
