# 1 "data/maps/SootopolisCity_House5/scripts.pory"

# 2 "data/maps/SootopolisCity_House5/scripts.pory"
.set LOCALID_NATN, 1
# 3 "data/maps/SootopolisCity_House5/scripts.pory"
.set LOCALID_MASTER_POUCINE, 3
# 4 "data/maps/SootopolisCity_House5/scripts.pory"
.set LOCALID_OBLIVION_WING, 5
# 5 "data/maps/SootopolisCity_House5/scripts.pory"

# 6 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_MapScripts::
# 7 "data/maps/SootopolisCity_House5/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_House5/scripts.pory"

# 9 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_EventScript_Kingambit::
# 10 "data/maps/SootopolisCity_House5/scripts.pory"
	lock
# 11 "data/maps/SootopolisCity_House5/scripts.pory"
	faceplayer
# 12 "data/maps/SootopolisCity_House5/scripts.pory"
	waitse
# 13 "data/maps/SootopolisCity_House5/scripts.pory"
	playmoncry SPECIES_KINGAMBIT, CRY_MODE_NORMAL
# 14 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox SootopolisCity_House5_Text_Kingambit, MSGBOX_DEFAULT
# 15 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmoncry
# 16 "data/maps/SootopolisCity_House5/scripts.pory"
	release
# 17 "data/maps/SootopolisCity_House5/scripts.pory"
	end
# 18 "data/maps/SootopolisCity_House5/scripts.pory"

# 19 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_Text_Kingambit:
# 20 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "仆刀将军：呜呼呼呼呼呼！$"
# 21 "data/maps/SootopolisCity_House5/scripts.pory"

# 22 "data/maps/SootopolisCity_House5/scripts.pory"

# 23 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_EventScript_Dragapult::
# 24 "data/maps/SootopolisCity_House5/scripts.pory"
	lock
# 25 "data/maps/SootopolisCity_House5/scripts.pory"
	faceplayer
# 26 "data/maps/SootopolisCity_House5/scripts.pory"
	waitse
# 27 "data/maps/SootopolisCity_House5/scripts.pory"
	playmoncry SPECIES_DRAGAPULT, CRY_MODE_NORMAL
# 28 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox SootopolisCity_House5_Text_Dragapult, MSGBOX_DEFAULT
# 29 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmoncry
# 30 "data/maps/SootopolisCity_House5/scripts.pory"
	release
# 31 "data/maps/SootopolisCity_House5/scripts.pory"
	end
# 32 "data/maps/SootopolisCity_House5/scripts.pory"

# 33 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_Text_Dragapult:
# 34 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "多龙巴鲁托：呜噜噜噜咿！$"
# 35 "data/maps/SootopolisCity_House5/scripts.pory"

# 36 "data/maps/SootopolisCity_House5/scripts.pory"

# 37 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_EventScript_Greninja::
# 38 "data/maps/SootopolisCity_House5/scripts.pory"
	lock
# 39 "data/maps/SootopolisCity_House5/scripts.pory"
	faceplayer
# 40 "data/maps/SootopolisCity_House5/scripts.pory"
	waitse
# 41 "data/maps/SootopolisCity_House5/scripts.pory"
	playmoncry SPECIES_GRENINJA, CRY_MODE_NORMAL
# 42 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox SootopolisCity_House5_Text_Greninja, MSGBOX_DEFAULT
# 43 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmoncry
# 44 "data/maps/SootopolisCity_House5/scripts.pory"
	release
# 45 "data/maps/SootopolisCity_House5/scripts.pory"
	end
# 46 "data/maps/SootopolisCity_House5/scripts.pory"

# 47 "data/maps/SootopolisCity_House5/scripts.pory"
SootopolisCity_House5_Text_Greninja:
# 48 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "甲贺忍蛙：噜诶诶诶！$"

SootopolisCity_House5_EventScript_Natn::
# 53 "data/maps/SootopolisCity_House5/scripts.pory"
	lockall
