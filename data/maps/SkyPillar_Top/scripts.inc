# 1 "data/maps/SkyPillar_Top/scripts.pory"

# 2 "data/maps/SkyPillar_Top/scripts.pory"
.set LOCALID_RAYQUAZA_SLEEPING, 1
# 3 "data/maps/SkyPillar_Top/scripts.pory"
.set LOCALID_DRAKE, 3
# 4 "data/maps/SkyPillar_Top/scripts.pory"

# 5 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_MapScripts::
# 6 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 7 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 8 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
# 9 "data/maps/SkyPillar_Top/scripts.pory"
	.byte 0
# 10 "data/maps/SkyPillar_Top/scripts.pory"

# 11 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume:
# 12 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 13 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 14 "data/maps/SkyPillar_Top/scripts.pory"

# 15 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 18 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 19 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 20 "data/maps/SkyPillar_Top/scripts.pory"

# 21 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 22 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_SetCleanLayout
# 23 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_TryShowRayquaza
# 24 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_eq VAR_FOUGHT_AND_LOST_TO_BOSS, 1, AddSleepingRayRay
# 25 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 26 "data/maps/SkyPillar_Top/scripts.pory"

# 27 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 28 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 29 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 30 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 31 "data/maps/SkyPillar_Top/scripts.pory"

# 32 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 33 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 35 "data/maps/SkyPillar_Top/scripts.pory"

# 36 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 37 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 38 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 39 "data/maps/SkyPillar_Top/scripts.pory"

# 40 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 41 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 42 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 43 "data/maps/SkyPillar_Top/scripts.pory"

# 44 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 46 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 47 "data/maps/SkyPillar_Top/scripts.pory"

# 48 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 49 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 57 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 58 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 61 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 62 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 66 "data/maps/SkyPillar_Top/scripts.pory"

# 67 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 71 "data/maps/SkyPillar_Top/scripts.pory"

# 72 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 75 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 76 "data/maps/SkyPillar_Top/scripts.pory"

# 77 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 79 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 83 "data/maps/SkyPillar_Top/scripts.pory"

# 84 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 88 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 89 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 92 "data/maps/SkyPillar_Top/scripts.pory"

# 93 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Drake::
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 1
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_VICTORY_ROAD, FALSE
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_DrakeAwakenRayquaza, MSGBOX_DEFAULT
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_FaceDown
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_DrakesPlan, MSGBOX_DEFAULT
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_DRAKE, WalkTowardsPlayer
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_DRAKE
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HACKY_DOUBLE_BATTLE
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	trainerbattle_double TRAINER_DRAKE, SkyPillar_Top_Text_DrakeIntro, SkyPillar_Top_Text_DrakeDefeat, SkyPillar_Top_Text_DrakeDefeat, SkyPillar_Top_EventScript_DrakeContinued
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 111 "data/maps/SkyPillar_Top/scripts.pory"

# 112 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DrakeContinued::
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HACKY_DOUBLE_BATTLE
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 2
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	addobject LOCALID_RAYQUAZA_SLEEPING
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_FaceUp
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_DRAKE
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_FaceDown
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_DrakeFarewell, MSGBOX_DEFAULT
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	delay 50
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	setfieldeffectargument 0, 1
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	delay 15
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_DRAKE
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 173 "data/maps/SkyPillar_Top/scripts.pory"

# 174 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 182 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 183 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 184 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 186 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 187 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 189 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 195 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 196 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 197 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 198 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 199 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 200 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 201 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 202 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 203 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 204 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 205 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 206 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 207 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 208 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 209 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 210 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 211 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 212 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 213 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 214 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 215 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 216 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 217 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 218 "data/maps/SkyPillar_Top/scripts.pory"

# 219 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 220 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 221 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 222 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 223 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 224 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 225 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 226 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 227 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 228 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 229 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 230 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 231 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 232 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 233 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 234 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 235 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 236 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 237 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 238 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 239 "data/maps/SkyPillar_Top/scripts.pory"

