# 1 "data/maps/SootopolisCity/scripts.pory"

# 2 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_EXPERT, 1
# 3 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WOMAN_2, 2
# 4 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_KIRI, 3
# 5 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_NINJA_BOY, 4
# 6 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BOY_1, 5
# 7 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_STEVEN, 7
# 8 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WOMAN_1, 8
# 9 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_GROUDON, 9
# 10 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_KYOGRE, 10
# 11 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_RAYQUAZA, 11
# 12 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_MANIAC, 12
# 13 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_GIRL, 13
# 14 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BLACK_BELT, 14
# 15 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BOY_2, 15
# 16 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_MAXIE, 16
# 17 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_ARCHIE, 17
# 18 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WALLACE, 18
# 19 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_DAWN, 19
# 20 "data/maps/SootopolisCity/scripts.pory"

# 21 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_MapScripts::
# 22 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_OnLoad
# 23 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_OnTransition
# 24 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_OnResume
# 25 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_OnFrame
# 26 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_OnWarp
# 27 "data/maps/SootopolisCity/scripts.pory"
	.byte 0
# 28 "data/maps/SootopolisCity/scripts.pory"

# 29 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad:
# 30 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockGymDoor
# 31 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_EventScript_LegendariesNotArrived
# 32 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockHouseDoors
# 33 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockMysteryHouseDoor
# 34 "data/maps/SootopolisCity/scripts.pory"
	end
# 35 "data/maps/SootopolisCity/scripts.pory"

# 36 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesNotArrived::
# 37 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 38 "data/maps/SootopolisCity/scripts.pory"
	end
# 39 "data/maps/SootopolisCity/scripts.pory"

# 40 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockHouseDoors::
# 41 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 42 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 43 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 44 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 45 "data/maps/SootopolisCity/scripts.pory"
	return
# 46 "data/maps/SootopolisCity/scripts.pory"

# 47 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockMysteryHouseDoor::
# 48 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 49 "data/maps/SootopolisCity/scripts.pory"
	return
# 50 "data/maps/SootopolisCity/scripts.pory"

# 51 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockGymDoor::
# 52 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
# 53 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 54 "data/maps/SootopolisCity/scripts.pory"
	return
# 55 "data/maps/SootopolisCity/scripts.pory"

# 56 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition:
# 57 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 58 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 59 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 60 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 61 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 62 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetBattleSpectators
# 63 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetBattleSpectators
# 64 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetBattleSpectators
# 65 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetBattleSpectators
# 66 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetBattleSpectators
# 67 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 68 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 69 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
# 70 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetOutsideGymObjPos
# 71 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetExpertBlockCaveEntrance
# 72 "data/maps/SootopolisCity/scripts.pory"
	end
# 73 "data/maps/SootopolisCity/scripts.pory"

# 74 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_HideMapNamePopup::
# 75 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 76 "data/maps/SootopolisCity/scripts.pory"
	return
# 77 "data/maps/SootopolisCity/scripts.pory"

# 78 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetBattleSpectators::
# 79 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 80 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_BOY_1, 45, 32
# 81 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_NINJA_BOY, 48, 41
# 82 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WOMAN_1, 45, 43
# 83 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 84 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 85 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 86 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
# 87 "data/maps/SootopolisCity/scripts.pory"
	return
# 88 "data/maps/SootopolisCity/scripts.pory"

# 89 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout::
# 90 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalLayout
# 91 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalLayout
# 92 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 93 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetLegendariesLayout
# 94 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetLegendariesLayout
# 95 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetLegendariesLayout
# 96 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 97 "data/maps/SootopolisCity/scripts.pory"
	return
# 98 "data/maps/SootopolisCity/scripts.pory"

# 99 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalLayout::
# 100 "data/maps/SootopolisCity/scripts.pory"
	return
# 101 "data/maps/SootopolisCity/scripts.pory"

# 102 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLegendariesLayout::
# 103 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
# 104 "data/maps/SootopolisCity/scripts.pory"
	return
# 105 "data/maps/SootopolisCity/scripts.pory"

# 106 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather::
# 107 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalWeather
# 108 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalWeather
# 109 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 110 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 111 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, Common_EventScript_SetAbnormalWeather
# 112 "data/maps/SootopolisCity/scripts.pory"
	return
# 113 "data/maps/SootopolisCity/scripts.pory"

# 114 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalWeather::
# 115 "data/maps/SootopolisCity/scripts.pory"
	return
# 116 "data/maps/SootopolisCity/scripts.pory"

# 117 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetDownpour::
# 118 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 119 "data/maps/SootopolisCity/scripts.pory"
	return
# 120 "data/maps/SootopolisCity/scripts.pory"

# 121 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 122 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 123 "data/maps/SootopolisCity/scripts.pory"
	return
# 124 "data/maps/SootopolisCity/scripts.pory"

# 125 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 126 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 127 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 128 "data/maps/SootopolisCity/scripts.pory"
	return
# 129 "data/maps/SootopolisCity/scripts.pory"

# 130 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 131 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 132 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 18
# 133 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 134 "data/maps/SootopolisCity/scripts.pory"
	end
# 135 "data/maps/SootopolisCity/scripts.pory"

# 136 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos::
# 137 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 138 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 29, 33
# 139 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_DAWN, 28, 33
# 140 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 33, 35
# 141 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 34, 35
# 142 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 0, SootopolisCity_EventScript_SetWallaceMiddle
# 143 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 1, SootopolisCity_EventScript_SetWallaceRight
# 144 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 2, SootopolisCity_EventScript_SetWallaceLeft
# 145 "data/maps/SootopolisCity/scripts.pory"
	return
# 146 "data/maps/SootopolisCity/scripts.pory"

# 147 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceMiddle::
# 148 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 33
# 149 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 150 "data/maps/SootopolisCity/scripts.pory"
	return
# 151 "data/maps/SootopolisCity/scripts.pory"

# 152 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceRight::
# 153 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 32, 33
# 154 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 155 "data/maps/SootopolisCity/scripts.pory"
	return
# 156 "data/maps/SootopolisCity/scripts.pory"

# 157 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceLeft::
# 158 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 30, 33
# 159 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 160 "data/maps/SootopolisCity/scripts.pory"
	return
# 161 "data/maps/SootopolisCity/scripts.pory"

# 162 "data/maps/SootopolisCity/scripts.pory"

# 163 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 164 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 165 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 166 "data/maps/SootopolisCity/scripts.pory"

# 167 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 168 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
# 169 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 2, SootopolisCity_EventScript_PlayerFaceLegendaries2
# 170 "data/maps/SootopolisCity/scripts.pory"
	end
# 171 "data/maps/SootopolisCity/scripts.pory"

# 172 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 173 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 174 "data/maps/SootopolisCity/scripts.pory"
	return
# 175 "data/maps/SootopolisCity/scripts.pory"

# 176 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 177 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 178 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 179 "data/maps/SootopolisCity/scripts.pory"
	return
# 180 "data/maps/SootopolisCity/scripts.pory"

# 181 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume:
# 182 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 183 "data/maps/SootopolisCity/scripts.pory"
	end
# 184 "data/maps/SootopolisCity/scripts.pory"

# 185 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnFrame:
# 186 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 187 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
# 188 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_START_POST_RAYQUAZA_SCENE, 1, SootopolisCity_EventScript_PostRayquazaScene
# 189 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 190 "data/maps/SootopolisCity/scripts.pory"

# 191 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 192 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 193 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 194 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 195 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 196 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 197 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 198 "data/maps/SootopolisCity/scripts.pory"
	end
# 199 "data/maps/SootopolisCity/scripts.pory"

# 200 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 201 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 202 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 203 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 204 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 206 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 207 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 208 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 209 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 210 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 211 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 212 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 213 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 214 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 215 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 216 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 217 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 218 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 219 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 220 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 221 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 222 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 223 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 224 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 225 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 226 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 227 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 228 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 229 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 230 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 231 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 232 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 233 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 234 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 235 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 236 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 237 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 238 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 239 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 240 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 241 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 242 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 243 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 244 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 245 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 246 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 247 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 248 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 249 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 251 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 252 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 253 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 254 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 255 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 256 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 257 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 258 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 259 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 260 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 261 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 262 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 263 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 264 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 265 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 266 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 267 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 268 "data/maps/SootopolisCity/scripts.pory"
	end
# 269 "data/maps/SootopolisCity/scripts.pory"

# 270 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
# 271 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 272 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 273 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 274 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 275 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 276 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 277 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 278 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 279 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 280 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 281 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 282 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 283 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 284 "data/maps/SootopolisCity/scripts.pory"

# 285 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
# 286 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 287 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 288 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 289 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 290 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 291 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 292 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 293 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 294 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 295 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 296 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 297 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 298 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 299 "data/maps/SootopolisCity/scripts.pory"

# 300 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 301 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 302 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 303 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 304 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 306 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 307 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 308 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 309 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 310 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 311 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 312 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 313 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 314 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 315 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 316 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 317 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 318 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 319 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 320 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 321 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 323 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 324 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 325 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 326 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 327 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 328 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 329 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 330 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 332 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 333 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 334 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 335 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 336 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 337 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 338 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 339 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 340 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 341 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 342 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 343 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 344 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 346 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 347 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 348 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 349 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 350 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 351 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 352 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 353 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 354 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 355 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 356 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 357 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 358 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 359 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 360 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 361 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 362 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 363 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 364 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 365 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 366 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 367 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 368 "data/maps/SootopolisCity/scripts.pory"
	end