# 54 "data/maps/SootopolisCity_House5/scripts.pory"
	applymovement LOCALID_NATN, Common_Movement_FacePlayer
# 55 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_defeated TRAINER_NATN, SootopolisCity_House5_EventScript_NatnDefeated
# 56 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_set FLAG_TEMP_1, SootopolisCity_House5_EventScript_NatnRequestBattleAgain
# 57 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_Greeting, MSGBOX_YESNO
# 58 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleNatnPrompt
	end


SootopolisCity_House5_EventScript_NatnRequestBattleAgain::
# 63 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_ReadyYet, MSGBOX_YESNO
# 64 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleNatnPrompt
	end


SootopolisCity_House5_EventScript_BattleNatnPrompt::
# 69 "data/maps/SootopolisCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House5_EventScript_BattleNatn
# 70 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_DeclineNatnBattle
# 71 "data/maps/SootopolisCity_House5/scripts.pory"
	closemessage
	end


SootopolisCity_House5_EventScript_DeclineNatnBattle::
# 76 "data/maps/SootopolisCity_House5/scripts.pory"
	setflag FLAG_TEMP_1
# 77 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_ComeBackWhenReady, MSGBOX_DEFAULT
# 78 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_BattleNatn::
# 83 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_YoureOn, MSGBOX_DEFAULT
# 84 "data/maps/SootopolisCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_NATN, Natn_Outro
# 85 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_NatnGiveMeloetta
	return


SootopolisCity_House5_EventScript_NatnDefeated::
# 90 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox PostBattle_Natn, MSGBOX_DEFAULT
# 91 "data/maps/SootopolisCity_House5/scripts.pory"
	releaseall
	end


SootopolisCity_House5_EventScript_NatnGiveMeloetta::
# 96 "data/maps/SootopolisCity_House5/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELOETTA_ARIA
# 97 "data/maps/SootopolisCity_House5/scripts.pory"
	givemonrandom SPECIES_MELOETTA_ARIA, 50
# 98 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House5_EventScript_ReceiveMeloettaParty
# 99 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House5_EventScript_ReceiveMeloettaPC
# 100 "data/maps/SootopolisCity_House5/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 101 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_ReceiveMeloettaParty::
# 106 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMeloettaFanfare
# 107 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 108 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_ExplainMeloetta
# 109 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 110 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 111 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMeloetta
	end


SootopolisCity_House5_EventScript_ReceiveMeloettaPC::
# 116 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMeloettaFanfare
# 117 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 118 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_SendMeloettaToPC
# 119 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 120 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_SendMeloettaToPC
	end


SootopolisCity_House5_EventScript_SendMeloettaToPC::
# 125 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_TransferredToPC
# 126 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMeloetta
	end


SootopolisCity_House5_EventScript_ReceivedMeloettaFanfare::
# 131 "data/maps/SootopolisCity_House5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/SootopolisCity_House5/scripts.pory"
	message SootopolisCity_House5_Text_PlayerReceivedMeloetta
# 133 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmessage
# 134 "data/maps/SootopolisCity_House5/scripts.pory"
	waitfanfare
# 135 "data/maps/SootopolisCity_House5/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MELOETTA_ARIA
	return


SootopolisCity_House5_EventScript_ExplainMeloetta::
# 140 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox Natn_ExplainMeloetta, MSGBOX_DEFAULT
# 141 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_MasterPoucine::
# 194 "data/maps/SootopolisCity_House5/scripts.pory"
	lockall
# 195 "data/maps/SootopolisCity_House5/scripts.pory"
	applymovement LOCALID_MASTER_POUCINE, Common_Movement_FacePlayer
# 196 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_defeated TRAINER_MASTER_POUCINE, SootopolisCity_House5_EventScript_MasterPoucineDefeated
# 197 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_set FLAG_TEMP_2, SootopolisCity_House5_EventScript_MasterPoucineRequestBattleAgain
# 198 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_Greeting, MSGBOX_YESNO
# 199 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleMasterPoucinePrompt
	end