# 240 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 241 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 242 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 243 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 244 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 245 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 246 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 247 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 248 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 249 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 250 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 251 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 252 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 253 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 254 "data/maps/SkyPillar_Top/scripts.pory"

# 255 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 256 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 257 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 258 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 259 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 260 "data/maps/SkyPillar_Top/scripts.pory"

# 261 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 262 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 263 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 264 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 265 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 266 "data/maps/SkyPillar_Top/scripts.pory"

# 267 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_DrakeAwakenRayquaza:
# 268 "data/maps/SkyPillar_Top/scripts.pory"
	.string "烈空坐……\p"
# 269 "data/maps/SkyPillar_Top/scripts.pory"
	.string "最强的龙属性，天空的\n"
# 270 "data/maps/SkyPillar_Top/scripts.pory"
	.string "霸主……\p"
# 271 "data/maps/SkyPillar_Top/scripts.pory"
	.string "马克西和阿库亚那两个\n"
# 272 "data/maps/SkyPillar_Top/scripts.pory"
	.string "蠢货把世界搅成了\l"
# 273 "data/maps/SkyPillar_Top/scripts.pory"
	.string "一团乱，而只有你，\l"
# 274 "data/maps/SkyPillar_Top/scripts.pory"
	.string "烈空坐，能阻止\l"
# 275 "data/maps/SkyPillar_Top/scripts.pory"
	.string "固拉多和盖欧卡……\p"
# 276 "data/maps/SkyPillar_Top/scripts.pory"
	.string "所以，要是我在这里\n"
# 277 "data/maps/SkyPillar_Top/scripts.pory"
	.string "抓住你，这场混乱\l"
# 278 "data/maps/SkyPillar_Top/scripts.pory"
	.string "就永远停不下来！\l"
# 279 "data/maps/SkyPillar_Top/scripts.pory"
	.string "大师球，去吧！$"
# 280 "data/maps/SkyPillar_Top/scripts.pory"

# 281 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_DrakesPlan:
# 282 "data/maps/SkyPillar_Top/scripts.pory"
	.string "对不起，{PLAYER}。这就是我\n"
# 283 "data/maps/SkyPillar_Top/scripts.pory"
	.string "一直以来追求的东西。\p"
# 284 "data/maps/SkyPillar_Top/scripts.pory"
	.string "这些日子，我一直在暗处\n"
# 285 "data/maps/SkyPillar_Top/scripts.pory"
	.string "协助水舰队和\l"
# 286 "data/maps/SkyPillar_Top/scripts.pory"
	.string "熔岩队，希望他们\l"
# 287 "data/maps/SkyPillar_Top/scripts.pory"
	.string "的愚蠢能把这场\l"
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	.string "混乱引到世界上。\p"
# 289 "data/maps/SkyPillar_Top/scripts.pory"
	.string "你干得很出色，打乱了\n"
# 290 "data/maps/SkyPillar_Top/scripts.pory"
	.string "他们，挫败了他们\l"
# 291 "data/maps/SkyPillar_Top/scripts.pory"
	.string "所有的计划，\l"
# 292 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{PLAYER}……\p"
# 293 "data/maps/SkyPillar_Top/scripts.pory"
	.string "很不幸，这一切\n"
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	.string "都是我计划的一部分。$"
# 295 "data/maps/SkyPillar_Top/scripts.pory"
	.string "一直追求的东西。\p" 
# 296 "data/maps/SkyPillar_Top/scripts.pory"
	.string "一直以来，我都在暗中\n"
# 297 "data/maps/SkyPillar_Top/scripts.pory"
	.string "同时协助水舰队和熔岩队，\l"
# 298 "data/maps/SkyPillar_Top/scripts.pory"
	.string "指望他们的愚蠢能给\l"
# 299 "data/maps/SkyPillar_Top/scripts.pory"
	.string "这个世界带来混乱。\p"
# 300 "data/maps/SkyPillar_Top/scripts.pory"
	.string "你把他们的计划\n"
