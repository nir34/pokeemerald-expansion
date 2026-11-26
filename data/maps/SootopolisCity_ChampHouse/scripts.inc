# 1 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 2 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
.set LOCALID_DANNI, 1
# 3 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
.set LOCALID_MASTA_JANES, 3
# 4 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
.set LOCALID_BEFOOLS, 5
# 5 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
.set LOCALID_BURAK, 7
# 6 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 7 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_MapScripts::
# 8 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.byte 0
# 9 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 10 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_EventScript_Urshifu::
# 11 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lock
# 12 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	faceplayer
# 13 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitse
# 14 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playmoncry SPECIES_URSHIFU_RAPID_STRIKE, CRY_MODE_NORMAL
# 15 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox SootopolisCity_ChampHouse_Text_Urshifu, MSGBOX_DEFAULT
# 16 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmoncry
# 17 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
# 18 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	end
# 19 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 20 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_Text_Urshifu:
# 21 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "武道熊师：呼啊啊啊啊！$"
# 22 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 23 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_EventScript_Meowscarada::
# 24 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lock
# 25 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	faceplayer
# 26 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitse
# 27 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playmoncry SPECIES_MEOWSCARADA, CRY_MODE_NORMAL
# 28 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox SootopolisCity_ChampHouse_Text_Meowscarada, MSGBOX_DEFAULT
# 29 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmoncry
# 30 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
# 31 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	end
# 32 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 33 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_Text_Meowscarada:
# 34 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "魔幻假面喵：嚓嗷嗷嗷！$"
# 35 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 36 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_EventScript_Gengar::
# 37 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lock
# 38 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	faceplayer
# 39 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitse
# 40 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playmoncry SPECIES_GENGAR, CRY_MODE_NORMAL
# 41 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox SootopolisCity_ChampHouse_Text_Gengar, MSGBOX_DEFAULT
# 42 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmoncry
# 43 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
# 44 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	end
# 45 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 46 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_Text_Gengar:
# 47 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "耿鬼：诶诶诶啊啊！$"
# 48 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 49 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_EventScript_Spidops::
# 50 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lock
# 51 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	faceplayer
# 52 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitse
# 53 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playmoncry SPECIES_SPIDOPS, CRY_MODE_NORMAL
# 54 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox SootopolisCity_ChampHouse_Text_Spidops, MSGBOX_DEFAULT
# 55 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmoncry
# 56 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
# 57 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	end
# 58 "data/maps/SootopolisCity_ChampHouse/scripts.pory"

# 59 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
SootopolisCity_ChampHouse_Text_Spidops:
# 60 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "操陷蛛：嘶嘶嘶嘶！$"

SootopolisCity_ChampHouse_EventScript_Danni::
# 65 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 66 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_DANNI, Common_Movement_FacePlayer
# 67 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_DANNI, SootopolisCity_ChampHouse_EventScript_DanniDefeated
# 68 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, SootopolisCity_ChampHouse_EventScript_DanniRequestBattleAgain
# 69 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_Greeting, MSGBOX_YESNO
# 70 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt
	end


SootopolisCity_ChampHouse_EventScript_DanniRequestBattleAgain::
# 75 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ReadyYet, MSGBOX_YESNO
# 76 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleDanniPrompt::
# 81 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleDanni
# 82 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineDanniBattle
# 83 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineDanniBattle::
# 88 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 89 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ComeBackWhenReady, MSGBOX_DEFAULT
# 90 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleDanni::
# 95 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_YoureOn, MSGBOX_DEFAULT
# 96 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_DANNI, Danni_Outro
# 97 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_DanniGiveGenesect
	return


SootopolisCity_ChampHouse_EventScript_DanniDefeated::
# 103 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_Danni, MSGBOX_DEFAULT
# 104 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_DanniGiveGenesect::
# 109 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GENESECT
# 110 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_GENESECT, 50
# 111 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveGenesectParty
# 112 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveGenesectPC
# 113 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 114 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveGenesectParty::
# 119 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare
# 120 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 121 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainGenesect
# 122 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 123 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 124 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainGenesect
	end


SootopolisCity_ChampHouse_EventScript_ReceiveGenesectPC::
# 130 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare
# 131 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 132 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendGenesectToPC
# 133 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 134 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendGenesectToPC
	end


