# 1 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
.set LOCALID_SUNBIRD, 1
# 3 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
.set LOCALID_SUNEAL, 3
# 4 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
.set LOCALID_DOLLAMIKE, 5
# 5 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_MapScripts::
# 6 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.byte 0
# 7 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 8 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_EventScript_Mochi::
# 9 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lock
# 10 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	faceplayer
# 11 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitse
# 12 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playmoncry SPECIES_TYRANTRUM, CRY_MODE_NORMAL
# 13 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox MossdeepCity_BetaTesterHouse_Text_Tyrantrum, MSGBOX_DEFAULT
# 14 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmoncry
# 15 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
# 16 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	end
# 17 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 18 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_Text_Tyrantrum:
# 19 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "怪颚龙：咕啊啊啊啊！$"
# 20 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 21 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_EventScript_Kingambit::
# 22 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lock
# 23 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	faceplayer
# 24 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitse
# 25 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playmoncry SPECIES_KINGAMBIT, CRY_MODE_NORMAL
# 26 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox MossdeepCity_BetaTesterHouse_Text_Kingambit, MSGBOX_DEFAULT
# 27 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmoncry
# 28 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
# 29 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	end
# 30 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 31 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_Text_Kingambit:
# 32 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "仆刀将军：呜呼呼呼呼呼！$"
# 33 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 34 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_EventScript_Blaziken::
# 35 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lock
# 36 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	faceplayer
# 37 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitse
# 38 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playmoncry SPECIES_BLAZIKEN, CRY_MODE_NORMAL
# 39 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox MossdeepCity_BetaTesterHouse_Text_Blaziken, MSGBOX_DEFAULT
# 40 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmoncry
# 41 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
# 42 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	end
# 43 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"

# 44 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
MossdeepCity_BetaTesterHouse_Text_Blaziken:
# 45 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "火焰鸡：呜噜噜噜噜！$"

MossdeepCity_BetaTesterHouse_EventScript_Sunbird::
# 49 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lockall
# 50 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	applymovement LOCALID_SUNBIRD, Common_Movement_FacePlayer
# 51 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_defeated TRAINER_SUNBIRD, MossdeepCity_BetaTesterHouse_EventScript_SunbirdDefeated
# 52 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, MossdeepCity_BetaTesterHouse_EventScript_SunbirdRequestBattleAgain
# 53 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_Greeting, MSGBOX_YESNO
# 54 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_SunbirdRequestBattleAgain::
# 59 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ReadyYet, MSGBOX_YESNO
# 60 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunbirdPrompt::
# 65 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_BetaTesterHouse_EventScript_BattleSunbird
# 66 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_DeclineSunbirdBattle
# 67 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	closemessage
	end


MossdeepCity_BetaTesterHouse_EventScript_DeclineSunbirdBattle::
# 72 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 73 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ComeBackWhenReady, MSGBOX_DEFAULT
# 74 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunbird::
# 79 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_YoureOn, MSGBOX_DEFAULT
# 80 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SUNBIRD, Sunbird_Outro
# 81 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SunbirdGiveCelebi
	return


MossdeepCity_BetaTesterHouse_EventScript_SunbirdDefeated::
# 87 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox PostBattle_Sunbird, MSGBOX_DEFAULT
# 88 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	releaseall
	end


MossdeepCity_BetaTesterHouse_EventScript_SunbirdGiveCelebi::
# 93 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CELEBI
# 94 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	givemonrandom SPECIES_CELEBI, 50
# 95 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiParty
# 96 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiPC
# 97 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 98 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiParty::
# 103 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedCelebiFanfare
# 104 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 105 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi
# 106 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 107 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 108 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveCelebiPC::
# 114 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedCelebiFanfare
# 115 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 116 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_SendCelebiToPC
# 117 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 118 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SendCelebiToPC
	end


MossdeepCity_BetaTesterHouse_EventScript_SendCelebiToPC::
# 124 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 125 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceivedCelebiFanfare::
# 131 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	message MossdeepCity_BetaTesterHouse_Text_PlayerReceivedCelebi
# 133 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmessage
# 134 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitfanfare
# 135 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CELEBI
	return


MossdeepCity_BetaTesterHouse_EventScript_ExplainCelebi::
# 141 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Sunbird_ExplainCelebi, MSGBOX_DEFAULT
# 142 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_Suneal::
# 205 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lockall
# 206 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	applymovement LOCALID_SUNEAL, Common_Movement_FacePlayer
# 207 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_defeated TRAINER_SUNEAL, MossdeepCity_BetaTesterHouse_EventScript_SunealDefeated
# 208 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, MossdeepCity_BetaTesterHouse_EventScript_SunealRequestBattleAgain
# 209 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_Greeting, MSGBOX_YESNO
# 210 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_SunealRequestBattleAgain::
# 215 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ReadyYet, MSGBOX_YESNO
# 216 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSunealPrompt::
# 221 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_BetaTesterHouse_EventScript_BattleSuneal
# 222 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_DeclineSunealBattle
# 223 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	closemessage
	end