# 369 "data/maps/SootopolisCity/scripts.pory"

# 370 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 371 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 372 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 373 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 374 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 375 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 376 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 377 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 378 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 379 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 380 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 381 "data/maps/SootopolisCity/scripts.pory"

# 382 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
# 383 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 384 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 385 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 386 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 387 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 388 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 389 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 390 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 391 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 392 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 393 "data/maps/SootopolisCity/scripts.pory"

# 394 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 395 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 396 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 397 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 398 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 399 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 400 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 401 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 402 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 403 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 404 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 405 "data/maps/SootopolisCity/scripts.pory"

# 406 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
# 407 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 408 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 409 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 410 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 411 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 412 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 413 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 414 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 415 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 416 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 417 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 418 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 419 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 420 "data/maps/SootopolisCity/scripts.pory"

# 421 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 422 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 423 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 424 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 425 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 426 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 427 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 428 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 429 "data/maps/SootopolisCity/scripts.pory"

# 430 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
# 431 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 432 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 433 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 434 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 435 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 436 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 437 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 438 "data/maps/SootopolisCity/scripts.pory"

# 439 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 440 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 441 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 442 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 443 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 444 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 445 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 446 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 447 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 448 "data/maps/SootopolisCity/scripts.pory"

# 449 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 450 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 451 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 452 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 453 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 454 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 455 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 456 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 457 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 458 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 459 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 460 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 461 "data/maps/SootopolisCity/scripts.pory"

# 462 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 463 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 464 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 465 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 466 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 467 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 468 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 469 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 470 "data/maps/SootopolisCity/scripts.pory"

# 471 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
# 472 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 473 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 474 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 475 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 476 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 477 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 478 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 479 "data/maps/SootopolisCity/scripts.pory"

# 480 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 481 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 482 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 483 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 484 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 485 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 486 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 487 "data/maps/SootopolisCity/scripts.pory"
	end
# 488 "data/maps/SootopolisCity/scripts.pory"

# 489 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 490 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 491 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 492 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 493 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 494 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 495 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 496 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 497 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 498 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 499 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 500 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 501 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 502 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 503 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 504 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 505 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 506 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 507 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 508 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 509 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 510 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 511 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 512 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 513 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 514 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 515 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 516 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 517 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 518 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 519 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 520 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 521 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 522 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 523 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 524 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 525 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 526 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 527 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 528 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 529 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 531 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 532 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 533 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 534 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 535 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 536 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 537 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 538 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_START_POST_RAYQUAZA_SCENE, 1
# 539 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 31, 35
# 540 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 541 "data/maps/SootopolisCity/scripts.pory"
	end
# 542 "data/maps/SootopolisCity/scripts.pory"

# 543 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 544 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 545 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 546 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 547 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 549 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 550 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 551 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 552 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 553 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 554 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 555 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 556 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 557 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 558 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 559 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 560 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 561 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 562 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 563 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 564 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 565 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 566 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 567 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 568 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 569 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 570 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 571 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 572 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 573 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 574 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 575 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 576 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 577 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 578 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 579 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 580 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 581 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 582 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 583 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 584 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 585 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 586 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 587 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
# 588 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 589 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_START_POST_RAYQUAZA_SCENE, 1
# 590 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 591 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 592 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 31, 35
# 593 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 594 "data/maps/SootopolisCity/scripts.pory"
	end
# 595 "data/maps/SootopolisCity/scripts.pory"

# 596 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PostRayquazaScene::
# 597 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 598 "data/maps/SootopolisCity/scripts.pory"
	delay 30
# 599 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 600 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 601 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 602 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 603 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 604 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WelcomeBack, MSGBOX_DEFAULT
# 605 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 606 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PlayerAnswers, MSGBOX_DEFAULT
# 607 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 608 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 609 "data/maps/SootopolisCity/scripts.pory"
	playse SE_PIN
# 610 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 611 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 612 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 613 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 614 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_ExclamationMark
# 615 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 616 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 617 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterRight
# 618 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 619 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 620 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 621 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 623 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterDown
# 624 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 625 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 626 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
# 627 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 628 "data/maps/SootopolisCity/scripts.pory"
	delay 15
# 629 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WallaceCantBelieve, MSGBOX_DEFAULT
# 630 "data/maps/SootopolisCity/scripts.pory"
	message SootopolisCity_Text_YouAreAHero
# 631 "data/maps/SootopolisCity/scripts.pory"
	waitmessage
# 632 "data/maps/SootopolisCity/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 633 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_TextRambled, MSGBOX_DEFAULT
# 634 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 635 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_START_POST_RAYQUAZA_SCENE, 2
# 636 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 637 "data/maps/SootopolisCity/scripts.pory"
	delay 30
# 638 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 639 "data/maps/SootopolisCity/scripts.pory"
	end
# 640 "data/maps/SootopolisCity/scripts.pory"

# 641 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 642 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 643 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 644 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 645 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 646 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 647 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 648 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 649 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 650 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 651 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 652 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 653 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 654 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 655 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 656 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 657 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 658 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 659 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 660 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 661 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 662 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 663 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 664 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 665 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 666 "data/maps/SootopolisCity/scripts.pory"
	return
# 667 "data/maps/SootopolisCity/scripts.pory"

# 668 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 669 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 670 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 671 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 672 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 673 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 674 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 675 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 676 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 677 "data/maps/SootopolisCity/scripts.pory"

# 678 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 679 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 680 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 681 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 682 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 683 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 684 "data/maps/SootopolisCity/scripts.pory"

# 685 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 686 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 687 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 688 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 689 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 690 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 691 "data/maps/SootopolisCity/scripts.pory"

# 692 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 693 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 694 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 695 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 696 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 697 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 698 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 699 "data/maps/SootopolisCity/scripts.pory"

# 700 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 701 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 702 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 703 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 704 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 705 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 706 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 707 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 708 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 709 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 710 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 711 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 712 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 713 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 714 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 715 "data/maps/SootopolisCity/scripts.pory"

# 716 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 717 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 718 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 719 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 720 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 721 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 722 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 723 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 724 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 725 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 726 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 727 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 728 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 729 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 730 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 731 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 732 "data/maps/SootopolisCity/scripts.pory"

# 733 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 734 "data/maps/SootopolisCity/scripts.pory"
	lock
# 735 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 736 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, SootopolisCity_EventScript_ExpertPostChampion
# 737 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ExpertPostLegendaries
# 738 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
# 739 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 740 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 741 "data/maps/SootopolisCity/scripts.pory"
	release
# 742 "data/maps/SootopolisCity/scripts.pory"
	end
# 743 "data/maps/SootopolisCity/scripts.pory"

# 744 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 745 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 746 "data/maps/SootopolisCity/scripts.pory"
	release
# 747 "data/maps/SootopolisCity/scripts.pory"
	end
# 748 "data/maps/SootopolisCity/scripts.pory"

# 749 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 750 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 751 "data/maps/SootopolisCity/scripts.pory"
	release
# 752 "data/maps/SootopolisCity/scripts.pory"
	end
# 753 "data/maps/SootopolisCity/scripts.pory"

# 754 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostChampion::
# 755 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginOpen, MSGBOX_DEFAULT
# 756 "data/maps/SootopolisCity/scripts.pory"
	release
# 757 "data/maps/SootopolisCity/scripts.pory"
	end
# 758 "data/maps/SootopolisCity/scripts.pory"

# 759 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 760 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 761 "data/maps/SootopolisCity/scripts.pory"
	release
# 762 "data/maps/SootopolisCity/scripts.pory"
	end
# 763 "data/maps/SootopolisCity/scripts.pory"

# 764 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 765 "data/maps/SootopolisCity/scripts.pory"
	lock
# 766 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 767 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 768 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_KiriGiveBerry
# 769 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
# 770 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 771 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 772 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 773 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 774 "data/maps/SootopolisCity/scripts.pory"
	release
# 775 "data/maps/SootopolisCity/scripts.pory"
	end
# 776 "data/maps/SootopolisCity/scripts.pory"

# 777 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 778 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 779 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 780 "data/maps/SootopolisCity/scripts.pory"
	release
# 781 "data/maps/SootopolisCity/scripts.pory"
	end
# 782 "data/maps/SootopolisCity/scripts.pory"

# 783 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 784 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 785 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 786 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 787 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 788 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 789 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 790 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 791 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 792 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 793 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 794 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 795 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 796 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 797 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 798 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 799 "data/maps/SootopolisCity/scripts.pory"
	end
# 800 "data/maps/SootopolisCity/scripts.pory"

# 801 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 802 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 803 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 804 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 805 "data/maps/SootopolisCity/scripts.pory"
	release
# 806 "data/maps/SootopolisCity/scripts.pory"
	end
# 807 "data/maps/SootopolisCity/scripts.pory"

# 808 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 809 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 810 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 811 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 812 "data/maps/SootopolisCity/scripts.pory"
	release
# 813 "data/maps/SootopolisCity/scripts.pory"
	end
# 814 "data/maps/SootopolisCity/scripts.pory"

# 815 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 816 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 817 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 818 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 819 "data/maps/SootopolisCity/scripts.pory"
	release
# 820 "data/maps/SootopolisCity/scripts.pory"
	end