SootopolisCity_ChampHouse_EventScript_SendGenesectToPC::
# 140 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 141 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainGenesect
	end


SootopolisCity_ChampHouse_EventScript_ReceivedGenesectFanfare::
# 147 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 148 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedGenesect
# 149 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 150 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 151 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GENESECT
	return


SootopolisCity_ChampHouse_EventScript_ExplainGenesect::
# 157 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Danni_ExplainGenesect, MSGBOX_DEFAULT
# 158 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_MastaJanes::
# 203 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 204 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_MASTA_JANES, Common_Movement_FacePlayer
# 205 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_MASTA_JANES, SootopolisCity_ChampHouse_EventScript_MastaJanesDefeated
# 206 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, SootopolisCity_ChampHouse_EventScript_MastaJanesRequestBattleAgain
# 207 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_Greeting, MSGBOX_YESNO
# 208 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt
	end


SootopolisCity_ChampHouse_EventScript_MastaJanesRequestBattleAgain::
# 213 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ReadyYet, MSGBOX_YESNO
# 214 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleMastaJanesPrompt::
# 219 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleMastaJanes
# 220 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineMastaJanesBattle
# 221 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineMastaJanesBattle::
# 226 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 227 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ComeBackWhenReady, MSGBOX_DEFAULT
# 228 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleMastaJanes::
# 233 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_YoureOn, MSGBOX_DEFAULT
# 234 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_MASTA_JANES, MastaJanes_Outro
# 235 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_MastaJanesGiveDitto
	return


SootopolisCity_ChampHouse_EventScript_MastaJanesDefeated::
# 240 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_MastaJanes, MSGBOX_DEFAULT
# 241 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_MastaJanesGiveDitto::
# 246 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DITTO
# 247 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_DITTO, 50, isShiny = TRUE
# 248 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveDittoParty
# 249 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveDittoPC
# 250 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 251 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveDittoParty::
# 256 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare
# 257 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 258 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainDitto
# 259 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 260 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 261 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainDitto
	end


SootopolisCity_ChampHouse_EventScript_ReceiveDittoPC::
# 266 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare
# 267 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 268 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendDittoToPC
# 269 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 270 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendDittoToPC
	end


SootopolisCity_ChampHouse_EventScript_SendDittoToPC::
# 275 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 276 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainDitto
	end


SootopolisCity_ChampHouse_EventScript_ReceivedDittoFanfare::
# 281 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 282 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedDitto
# 283 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 284 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 285 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
	return


SootopolisCity_ChampHouse_EventScript_ExplainDitto::
# 290 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox MastaJanes_ExplainDitto, MSGBOX_DEFAULT
# 291 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_Befools::
# 341 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 342 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_BEFOOLS, Common_Movement_FacePlayer
# 343 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_BEFOOLS, SootopolisCity_ChampHouse_EventScript_BefoolsDefeated
# 344 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, SootopolisCity_ChampHouse_EventScript_BefoolsRequestBattleAgain
# 345 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_Greeting, MSGBOX_YESNO
# 346 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt
	end


SootopolisCity_ChampHouse_EventScript_BefoolsRequestBattleAgain::
# 351 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ReadyYet, MSGBOX_YESNO
# 352 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleBefoolsPrompt::
# 357 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleBefools
# 358 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineBefoolsBattle
# 359 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineBefoolsBattle::
# 364 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 365 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ComeBackWhenReady, MSGBOX_DEFAULT
# 366 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleBefools::
# 371 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_YoureOn, MSGBOX_DEFAULT
# 372 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_BEFOOLS, Befools_Outro
# 373 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BefoolsGiveHoopa
	return


SootopolisCity_ChampHouse_EventScript_BefoolsDefeated::
# 378 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_Befools, MSGBOX_DEFAULT
# 379 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_BefoolsGiveHoopa::
# 384 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HOOPA_CONFINED
# 385 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_HOOPA_CONFINED, 50
# 386 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveHoopaParty
# 387 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveHoopaPC
# 388 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 389 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveHoopaParty::
# 394 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare
# 395 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 396 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainHoopa
# 397 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 398 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 399 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainHoopa
	end


SootopolisCity_ChampHouse_EventScript_ReceiveHoopaPC::
# 404 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare
# 405 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 406 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendHoopaToPC
# 407 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 408 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendHoopaToPC
	end