MossdeepCity_BetaTesterHouse_EventScript_DeclineSunealBattle::
# 228 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 229 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ComeBackWhenReady, MSGBOX_DEFAULT
# 230 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleSuneal::
# 235 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_YoureOn, MSGBOX_DEFAULT
# 236 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SUNEAL, Suneal_Outro
# 237 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SunealGiveDarkrai
	return


MossdeepCity_BetaTesterHouse_EventScript_SunealDefeated::
# 243 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox PostBattle_Suneal, MSGBOX_DEFAULT
# 244 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	releaseall
	end


MossdeepCity_BetaTesterHouse_EventScript_SunealGiveDarkrai::
# 249 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DARKRAI
# 250 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	givemonrandom SPECIES_DARKRAI, 50
# 251 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiParty
# 252 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiPC
# 253 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 254 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiParty::
# 259 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare
# 260 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 261 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
# 262 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 263 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 264 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveDarkraiPC::
# 270 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare
# 271 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 272 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC
# 273 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 274 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC
	end


MossdeepCity_BetaTesterHouse_EventScript_SendDarkraiToPC::
# 280 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 281 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceivedDarkraiFanfare::
# 287 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 288 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	message MossdeepCity_BetaTesterHouse_Text_PlayerReceivedDarkrai
# 289 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmessage
# 290 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitfanfare
# 291 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DARKRAI
	return


MossdeepCity_BetaTesterHouse_EventScript_ExplainDarkrai::
# 297 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox Suneal_ExplainDarkrai, MSGBOX_DEFAULT
# 298 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_DollaMike::
# 353 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	lockall
# 354 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	applymovement LOCALID_DOLLAMIKE, Common_Movement_FacePlayer
# 355 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_defeated TRAINER_DOLLAMIKE, MossdeepCity_BetaTesterHouse_EventScript_DollaMikeDefeated
# 356 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, MossdeepCity_BetaTesterHouse_EventScript_DollaMikeRequestBattleAgain
# 357 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_Greeting, MSGBOX_YESNO
# 358 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMikePrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_DollaMikeRequestBattleAgain::
# 363 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_ReadyYet, MSGBOX_YESNO
# 364 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMikePrompt
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMikePrompt::
# 369 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMike
# 370 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_DeclineDollaMikeBattle
# 371 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	closemessage
	end


MossdeepCity_BetaTesterHouse_EventScript_DeclineDollaMikeBattle::
# 376 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 377 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_ComeBackWhenReady, MSGBOX_DEFAULT
# 378 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_BattleDollaMike::
# 383 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_YoureOn, MSGBOX_DEFAULT
# 384 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_DOLLAMIKE, DollaMike_Outro
# 385 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_DollaMikeGiveVictini
	return


MossdeepCity_BetaTesterHouse_EventScript_DollaMikeDefeated::
# 391 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox PostBattle_DollaMike, MSGBOX_DEFAULT
# 392 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	releaseall
	end


MossdeepCity_BetaTesterHouse_EventScript_DollaMikeGiveVictini::
# 397 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VICTINI
# 398 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	givemonrandom SPECIES_VICTINI, 50
# 399 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniParty
# 400 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniPC
# 401 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 402 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniParty::
# 407 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedVictiniFanfare
# 408 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 409 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini
# 410 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 411 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 412 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceiveVictiniPC::
# 418 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call MossdeepCity_BetaTesterHouse_EventScript_ReceivedVictiniFanfare
# 419 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 420 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_BetaTesterHouse_EventScript_SendVictiniToPC
# 421 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 422 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_SendVictiniToPC
	end


MossdeepCity_BetaTesterHouse_EventScript_SendVictiniToPC::
# 428 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 429 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	goto MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini
	end


MossdeepCity_BetaTesterHouse_EventScript_ReceivedVictiniFanfare::
# 435 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 436 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	message MossdeepCity_BetaTesterHouse_Text_PlayerReceivedVictini
# 437 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitmessage
# 438 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	waitfanfare
# 439 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VICTINI
	return


MossdeepCity_BetaTesterHouse_EventScript_ExplainVictini::
# 445 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	msgbox DollaMike_ExplainVictini, MSGBOX_DEFAULT
# 446 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	release
	end