# 821 "data/maps/SootopolisCity/scripts.pory"

# 822 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 823 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 824 "data/maps/SootopolisCity/scripts.pory"
	release
# 825 "data/maps/SootopolisCity/scripts.pory"
	end
# 826 "data/maps/SootopolisCity/scripts.pory"

# 827 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 828 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 829 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FacePlayer
# 830 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 831 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
# 832 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 833 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 834 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FaceOriginalDirection
# 835 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 836 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 837 "data/maps/SootopolisCity/scripts.pory"
	end
# 838 "data/maps/SootopolisCity/scripts.pory"

# 839 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 840 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 841 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 842 "data/maps/SootopolisCity/scripts.pory"
	end
# 843 "data/maps/SootopolisCity/scripts.pory"

# 844 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 845 "data/maps/SootopolisCity/scripts.pory"
	lock
# 846 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 847 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ManPostLegendaries
# 848 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 849 "data/maps/SootopolisCity/scripts.pory"
	release
# 850 "data/maps/SootopolisCity/scripts.pory"
	end
# 851 "data/maps/SootopolisCity/scripts.pory"

# 852 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 853 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 854 "data/maps/SootopolisCity/scripts.pory"
	release
# 855 "data/maps/SootopolisCity/scripts.pory"
	end
# 856 "data/maps/SootopolisCity/scripts.pory"

# 857 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 858 "data/maps/SootopolisCity/scripts.pory"
	lock
# 859 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 860 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman1PostLegendaries
# 861 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
# 862 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 863 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 864 "data/maps/SootopolisCity/scripts.pory"
	release
# 865 "data/maps/SootopolisCity/scripts.pory"
	end
# 866 "data/maps/SootopolisCity/scripts.pory"

# 867 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 868 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 869 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 870 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 871 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 872 "data/maps/SootopolisCity/scripts.pory"
	release
# 873 "data/maps/SootopolisCity/scripts.pory"
	end
# 874 "data/maps/SootopolisCity/scripts.pory"

# 875 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 876 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 877 "data/maps/SootopolisCity/scripts.pory"
	release
# 878 "data/maps/SootopolisCity/scripts.pory"
	end
# 879 "data/maps/SootopolisCity/scripts.pory"

# 880 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 881 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 882 "data/maps/SootopolisCity/scripts.pory"
	release
# 883 "data/maps/SootopolisCity/scripts.pory"
	end
# 884 "data/maps/SootopolisCity/scripts.pory"

# 885 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 886 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 887 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FacePlayer
# 888 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 889 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
# 890 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_NinjaBoyNormal
# 891 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 892 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 893 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 894 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 895 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 896 "data/maps/SootopolisCity/scripts.pory"
	release
# 897 "data/maps/SootopolisCity/scripts.pory"
	end
# 898 "data/maps/SootopolisCity/scripts.pory"

# 899 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 900 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 901 "data/maps/SootopolisCity/scripts.pory"
	release
# 902 "data/maps/SootopolisCity/scripts.pory"
	end
# 903 "data/maps/SootopolisCity/scripts.pory"

# 904 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 905 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 906 "data/maps/SootopolisCity/scripts.pory"
	release
# 907 "data/maps/SootopolisCity/scripts.pory"
	end
# 908 "data/maps/SootopolisCity/scripts.pory"

# 909 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 910 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 911 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FacePlayer
# 912 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 913 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
# 914 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 915 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy1Normal
# 916 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 917 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 918 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 919 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FaceOriginalDirection
# 920 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 921 "data/maps/SootopolisCity/scripts.pory"
	release
# 922 "data/maps/SootopolisCity/scripts.pory"
	end
# 923 "data/maps/SootopolisCity/scripts.pory"

# 924 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 925 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 926 "data/maps/SootopolisCity/scripts.pory"
	release
# 927 "data/maps/SootopolisCity/scripts.pory"
	end
# 928 "data/maps/SootopolisCity/scripts.pory"

# 929 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 930 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 931 "data/maps/SootopolisCity/scripts.pory"
	release
# 932 "data/maps/SootopolisCity/scripts.pory"
	end
# 933 "data/maps/SootopolisCity/scripts.pory"

# 934 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 935 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 936 "data/maps/SootopolisCity/scripts.pory"
	release
# 937 "data/maps/SootopolisCity/scripts.pory"
	end
# 938 "data/maps/SootopolisCity/scripts.pory"

# 939 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 940 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 941 "data/maps/SootopolisCity/scripts.pory"
	end
# 942 "data/maps/SootopolisCity/scripts.pory"

# 943 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 944 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 945 "data/maps/SootopolisCity/scripts.pory"
	end
# 946 "data/maps/SootopolisCity/scripts.pory"

# 947 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 948 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 949 "data/maps/SootopolisCity/scripts.pory"
	end
# 950 "data/maps/SootopolisCity/scripts.pory"

# 951 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven::
# 952 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 953 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
# 954 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 955 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 956 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpWallace
# 957 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedWallace
# 958 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedWallace
# 959 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
# 960 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 961 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 962 "data/maps/SootopolisCity/scripts.pory"
	end
# 963 "data/maps/SootopolisCity/scripts.pory"

# 964 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpWallace::
# 965 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 966 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 967 "data/maps/SootopolisCity/scripts.pory"
	end
# 968 "data/maps/SootopolisCity/scripts.pory"

# 969 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 970 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 971 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 972 "data/maps/SootopolisCity/scripts.pory"
	end
# 973 "data/maps/SootopolisCity/scripts.pory"

# 974 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_DawnMaxieArchieLeft::
# 975 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DawnMaxieArchieLeft, MSGBOX_DEFAULT
# 976 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 977 "data/maps/SootopolisCity/scripts.pory"
	end
# 978 "data/maps/SootopolisCity/scripts.pory"

# 979 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpedWallace::
# 980 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 981 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 982 "data/maps/SootopolisCity/scripts.pory"
	end
# 983 "data/maps/SootopolisCity/scripts.pory"

# 984 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 985 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 986 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 987 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 988 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 989 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 990 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 991 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 992 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 993 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 994 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 995 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 996 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 997 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 998 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 999 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1000 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 1001 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1002 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 1003 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 1004 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1005 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 1006 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1007 "data/maps/SootopolisCity/scripts.pory"
	end
# 1008 "data/maps/SootopolisCity/scripts.pory"

# 1009 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 1010 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 1011 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 1012 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1013 "data/maps/SootopolisCity/scripts.pory"
	return
# 1014 "data/maps/SootopolisCity/scripts.pory"

# 1015 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 1016 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 1017 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 1018 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1019 "data/maps/SootopolisCity/scripts.pory"
	return
# 1020 "data/maps/SootopolisCity/scripts.pory"

# 1021 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 1022 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1023 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1024 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1025 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1026 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1027 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1028 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1029 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1030 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1031 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1032 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1033 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1034 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1035 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1036 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1037 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1038 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1039 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1040 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1041 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1042 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1043 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1044 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1045 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1046 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1047 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1048 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1049 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1050 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1051 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1052 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1053 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1054 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1055 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1056 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1057 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1058 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1059 "data/maps/SootopolisCity/scripts.pory"

# 1060 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1061 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1062 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1063 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1064 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1065 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1066 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1067 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1068 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1069 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1070 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1071 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1072 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1073 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1074 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1075 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1076 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1077 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1078 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1079 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1080 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1081 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1082 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1083 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1084 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1085 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1086 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1087 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1088 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1089 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1090 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1091 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1092 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1093 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1094 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1095 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1096 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1097 "data/maps/SootopolisCity/scripts.pory"

# 1098 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1099 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1100 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1101 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1102 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1103 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1104 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1105 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1106 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1107 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1108 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1109 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1110 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1111 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1112 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1113 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1114 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1115 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1116 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1117 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1118 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1119 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1120 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1121 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1122 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1123 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1124 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1125 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1126 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1127 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1128 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1129 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1130 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1131 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1132 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1133 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1134 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1135 "data/maps/SootopolisCity/scripts.pory"

# 1136 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1137 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1138 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1139 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1140 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1141 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1142 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1143 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1144 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1145 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1146 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1147 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1148 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1149 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1150 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1151 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1152 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1153 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1154 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1155 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1156 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1157 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1158 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1159 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1160 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1161 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1162 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1163 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1165 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1166 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1167 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1168 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1169 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1170 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1171 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1172 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1174 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1175 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1176 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1177 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1178 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1179 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1180 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1181 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1182 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1183 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1184 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1185 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1186 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1187 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1188 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1189 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1190 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1191 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1192 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1193 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1194 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1195 "data/maps/SootopolisCity/scripts.pory"

# 1196 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1197 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1198 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1199 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1200 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1201 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1202 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1203 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1204 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1206 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1207 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1208 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1209 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1210 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1211 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1212 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1213 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1214 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1215 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1216 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1217 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1218 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1219 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1220 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1221 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1222 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1223 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1224 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1225 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1228 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1229 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1230 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1231 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1232 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1233 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1234 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1235 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1236 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1237 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1238 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1239 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1240 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1241 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1242 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1243 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1244 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1245 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1246 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1247 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1248 "data/maps/SootopolisCity/scripts.pory"

# 1249 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1250 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1251 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1252 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1253 "data/maps/SootopolisCity/scripts.pory"