SootopolisCity_ChampHouse_EventScript_SendHoopaToPC::
# 413 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 414 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainHoopa
	end


SootopolisCity_ChampHouse_EventScript_ReceivedHoopaFanfare::
# 419 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 420 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedHoopa
# 421 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 422 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 423 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HOOPA_CONFINED
	return


SootopolisCity_ChampHouse_EventScript_ExplainHoopa::
# 428 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Befools_ExplainHoopa, MSGBOX_DEFAULT
# 429 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_Burak::
# 479 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	lockall
# 480 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	applymovement LOCALID_BURAK, Common_Movement_FacePlayer
# 481 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_defeated TRAINER_BURAK, SootopolisCity_ChampHouse_EventScript_BurakDefeated
# 482 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, SootopolisCity_ChampHouse_EventScript_BurakRequestBattleAgain
# 483 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_Greeting, MSGBOX_YESNO
# 484 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBurakPrompt
	end


SootopolisCity_ChampHouse_EventScript_BurakRequestBattleAgain::
# 489 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_ReadyYet, MSGBOX_YESNO
# 490 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BattleBurakPrompt
	end


SootopolisCity_ChampHouse_EventScript_BattleBurakPrompt::
# 495 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_ChampHouse_EventScript_BattleBurak
# 496 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_DeclineBurakBattle
# 497 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	closemessage
	end


SootopolisCity_ChampHouse_EventScript_DeclineBurakBattle::
# 502 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 503 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_ComeBackWhenReady, MSGBOX_DEFAULT
# 504 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_BattleBurak::
# 509 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_YoureOn, MSGBOX_DEFAULT
# 510 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_BURAK, Burak_Outro
# 511 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_BurakGiveVolcanion
	return


SootopolisCity_ChampHouse_EventScript_BurakDefeated::
# 517 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox PostBattle_Burak, MSGBOX_DEFAULT
# 518 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	releaseall
	end


SootopolisCity_ChampHouse_EventScript_BurakGiveVolcanion::
# 523 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VOLCANION
# 524 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	givemonrandom SPECIES_VOLCANION, 50
# 525 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionParty
# 526 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionPC
# 527 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 528 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionParty::
# 533 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedVolcanionFanfare
# 534 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 535 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_ExplainVolcanion
# 536 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 537 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 538 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainVolcanion
	end


SootopolisCity_ChampHouse_EventScript_ReceiveVolcanionPC::
# 544 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call SootopolisCity_ChampHouse_EventScript_ReceivedVolcanionFanfare
# 545 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 546 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_ChampHouse_EventScript_SendVolcanionToPC
# 547 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 548 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_SendVolcanionToPC
	end


SootopolisCity_ChampHouse_EventScript_SendVolcanionToPC::
# 554 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 555 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	goto SootopolisCity_ChampHouse_EventScript_ExplainVolcanion
	end


SootopolisCity_ChampHouse_EventScript_ReceivedVolcanionFanfare::
# 561 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 562 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	message SootopolisCity_ChampHouse_Text_PlayerReceivedVolcanion
# 563 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitmessage
# 564 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	waitfanfare
# 565 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VOLCANION
	return


SootopolisCity_ChampHouse_EventScript_ExplainVolcanion::
# 571 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	msgbox Burak_ExplainVolcanion, MSGBOX_DEFAULT
# 572 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	release
	end


Danni_Greeting::
# 162 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "你好呀，训练家。很高兴看到你\n"
	.string "走到这一步。要不要和我这位\l"
	.string "单命通关传说打一场？\p"
	.string "赢了我，就送你一只\n"
	.string "超酷的幻之宝可梦。要来吗？$"

Danni_ReadyYet::
# 170 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "准备好了吗？$"

Danni_YoureOn::
# 174 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "你们是赢不了我这队的！$"

Danni_ComeBackWhenReady::
# 178 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "我就知道！$"

Danni_Outro::
# 182 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "哦？你打败我了。恭喜，\n"
	.string "了不起。$"

SootopolisCity_ChampHouse_Text_PlayerReceivedGenesect::
# 187 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER}得到了盖诺赛克特！$"

Danni_ExplainGenesect::
# 191 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "说好的幻之宝可梦，给你。\n"
	.string "我看这只也挺强的。$"