# 301 "data/maps/SkyPillar_Top/scripts.pory"
	.string "破坏、挫败得非常好，\l"
# 302 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{PLAYER}……\p"
# 303 "data/maps/SkyPillar_Top/scripts.pory"
	.string "只可惜，那全都\n"
# 304 "data/maps/SkyPillar_Top/scripts.pory"
	.string "在「我」的计划之中。$"
# 305 "data/maps/SkyPillar_Top/scripts.pory"

# 306 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_DrakeIntro:
# 307 "data/maps/SkyPillar_Top/scripts.pory"
	.string "不知从什么时候起，我\n"
# 308 "data/maps/SkyPillar_Top/scripts.pory"
	.string "开始觉得这世界的秩序\l"
# 309 "data/maps/SkyPillar_Top/scripts.pory"
	.string "让人喘不过气。\p"
# 310 "data/maps/SkyPillar_Top/scripts.pory"
	.string "也许是因为我在四天王\n"
# 311 "data/maps/SkyPillar_Top/scripts.pory"
	.string "待了太久，看着无数\l"
# 312 "data/maps/SkyPillar_Top/scripts.pory"
	.string "训练家带着同样的野心\l"
# 313 "data/maps/SkyPillar_Top/scripts.pory"
	.string "来了又走，犯着同样的\l"
# 314 "data/maps/SkyPillar_Top/scripts.pory"
	.string "失败……\p"
# 315 "data/maps/SkyPillar_Top/scripts.pory"
	.string "这些经历让我质疑\n"
# 316 "data/maps/SkyPillar_Top/scripts.pory"
	.string "世界的运作方式，\l"
# 317 "data/maps/SkyPillar_Top/scripts.pory"
	.string "怀疑我们作为训练家\l"
# 318 "data/maps/SkyPillar_Top/scripts.pory"
	.string "给自己定的目标，\l"
# 319 "data/maps/SkyPillar_Top/scripts.pory"
	.string "最后得出结论：\l"
# 320 "data/maps/SkyPillar_Top/scripts.pory"
	.string "我们最需要的是纯粹\l"
# 321 "data/maps/SkyPillar_Top/scripts.pory"
	.string "的混乱，把所有平衡\l"
# 322 "data/maps/SkyPillar_Top/scripts.pory"
	.string "都掀翻！\p"
# 323 "data/maps/SkyPillar_Top/scripts.pory"
	.string "这些经历也让我看出，\n"
# 324 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{PLAYER}，你不是普通\l"
# 325 "data/maps/SkyPillar_Top/scripts.pory"
	.string "的训练家，我试着\l"
# 326 "data/maps/SkyPillar_Top/scripts.pory"
	.string "探过你对这世界秩序\l"
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	.string "的看法。\p"
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	.string "可很快我就看出，你\n"
# 329 "data/maps/SkyPillar_Top/scripts.pory"
	.string "并不认同我对未来的\l"
# 330 "data/maps/SkyPillar_Top/scripts.pory"
	.string "构想——一个被更多\l"
# 331 "data/maps/SkyPillar_Top/scripts.pory"
	.string "混乱掀翻的未来！\p"
# 332 "data/maps/SkyPillar_Top/scripts.pory"
	.string "看来现在只有你能\n"
# 333 "data/maps/SkyPillar_Top/scripts.pory"
	.string "阻止我带着烈空坐\l"
# 334 "data/maps/SkyPillar_Top/scripts.pory"
	.string "离开这里，那可是会\l"
# 335 "data/maps/SkyPillar_Top/scripts.pory"
	.string "让固拉多和盖欧卡\l"
# 336 "data/maps/SkyPillar_Top/scripts.pory"
	.string "把混乱倾泻到\l"
# 337 "data/maps/SkyPillar_Top/scripts.pory"
	.string "全世界。\p"
# 338 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{PLAYER}，让我们看看，\n"
# 339 "data/maps/SkyPillar_Top/scripts.pory"
	.string "你是不是真的和那些\l"