# 1254 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1255 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1256 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1257 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1258 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1259 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1260 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1261 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1262 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1263 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1264 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1265 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1266 "data/maps/SootopolisCity/scripts.pory"

# 1267 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1268 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1269 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1270 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1271 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1272 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1273 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1274 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1275 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1276 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1277 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1278 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1279 "data/maps/SootopolisCity/scripts.pory"

# 1280 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1281 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1282 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1283 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1284 "data/maps/SootopolisCity/scripts.pory"

# 1285 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 1286 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1287 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FacePlayer
# 1288 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1289 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
# 1290 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1291 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1292 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FaceOriginalDirection
# 1293 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1294 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1295 "data/maps/SootopolisCity/scripts.pory"
	end
# 1296 "data/maps/SootopolisCity/scripts.pory"

# 1297 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 1298 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1299 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1300 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1301 "data/maps/SootopolisCity/scripts.pory"
	end
# 1302 "data/maps/SootopolisCity/scripts.pory"

# 1303 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Dawn::
# 1304 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1305 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_FacePlayer
# 1306 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1307 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_DawnMaxieArchieLeft
# 1308 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_DawnPostRayquaza
# 1309 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsCrazy, MSGBOX_DEFAULT
# 1310 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1311 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_FaceOriginalDirection
# 1312 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1313 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1314 "data/maps/SootopolisCity/scripts.pory"
	end
# 1315 "data/maps/SootopolisCity/scripts.pory"

# 1316 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_DawnPostRayquaza::
# 1317 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreatWork, MSGBOX_DEFAULT
# 1318 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1319 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1320 "data/maps/SootopolisCity/scripts.pory"
	end
# 1321 "data/maps/SootopolisCity/scripts.pory"

# 1322 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 1323 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1324 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
# 1325 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1326 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1327 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1328 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1329 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1330 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1331 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1332 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1333 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1334 "data/maps/SootopolisCity/scripts.pory"
	end
# 1335 "data/maps/SootopolisCity/scripts.pory"

# 1336 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 1337 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1338 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1339 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1340 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1341 "data/maps/SootopolisCity/scripts.pory"
	end
# 1342 "data/maps/SootopolisCity/scripts.pory"

# 1343 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 1344 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1345 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FacePlayer
# 1346 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1347 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
# 1348 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1349 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1350 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FaceOriginalDirection
# 1351 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1352 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1353 "data/maps/SootopolisCity/scripts.pory"
	end
# 1354 "data/maps/SootopolisCity/scripts.pory"

# 1355 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 1356 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1357 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1358 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1359 "data/maps/SootopolisCity/scripts.pory"
	end
# 1360 "data/maps/SootopolisCity/scripts.pory"

# 1361 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 1362 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1363 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FacePlayer
# 1364 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1365 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
# 1366 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1367 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1368 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FaceOriginalDirection
# 1369 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1370 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1371 "data/maps/SootopolisCity/scripts.pory"
	end
# 1372 "data/maps/SootopolisCity/scripts.pory"

# 1373 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 1374 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1375 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1376 "data/maps/SootopolisCity/scripts.pory"
	end
# 1377 "data/maps/SootopolisCity/scripts.pory"

# 1378 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 1379 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1380 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1381 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_GoToSkyPillar
# 1382 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_GoToGym
# 1383 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_GiveWaterfall
# 1384 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 1385 "data/maps/SootopolisCity/scripts.pory"
	release
# 1386 "data/maps/SootopolisCity/scripts.pory"
	end
# 1387 "data/maps/SootopolisCity/scripts.pory"

# 1388 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 1389 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 1390 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 1391 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 1392 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 1393 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1394 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_WallaceMoveFromGym
# 1395 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_EventScript_WallaceMoveFromGym
# 1396 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_WallaceMoveFromGymWest
# 1397 "data/maps/SootopolisCity/scripts.pory"
	release
# 1398 "data/maps/SootopolisCity/scripts.pory"
	end
# 1399 "data/maps/SootopolisCity/scripts.pory"

# 1400 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 1401 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 1402 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1403 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1404 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 1405 "data/maps/SootopolisCity/scripts.pory"
	return
# 1406 "data/maps/SootopolisCity/scripts.pory"

# 1407 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 1408 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 1409 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1410 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1411 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 1412 "data/maps/SootopolisCity/scripts.pory"
	return
# 1413 "data/maps/SootopolisCity/scripts.pory"

# 1414 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 1415 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1416 "data/maps/SootopolisCity/scripts.pory"
	release
# 1417 "data/maps/SootopolisCity/scripts.pory"
	end
# 1418 "data/maps/SootopolisCity/scripts.pory"

# 1419 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 1420 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 1421 "data/maps/SootopolisCity/scripts.pory"
	release
# 1422 "data/maps/SootopolisCity/scripts.pory"
	end
# 1423 "data/maps/SootopolisCity/scripts.pory"

# 1424 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 1425 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1426 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1427 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1428 "data/maps/SootopolisCity/scripts.pory"

# 1429 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1430 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1431 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1432 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1433 "data/maps/SootopolisCity/scripts.pory"

# 1434 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1435 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1436 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_MaxieRayquaza
# 1437 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1438 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1439 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1440 "data/maps/SootopolisCity/scripts.pory"
	end
# 1441 "data/maps/SootopolisCity/scripts.pory"

# 1442 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 1443 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_NPC
# 1444 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1445 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1446 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1447 "data/maps/SootopolisCity/scripts.pory"
	end
# 1448 "data/maps/SootopolisCity/scripts.pory"

# 1449 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1450 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1451 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ArchieRayquaza
# 1452 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1453 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1454 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1455 "data/maps/SootopolisCity/scripts.pory"
	end
# 1456 "data/maps/SootopolisCity/scripts.pory"

# 1457 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 1458 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_NPC
# 1459 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1460 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1461 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1462 "data/maps/SootopolisCity/scripts.pory"
	end
# 1463 "data/maps/SootopolisCity/scripts.pory"

# 1464 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 1465 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1466 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1467 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1468 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1469 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1470 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 1471 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1472 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1473 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1474 "data/maps/SootopolisCity/scripts.pory"
	end
# 1475 "data/maps/SootopolisCity/scripts.pory"

# 1476 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1477 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1478 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1479 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1480 "data/maps/SootopolisCity/scripts.pory"

# 1481 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1482 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1483 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1484 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1485 "data/maps/SootopolisCity/scripts.pory"

# 1486 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1487 "data/maps/SootopolisCity/scripts.pory"
	.string "琉璃市宝可梦道馆\n"
# 1488 "data/maps/SootopolisCity/scripts.pory"
	.string "馆主：阿丹\p"
# 1489 "data/maps/SootopolisCity/scripts.pory"
	.string "“拥有纯水之美的\n"
# 1490 "data/maps/SootopolisCity/scripts.pory"
	.string "道馆馆主！”$"
# 1491 "data/maps/SootopolisCity/scripts.pory"

# 1492 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1493 "data/maps/SootopolisCity/scripts.pory"
	.string "琉璃市\p"
# 1494 "data/maps/SootopolisCity/scripts.pory"
	.string "“历史沉睡的\n"
# 1495 "data/maps/SootopolisCity/scripts.pory"
	.string "神秘之城。”$"
# 1496 "data/maps/SootopolisCity/scripts.pory"

# 1497 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1498 "data/maps/SootopolisCity/scripts.pory"
	.string "门关着。$"
# 1499 "data/maps/SootopolisCity/scripts.pory"

# 1500 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1501 "data/maps/SootopolisCity/scripts.pory"
	.string "在海里潜水。天天上下\n"
# 1502 "data/maps/SootopolisCity/scripts.pory"
	.string "爬楼梯……\p"
# 1503 "data/maps/SootopolisCity/scripts.pory"
	.string "住在这个镇上的人，\n"
# 1504 "data/maps/SootopolisCity/scripts.pory"
	.string "身体都会变壮。$"
# 1505 "data/maps/SootopolisCity/scripts.pory"

# 1506 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1507 "data/maps/SootopolisCity/scripts.pory"
	.string "这些巨大的宝可梦突然\n"
# 1508 "data/maps/SootopolisCity/scripts.pory"
	.string "出现在城市正中央！\p"
# 1509 "data/maps/SootopolisCity/scripts.pory"
	.string "而且我从没见过\n"
# 1510 "data/maps/SootopolisCity/scripts.pory"
	.string "它们！\p"
# 1511 "data/maps/SootopolisCity/scripts.pory"
	.string "它们为什么那样\n"
# 1512 "data/maps/SootopolisCity/scripts.pory"
	.string "互相撞来撞去？\p"
# 1513 "data/maps/SootopolisCity/scripts.pory"
	.string "为什么不能好好\n"
# 1514 "data/maps/SootopolisCity/scripts.pory"
	.string "做朋友呢，那些宝可梦？$"
# 1515 "data/maps/SootopolisCity/scripts.pory"

# 1516 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1517 "data/maps/SootopolisCity/scripts.pory"
	.string "什么？什么？什么？\n"
# 1518 "data/maps/SootopolisCity/scripts.pory"
	.string "那只绿色的宝可梦是什么？！$"
# 1519 "data/maps/SootopolisCity/scripts.pory"

# 1520 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1521 "data/maps/SootopolisCity/scripts.pory"
	.string "固拉多和盖欧卡……\n"
# 1522 "data/maps/SootopolisCity/scripts.pory"
	.string "它们去哪儿了？\p"
