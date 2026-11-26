# 1 "data/maps/MauvilleCity_Gym/scripts.pory"

# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_MapScripts::
# 3 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
# 4 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity_Gym/scripts.pory"

# 6 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad:
# 7 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 8 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_MAUVILLE_GYM_STATE
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"

# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"

# 20 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"

# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"

# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"

# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"

# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"

# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"

# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_VOLT_SWITCH, MauvilleCity_Gym_EventScript_GiveVoltSwitch2
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"

# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_BEAT_WATTSON, 1
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 7, Common_EventScript_ReadyPetalburgGymForBattle
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveVoltSwitch
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"

# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveVoltSwitch2::
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_VOLT_SWITCH
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_LUXRITE
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_MANECTITE
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_AMPHAROSITE
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainVoltSwitch, MSGBOX_DEFAULT
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_VOLT_SWITCH
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"

# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveVoltSwitch::
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_VOLT_SWITCH
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_LUXRITE
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_MANECTITE
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_AMPHAROSITE
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainVoltSwitch, MSGBOX_DEFAULT
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_VOLT_SWITCH
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"

# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"

# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"

# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"

# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"

# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"

# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"

# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"

# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"

# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"

# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"

# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"

# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"

# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"

# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"

# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"

# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"

# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"

# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"

# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"

# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"

# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"

# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Luxray::
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitse
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_NORMAL
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_Luxray, MSGBOX_DEFAULT
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmoncry
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"

# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "嘿，冠军候补的{PLAYER}，\n"
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "最近怎么样？\p"
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "紫堇道馆的馆主铁旋\n"
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "使的是电属性宝可梦。\p"
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "要是用水属性宝可梦去\n"
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "挑战，会被他电得吱吱响！\p"
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "而且他在道馆里到处\n"
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "装上了开关门！真是怪人！\p"
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "嘿，去吧！$"
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"

# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "哇，你真是电光四射！\n"
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "你把门通上电打开来了！$"
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"

# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我这电气般的灵魂，\n"
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "会把你的梦想震碎，哇耶！$"
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"

# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "那真是通电、加压、\n"
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "过载的电气啊！$"
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"

# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "宝可梦和摇滚，\n"
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "讲的就是心，哇耶！$"
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"

# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我是在铁旋手下\n"
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "训练出来的！\l"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我可不会轻易认输！$"
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"

# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "被拔掉插头，\n"
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "断电了……$"
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"

# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我们馆主铁旋，\n"
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "可是老资格了。\p"
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "你爸爸还没出生的时候，\n"
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "他就在对战了，老顽固。$"
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"

# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "这个道馆有机关！\n"
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "好玩吧？$"
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"

# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "输了可不好玩……$"
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"

# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "铁旋说他就喜欢\n"
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "用开关设小陷阱。$"
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"

# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "凭我的魅力和宝可梦\n"
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "的招式，包你触电！$"
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"

# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "你的力量把我电到了！$"
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"

# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "听说紫堇市是\n"
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "铁旋建起来的。\p"
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我们还没当训练家的时候，\n"
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "他就已经是了。\l"
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "他一定什么都懂！$"
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"

# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我最喜欢亮闪闪\n"
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "的东西！$"
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"

# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "哦……\n"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我的眼睛都花了……$"
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"

# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "紫堇道馆的铁旋，\n"
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "额头亮闪闪的。\l"
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "看着就让我高兴！$"
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"

# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我已经放弃改造\n"
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "城市的计划了。\p"
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "所以我就把时间花在\n"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "给道馆装门上。\p"
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "哦？你来这儿\n"
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "做什么？\p"
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "什么？你说你\n"
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "闯过了我所有的机关门？\p"
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "哇哈哈哈！\n"
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "这倒有意思！\p"
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "那么，我，紫堇道馆馆主\n"
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "铁旋，就让你触电吧！$"
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"

# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "哇哈哈哈！\n"
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "好，我输了！\p"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "你倒让我痛快了一场！\n"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "拿去吧，徽章！$"
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"

# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}从铁旋那里\n"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "得到了电力徽章。$"
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"

# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "有了电力徽章，宝可梦\n"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "就能在战斗外使用碎岩。\p"
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "嗯……\n"
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "这个你也拿去吧！$"
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"

# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainVoltSwitch:
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "那个学习器92号里\n"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "是伏特替换。\p"
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "能让对手触电，然后\n"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "马上换下场，\l"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "挺方便的！\p"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我还附上了一些我最喜欢的\n"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "超级石，等你有超级环，\l"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "应该能派上用场。\p"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"

# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "在宝可梦导航里登录了\n"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "道馆馆主铁旋。$"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"

# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "看到你这样有前途的\n"
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "年轻训练家，\l"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我真是满怀希望！$"
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"

# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "哇哈哈哈！\n"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "去吧，年轻人，去拼搏吧！$"
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"

# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "紫堇市宝可梦道馆$"
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"

# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "紫堇市宝可梦道馆\p"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "铁旋认定的训练家：\n"
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"

# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "铁旋：啊哈！终于来了！\n"
# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我知道你想要什么。\l"
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "你想和我的宝可梦对战！\p"
# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "哇哈哈哈！\p"
# 430 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我要让你火花四溅！\n"
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "可别怪我没提醒你！$"
# 432 "data/maps/MauvilleCity_Gym/scripts.pory"

# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "哎哟……\n"
# 435 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我们的电池耗光了……$"
# 436 "data/maps/MauvilleCity_Gym/scripts.pory"

# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "铁旋：我们得再充电了。\p"
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "充满电之后，我们会\n"
# 440 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "乐意接受你的挑战。\p"
# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "所以，有空再来，\n"
# 442 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "好吗？$"
# 443 "data/maps/MauvilleCity_Gym/scripts.pory"

# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "铁旋：啊哈！终于来了！\n"
# 446 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "我知道你想要什么。\l"
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "你想和我的宝可梦对战！\p"
# 448 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "哇哈哈哈！\p"
# 449 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "哎！等等！\n"
# 450 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "你只带了一只宝可梦！\p"
# 451 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "请带两只以上再来\n"
# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "找我，好吗？$"
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"

# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_Luxray:
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "伦琴猫：吼啊啊啊！$"