SootopolisCity_House5_EventScript_MasterPoucineRequestBattleAgain::
# 204 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_ReadyYet, MSGBOX_YESNO
# 205 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleMasterPoucinePrompt
	end


SootopolisCity_House5_EventScript_BattleMasterPoucinePrompt::
# 210 "data/maps/SootopolisCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House5_EventScript_BattleMasterPoucine
# 211 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_DeclineMasterPoucineBattle
# 212 "data/maps/SootopolisCity_House5/scripts.pory"
	closemessage
	end


SootopolisCity_House5_EventScript_DeclineMasterPoucineBattle::
# 217 "data/maps/SootopolisCity_House5/scripts.pory"
	setflag FLAG_TEMP_2
# 218 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_ComeBackWhenReady, MSGBOX_DEFAULT
# 219 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_BattleMasterPoucine::
# 224 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_YoureOn, MSGBOX_DEFAULT
# 225 "data/maps/SootopolisCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_MASTER_POUCINE, MasterPoucine_Outro
# 226 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_MasterPoucineGiveMarshadow
	return


SootopolisCity_House5_EventScript_MasterPoucineDefeated::
# 231 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox PostBattle_MasterPoucine, MSGBOX_DEFAULT
# 232 "data/maps/SootopolisCity_House5/scripts.pory"
	releaseall
	end


SootopolisCity_House5_EventScript_MasterPoucineGiveMarshadow::
# 237 "data/maps/SootopolisCity_House5/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MARSHADOW
# 238 "data/maps/SootopolisCity_House5/scripts.pory"
	givemonrandom SPECIES_MARSHADOW, 50
# 239 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House5_EventScript_ReceiveMarshadowParty
# 240 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House5_EventScript_ReceiveMarshadowPC
# 241 "data/maps/SootopolisCity_House5/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 242 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_ReceiveMarshadowParty::
# 247 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMarshadowFanfare
# 248 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 249 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_ExplainMarshadow
# 250 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 251 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 252 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMarshadow
	end


SootopolisCity_House5_EventScript_ReceiveMarshadowPC::
# 257 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedMarshadowFanfare
# 258 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 259 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_SendMarshadowToPC
# 260 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 261 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_SendMarshadowToPC
	end


SootopolisCity_House5_EventScript_SendMarshadowToPC::
# 266 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_TransferredToPC
# 267 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainMarshadow
	end


SootopolisCity_House5_EventScript_ReceivedMarshadowFanfare::
# 272 "data/maps/SootopolisCity_House5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 273 "data/maps/SootopolisCity_House5/scripts.pory"
	message SootopolisCity_House5_Text_PlayerReceivedMarshadow
# 274 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmessage
# 275 "data/maps/SootopolisCity_House5/scripts.pory"
	waitfanfare
# 276 "data/maps/SootopolisCity_House5/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MARSHADOW
	return


SootopolisCity_House5_EventScript_ExplainMarshadow::
# 281 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox MasterPoucine_ExplainMarshadow, MSGBOX_DEFAULT
# 282 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_OblivionWing::
# 333 "data/maps/SootopolisCity_House5/scripts.pory"
	lockall
# 334 "data/maps/SootopolisCity_House5/scripts.pory"
	applymovement LOCALID_OBLIVION_WING, Common_Movement_FacePlayer
# 335 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_defeated TRAINER_OBLIVION_WING, SootopolisCity_House5_EventScript_OblivionWingDefeated
# 336 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_set FLAG_TEMP_3, SootopolisCity_House5_EventScript_OblivionWingRequestBattleAgain
# 337 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_Greeting, MSGBOX_YESNO
# 338 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleOblivionWingPrompt
	end