# 1523 "data/maps/SootopolisCity/scripts.pory"
	.string "它们会不会在别的地方\n"
# 1524 "data/maps/SootopolisCity/scripts.pory"
	.string "引发干旱或暴雨？$"
# 1525 "data/maps/SootopolisCity/scripts.pory"

# 1526 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1527 "data/maps/SootopolisCity/scripts.pory"
	.string "我不知怎么就感觉，\n"
# 1528 "data/maps/SootopolisCity/scripts.pory"
	.string "那两只宝可梦并不愤怒。\p"
# 1529 "data/maps/SootopolisCity/scripts.pory"
	.string "我想……它们大概是\n"
# 1530 "data/maps/SootopolisCity/scripts.pory"
	.string "控制不住自己的力量……$"
# 1531 "data/maps/SootopolisCity/scripts.pory"

# 1532 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1533 "data/maps/SootopolisCity/scripts.pory"
	.string "那只飞行宝可梦从天而降，\n"
# 1534 "data/maps/SootopolisCity/scripts.pory"
	.string "阻止了暴走的\l"
# 1535 "data/maps/SootopolisCity/scripts.pory"
	.string "宝可梦……$"
# 1536 "data/maps/SootopolisCity/scripts.pory"

# 1537 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreatWork:
# 1538 "data/maps/SootopolisCity/scripts.pory"
	.string "太了不起了，{PLAYER}。我\n"
# 1539 "data/maps/SootopolisCity/scripts.pory"
	.string "从没见过那么强大的宝可梦\l"
# 1540 "data/maps/SootopolisCity/scripts.pory"
	.string "那样相互交锋。\p"
# 1541 "data/maps/SootopolisCity/scripts.pory"
	.string "总之，你也很了不起！\n"
# 1542 "data/maps/SootopolisCity/scripts.pory"
	.string "真不敢相信源治一直\l"
# 1543 "data/maps/SootopolisCity/scripts.pory"
	.string "藏着那样的邪恶计划……\p"
# 1544 "data/maps/SootopolisCity/scripts.pory"
	.string "幸好有你在阻止他！\p"
# 1545 "data/maps/SootopolisCity/scripts.pory"
	.string "我想我在神奥地区的那位\n"
# 1546 "data/maps/SootopolisCity/scripts.pory"
	.string "朋友，也许是接替他\l"
# 1547 "data/maps/SootopolisCity/scripts.pory"
	.string "进入四天王的\l"
# 1548 "data/maps/SootopolisCity/scripts.pory"
	.string "合适人选……$"
# 1549 "data/maps/SootopolisCity/scripts.pory"
	.string "四天王暂时。\p" 
# 1550 "data/maps/SootopolisCity/scripts.pory"
	.string "我得和大吾还有米可利\n"
# 1551 "data/maps/SootopolisCity/scripts.pory"
	.string "商量一下。$"
# 1552 "data/maps/SootopolisCity/scripts.pory"

# 1553 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsCrazy:
# 1554 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}！你走后不久，\n"
# 1555 "data/maps/SootopolisCity/scripts.pory"
	.string "我在绿岭碰到大吾，\l"
# 1556 "data/maps/SootopolisCity/scripts.pory"
	.string "他让我在你追熔岩队、\l"
# 1557 "data/maps/SootopolisCity/scripts.pory"
	.string "源治追水舰队的时候\l"
# 1558 "data/maps/SootopolisCity/scripts.pory"
	.string "先来琉璃市。\p"
# 1559 "data/maps/SootopolisCity/scripts.pory"
	.string "我到这儿的时候，固拉多\n"
# 1560 "data/maps/SootopolisCity/scripts.pory"
	.string "和盖欧卡已经对上了！\p"
# 1561 "data/maps/SootopolisCity/scripts.pory"
	.string "我们该怎么办？希望我\n"
# 1562 "data/maps/SootopolisCity/scripts.pory"
	.string "从神奥叫来的人\l"
# 1563 "data/maps/SootopolisCity/scripts.pory"
	.string "能及时赶到……$"
# 1564 "data/maps/SootopolisCity/scripts.pory"

# 1565 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1566 "data/maps/SootopolisCity/scripts.pory"
	.string "我……我从没离开过\n"
# 1567 "data/maps/SootopolisCity/scripts.pory"
	.string "这座城市。\p"
# 1568 "data/maps/SootopolisCity/scripts.pory"
	.string "不知道这些圆墙之外的\n"
# 1569 "data/maps/SootopolisCity/scripts.pory"
	.string "世界是什么样子？\p"
# 1570 "data/maps/SootopolisCity/scripts.pory"
	.string "哦，我说墙？我是说\n"
# 1571 "data/maps/SootopolisCity/scripts.pory"
	.string "悬崖……抱歉，那些\l"
# 1572 "data/maps/SootopolisCity/scripts.pory"
	.string "巨人一样的宝可梦\l"
# 1573 "data/maps/SootopolisCity/scripts.pory"
	.string "真把我吓坏了。$"
# 1574 "data/maps/SootopolisCity/scripts.pory"

# 1575 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1576 "data/maps/SootopolisCity/scripts.pory"
	.string "哇！\n"
# 1577 "data/maps/SootopolisCity/scripts.pory"
	.string "这太酷了！$"
# 1578 "data/maps/SootopolisCity/scripts.pory"

# 1579 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1580 "data/maps/SootopolisCity/scripts.pory"
	.string "哇！\n"
# 1581 "data/maps/SootopolisCity/scripts.pory"
	.string "那太酷了！$"
# 1582 "data/maps/SootopolisCity/scripts.pory"

# 1583 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1584 "data/maps/SootopolisCity/scripts.pory"
	.string "加油，红色的宝可梦！\n"
# 1585 "data/maps/SootopolisCity/scripts.pory"
	.string "别退，蓝色的宝可梦！$"
# 1586 "data/maps/SootopolisCity/scripts.pory"

# 1587 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1588 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1589 "data/maps/SootopolisCity/scripts.pory"
	.string "嗨，你知道那边打架的\n"
# 1590 "data/maps/SootopolisCity/scripts.pory"
	.string "宝可梦叫什么吗？$"
# 1591 "data/maps/SootopolisCity/scripts.pory"

# 1592 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1593 "data/maps/SootopolisCity/scripts.pory"
	.string "我还在猜红色和蓝色\n"
# 1594 "data/maps/SootopolisCity/scripts.pory"
	.string "哪个会赢，结果，哎呀，\l"
# 1595 "data/maps/SootopolisCity/scripts.pory"
	.string "是绿色来收场！\p"
# 1596 "data/maps/SootopolisCity/scripts.pory"
	.string "真是天大的转折！$"
# 1597 "data/maps/SootopolisCity/scripts.pory"

# 1598 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1599 "data/maps/SootopolisCity/scripts.pory"
	.string "有古老传说说，大地和\n"
# 1600 "data/maps/SootopolisCity/scripts.pory"
	.string "海洋是一场宝可梦\l"
# 1601 "data/maps/SootopolisCity/scripts.pory"
	.string "巨战塑造的。\p"
# 1602 "data/maps/SootopolisCity/scripts.pory"
	.string "我现在正亲眼看着\n"
# 1603 "data/maps/SootopolisCity/scripts.pory"
	.string "它发生！\p"
# 1604 "data/maps/SootopolisCity/scripts.pory"
	.string "哇！我从没想过能亲眼\n"
# 1605 "data/maps/SootopolisCity/scripts.pory"
	.string "见到这么宏大的场面！$"
# 1606 "data/maps/SootopolisCity/scripts.pory"

# 1607 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1608 "data/maps/SootopolisCity/scripts.pory"
	.string "有古老传说说，大地和\n"
# 1609 "data/maps/SootopolisCity/scripts.pory"
	.string "海洋是一场宝可梦\l"
# 1610 "data/maps/SootopolisCity/scripts.pory"
	.string "巨战塑造的。\p"
# 1611 "data/maps/SootopolisCity/scripts.pory"
	.string "我亲眼看到了\n"
# 1612 "data/maps/SootopolisCity/scripts.pory"
	.string "那一切发生！\p"
# 1613 "data/maps/SootopolisCity/scripts.pory"
	.string "哇！我从没想过能亲眼\n"
# 1614 "data/maps/SootopolisCity/scripts.pory"
	.string "见到这么宏大的场面！$"
# 1615 "data/maps/SootopolisCity/scripts.pory"

# 1616 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1617 "data/maps/SootopolisCity/scripts.pory"
	.string "一只大宝可梦正和\n"
# 1618 "data/maps/SootopolisCity/scripts.pory"
	.string "另一只大宝可梦打架！\p"
# 1619 "data/maps/SootopolisCity/scripts.pory"
	.string "求求谁让它们\n"
# 1620 "data/maps/SootopolisCity/scripts.pory"
	.string "停下来！$"
# 1621 "data/maps/SootopolisCity/scripts.pory"

# 1622 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1623 "data/maps/SootopolisCity/scripts.pory"
	.string "一只漂亮的宝可梦\n"
# 1624 "data/maps/SootopolisCity/scripts.pory"
	.string "从天而降……$"
# 1625 "data/maps/SootopolisCity/scripts.pory"

# 1626 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1627 "data/maps/SootopolisCity/scripts.pory"
	.string "哦，不！\n"
# 1628 "data/maps/SootopolisCity/scripts.pory"
	.string "琉璃市要毁了！$"