PostBattle_Danni::
# 196 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "我是第一个以单命模式通关\n"
	.string "这游戏的人！而且一次没死！\l"
	.string "厉害吧？$"

MastaJanes_Greeting::
# 295 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "你好，训练家，我叫MastaJanes。\n"
	.string "我是第5个通关这游戏的人，\l"
	.string "而且最特别的是，我是用\l"
	.string "MyBoy模拟器通关的。\p"
	.string "当时那个版本的游戏经常\n"
	.string "崩溃，制作者也劝我别用\l"
	.string "MyBoy，但我还是坚持\l"
	.string "把它打通了。\p"
	.string "现在，你若能打赢我，我就送你\n"
	.string "一只异色百变怪，可以拿去\l"
	.string "孵化更多异色宝可梦。\p"
	.string "要来对战吗？$"

MastaJanes_ReadyYet::
# 310 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "现在准备好了吗？$"

MastaJanes_YoureOn::
# 314 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "你要输了！$"

MastaJanes_ComeBackWhenReady::
# 318 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "改变主意的话，知道来这儿找我。$"

MastaJanes_Outro::
# 322 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "哇，我没想到自己会输。\n$"

SootopolisCity_ChampHouse_Text_PlayerReceivedDitto::
# 326 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER}得到了百变怪！$"

MastaJanes_ExplainDitto::
# 330 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "这是给你的异色百变怪！\n"
	.string "希望你能用它孵出更多\l"
	.string "异色宝可梦。$"

PostBattle_MastaJanes::
# 336 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "我到现在还在用MyBoy玩呢。$"

Befools_Greeting::
# 433 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "我是Befools，我用我这只可靠的\n"
	.string "耿鬼，把这游戏里每一只\l"
	.string "宝可梦都催眠，然后\l"
	.string "一一打倒。\p"
	.string "要是制作者以后又把催眠\n"
	.string "削弱一次，那大概也是\l"
	.string "我的锅，抱歉啦！\p"
	.string "总之，和别人一样，你\n"
	.string "打赢我就送你幻之宝可梦。\p"
	.string "那么，要打一场吗？$"

Befools_ReadyYet::
# 446 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "准备好来这场催眠大会了吗？$"

Befools_YoureOn::
# 450 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "逃不掉的。放弃吧。$"

Befools_ComeBackWhenReady::
# 454 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "反正你多半也没带够\n"
	.string "零余果吧。$"

Befools_Outro::
# 459 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "我可是试了那么多次催眠！\n$"

SootopolisCity_ChampHouse_Text_PlayerReceivedHoopa::
# 463 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER}得到了胡帕！$"

Befools_ExplainHoopa::
# 467 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "说好的幻之宝可梦，给你！\n"
	.string "它当幽灵属性是不如\l"
	.string "耿鬼，不过也够用了。$"

PostBattle_Befools::
# 473 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "耿鬼，用催眠术！$"

Burak_Greeting::
# 576 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "加油啊操陷蛛，就差一点\n"
	.string "就能一击打掉莱希拉姆了……\p"
	.string "哦，你好，我刚在准备\n"
	.string "四天王的战术。\p"
	.string "我看这只操陷蛛这轮能拿下\n"
	.string "两位数的击倒数。\p"
	.string "总之，你若能打赢我，我就送你\n"
	.string "一只幻之宝可梦，可惜\l"
	.string "不是操陷蛛，但也很实在。\p"
	.string "你觉得如何？$"

Burak_ReadyYet::
# 589 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "准备好了吗？\n"
	.string "我会让操陷蛛对你手下留情的。$"

Burak_YoureOn::
# 594 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "都是计策，上吧超级猿！！！$"

Burak_ComeBackWhenReady::
# 598 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "没关系，我就在这儿\n"
	.string "训练操陷蛛。$"

Burak_Outro::
# 603 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "至少我在那张榜上\n"
	.string "还是第一。$"

SootopolisCity_ChampHouse_Text_PlayerReceivedVolcanion::
# 608 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "{PLAYER}得到了波尔凯尼恩！$"

Burak_ExplainVolcanion::
# 612 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "给你！它虽不是操陷蛛，但\n"
	.string "我觉得够用了。$"

PostBattle_Burak::
# 617 "data/maps/SootopolisCity_ChampHouse/scripts.pory"
	.string "和操陷蛛一样强。\n"
	.string "种族值无关紧要。$"
