# 1 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_COLE, 2
# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_GERALD, 3
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_AXLE, 4
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_DANIELLE, 5
# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_MapScripts::
# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
# 9 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.byte 0
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnTransition:
# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery::
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_110_WALLY
# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_BEAT_FLANNERY, 1
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 7, Common_EventScript_ReadyPetalburgGymForBattle
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_HEAT_CRASH
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_HEAT_WAVE
# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_FLARE_BLITZ
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_BLAZIKENITE
# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_HEAT_CRASH
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_HEAT_WAVE
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_FLARE_BLITZ
# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_BLAZIKENITE
# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_COLE, LOCALID_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_AXLE, LOCALID_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_KEEGAN, LOCALID_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_DANIELLE, LOCALID_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald::
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_GERALD, LOCALID_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JACE, LOCALID_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff::
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JEFF, LOCALID_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_ELI, LOCALID_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Infernape::
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitse
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playmoncry SPECIES_INFERNAPE, CRY_MODE_NORMAL
# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_Infernape, MSGBOX_DEFAULT
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmoncry
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "嘿，冠军候补的{PLAYER}，\n"
# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "最近怎么样？\p"
# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "釜炎道馆的馆主亚莎\n"
# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "使的是火属性宝可梦。\p"
# 222 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "她对宝可梦的热情比\n"
# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "火山还炽热。\p"
# 224 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "别靠她太近——会被烫到！\n"
# 225 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "用水给她浇一浇，\l"
# 226 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "然后再上！$"
# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "哇！那真是场\n"
# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "滚烫的对战！$"
# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro:
# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "哎哟哟哟！\n"
# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "哇，好热！$"
# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat:
# 237 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "汗水迷住了\n"
# 238 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我的眼睛……$"
# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle:
# 241 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "埋在热沙里能促进\n"
# 242 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "血液循环。\p"
# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "对缓解关节疼痛\n"
# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "很有效。$"
# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro:
# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我正在缓解压力。\n"
# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "别过来给我添压力！$"
# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat:
# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "希望亚莎把你\n"
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "烧个痛快！$"
# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle:
# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "哈啊……呼……\p"
# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "埋在热沙里太久，\n"
# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "会把人累坏的……$"
# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganIntro:
# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "你现在一定累了吧。\n"
# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "想在热沙里休息一下，\l"
# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "对吧？\p"
# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "不过你该知道，保持意志力\n"
# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "是训练家的重要能力。$"
# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "玩火，必自焚……$"
# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "你的本事是真的……\n"
# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "可我们的馆主亚莎很强。\p"
# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "你要是不留神，会\n"
# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "被烧得很惨。$"
# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 275 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro:
# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "你的宝可梦挡得住\n"
# 277 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392度的高温吗？$"
# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 279 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat:
# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "烧得还不够热……$"
# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "岩浆的温度是\n"
# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392度。\p"
# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "你的宝可梦打赢了我，\n"
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "那在岩浆里也能活。$"
# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro:
# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "呃……\n"
# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "好吧，我跟你对战。$"
# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat:
# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "哦，你可太强了。$"
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我要成为像亚莎那样\n"
# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "又漂亮又强的训练家。$"
# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro:
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "来，打起精神！\n"
# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "趁我的热情还没凉，来吧！$"
# 302 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat:
# 304 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "这么热，我的心却\n"
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "被冰抓住了……$"
# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle:
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "看你心里燃起的\n"
# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "对战意志，\l"
# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "也许能打赢我们的馆主。$"
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffIntro:
# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "看那火焰烧得多旺？\n"
# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "它们在预示我的胜利！$"
# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffDefeat:
# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "有什么地方不对劲。$"
# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "那又怎样？那又怎样？\n"
# 321 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我光脚都能走热炭！\p"
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "……你可千万\n"
# 323 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "别试！$"
# 324 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro:
# 326 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我有多爱山，\n"
# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "就有多爱火山。$"
# 328 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 329 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat:
# 330 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "看来我从头到尾\n"
# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "都没能掌握主动。$"
# 332 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle:
# 334 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我留在这里，是因为\n"
# 335 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "成了亚莎力量的粉丝。\p"
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "嘿嘿嘿。$"
# 337 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro:
# 339 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "欢迎……不，等等。\p"
# 340 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "渺小的训练家，你居然\n"
# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "走到这里了，真不错！\p"
# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我受人之托……\n"
# 343 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "不，等等。\p"
# 344 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我是亚莎，这里的\n"
# 345 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "道馆馆主！\p"
# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "呃……\n"
# 347 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "可别小看我，虽然\l"
# 348 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我当馆主的时间还不长！\p"
# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我要用从爷爷那里\n"
# 350 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "继承的本事，呃……\l"
# 351 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "展示我们在这片\l"
# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "土地上磨练的热招式！$"
# 353 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
# 355 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "哦……\n"
# 356 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我大概是太用力了……\p"
# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我……我才刚当上\n"
# 358 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "道馆馆主不久。\p"
# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我太想成为\n"
# 360 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "别人了。\p"
# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我得照自己的方式来。\n"
# 362 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "不然宝可梦会困惑的。\p"
# 363 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "谢谢你教我这一点。\n"
# 364 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "作为谢礼，这些给你。$"
# 365 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}从亚莎那里\n"
# 368 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "得到了烈焰徽章。$"
# 369 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 370 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "有了烈焰徽章，宝可梦\n"
# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "就能在战斗外使用\l"
# 373 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "秘传招式怪力。\p"
# 374 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "还有，这些学习器\n"
# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "算是我的一点心意。\l"
# 376 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "别客气，收下吧！$"
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 378 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat:
# 379 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "这些是我所有的\n"
# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "火属性学习器，\l"
# 381 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我还附上了自己最喜欢的\l"
# 382 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "超级石。\p"
# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "希望你能把它们\n"
# 384 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "好好用起来！$"
# 385 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 386 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
# 387 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "在宝可梦导航里登录了\n"
# 388 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "道馆馆主亚莎。$"
# 389 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 390 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
# 391 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "怎么了？\n"
# 392 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我说我给了你最喜欢的\l"
# 393 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "超级石，可没说\l"
# 394 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "给你最好的那颗！\p"
# 395 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "哈！我的烈焰猴超级石\n"
# 396 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "是从茵郁市一个训练家\l"
# 397 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "那儿得来的，不知道\l"
# 398 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "他会不会也给你一颗？$"
# 399 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 400 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue:
# 401 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "釜炎镇宝可梦道馆$"
# 402 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 403 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified:
# 404 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "釜炎镇宝可梦道馆\p"
# 405 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "亚莎认定的训练家：\n"
# 406 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 407 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 408 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
# 409 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "亚莎：输一场对战\n"
# 410 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "可不会让我泄气。\p"
# 411 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我爱宝可梦。\n"
# 412 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我爱对战。\l"
# 413 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "而且……我爱这个道馆！\p"
# 414 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "再来一场，交换\n"
# 415 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "超级热的招式吧！$"
# 416 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 417 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
# 418 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "呼！\n"
# 419 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "差点就要喷发了！$"
# 420 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 421 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
# 422 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "亚莎：这场比赛我输了，\n"
# 423 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "可我完全满足。\p"
# 424 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "能享受这么火热\n"
# 425 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "的对战，可不常有。\p"
# 426 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "下次再来一场\n"
# 427 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "这样的吧！$"
# 428 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 429 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
# 430 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "亚莎：输一场对战\n"
# 431 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "可不会让我泄气。\p"
# 432 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我爱宝可梦。\n"
# 433 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "我爱对战。\l"
# 434 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "而且……我爱这个道馆！\p"
# 435 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "再来一场，交换\n"
# 436 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "超级热的招式吧！\p"
# 437 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "哦，等等。你能对战的\n"
# 438 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "宝可梦只有一只？\p"
# 439 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "这话不太好说，不过\n"
# 440 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "来找我时请至少带两只。$"
# 441 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 442 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_Infernape:
# 443 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "烈焰猴：咿呀啊啊！$"