# 1629 "data/maps/SootopolisCity/scripts.pory"

# 1630 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1631 "data/maps/SootopolisCity/scripts.pory"
	.string "琉璃市没有毁掉！$"
# 1632 "data/maps/SootopolisCity/scripts.pory"

# 1633 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1634 "data/maps/SootopolisCity/scripts.pory"
	.string "嗯！\n"
# 1635 "data/maps/SootopolisCity/scripts.pory"
	.string "你特地跑到琉璃市来？\l"
# 1636 "data/maps/SootopolisCity/scripts.pory"
	.string "你不是普通游客。\p"
# 1637 "data/maps/SootopolisCity/scripts.pory"
	.string "不过我想，这也不代表\n"
# 1638 "data/maps/SootopolisCity/scripts.pory"
	.string "你就是特别的游客。$"
# 1639 "data/maps/SootopolisCity/scripts.pory"

# 1640 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1641 "data/maps/SootopolisCity/scripts.pory"
	.string "城市又恢复了平静……$"
# 1642 "data/maps/SootopolisCity/scripts.pory"

# 1643 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1644 "data/maps/SootopolisCity/scripts.pory"
	.string "你是谁？\p"
# 1645 "data/maps/SootopolisCity/scripts.pory"
	.string "这是觉醒祠堂。\p"
# 1646 "data/maps/SootopolisCity/scripts.pory"
	.string "据说在送神火山被安抚的\n"
# 1647 "data/maps/SootopolisCity/scripts.pory"
	.string "宝可梦灵魂会在这里复苏。\p"
# 1648 "data/maps/SootopolisCity/scripts.pory"
	.string "请离开。$"
# 1649 "data/maps/SootopolisCity/scripts.pory"

# 1650 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1651 "data/maps/SootopolisCity/scripts.pory"
	.string "意志坚强、才能出众\n"
# 1652 "data/maps/SootopolisCity/scripts.pory"
	.string "的人……\p"
# 1653 "data/maps/SootopolisCity/scripts.pory"
	.string "对各种宝可梦都有知识\n"
# 1654 "data/maps/SootopolisCity/scripts.pory"
	.string "和经验的训练家……\p"
# 1655 "data/maps/SootopolisCity/scripts.pory"
	.string "要是出现这样的人，\n"
# 1656 "data/maps/SootopolisCity/scripts.pory"
	.string "阿丹吩咐过我，\l"
# 1657 "data/maps/SootopolisCity/scripts.pory"
	.string "要带那位训练家来这个祠堂。$"
# 1658 "data/maps/SootopolisCity/scripts.pory"

# 1659 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1660 "data/maps/SootopolisCity/scripts.pory"
	.string "哦，天啊……\p"
# 1661 "data/maps/SootopolisCity/scripts.pory"
	.string "两只觉醒宝可梦的冲突，\n"
# 1662 "data/maps/SootopolisCity/scripts.pory"
	.string "被第三只宝可梦的\l"
# 1663 "data/maps/SootopolisCity/scripts.pory"
	.string "觉醒平息了……$"
# 1664 "data/maps/SootopolisCity/scripts.pory"

# 1665 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1666 "data/maps/SootopolisCity/scripts.pory"
	.string "这是觉醒祠堂……\p"
# 1667 "data/maps/SootopolisCity/scripts.pory"
	.string "危机过去，这个祠堂\n"
# 1668 "data/maps/SootopolisCity/scripts.pory"
	.string "也要沉睡了……$"
# 1669 "data/maps/SootopolisCity/scripts.pory"

# 1670 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginOpen:
# 1671 "data/maps/SootopolisCity/scripts.pory"
	.string "这是觉醒祠堂……\p"
# 1672 "data/maps/SootopolisCity/scripts.pory"
	.string "既然你已经是冠军，\n"
# 1673 "data/maps/SootopolisCity/scripts.pory"
	.string "随时都可以进去。$"
# 1674 "data/maps/SootopolisCity/scripts.pory"

# 1675 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1676 "data/maps/SootopolisCity/scripts.pory"
	.string "琉璃市是在火山口里\n"
# 1677 "data/maps/SootopolisCity/scripts.pory"
	.string "发展起来的城镇。\p"
# 1678 "data/maps/SootopolisCity/scripts.pory"
	.string "抬头看天，能看到\n"
# 1679 "data/maps/SootopolisCity/scripts.pory"
	.string "火山口的边缘。\l"
# 1680 "data/maps/SootopolisCity/scripts.pory"
	.string "所以你看到的天是个圆。\p"
# 1681 "data/maps/SootopolisCity/scripts.pory"
	.string "可正因为这样，琉璃市\n"
# 1682 "data/maps/SootopolisCity/scripts.pory"
	.string "上方的天空才最美。$"
# 1683 "data/maps/SootopolisCity/scripts.pory"

# 1684 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1685 "data/maps/SootopolisCity/scripts.pory"
	.string "那么巨大的两只宝可梦\n"
# 1686 "data/maps/SootopolisCity/scripts.pory"
	.string "那么凶猛地打，\l"
# 1687 "data/maps/SootopolisCity/scripts.pory"
	.string "我们也没什么能做的。$"
# 1688 "data/maps/SootopolisCity/scripts.pory"

# 1689 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1690 "data/maps/SootopolisCity/scripts.pory"
	.string "第三只宝可梦飞下来\n"
# 1691 "data/maps/SootopolisCity/scripts.pory"
	.string "的时候，我做了\l"
# 1692 "data/maps/SootopolisCity/scripts.pory"
	.string "最坏的打算。$"
# 1693 "data/maps/SootopolisCity/scripts.pory"

# 1694 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1695 "data/maps/SootopolisCity/scripts.pory"
	.string "火山口框出的一圈夜空……\p"
# 1696 "data/maps/SootopolisCity/scripts.pory"
	.string "那一圈里，星星像活着\n"
# 1697 "data/maps/SootopolisCity/scripts.pory"
	.string "一样闪烁明灭……\l"
# 1698 "data/maps/SootopolisCity/scripts.pory"
	.string "这是我最喜欢的景色。$"
# 1699 "data/maps/SootopolisCity/scripts.pory"

# 1700 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1701 "data/maps/SootopolisCity/scripts.pory"
	.string "今天早上天气还是晴的，\n"
# 1702 "data/maps/SootopolisCity/scripts.pory"
	.string "可……\p"
# 1703 "data/maps/SootopolisCity/scripts.pory"
	.string "突然乌云密布，雨下得\n"
# 1704 "data/maps/SootopolisCity/scripts.pory"
	.string "像水帘，还有雷电。\p"
# 1705 "data/maps/SootopolisCity/scripts.pory"
	.string "天气完全疯了一样！\p"
# 1706 "data/maps/SootopolisCity/scripts.pory"
	.string "这一切都是那些\n"
# 1707 "data/maps/SootopolisCity/scripts.pory"
	.string "宝可梦造成的吗？$"
# 1708 "data/maps/SootopolisCity/scripts.pory"

# 1709 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1710 "data/maps/SootopolisCity/scripts.pory"
	.string "哦？\p"
# 1711 "data/maps/SootopolisCity/scripts.pory"
	.string "把那只飞行宝可梦\n"
# 1712 "data/maps/SootopolisCity/scripts.pory"
	.string "带来的人是你？\p"
# 1713 "data/maps/SootopolisCity/scripts.pory"
	.string "你还真了不起！$"
# 1714 "data/maps/SootopolisCity/scripts.pory"

# 1715 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop:
# 1716 "data/maps/SootopolisCity/scripts.pory"
	.string "固……固拉多……\n"
# 1717 "data/maps/SootopolisCity/scripts.pory"
	.string "求你！住手！\p"
# 1718 "data/maps/SootopolisCity/scripts.pory"
	.string "我现在知道你的力量\n"
# 1719 "data/maps/SootopolisCity/scripts.pory"
	.string "有多大了！\p"
# 1720 "data/maps/SootopolisCity/scripts.pory"
	.string "再这样下去，不只是\n"
# 1721 "data/maps/SootopolisCity/scripts.pory"
	.string "琉璃市，整个丰缘都会\l"
# 1722 "data/maps/SootopolisCity/scripts.pory"
	.string "彻底毁掉！$"
# 1723 "data/maps/SootopolisCity/scripts.pory"

# 1724 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1725 "data/maps/SootopolisCity/scripts.pory"
	.string "原来超古代宝可梦\n"
# 1726 "data/maps/SootopolisCity/scripts.pory"
	.string "不只有固拉多和盖欧卡……\p"
# 1727 "data/maps/SootopolisCity/scripts.pory"
	.string "我们白白策划、慌忙\n"
# 1728 "data/maps/SootopolisCity/scripts.pory"
	.string "折腾了那么久，结果\l"
# 1729 "data/maps/SootopolisCity/scripts.pory"
	.string "那一只宝可梦随便一动，\l"
# 1730 "data/maps/SootopolisCity/scripts.pory"
	.string "一切就像没发生过一样\l"
# 1731 "data/maps/SootopolisCity/scripts.pory"
	.string "恢复了……\p"
# 1732 "data/maps/SootopolisCity/scripts.pory"
	.string "嗯，我想不只是烈空坐，\n"
# 1733 "data/maps/SootopolisCity/scripts.pory"
	.string "还有你，{PLAYER}。\p"