SootopolisCity_House5_EventScript_OblivionWingRequestBattleAgain::
# 343 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_ReadyYet, MSGBOX_YESNO
# 344 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_BattleOblivionWingPrompt
	end


SootopolisCity_House5_EventScript_BattleOblivionWingPrompt::
# 349 "data/maps/SootopolisCity_House5/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House5_EventScript_BattleOblivionWing
# 350 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_DeclineOblivionWingBattle
# 351 "data/maps/SootopolisCity_House5/scripts.pory"
	closemessage
	end


SootopolisCity_House5_EventScript_DeclineOblivionWingBattle::
# 356 "data/maps/SootopolisCity_House5/scripts.pory"
	setflag FLAG_TEMP_3
# 357 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_ComeBackWhenReady, MSGBOX_DEFAULT
# 358 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_BattleOblivionWing::
# 363 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_YoureOn, MSGBOX_DEFAULT
# 364 "data/maps/SootopolisCity_House5/scripts.pory"
	trainerbattle_no_intro TRAINER_OBLIVION_WING, OblivionWing_Outro
# 365 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_OblivionWingGiveZarude
	return


SootopolisCity_House5_EventScript_OblivionWingDefeated::
# 370 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox PostBattle_OblivionWing, MSGBOX_DEFAULT
# 371 "data/maps/SootopolisCity_House5/scripts.pory"
	releaseall
	end


SootopolisCity_House5_EventScript_OblivionWingGiveZarude::
# 376 "data/maps/SootopolisCity_House5/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZARUDE
# 377 "data/maps/SootopolisCity_House5/scripts.pory"
	givemonrandom SPECIES_ZARUDE, 50
# 378 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House5_EventScript_ReceiveZarudeParty
# 379 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House5_EventScript_ReceiveZarudePC
# 380 "data/maps/SootopolisCity_House5/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 381 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


SootopolisCity_House5_EventScript_ReceiveZarudeParty::
# 386 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedZarudeFanfare
# 387 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 388 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_ExplainZarude
# 389 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 390 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 391 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainZarude
	end


SootopolisCity_House5_EventScript_ReceiveZarudePC::
# 396 "data/maps/SootopolisCity_House5/scripts.pory"
	call SootopolisCity_House5_EventScript_ReceivedZarudeFanfare
# 397 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 398 "data/maps/SootopolisCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House5_EventScript_SendZarudeToPC
# 399 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 400 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_SendZarudeToPC
	end


SootopolisCity_House5_EventScript_SendZarudeToPC::
# 405 "data/maps/SootopolisCity_House5/scripts.pory"
	call Common_EventScript_TransferredToPC
# 406 "data/maps/SootopolisCity_House5/scripts.pory"
	goto SootopolisCity_House5_EventScript_ExplainZarude
	end


SootopolisCity_House5_EventScript_ReceivedZarudeFanfare::
# 411 "data/maps/SootopolisCity_House5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 412 "data/maps/SootopolisCity_House5/scripts.pory"
	message SootopolisCity_House5_Text_PlayerReceivedZarude
# 413 "data/maps/SootopolisCity_House5/scripts.pory"
	waitmessage
# 414 "data/maps/SootopolisCity_House5/scripts.pory"
	waitfanfare
# 415 "data/maps/SootopolisCity_House5/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZARUDE
	return


SootopolisCity_House5_EventScript_ExplainZarude::
# 420 "data/maps/SootopolisCity_House5/scripts.pory"
	msgbox OblivionWing_ExplainZarude, MSGBOX_DEFAULT
# 421 "data/maps/SootopolisCity_House5/scripts.pory"
	release
	end


Natn_Greeting::
# 145 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "嘿，我叫Natn，我是这游戏\n"
	.string "发售时第一个在普通模式下\l"
	.string "通关的人。\p"
	.string "早期我不太爱说话，\n"
	.string "只是出现、飞快通关，\l"
	.string "然后晒出我的名人堂\l"
	.string "队伍。\p"
	.string "我的规矩也一样，你若能\n"
	.string "打赢我，我就送你幻之宝可梦。\p"
	.string "有兴趣对战吗？$"

