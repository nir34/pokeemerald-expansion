# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/MossdeepCity_Gym/scripts.pory"

# 7 "data/maps/MossdeepCity_Gym/scripts.pory"
@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below
# 8 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition:
# 9 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"

# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad:
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"

# 18 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2::
# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"

# 23 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3::
# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"

# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4::
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"

# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below set metatile scripts are leftover from RS and are functionally unused
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"

# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"

# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"

# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"

# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymLeadersPostVictory
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaIntro, MSGBOX_DEFAULT
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_two_trainers TRAINER_TATE, MossdeepCity_Gym_Text_TateDefeat, TRAINER_LIZA, MossdeepCity_Gym_Text_LizaDefeat
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaDefeated
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"

# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"

# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_TRICK_ROOM
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"

# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_TRICK_ROOM
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"

# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"

# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"

# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"

# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"

# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"

# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"

# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"

# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"

# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"

# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"

# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"

# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"

# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"

# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"

# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"

# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"

# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"

# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"

# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"

# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"

# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"

# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"

# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"

# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"

# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"

# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymLeadersPostVictory::
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymLeadersPostVictory, MSGBOX_DEFAULT
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"

# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"

# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"

# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"

# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"

# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"

# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"

# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"

# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"

# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"

# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"

# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Alakazam::
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
	playmoncry SPECIES_ALAKAZAM, CRY_MODE_NORMAL
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_Alakazam, MSGBOX_DEFAULT
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmoncry
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"

# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kangaskhan::
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_Kangaskhan, MSGBOX_DEFAULT
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmoncry
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"

# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "哟，冠军候补{PLAYER}，\n"
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "近况如何？\p"
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "这里的馆主使用\n"
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "超能力属性宝可梦。\p"
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你要是用格斗或毒属性\n"
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "宝可梦去挑战，\l"
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "会被打出可怕的伤害！\p"
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "而且他们还会用出色的\n"
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "组合招式攻过来。\p"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "想赢的话，你得让他们\n"
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "看到你和宝可梦多默契。\l"
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "去吧！$"
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"

# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "哇，你真厉害！\n"
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "是个了不起的训练家！$"
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"

# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "对战胜负取决于你\n"
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "精神的强度！精神弱\l"
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "的人永远赢不了！$"
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"

# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我输了！\n"
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我得重新磨练精神！$"
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"

# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "犹豫的人会输。\n"
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "这是我的忠告。$"
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"

# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "让我看看你的才能！$"
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"

# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你有惊人的才能！$"
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"

# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "世上如果说有神童，\n"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "那一定就是我们的馆主！\p"
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "不过，你可能比他们\n"
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "更有才能……$"
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"

# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "呵呵呵呵……看我念力\n"
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "把精灵球浮起来！\p"
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "呜哦哦哦哦哦！\n"
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "有时候，我会\n"
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "不太同步……$"
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"

# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我的宝可梦对战技术\n"
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "也不同步！$"
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"

# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "精灵球太重了，念力\n"
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "举不起来。不过这团\l"
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "灰尘……\p"
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "呼哦哦哦哦哦！\n"
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … …\p"
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "不，我没作弊！\n"
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我没吹它！真的！$"
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"

# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你输给我的时候，别\n"
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "太自责。\p"
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "不是因为你弱——\n"
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "只是我太强了！$"
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"

# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你实在太强了！$"
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"

# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我不会因为输了就\n"
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "沮丧。我只是需要\l"
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "更拼命地训练。\p"
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "积极思考——\n"
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "这是我的强项！$"
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"

# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我看到了……\n"
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我看到你的未来……\p"
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你要是能赢我，我就\n"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "告诉你你的未来！$"
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"

# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我认输！$"
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"

# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你将和我们的馆主\n"
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "打一场极其激烈的对战……\p"
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "结果……\n"
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我不会告诉你的！$"
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"

# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你走过的路……\n"
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你经历的事……\p"
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "用你学到的一切\n"
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "来对付我吧！$"
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"

# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你走过了伟大之路！$"
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"

# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "勤勉的人前方有光明的\n"
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "未来。\p"
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "偷懒的人，终点只有\n"
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "绝望。\p"
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "种什么因，得什么果……$"
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"

# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "就算赌上性命，我也要\n"
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "赢下这场对战！$"
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"

# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你做的事……\n"
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "让我毛骨悚然……$"
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"

# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你竟敢赢我……\p"
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你要是遇上什么可怕\n"
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "的事，可不怪我……$"
# 526 "data/maps/MossdeepCity_Gym/scripts.pory"

# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "呵呵呵。\p"
# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "得让你看看超能力属性\n"
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "有多难缠。$"
# 531 "data/maps/MossdeepCity_Gym/scripts.pory"

# 532 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "哦！哎呀呀！\n"
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你的战斗方式太棒了！$"
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"

# 536 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我……我不会因为输\n"
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "得多惨就……就慌的。$"
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"

# 540 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "让我给你看一段\n"
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "绝顶糟糕、可怕的时光！$"
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"

# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "不——要啊！$"
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"

# 547 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你的活力会传染！\n"
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "快离我远点！$"
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"

# 551 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我可能过了巅峰期，\n"
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "不过劝你别小看我。$"
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"

# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "啊，你身上满溢着\n"
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "青春的力量！$"
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"

# 559 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "看来我敌不过你的\n"
# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "年轻活力。$"
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"

# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你别想走到最后！\n"
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "只要我拦得住！$"
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"

# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你怎么能强得这么\n"
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "荒唐？$"
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"

# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "哼！你也许很强，可不\n"
# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "适合超能力属性！\p"
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "你的战斗方式\n"
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "莫名野蛮！$"
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"

# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "呜嗷！尝尝我宝可梦\n"
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "超强硬战之力！$"
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"

# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "哦！\n"
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "完蛋了！$"
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"

# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "好！我想我接下来\n"
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "要开发一种无敌的\l"
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "宝可梦力量。$"
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"

# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：嘿嘿嘿……你吃惊吗？\n"
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：呵呵呵……你吃惊吗？\p"
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：因为馆主有两个人？\n"
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：因为馆主有两个人？\p"
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：我们是双胞胎！\n"
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：我们是双胞胎！\p"
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：不用说话，因为……\n"
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：我们能各自知道……\p"
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：对方在想什么……\n"
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：全在心里！\p"
# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：我们这种组合……\n"
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：你打得过吗？$"
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"

# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：什么？！\n"
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：我们的组合被打碎了！\p"
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：没办法，你赢了……\n"
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：那么，作为认可，\l"
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "收下这个。$"
# 610 "data/maps/MossdeepCity_Gym/scripts.pory"

# 611 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateDefeat:
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：什么？！我们的组合\n"
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "被打碎了！$"
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"

# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_LizaDefeat:
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：没办法，你赢了！\n"
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "那么，作为认可，收下这个。$"
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"

# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "从小枫和小南那里\n"
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "得到了心灵徽章。$"
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"

# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：心灵徽章能让你在\n"
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "战斗外使用秘传潜水。\p"
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：你也该收下这个。$"
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"

# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：那个学习器55里是……\n"
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：广域战力！\p"
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：它威力大得多……\n"
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：在精神场地上！\p"
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：还有学习器106里是……\n"
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：戏法空间！\p"
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：两个都是好学习器……\n"
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：给超能宝可梦用！\p"
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"

# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "已把馆主小枫和小南\n"
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "登记进宝可梦导航。$"
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"

# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：看来你和宝可梦的\n"
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "羁绊，比我们双胞胎的\l"
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "羁绊还要强得多。\p"
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：你会变得更强！\n"
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "我们和你打过，所以知道。$"
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"

# 650 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 651 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：嘿嘿嘿……你吃惊吗？\p"
# 652 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：因为馆主有两个人？\p"
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：哎呀，你只有一只……\n"
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：能战斗的宝可梦。\p"
# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：这样可没法打！\p"
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：想挑战我们，就多\n"
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "带几只宝可梦来。$"
# 658 "data/maps/MossdeepCity_Gym/scripts.pory"

# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymLeadersPostVictory:
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：看来我们需要……\n"
# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：再多练习？\l"
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：嗯……我也这么想……$"
# 663 "data/maps/MossdeepCity_Gym/scripts.pory"

# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "绿岭市宝可梦道馆$"
# 666 "data/maps/MossdeepCity_Gym/scripts.pory"

# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "绿岭市宝可梦道馆\p"
# 669 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南和小枫认定的训练家：\n"
# 670 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 671 "data/maps/MossdeepCity_Gym/scripts.pory"

# 672 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 673 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：宝可梦……\n"
# 674 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：宝可梦……\p"
# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：改变队伍的搭配……\n"
# 676 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：战斗风格就会变。\p"
# 677 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：可是我……\n"
# 678 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：可是我……\p"
# 679 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：我永远和小南在一起！\n"
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：我永远和小枫在一起！\p"
# 681 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：我们的组合……\n"
# 682 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：我们会一遍遍给你看！$"
# 683 "data/maps/MossdeepCity_Gym/scripts.pory"

# 684 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 685 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：你和你的宝可梦……\n"
# 686 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：就像兄弟姐妹一样！$"
# 687 "data/maps/MossdeepCity_Gym/scripts.pory"

# 688 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 689 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：你可以打倒我们，\n"
# 690 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "但我们永远不会倒下！\p"
# 691 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：因为我们两个，\n"
# 692 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "永远互相扶持！$"
# 693 "data/maps/MossdeepCity_Gym/scripts.pory"

# 694 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 695 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：你又回来了……\n"
# 696 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：你又回来了……\p"
# 697 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：来和我们再战。\n"
# 698 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：来和我们再战。\p"
# 699 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：可是……\n"
# 700 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：为了对战……\p"
# 701 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：你只带了一只宝可梦！\n"
# 702 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：你只带了一只宝可梦！\p"
# 703 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小枫：回来时至少得带……\n"
# 704 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "小南：两只宝可梦。$"
# 705 "data/maps/MossdeepCity_Gym/scripts.pory"

# 706 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_Alakazam:
# 707 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "胡地：咿咿咿呜！$"
# 708 "data/maps/MossdeepCity_Gym/scripts.pory"

# 709 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_Kangaskhan:
# 710 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "袋兽：呜呜呜吼！$"