# 1734 "data/maps/SootopolisCity/scripts.pory"
	.string "参与了这场失控的计划，\n"
# 1735 "data/maps/SootopolisCity/scripts.pory"
	.string "我觉得自己像个傻瓜……$"
# 1736 "data/maps/SootopolisCity/scripts.pory"

# 1737 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown:
# 1738 "data/maps/SootopolisCity/scripts.pory"
	.string "盖欧卡！怎么了？！\n"
# 1739 "data/maps/SootopolisCity/scripts.pory"
	.string "冷静下来！盖欧卡！\p"
# 1740 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1741 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1742 "data/maps/SootopolisCity/scripts.pory"
	.string "不行！\n"
# 1743 "data/maps/SootopolisCity/scripts.pory"
	.string "它完全没反应！$"
# 1744 "data/maps/SootopolisCity/scripts.pory"

# 1745 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1746 "data/maps/SootopolisCity/scripts.pory"
	.string "盖欧卡和固拉多都\n"
# 1747 "data/maps/SootopolisCity/scripts.pory"
	.string "飞到不知道哪儿去了。\p"
# 1748 "data/maps/SootopolisCity/scripts.pory"
	.string "丰缘的天气也回到了\n"
# 1749 "data/maps/SootopolisCity/scripts.pory"
	.string "正常状态……\p"
# 1750 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}，我被野心\n"
# 1751 "data/maps/SootopolisCity/scripts.pory"
	.string "蒙住了眼。\p"
# 1752 "data/maps/SootopolisCity/scripts.pory"
	.string "我太沉迷于扩张海洋的\n"
# 1753 "data/maps/SootopolisCity/scripts.pory"
	.string "梦想，没想过会给\l"
# 1754 "data/maps/SootopolisCity/scripts.pory"
	.string "世界带来这么大的混乱……\p"
# 1755 "data/maps/SootopolisCity/scripts.pory"
	.string "我知道我们短时间内\n"
# 1756 "data/maps/SootopolisCity/scripts.pory"
	.string "有很多分歧，可我\l"
# 1757 "data/maps/SootopolisCity/scripts.pory"
	.string "真心为我的行为道歉，\l"
# 1758 "data/maps/SootopolisCity/scripts.pory"
	.string "也很感激你能阻止我，\l"
# 1759 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}。$"
# 1760 "data/maps/SootopolisCity/scripts.pory"

# 1761 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_InvolvedWithCrisisComeWithMe:
# 1762 "data/maps/SootopolisCity/scripts.pory"
	.string "那些打架的宝可梦……\n"
# 1763 "data/maps/SootopolisCity/scripts.pory"
	.string "固拉多……还有盖欧卡……\p"
# 1764 "data/maps/SootopolisCity/scripts.pory"
	.string "两只超古代宝可梦从\n"
# 1765 "data/maps/SootopolisCity/scripts.pory"
	.string "长眠中苏醒了……\p"
# 1766 "data/maps/SootopolisCity/scripts.pory"
	.string "现在它们正用失控的\n"
# 1767 "data/maps/SootopolisCity/scripts.pory"
	.string "力量互相冲撞……\p"
# 1768 "data/maps/SootopolisCity/scripts.pory"
	.string "……{PLAYER}。\p"
# 1769 "data/maps/SootopolisCity/scripts.pory"
	.string "你此刻来到这里，我就\n"
# 1770 "data/maps/SootopolisCity/scripts.pory"
	.string "当作你准备好更深地\l"
# 1771 "data/maps/SootopolisCity/scripts.pory"
	.string "卷入这场危机。\p"
# 1772 "data/maps/SootopolisCity/scripts.pory"
	.string "那么，有个人我想让\n"
# 1773 "data/maps/SootopolisCity/scripts.pory"
	.string "你见一见。\p"
# 1774 "data/maps/SootopolisCity/scripts.pory"
	.string "请跟我来。$"
# 1775 "data/maps/SootopolisCity/scripts.pory"

# 1776 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoesThisMakeYourFearPokemon:
# 1777 "data/maps/SootopolisCity/scripts.pory"
	.string "听我说，{PLAYER}。\p"
# 1778 "data/maps/SootopolisCity/scripts.pory"
	.string "看到固拉多和盖欧卡，\n"
# 1779 "data/maps/SootopolisCity/scripts.pory"
	.string "你会觉得宝可梦\l"
# 1780 "data/maps/SootopolisCity/scripts.pory"
	.string "很可怕吗？\p"
# 1781 "data/maps/SootopolisCity/scripts.pory"
	.string "可那不是真的。\n"
# 1782 "data/maps/SootopolisCity/scripts.pory"
	.string "宝可梦其实更……\p"
# 1783 "data/maps/SootopolisCity/scripts.pory"
	.string "……我为什么问你这些？\n"
# 1784 "data/maps/SootopolisCity/scripts.pory"
	.string "你已经知道了。$"
# 1785 "data/maps/SootopolisCity/scripts.pory"

# 1786 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HereWereAreHelpWallace:
# 1787 "data/maps/SootopolisCity/scripts.pory"
	.string "好，我们到了！\p"
# 1788 "data/maps/SootopolisCity/scripts.pory"
	.string "里面有个叫亚当的人。\p"
# 1789 "data/maps/SootopolisCity/scripts.pory"
	.string "我觉得你有帮助他的\n"
# 1790 "data/maps/SootopolisCity/scripts.pory"
	.string "能力……$"
# 1791 "data/maps/SootopolisCity/scripts.pory"

# 1792 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KnowWhatsNeededToHelpHim:
# 1793 "data/maps/SootopolisCity/scripts.pory"
	.string "我觉得你有帮助他的\n"
# 1794 "data/maps/SootopolisCity/scripts.pory"
	.string "能力……$"
# 1795 "data/maps/SootopolisCity/scripts.pory"

# 1796 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NeverBeenToSkyPillar:
# 1797 "data/maps/SootopolisCity/scripts.pory"
	.string "天空之柱……\p"
# 1798 "data/maps/SootopolisCity/scripts.pory"
	.string "我从没去过那里。\n"
# 1799 "data/maps/SootopolisCity/scripts.pory"
	.string "不知道它在哪儿？$"
# 1800 "data/maps/SootopolisCity/scripts.pory"

# 1801 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SoThatsRayquaza:
# 1802 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}……\p"
# 1803 "data/maps/SootopolisCity/scripts.pory"
	.string "真不敢相信，源治像你\n"
# 1804 "data/maps/SootopolisCity/scripts.pory"
	.string "说的那样，一直\l"
# 1805 "data/maps/SootopolisCity/scripts.pory"
	.string "在利用我们。\p"
# 1806 "data/maps/SootopolisCity/scripts.pory"
	.string "很抱歉我没看出这一点，\n"
# 1807 "data/maps/SootopolisCity/scripts.pory"
	.string "而且他捕获并利用\l"
# 1808 "data/maps/SootopolisCity/scripts.pory"
	.string "超级烈空坐时，我\l"
# 1809 "data/maps/SootopolisCity/scripts.pory"
	.string "甚至没能来帮你……\p"
# 1810 "data/maps/SootopolisCity/scripts.pory"
	.string "你独自就打败了他，\n"
# 1811 "data/maps/SootopolisCity/scripts.pory"
	.string "真是了不起。\p"
# 1812 "data/maps/SootopolisCity/scripts.pory"
	.string "就像亚当说的，你是\n"
# 1813 "data/maps/SootopolisCity/scripts.pory"
	.string "丰缘人民的英雄……\l"
# 1814 "data/maps/SootopolisCity/scripts.pory"
	.string "不，是全世界的英雄！\p"
# 1815 "data/maps/SootopolisCity/scripts.pory"
	.string "要不是你阻止了源治，\n"
# 1816 "data/maps/SootopolisCity/scripts.pory"
	.string "把烈空坐带到这里，\l"
# 1817 "data/maps/SootopolisCity/scripts.pory"
	.string "不知道会造成多大\l"
# 1818 "data/maps/SootopolisCity/scripts.pory"
	.string "的破坏？\p"
# 1819 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}，你真是个\n"
# 1820 "data/maps/SootopolisCity/scripts.pory"
	.string "特别的训练家，\l"
# 1821 "data/maps/SootopolisCity/scripts.pory"
	.string "我真心感谢你。$"
# 1822 "data/maps/SootopolisCity/scripts.pory"

# 1823 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieArchieLeft:
# 1824 "data/maps/SootopolisCity/scripts.pory"
	.string "看来马克西和阿库亚\n"
# 1825 "data/maps/SootopolisCity/scripts.pory"
	.string "都去了什么地方。\p"
# 1826 "data/maps/SootopolisCity/scripts.pory"
	.string "也许他们去送神火山\n"
# 1827 "data/maps/SootopolisCity/scripts.pory"
	.string "归还宝珠了……\p"
# 1828 "data/maps/SootopolisCity/scripts.pory"
	.string "总之！现在四天王得\n"
# 1829 "data/maps/SootopolisCity/scripts.pory"
	.string "找人接替源治，\l"
# 1830 "data/maps/SootopolisCity/scripts.pory"
	.string "看来你的朋友小光\l"
# 1831 "data/maps/SootopolisCity/scripts.pory"
	.string "心里有人选可以帮我们。$"
# 1832 "data/maps/SootopolisCity/scripts.pory"