Sunbird_Greeting::
# 146 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "你好！我是Sunbird，我是最早\n"
	.string "通关这游戏的玩家之一，所以\l"
	.string "我用自己的名人堂队伍做了\l"
	.string "一个属于我的训练家！\p"
	.string "现在你若能打赢我，我就给你\n"
	.string "一份很棒的报酬（剧透一下，\l"
	.string "是幻之宝可梦）！\p"
	.string "我还会告诉你，我的骨纹巨声鳄\n"
	.string "的昵称“OBC Andy”是什么\l"
	.string "意思。\p"
	.string "说起来，你有点让我想起他。\p"
	.string "那么，你觉得能打赢我吗？$"

Sunbird_ReadyYet::
# 161 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "准备好了吗，OBC训练家？$"

Sunbird_YoureOn::
# 165 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "好，来吧，OBC训练家！$"

Sunbird_ComeBackWhenReady::
# 169 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "没关系，我不怪你。\n"
	.string "我的队伍可是很吓人的！$"

Sunbird_Outro::
# 174 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "好，我告诉你……“OBC”就是\n"
	.string "“一个脑细胞”，但Andy很努力！$"

MossdeepCity_BetaTesterHouse_Text_PlayerReceivedCelebi::
# 179 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "{PLAYER}得到了时拉比！$"

Sunbird_ExplainCelebi::
# 183 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "我说过，你打赢我就送你\n"
	.string "幻之宝可梦！\p"
	.string "而且我觉得这只相当不错，\n"
	.string "希望时拉比能帮到你！$"

PostBattle_Sunbird::
# 190 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "那只异色怪颚龙“麻薯”是\n"
	.string "我通关时的队伍核心，\l"
	.string "不可或缺。\p"
	.string "它陪我走了很久，是我名人堂\n"
	.string "队伍的重要一员！\p"
	.string "希望你身边也有一只\n"
	.string "像我珍惜麻薯那样让你\l"
	.string "珍惜的宝可梦，愿你们\l"
	.string "一起走得很远！$"

Suneal_Greeting::
# 302 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "你好！我叫Suneal，我是\n"
	.string "除制作者之外第一个\l"
	.string "打通这游戏。\p"
	.string "其实我通关了好几次，而且\n"
	.string "我玩的版本比正式完成\l"
	.string "还早得多。\p"
	.string "你若能打赢我，我就送你\n"
	.string "一只幻之宝可梦作为奖励。\p"
	.string "你觉得如何？$"

Suneal_ReadyYet::
# 314 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "准备对战了吗？$"

Suneal_YoureOn::
# 318 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "来吧。$"

Suneal_ComeBackWhenReady::
# 322 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "改主意了再来吧。$"

Suneal_Outro::
# 326 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "看来你也许不完全是\n"
	.string "个废物。$"

MossdeepCity_BetaTesterHouse_Text_PlayerReceivedDarkrai::
# 331 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "{PLAYER}得到了达克莱伊！$"

Suneal_ExplainDarkrai::
# 335 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "说好的幻之宝可梦，给你。\n"
	.string "不过暗黑洞要等通关后\l"
	.string "才能用，那招实在\l"
	.string "太变态了。$"

PostBattle_Suneal::
# 342 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "是我建议在宝可梦中心第二位\n"
	.string "护士那儿加上全员倒下计数的，\l"
	.string "也是我想出了“得到了好几个\l"
	.string "道具！”这种合并提示，省得\l"
	.string "弹50次单独的消息，所以\l"
	.string "你该谢谢我。$"

DollaMike_Greeting::
# 450 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "哟，我是DollaMike，我足足花了\n"
	.string "90小时，全程不开加速才\l"
	.string "打通这游戏。\p"
	.string "我直到打冠军前不久才\n"
	.string "发现有个宝可梦药剂，\l"
	.string "还跟制作者说我的药水\l"
	.string "用完了。真事。\p"
	.string "总之，我现在要拿砖头砸你，\n"
	.string "我就是这么干的。你赢了我，\l"
	.string "我就送你幻之宝可梦，来吗？$"

DollaMike_ReadyYet::
# 463 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "这块砖上写着你的名字，\n"
	.string "如果你现在准备好了。$"

DollaMike_YoureOn::
# 468 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "你完蛋了，小子。$"

DollaMike_ComeBackWhenReady::
# 472 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "换我我也会害怕的。$"

DollaMike_Outro::
# 476 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "全怪我的药水用完了！$"

MossdeepCity_BetaTesterHouse_Text_PlayerReceivedVictini::
# 480 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "{PLAYER}得到了比克提尼！$"

DollaMike_ExplainVictini::
# 484 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "那只幻之宝可梦代表着\n"
	.string "胜利！\p"
	.string "我猜的，其实我当初选的是\n"
	.string "凯路迪欧作为赠礼宝可梦，\l"
	.string "但制作者不准，那就用这个吧。$"

PostBattle_DollaMike::
# 492 "data/maps/MossdeepCity_BetaTesterHouse/scripts.pory"
	.string "这游戏真够难的，我已经\n"
	.string "等不及再玩一遍了。$"