Natn_ReadyYet::
# 158 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "现在想打吗？$"

Natn_YoureOn::
# 162 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "来吧。$"

Natn_ComeBackWhenReady::
# 166 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "改主意了就告诉我。$"

Natn_Outro::
# 170 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "相当不错。\n$"

SootopolisCity_House5_Text_PlayerReceivedMeloetta::
# 174 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "{PLAYER}得到了美洛耶塔！$"

Natn_ExplainMeloetta::
# 178 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "你的幻之宝可梦。\n"
	.string "你大概知道它的花样了，\l"
	.string "只要用它专属的古老之歌，\l"
	.string "就能在对战中改变形态。\p"
	.string "真让人好奇阿李是怎么拿到\n"
	.string "一开始就是舞步形态的那只的。$"

PostBattle_Natn::
# 187 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "说真的，这游戏挺简单的。\n"
	.string "我就在这儿等硬核模式。$"

MasterPoucine_Greeting::
# 286 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "你好！我是MasterPoucine，\n"
	.string "我是这游戏发售后第三个\l"
	.string "通关的人，也是第一个用它\l"
	.string "招牌帝王拿波通关的人！\p"
	.string "我也是内容创作者，\n"
	.string "欢迎在YouTube上看我！\p"
	.string "和其他冠军一样，你若能\n"
	.string "打赢我，我就送你幻之宝可梦。\p"
	.string "要和我对战吗？$"

MasterPoucine_ReadyYet::
# 298 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "现在要打吗？$"

MasterPoucine_YoureOn::
# 302 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "来吧！$"

MasterPoucine_ComeBackWhenReady::
# 306 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "决定要打的话，\n"
	.string "就再来找我。$"

MasterPoucine_Outro::
# 311 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "哇，这场对战真精彩！$"

SootopolisCity_House5_Text_PlayerReceivedMarshadow::
# 315 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "{PLAYER}得到了玛夏多！$"

MasterPoucine_ExplainMarshadow::
# 319 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "这才叫好奖励！玛夏多绝对\n"
	.string "是最强的幻之宝可梦\l"
	.string "之一，希望你好生使用。$"

PostBattle_MasterPoucine::
# 325 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "我等不及想看更难的\n"
	.string "模式出了，那样我也能\l"
	.string "速通一遍！$"

OblivionWing_Greeting::
# 425 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "你好，我是OblivionWing，\n"
	.string "我是这游戏发售后\l"
	.string "第一个通关的人。\p"
	.string "我在简单模式下飞速通关，\n"
	.string "在它发售后仅仅一天\l"
	.string "就打完了！\p"
	.string "你若能打赢我，我就送你\n"
	.string "幻之宝可梦，和别人一样。\p"
	.string "你觉得这样行吗？$"

OblivionWing_ReadyYet::
# 437 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "准备好对战了吗？$"

OblivionWing_YoureOn::
# 441 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "祝你好运，你会需要的！$"

OblivionWing_ComeBackWhenReady::
# 445 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "改主意的话，知道来这儿找我。$"

OblivionWing_Outro::
# 449 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "不错！你要是再快一点，\n"
	.string "说不定就是第一个\l"
	.string "通关这游戏的人了！$"

SootopolisCity_House5_Text_PlayerReceivedZarude::
# 455 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "{PLAYER}得到了萨戮德！$"

OblivionWing_ExplainZarude::
# 459 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "给你，你的幻之宝可梦。\n"
	.string "我觉得这只也挺好的，\l"
	.string "我自己都这么觉得。$"

PostBattle_OblivionWing::
# 465 "data/maps/SootopolisCity_House5/scripts.pory"
	.string "祝你接下来游戏顺利！$"