# 1833 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DawnMaxieArchieLeft:
# 1834 "data/maps/SootopolisCity/scripts.pory"
	.string "祝你在阿丹那里\n"
# 1835 "data/maps/SootopolisCity/scripts.pory"
	.string "顺利，{PLAYER}！\p"
# 1836 "data/maps/SootopolisCity/scripts.pory"
	.string "希望我在神奥的朋友\n"
# 1837 "data/maps/SootopolisCity/scripts.pory"
	.string "能在你打赢他、\l"
# 1838 "data/maps/SootopolisCity/scripts.pory"
	.string "一路冲进四天王之前\l"
# 1839 "data/maps/SootopolisCity/scripts.pory"
	.string "赶到！$"
# 1840 "data/maps/SootopolisCity/scripts.pory"

# 1841 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1842 "data/maps/SootopolisCity/scripts.pory"
	.string "哦？\n"
# 1843 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}？\p"
# 1844 "data/maps/SootopolisCity/scripts.pory"
	.string "你还没爬上\n"
# 1845 "data/maps/SootopolisCity/scripts.pory"
	.string "天空之柱吗？\p"
# 1846 "data/maps/SootopolisCity/scripts.pory"
	.string "我相信你一定能到达\n"
# 1847 "data/maps/SootopolisCity/scripts.pory"
	.string "天空之柱的顶端……$"
# 1848 "data/maps/SootopolisCity/scripts.pory"

# 1849 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm:
# 1850 "data/maps/SootopolisCity/scripts.pory"
	.string "熔岩队和水舰队的\n"
# 1851 "data/maps/SootopolisCity/scripts.pory"
	.string "老大，我觉得他们\l"
# 1852 "data/maps/SootopolisCity/scripts.pory"
	.string "本来没有恶意。\p"
# 1853 "data/maps/SootopolisCity/scripts.pory"
	.string "听听他们自己怎么说，\n"
# 1854 "data/maps/SootopolisCity/scripts.pory"
	.string "也无妨。$"
# 1855 "data/maps/SootopolisCity/scripts.pory"

# 1856 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis:
# 1857 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}……\n"
# 1858 "data/maps/SootopolisCity/scripts.pory"
	.string "我的眼睛没骗我。\p"
# 1859 "data/maps/SootopolisCity/scripts.pory"
	.string "多亏你的帮助，琉璃市……\n"
# 1860 "data/maps/SootopolisCity/scripts.pory"
	.string "不，整个丰缘都得救了。\p"
# 1861 "data/maps/SootopolisCity/scripts.pory"
	.string "我代表所有人\n"
# 1862 "data/maps/SootopolisCity/scripts.pory"
	.string "谢谢你。\p"
# 1863 "data/maps/SootopolisCity/scripts.pory"
	.string "这是我的心意。\n"
# 1864 "data/maps/SootopolisCity/scripts.pory"
	.string "请收下。$"
# 1865 "data/maps/SootopolisCity/scripts.pory"

# 1866 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym:
# 1867 "data/maps/SootopolisCity/scripts.pory"
	.string "那个秘传学习器里是\n"
# 1868 "data/maps/SootopolisCity/scripts.pory"
	.string "攀瀑。\p"
# 1869 "data/maps/SootopolisCity/scripts.pory"
	.string "有了雨滴徽章，学会那个\n"
# 1870 "data/maps/SootopolisCity/scripts.pory"
	.string "秘传招式的宝可梦\l"
# 1871 "data/maps/SootopolisCity/scripts.pory"
	.string "就能硬冲上瀑布。\p"
# 1872 "data/maps/SootopolisCity/scripts.pory"
	.string "雨滴徽章在哪儿拿？\n"
# 1873 "data/maps/SootopolisCity/scripts.pory"
	.string "你知道吧？\p"
# 1874 "data/maps/SootopolisCity/scripts.pory"
	.string "没错！你得打败\n"
# 1875 "data/maps/SootopolisCity/scripts.pory"
	.string "琉璃道馆的馆主。\p"
# 1876 "data/maps/SootopolisCity/scripts.pory"
	.string "准备好了，就从\n"
# 1877 "data/maps/SootopolisCity/scripts.pory"
	.string "那扇门进去。\p"
# 1878 "data/maps/SootopolisCity/scripts.pory"
	.string "不过提醒你，我的师父\n"
# 1879 "data/maps/SootopolisCity/scripts.pory"
	.string "最近换了风格……\p"
# 1880 "data/maps/SootopolisCity/scripts.pory"
	.string "他教会我关于水属性\n"
# 1881 "data/maps/SootopolisCity/scripts.pory"
	.string "宝可梦的一切，可现在\l"
# 1882 "data/maps/SootopolisCity/scripts.pory"
	.string "他成了妖精属性的\l"
# 1883 "data/maps/SootopolisCity/scripts.pory"
	.string "高手！$"
# 1884 "data/maps/SootopolisCity/scripts.pory"

# 1885 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DazzledByMentor:
# 1886 "data/maps/SootopolisCity/scripts.pory"
	.string "我相信你一定会被\n"
# 1887 "data/maps/SootopolisCity/scripts.pory"
	.string "我师父那美得惊人的\l"
# 1888 "data/maps/SootopolisCity/scripts.pory"
	.string "战斗方式迷住。\p"
# 1889 "data/maps/SootopolisCity/scripts.pory"
	.string "他的妖精属性宝可梦\n"
# 1890 "data/maps/SootopolisCity/scripts.pory"
	.string "已经比他以前的水属性\l"
# 1891 "data/maps/SootopolisCity/scripts.pory"
	.string "更强了！$"
# 1892 "data/maps/SootopolisCity/scripts.pory"

# 1893 "data/maps/SootopolisCity/scripts.pory"
	SootopolisCity_Text_WelcomeBack:
# 1894 "data/maps/SootopolisCity/scripts.pory"
	.string "米可利：{PLAYER}！你平安\n"
# 1895 "data/maps/SootopolisCity/scripts.pory"
	.string "回来了，我太放心了。\p"
# 1896 "data/maps/SootopolisCity/scripts.pory"
	.string "你到天空之柱\n"
# 1897 "data/maps/SootopolisCity/scripts.pory"
	.string "顶端时发生了什么？$"
# 1898 "data/maps/SootopolisCity/scripts.pory"

# 1899 "data/maps/SootopolisCity/scripts.pory"

# 1900 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PlayerAnswers:
# 1901 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1902 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …$"
# 1903 "data/maps/SootopolisCity/scripts.pory"

# 1904 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WallaceCantBelieve:
# 1905 "data/maps/SootopolisCity/scripts.pory"
	.string "阿丹：哦，天啊……\p"
# 1906 "data/maps/SootopolisCity/scripts.pory"
	.string "这场危机我没有像你们\n"
# 1907 "data/maps/SootopolisCity/scripts.pory"
	.string "那样参与，不过\l"
# 1908 "data/maps/SootopolisCity/scripts.pory"
	.string "我和源治认识很久了。\p"
# 1909 "data/maps/SootopolisCity/scripts.pory"
	.string "真不敢相信他会做\n"
# 1910 "data/maps/SootopolisCity/scripts.pory"
	.string "那种事，也不敢相信\l"
# 1911 "data/maps/SootopolisCity/scripts.pory"
	.string "我没能来帮你，{PLAYER}。\p"
# 1912 "data/maps/SootopolisCity/scripts.pory"
	.string "不过看来你不需要我帮，\n"
# 1913 "data/maps/SootopolisCity/scripts.pory"
	.string "你一个人就挫败了\l"
# 1914 "data/maps/SootopolisCity/scripts.pory"
	.string "他的计划！\p"
# 1915 "data/maps/SootopolisCity/scripts.pory"
	.string "为了阻止源治，并把\n"
# 1916 "data/maps/SootopolisCity/scripts.pory"
	.string "烈空坐带来平息其他\l"
# 1917 "data/maps/SootopolisCity/scripts.pory"
	.string "超古代宝可梦的怒火，\l"
# 1918 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}，我衷心\l"
# 1919 "data/maps/SootopolisCity/scripts.pory"
	.string "感谢你！$"
# 1920 "data/maps/SootopolisCity/scripts.pory"

# 1921 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouAreAHero:
# 1922 "data/maps/SootopolisCity/scripts.pory"
	.string "对整个丰缘地区来说，\n"
# 1923 "data/maps/SootopolisCity/scripts.pory"
	.string "你简直就是英雄！$"
# 1924 "data/maps/SootopolisCity/scripts.pory"

# 1925 "data/maps/SootopolisCity/scripts.pory"

# 1926 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_TextRambled:
# 1927 "data/maps/SootopolisCity/scripts.pory"
	.string "阿丹：我说得太久了，\n"
# 1928 "data/maps/SootopolisCity/scripts.pory"
	.string "你一定想听听这里的\l"
# 1929 "data/maps/SootopolisCity/scripts.pory"
	.string "其他人怎么说！$"

SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 1934 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, SootopolisCity_EventScript_SetExpertBlockCaveEntrance_2
# 1940 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 1941 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_EXPERT, MOVEMENT_TYPE_FACE_RIGHT
SootopolisCity_EventScript_SetExpertBlockCaveEntrance_1:
	return

SootopolisCity_EventScript_SetExpertBlockCaveEntrance_2:
# 1936 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
	goto SootopolisCity_EventScript_SetExpertBlockCaveEntrance_1