# 340 "data/maps/SkyPillar_Top/scripts.pory"
	.string "被世界秩序压垮的\l"
# 341 "data/maps/SkyPillar_Top/scripts.pory"
	.string "训练家不一样！$"
# 342 "data/maps/SkyPillar_Top/scripts.pory"

# 343 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_DrakeDefeat:
# 344 "data/maps/SkyPillar_Top/scripts.pory"
	.string "真不敢相信……就算有\n"
# 345 "data/maps/SkyPillar_Top/scripts.pory"
	.string "超级烈空坐，你也能\l"
# 346 "data/maps/SkyPillar_Top/scripts.pory"
	.string "打赢我。\p"
# 347 "data/maps/SkyPillar_Top/scripts.pory"
	.string "看来你的实力是我\n"
# 348 "data/maps/SkyPillar_Top/scripts.pory"
	.string "算漏的那一个因素……$"
# 349 "data/maps/SkyPillar_Top/scripts.pory"

# 350 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_DrakeFarewell:
# 351 "data/maps/SkyPillar_Top/scripts.pory"
	.string "烈空坐走了……\p"
# 352 "data/maps/SkyPillar_Top/scripts.pory"
	.string "它一定没把我当成\n"
# 353 "data/maps/SkyPillar_Top/scripts.pory"
	.string "值得的训练家，也许\l"
# 354 "data/maps/SkyPillar_Top/scripts.pory"
	.string "它是对的……\p"
# 355 "data/maps/SkyPillar_Top/scripts.pory"
	.string "你打败了我，烈空坐\n"
# 356 "data/maps/SkyPillar_Top/scripts.pory"
	.string "也逃走了，大概去\l"
# 357 "data/maps/SkyPillar_Top/scripts.pory"
	.string "阻止固拉多和盖欧卡\l"
# 358 "data/maps/SkyPillar_Top/scripts.pory"
	.string "的战斗、恢复秩序……\p"
# 359 "data/maps/SkyPillar_Top/scripts.pory"
	.string "真浪费。那份秩序的\n"
# 360 "data/maps/SkyPillar_Top/scripts.pory"
	.string "瓦解本来触手可及……\p"
# 361 "data/maps/SkyPillar_Top/scripts.pory"
	.string "我想我再也没脸去\n"
# 362 "data/maps/SkyPillar_Top/scripts.pory"
	.string "四天王了，反正\l"
# 363 "data/maps/SkyPillar_Top/scripts.pory"
	.string "我也不想去。\p"
# 364 "data/maps/SkyPillar_Top/scripts.pory"
	.string "我来天空之柱时，就\n"
# 365 "data/maps/SkyPillar_Top/scripts.pory"
	.string "决定抛弃这世界的\l"
# 366 "data/maps/SkyPillar_Top/scripts.pory"
	.string "秩序，这个决定我\l"
# 367 "data/maps/SkyPillar_Top/scripts.pory"
	.string "不会改。\p"
# 368 "data/maps/SkyPillar_Top/scripts.pory"
	.string "也就是说，这是告别了，\n"
# 369 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{PLAYER}，好好享受\l"
# 370 "data/maps/SkyPillar_Top/scripts.pory"
	.string "维持这僵硬世界\l"
# 371 "data/maps/SkyPillar_Top/scripts.pory"
	.string "秩序的奖赏吧。$"
# 372 "data/maps/SkyPillar_Top/scripts.pory"

# 373 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 374 "data/maps/SkyPillar_Top/scripts.pory"
	.string "觉醒的烈空坐飞走了……$"

WalkTowardsPlayer::
# 379 "data/maps/SkyPillar_Top/scripts.pory"
	walk_down
# 380 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
	return


AddSleepingRayRay::
# 384 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA
# 385 "data/maps/SkyPillar_Top/scripts.pory"
	addobject LOCALID_RAYQUAZA_SLEEPING
	return

