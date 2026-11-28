# 1 "data/maps/Route109/scripts.pory"

# 2 "data/maps/Route109/scripts.pory"
.set LOCALID_LITTLE_GIRL, 9
# 3 "data/maps/Route109/scripts.pory"
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
# 4 "data/maps/Route109/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 5 "data/maps/Route109/scripts.pory"

# 6 "data/maps/Route109/scripts.pory"
Route109_MapScripts::
# 7 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_OnTransition
# 8 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route109_OnLoad
# 9 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route109_OnWarp
# 10 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route109_OnFrame
# 11 "data/maps/Route109/scripts.pory"
	.byte 0
# 12 "data/maps/Route109/scripts.pory"

# 13 "data/maps/Route109/scripts.pory"
Route109_OnTransition:
# 14 "data/maps/Route109/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 15 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_DEFEATED_HOT_HOUSE, SetHotHouseGirlPermLoc
# 16 "data/maps/Route109/scripts.pory"
	end
# 17 "data/maps/Route109/scripts.pory"

# 18 "data/maps/Route109/scripts.pory"
Route109_OnLoad:
# 19 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_DEFEATED_HOT_HOUSE, SetHotHouseGirlPermLoc
# 20 "data/maps/Route109/scripts.pory"
	end
# 21 "data/maps/Route109/scripts.pory"

# 22 "data/maps/Route109/scripts.pory"
Route109_OnWarp:
# 23 "data/maps/Route109/scripts.pory"
	map_script_2 VAR_LEAVING_HOT_HOUSE, 1, Route109_EventScript_PlayerTurnNorth
# 24 "data/maps/Route109/scripts.pory"
	.2byte 0
# 25 "data/maps/Route109/scripts.pory"

# 26 "data/maps/Route109/scripts.pory"
Route109_EventScript_PlayerTurnNorth::
# 27 "data/maps/Route109/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 28 "data/maps/Route109/scripts.pory"
	end
# 29 "data/maps/Route109/scripts.pory"

# 30 "data/maps/Route109/scripts.pory"
Route109_OnFrame:
# 31 "data/maps/Route109/scripts.pory"
	map_script_2 VAR_LEAVING_HOT_HOUSE, 1, Route109_EventScript_ExitHotHouse
# 32 "data/maps/Route109/scripts.pory"
	.2byte 0
# 33 "data/maps/Route109/scripts.pory"

# 34 "data/maps/Route109/scripts.pory"
Route109_EventScript_ExitHotHouse::
# 35 "data/maps/Route109/scripts.pory"
	lockall
# 36 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown2
# 37 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Route109_EventScript_GirlWalkHotHouse
# 39 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 41 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ThanksForPlaying, MSGBOX_DEFAULT
# 43 "data/maps/Route109/scripts.pory"
	closemessage
# 44 "data/maps/Route109/scripts.pory"
	cleartrainerflag TRAINER_JOHANNA
# 45 "data/maps/Route109/scripts.pory"
	cleartrainerflag TRAINER_BRIAN
# 46 "data/maps/Route109/scripts.pory"
	cleartrainerflag TRAINER_BRIAN_2
# 47 "data/maps/Route109/scripts.pory"
	cleartrainerflag TRAINER_DWAYNE
# 48 "data/maps/Route109/scripts.pory"
	clearflag FLAG_DEFEATED_HOT_HOUSE
# 49 "data/maps/Route109/scripts.pory"
	clearflag FLAG_RECEIVED_HOT_HOUSE_GIFT_MON
# 50 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 51 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 52 "data/maps/Route109/scripts.pory"
	setvar VAR_LEAVING_HOT_HOUSE, 0
# 53 "data/maps/Route109/scripts.pory"
	releaseall
# 54 "data/maps/Route109/scripts.pory"
	end
# 55 "data/maps/Route109/scripts.pory"

# 56 "data/maps/Route109/scripts.pory"
Route109_EventScript_GirlWalkHotHouse::
# 57 "data/maps/Route109/scripts.pory"
	walk_right
# 58 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 59 "data/maps/Route109/scripts.pory"
	step_end
# 60 "data/maps/Route109/scripts.pory"

# 61 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 62 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 63 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 64 "data/maps/Route109/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109, 0
# 65 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_R109, Route109_Movement_BrineyEnterBoat
# 66 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_BRINEY_R109
# 68 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 69 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 70 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 71 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 72 "data/maps/Route109/scripts.pory"
	end
# 73 "data/maps/Route109/scripts.pory"

# 74 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 75 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 76 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 78 "data/maps/Route109/scripts.pory"
	end
# 79 "data/maps/Route109/scripts.pory"

# 80 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 81 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 82 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 84 "data/maps/Route109/scripts.pory"
	end
# 85 "data/maps/Route109/scripts.pory"

# 86 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 87 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 88 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 90 "data/maps/Route109/scripts.pory"
	end
# 91 "data/maps/Route109/scripts.pory"

# 92 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 93 "data/maps/Route109/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 94 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 95 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
# 96 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
# 97 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route109/scripts.pory"
	delay 50
# 99 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 100 "data/maps/Route109/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 101 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
# 102 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 104 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 105 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 106 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 107 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 108 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
# 109 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 111 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 112 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE109
# 113 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 114 "data/maps/Route109/scripts.pory"
	closemessage
# 115 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 116 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 117 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 118 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 119 "data/maps/Route109/scripts.pory"
	release
# 120 "data/maps/Route109/scripts.pory"
	end
# 121 "data/maps/Route109/scripts.pory"

# 122 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 123 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 124 "data/maps/Route109/scripts.pory"
	walk_down
# 125 "data/maps/Route109/scripts.pory"
	walk_down
# 126 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 128 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 129 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 130 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 131 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 132 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 133 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 134 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 135 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 136 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 137 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 138 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 139 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 140 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 141 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 142 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 143 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 144 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 145 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 146 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 147 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 148 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 149 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 150 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 151 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 152 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 153 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 154 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 155 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 156 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 157 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 158 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 159 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 160 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 161 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 162 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 163 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 164 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 165 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 166 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 167 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 168 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 169 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 170 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 171 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 172 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 173 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 174 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 175 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 176 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 177 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 178 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 179 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 180 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 181 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 183 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 184 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 185 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 186 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 187 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 188 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 189 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 190 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 191 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 192 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 193 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 194 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 195 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 196 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 197 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 198 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 199 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 200 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 201 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 202 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 203 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 204 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 205 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 206 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 207 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 208 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 209 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 210 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 211 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 212 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 213 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 214 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 215 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 218 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 219 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 220 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 221 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 222 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 223 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 224 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 225 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 226 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 227 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 228 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 229 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 230 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 231 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 232 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 233 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 234 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 235 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 236 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 237 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 238 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 239 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 240 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 241 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 242 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 243 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 244 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 245 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 246 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 247 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 248 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 249 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 250 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 251 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 252 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 253 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 254 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 255 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 256 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 257 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 258 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 259 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 260 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 261 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 262 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 263 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 264 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 265 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 266 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 267 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 268 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 269 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 270 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 271 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 272 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 273 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 274 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 275 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 276 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 277 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 278 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 279 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 280 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 281 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 282 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 283 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 284 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 285 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 286 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 287 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 288 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 289 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 290 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 291 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 292 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 293 "data/maps/Route109/scripts.pory"
	walk_left
# 294 "data/maps/Route109/scripts.pory"
	walk_left
# 295 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 296 "data/maps/Route109/scripts.pory"
	step_end
# 297 "data/maps/Route109/scripts.pory"

# 298 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 299 "data/maps/Route109/scripts.pory"
	walk_down
# 300 "data/maps/Route109/scripts.pory"
	walk_down
# 301 "data/maps/Route109/scripts.pory"
	step_end
# 302 "data/maps/Route109/scripts.pory"

# 303 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 304 "data/maps/Route109/scripts.pory"
	walk_down
# 305 "data/maps/Route109/scripts.pory"
	walk_down
# 306 "data/maps/Route109/scripts.pory"
	walk_left
# 307 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 308 "data/maps/Route109/scripts.pory"
	step_end
# 309 "data/maps/Route109/scripts.pory"

# 310 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 311 "data/maps/Route109/scripts.pory"
	walk_right
# 312 "data/maps/Route109/scripts.pory"
	walk_down
# 313 "data/maps/Route109/scripts.pory"
	step_end
# 314 "data/maps/Route109/scripts.pory"

# 315 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 316 "data/maps/Route109/scripts.pory"
	walk_left
# 317 "data/maps/Route109/scripts.pory"
	walk_down
# 318 "data/maps/Route109/scripts.pory"
	step_end
# 319 "data/maps/Route109/scripts.pory"

# 320 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 321 "data/maps/Route109/scripts.pory"
	walk_down
# 322 "data/maps/Route109/scripts.pory"
	step_end
# 323 "data/maps/Route109/scripts.pory"

# 324 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 325 "data/maps/Route109/scripts.pory"
	walk_down
# 326 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 327 "data/maps/Route109/scripts.pory"
	step_end
# 328 "data/maps/Route109/scripts.pory"

# 329 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 330 "data/maps/Route109/scripts.pory"
	lock
# 331 "data/maps/Route109/scripts.pory"
	faceplayer
# 332 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 333 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 334 "data/maps/Route109/scripts.pory"
	end
# 335 "data/maps/Route109/scripts.pory"

# 336 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 337 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 338 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 339 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 340 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 341 "data/maps/Route109/scripts.pory"
	end
# 342 "data/maps/Route109/scripts.pory"

# 343 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 344 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 345 "data/maps/Route109/scripts.pory"
	waitmessage
# 346 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 347 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 348 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 349 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 350 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 351 "data/maps/Route109/scripts.pory"
	end
# 352 "data/maps/Route109/scripts.pory"

# 353 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 354 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 355 "data/maps/Route109/scripts.pory"
	closemessage
# 356 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 357 "data/maps/Route109/scripts.pory"
	end
# 358 "data/maps/Route109/scripts.pory"

# 359 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 360 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 361 "data/maps/Route109/scripts.pory"
	release
# 362 "data/maps/Route109/scripts.pory"
	end
# 363 "data/maps/Route109/scripts.pory"

# 364 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 365 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 366 "data/maps/Route109/scripts.pory"
	release
# 367 "data/maps/Route109/scripts.pory"
	end
# 368 "data/maps/Route109/scripts.pory"

# 369 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 370 "data/maps/Route109/scripts.pory"
	lock
# 371 "data/maps/Route109/scripts.pory"
	faceplayer
# 372 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 373 "data/maps/Route109/scripts.pory"
	closemessage
# 374 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 375 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 376 "data/maps/Route109/scripts.pory"
	release
# 377 "data/maps/Route109/scripts.pory"
	end
# 378 "data/maps/Route109/scripts.pory"

# 379 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 380 "data/maps/Route109/scripts.pory"
	lock
# 381 "data/maps/Route109/scripts.pory"
	faceplayer
# 382 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 383 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 384 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 385 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 386 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 387 "data/maps/Route109/scripts.pory"
	closemessage
# 388 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 389 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 390 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 391 "data/maps/Route109/scripts.pory"
	release
# 392 "data/maps/Route109/scripts.pory"
	end
# 393 "data/maps/Route109/scripts.pory"

# 394 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 395 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 396 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 397 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route109/scripts.pory"
	release
# 399 "data/maps/Route109/scripts.pory"
	end
# 400 "data/maps/Route109/scripts.pory"

# 401 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 402 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 403 "data/maps/Route109/scripts.pory"
	end
# 404 "data/maps/Route109/scripts.pory"

# 405 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 406 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 407 "data/maps/Route109/scripts.pory"
	end
# 408 "data/maps/Route109/scripts.pory"

# 409 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 410 "data/maps/Route109/scripts.pory"
	lock
# 411 "data/maps/Route109/scripts.pory"
	faceplayer
# 412 "data/maps/Route109/scripts.pory"
	waitse
# 413 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 414 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 415 "data/maps/Route109/scripts.pory"
	waitmoncry
# 416 "data/maps/Route109/scripts.pory"
	release
# 417 "data/maps/Route109/scripts.pory"
	end
# 418 "data/maps/Route109/scripts.pory"

# 419 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 420 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 421 "data/maps/Route109/scripts.pory"
	end
# 422 "data/maps/Route109/scripts.pory"

# 423 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 424 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 425 "data/maps/Route109/scripts.pory"
	end
# 426 "data/maps/Route109/scripts.pory"

# 427 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 428 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 429 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/Route109/scripts.pory"
	end
# 431 "data/maps/Route109/scripts.pory"

# 432 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 433 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 434 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 435 "data/maps/Route109/scripts.pory"
	end
# 436 "data/maps/Route109/scripts.pory"

# 437 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 438 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 439 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 440 "data/maps/Route109/scripts.pory"
	end
# 441 "data/maps/Route109/scripts.pory"

# 442 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 443 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 444 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 445 "data/maps/Route109/scripts.pory"
	end
# 446 "data/maps/Route109/scripts.pory"

# 447 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 448 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 449 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 450 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 451 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 452 "data/maps/Route109/scripts.pory"
	release
# 453 "data/maps/Route109/scripts.pory"
	end
# 454 "data/maps/Route109/scripts.pory"

# 455 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 456 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 457 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 458 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 459 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 460 "data/maps/Route109/scripts.pory"
	release
# 461 "data/maps/Route109/scripts.pory"
	end
# 462 "data/maps/Route109/scripts.pory"

# 463 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 464 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 465 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 466 "data/maps/Route109/scripts.pory"
	end
# 467 "data/maps/Route109/scripts.pory"

# 468 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 469 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 470 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 471 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 472 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 473 "data/maps/Route109/scripts.pory"
	release
# 474 "data/maps/Route109/scripts.pory"
	end
# 475 "data/maps/Route109/scripts.pory"

# 476 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 477 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 478 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 479 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 480 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 481 "data/maps/Route109/scripts.pory"
	release
# 482 "data/maps/Route109/scripts.pory"
	end
# 483 "data/maps/Route109/scripts.pory"

# 484 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 485 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 486 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 487 "data/maps/Route109/scripts.pory"
	end
# 488 "data/maps/Route109/scripts.pory"

# 489 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 490 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 491 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 492 "data/maps/Route109/scripts.pory"
	end
# 493 "data/maps/Route109/scripts.pory"

# 494 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 495 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 496 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 497 "data/maps/Route109/scripts.pory"
	end
# 498 "data/maps/Route109/scripts.pory"

# 499 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 500 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 501 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 502 "data/maps/Route109/scripts.pory"
	end
# 503 "data/maps/Route109/scripts.pory"

# 504 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 505 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 506 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 507 "data/maps/Route109/scripts.pory"
	end
# 508 "data/maps/Route109/scripts.pory"

# 509 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 510 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 511 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 512 "data/maps/Route109/scripts.pory"
	end
# 513 "data/maps/Route109/scripts.pory"

# 514 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 515 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 516 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 517 "data/maps/Route109/scripts.pory"
	end
# 518 "data/maps/Route109/scripts.pory"

# 519 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 520 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 521 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 522 "data/maps/Route109/scripts.pory"
	end
# 523 "data/maps/Route109/scripts.pory"

# 524 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 525 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 526 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 527 "data/maps/Route109/scripts.pory"
	end
# 528 "data/maps/Route109/scripts.pory"

# 529 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 530 "data/maps/Route109/scripts.pory"
	.string "布林尼先生：嗨！\n"
# 531 "data/maps/Route109/scripts.pory"
	.string "我们在凯那上岸了！\p"
# 532 "data/maps/Route109/scripts.pory"
	.string "我想你是要去见史登\n"
# 533 "data/maps/Route109/scripts.pory"
	.string "船长、送得文的货吧？$"
# 534 "data/maps/Route109/scripts.pory"

# 535 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 536 "data/maps/Route109/scripts.pory"
	.string "布林尼先生：我以为你是\n"
# 537 "data/maps/Route109/scripts.pory"
	.string "要送得文的货。\p"
# 538 "data/maps/Route109/scripts.pory"
	.string "那你要坐船回\n"
# 539 "data/maps/Route109/scripts.pory"
	.string "武斗吗？$"
# 540 "data/maps/Route109/scripts.pory"

# 541 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 542 "data/maps/Route109/scripts.pory"
	.string "布林尼先生：那就去\n"
# 543 "data/maps/Route109/scripts.pory"
	.string "武斗！\p"
# 544 "data/maps/Route109/scripts.pory"
	.string "起锚！\n"
# 545 "data/maps/Route109/scripts.pory"
	.string "皮皮，我们出海了，\l"
# 546 "data/maps/Route109/scripts.pory"
	.string "亲爱的！$"
# 547 "data/maps/Route109/scripts.pory"

# 548 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 549 "data/maps/Route109/scripts.pory"
	.string "布林尼先生：那你去送\n"
# 550 "data/maps/Route109/scripts.pory"
	.string "得文的货吧，我等着。$"
# 551 "data/maps/Route109/scripts.pory"

# 552 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 553 "data/maps/Route109/scripts.pory"
	.string "布林尼先生：嗨！我们在\n"
# 554 "data/maps/Route109/scripts.pory"
	.string "凯那上岸了！\p"
# 555 "data/maps/Route109/scripts.pory"
	.string "你什么时候想再出海，\n"
# 556 "data/maps/Route109/scripts.pory"
	.string "告诉我一声就行！$"
# 557 "data/maps/Route109/scripts.pory"

# 558 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 559 "data/maps/Route109/scripts.pory"
	.string "布林尼先生：嗨！\n"
# 560 "data/maps/Route109/scripts.pory"
	.string "为了你，我随时出海！\p"
# 561 "data/maps/Route109/scripts.pory"
	.string "那么，朋友，\n"
# 562 "data/maps/Route109/scripts.pory"
	.string "我们去哪儿？$"
# 563 "data/maps/Route109/scripts.pory"

# 564 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 565 "data/maps/Route109/scripts.pory"
	.string "布林尼先生：你什么时候\n"
# 566 "data/maps/Route109/scripts.pory"
	.string "需要再出海，\l"
# 567 "data/maps/Route109/scripts.pory"
	.string "告诉我一声就行！$"
# 568 "data/maps/Route109/scripts.pory"

# 569 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 570 "data/maps/Route109/scripts.pory"
	.string "小孩子跑得又快又\n"
# 571 "data/maps/Route109/scripts.pory"
	.string "难抓……\p"
# 572 "data/maps/Route109/scripts.pory"
	.string "一刻都不能把眼睛\n"
# 573 "data/maps/Route109/scripts.pory"
	.string "移开。真累人。\p"
# 574 "data/maps/Route109/scripts.pory"
	.string "我的孩子和我的宝可梦\n"
# 575 "data/maps/Route109/scripts.pory"
	.string "在一起，应该没事，\l"
# 576 "data/maps/Route109/scripts.pory"
	.string "可是……$"
# 577 "data/maps/Route109/scripts.pory"

# 578 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 579 "data/maps/Route109/scripts.pory"
	.string "我们的沙堡做起来\n"
# 580 "data/maps/Route109/scripts.pory"
	.string "要好久。$"
# 581 "data/maps/Route109/scripts.pory"

# 582 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis:
# 583 "data/maps/Route109/scripts.pory"
	.string "这个给你！$"
# 584 "data/maps/Route109/scripts.pory"

# 585 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 586 "data/maps/Route109/scripts.pory"
	.string "我们要把沙滩上所有\n"
# 587 "data/maps/Route109/scripts.pory"
	.string "沙子都拿来堆个大城堡！\p"
# 588 "data/maps/Route109/scripts.pory"
	.string "然后我们当国王\n"
# 589 "data/maps/Route109/scripts.pory"
	.string "和王后。\p"
# 590 "data/maps/Route109/scripts.pory"
	.string "我们让你当仆人。$"
# 591 "data/maps/Route109/scripts.pory"

# 592 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 593 "data/maps/Route109/scripts.pory"
	.string "这一带的水很干净。\p"
# 594 "data/maps/Route109/scripts.pory"
	.string "不过我有时候会让我的\n"
# 595 "data/maps/Route109/scripts.pory"
	.string "蛇纹熊去捡岸边的\l"
# 596 "data/maps/Route109/scripts.pory"
	.string "垃圾。\p"
# 597 "data/maps/Route109/scripts.pory"
	.string "脏水会变成雨，汇进\n"
# 598 "data/maps/Route109/scripts.pory"
	.string "我们喝的河里……\p"
# 599 "data/maps/Route109/scripts.pory"
	.string "要是污染了大海，\n"
# 600 "data/maps/Route109/scripts.pory"
	.string "最后都会报应到\l"
# 601 "data/maps/Route109/scripts.pory"
	.string "我们自己身上。$"
# 602 "data/maps/Route109/scripts.pory"

# 603 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry:
# 604 "data/maps/Route109/scripts.pory"
	.string "蛇纹熊：咕咕？$"
# 605 "data/maps/Route109/scripts.pory"

# 606 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 607 "data/maps/Route109/scripts.pory"
	.string "海边小屋\p"
# 608 "data/maps/Route109/scripts.pory"
	.string "“愿热烈的对战在\n"
# 609 "data/maps/Route109/scripts.pory"
	.string "热沙上继续！\l"
# 610 "data/maps/Route109/scripts.pory"
	.string "炎热训练家的地方！”$"
# 611 "data/maps/Route109/scripts.pory"

# 612 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign:
# 613 "data/maps/Route109/scripts.pory"
	.string "训练家提示\p"
# 614 "data/maps/Route109/scripts.pory"
	.string "有些区域要完成特定\n"
# 615 "data/maps/Route109/scripts.pory"
	.string "事件才会开放，\l"
# 616 "data/maps/Route109/scripts.pory"
	.string "比如拿到新的道馆徽章。$"
# 617 "data/maps/Route109/scripts.pory"

# 618 "data/maps/Route109/scripts.pory"

# 619 "data/maps/Route109/scripts.pory"
Route109_Text_ThanksForPlaying:
# 620 "data/maps/Route109/scripts.pory"
	.string "哟，训练家！\p"
# 621 "data/maps/Route109/scripts.pory"
	.string "看来你轻松打赢了\n"
# 622 "data/maps/Route109/scripts.pory"
	.string "海边小屋的训练家！\p"
# 623 "data/maps/Route109/scripts.pory"
	.string "谢谢你顺路来，随时\n"
# 624 "data/maps/Route109/scripts.pory"
	.string "欢迎再来挑战，哟！$"

Route109_EventScript_HotHouseGirl::
# 628 "data/maps/Route109/scripts.pory"
	lock
# 629 "data/maps/Route109/scripts.pory"
	faceplayer
# 630 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Route109_EventScript_SeashoreHouseGirlNoBadge
# 631 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HotHouseFullIntro
# 632 "data/maps/Route109/scripts.pory"
	closemessage
# 633 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	return


Route109_EventScript_WhichRewardMenu::
# 637 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_IntroQuestion
# 639 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_0, 2
# 641 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route109_EventScript_WhichRewardMenu_2
# 645 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_2, 3
Route109_EventScript_WhichRewardMenu_1:
# 648 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Route109_EventScript_WhichRewardMenu_6
# 652 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_4, 4
Route109_EventScript_WhichRewardMenu_5:
# 655 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, Route109_EventScript_WhichRewardMenu_10
# 659 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_6, 5
Route109_EventScript_WhichRewardMenu_9:
# 662 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Route109_EventScript_WhichRewardMenu_14
# 666 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_8, 6
Route109_EventScript_WhichRewardMenu_13:
# 669 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, Route109_EventScript_WhichRewardMenu_18
# 673 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_10, 7
Route109_EventScript_WhichRewardMenu_17:
# 676 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_11, MULTI_B_PRESSED
# 679 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 2, DYN_MULTICHOICE_CB_NONE
# 681 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_WhichRewardMenu_22
Route109_EventScript_WhichRewardMenu_21:
# 687 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 690 "data/maps/Route109/scripts.pory"
	specialvar VAR_0x8006, GetNumBadges
# 692 "data/maps/Route109/scripts.pory"
	compare VAR_0x8006, VAR_0x8005
# 693 "data/maps/Route109/scripts.pory"
	goto_if_lt Route109_EventScript_SorryNotEnoughBadges
# 694 "data/maps/Route109/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8005
# 696 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 2
	goto_if_eq Route109_EventScript_WhichRewardMenu_25
Route109_EventScript_WhichRewardMenu_24:
# 701 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 3
	goto_if_eq Route109_EventScript_WhichRewardMenu_28
Route109_EventScript_WhichRewardMenu_27:
# 706 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 4
	goto_if_eq Route109_EventScript_WhichRewardMenu_31
Route109_EventScript_WhichRewardMenu_30:
# 711 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 5
	goto_if_eq Route109_EventScript_WhichRewardMenu_34
Route109_EventScript_WhichRewardMenu_33:
# 716 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 6
	goto_if_eq Route109_EventScript_WhichRewardMenu_37
Route109_EventScript_WhichRewardMenu_36:
# 721 "data/maps/Route109/scripts.pory"
	compare VAR_0x8005, 7
	goto_if_eq Route109_EventScript_WhichRewardMenu_40
Route109_EventScript_WhichRewardMenu_39:
# 726 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HotHouseNo
	return

Route109_EventScript_WhichRewardMenu_2:
# 642 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_1, 3
	goto Route109_EventScript_WhichRewardMenu_1

Route109_EventScript_WhichRewardMenu_6:
# 649 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_3, 4
	goto Route109_EventScript_WhichRewardMenu_5

Route109_EventScript_WhichRewardMenu_10:
# 656 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_5, 5
	goto Route109_EventScript_WhichRewardMenu_9

Route109_EventScript_WhichRewardMenu_14:
# 663 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_7, 6
	goto Route109_EventScript_WhichRewardMenu_13

Route109_EventScript_WhichRewardMenu_18:
# 670 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_WhichRewardMenu_Text_9, 7
	goto Route109_EventScript_WhichRewardMenu_17

Route109_EventScript_WhichRewardMenu_22:
# 683 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HotHouseNo
	goto Route109_EventScript_WhichRewardMenu_21

Route109_EventScript_WhichRewardMenu_25:
# 698 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge2Options
	goto Route109_EventScript_WhichRewardMenu_24

Route109_EventScript_WhichRewardMenu_28:
# 703 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge3Options
	goto Route109_EventScript_WhichRewardMenu_27

Route109_EventScript_WhichRewardMenu_31:
# 708 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge4Options
	goto Route109_EventScript_WhichRewardMenu_30

Route109_EventScript_WhichRewardMenu_34:
# 713 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge5Options
	goto Route109_EventScript_WhichRewardMenu_33

Route109_EventScript_WhichRewardMenu_37:
# 718 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge6Options
	goto Route109_EventScript_WhichRewardMenu_36

Route109_EventScript_WhichRewardMenu_40:
# 723 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Badge7Options
	goto Route109_EventScript_WhichRewardMenu_39


Route109_EventScript_Badge2Options::
# 731 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 733 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_0, 1
# 734 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_1, 2
# 735 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_2, 3
# 736 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_3, 4
# 737 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 742 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 744 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge2Options_2
Route109_EventScript_Badge2Options_1:
# 750 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 751 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge2Options_2:
# 746 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge2Options_1


Route109_EventScript_Badge3Options::
# 756 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 758 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge3Options_Text_0, 5
# 759 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge3Options_Text_1, 6
# 760 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge3Options_Text_2, 7
# 761 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge3Options_Text_3, 8
# 762 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 767 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 5, DYN_MULTICHOICE_CB_NONE
# 769 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge3Options_2
Route109_EventScript_Badge3Options_1:
# 775 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 776 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge3Options_2:
# 771 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge3Options_1


Route109_EventScript_Badge4Options::
# 781 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 783 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge4Options_Text_0, 9
# 784 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge4Options_Text_1, 10
# 785 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge4Options_Text_2, 11
# 786 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge4Options_Text_3, 12
# 787 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 792 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 9, DYN_MULTICHOICE_CB_NONE
# 794 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge4Options_2
Route109_EventScript_Badge4Options_1:
# 800 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 801 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge4Options_2:
# 796 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge4Options_1


Route109_EventScript_Badge5Options::
# 806 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 808 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge5Options_Text_0, 13
# 809 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge5Options_Text_1, 14
# 810 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 815 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 13, DYN_MULTICHOICE_CB_NONE
# 817 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge5Options_2
Route109_EventScript_Badge5Options_1:
# 823 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 824 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge5Options_2:
# 819 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge5Options_1


Route109_EventScript_Badge6Options::
# 829 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 831 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge6Options_Text_0, 15
# 832 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 837 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 15, DYN_MULTICHOICE_CB_NONE
# 839 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge6Options_2
Route109_EventScript_Badge6Options_1:
# 845 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 846 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge6Options_2:
# 841 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge6Options_1


Route109_EventScript_Badge7Options::
# 851 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BadgeRewardsQuestion
# 853 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge7Options_Text_0, 16
# 854 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge7Options_Text_1, 17
# 855 "data/maps/Route109/scripts.pory"
	dynmultipush Route109_EventScript_Badge2Options_Text_4, MULTI_B_PRESSED
# 860 "data/maps/Route109/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 16, DYN_MULTICHOICE_CB_NONE
# 862 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route109_EventScript_Badge7Options_2
Route109_EventScript_Badge7Options_1:
# 868 "data/maps/Route109/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 869 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ConfirmAndEnterHotHouse
	return

Route109_EventScript_Badge7Options_2:
# 864 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_WhichRewardMenu
	goto Route109_EventScript_Badge7Options_1


Route109_EventScript_ConfirmAndEnterHotHouse::
# 874 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EnterCantLeave, MSGBOX_YESNO
# 876 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route109_EventScript_ConfirmAndEnterHotHouse_2
Route109_EventScript_ConfirmAndEnterHotHouse_1:
# 882 "data/maps/Route109/scripts.pory"
	copyvar VAR_HOT_HOUSE_STATE, VAR_0x8004
# 883 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 1
# 885 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GoodLuckTrainer, MSGBOX_DEFAULT
# 886 "data/maps/Route109/scripts.pory"
	closemessage
# 888 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 890 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_ConfirmAndEnterHotHouse_6
# 895 "data/maps/Route109/scripts.pory"
	case DIR_NORTH, Route109_EventScript_ConfirmAndEnterHotHouse_7
# 900 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_ConfirmAndEnterHotHouse_8
# 906 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 907 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 908 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepNorth
# 909 "data/maps/Route109/scripts.pory"
	waitmovement 0
Route109_EventScript_ConfirmAndEnterHotHouse_4:
# 913 "data/maps/Route109/scripts.pory"
	warp MAP_ROUTE109_SEASHORE_HOUSE, 6, 9
# 914 "data/maps/Route109/scripts.pory"
	waitstate
# 915 "data/maps/Route109/scripts.pory"
	release
	end

Route109_EventScript_ConfirmAndEnterHotHouse_2:
# 878 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HotHouseNo
	goto Route109_EventScript_ConfirmAndEnterHotHouse_1

Route109_EventScript_ConfirmAndEnterHotHouse_6:
# 891 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepEast
# 892 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 893 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepEast
# 894 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_ConfirmAndEnterHotHouse_4

Route109_EventScript_ConfirmAndEnterHotHouse_7:
# 896 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 897 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 898 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepNorth
# 899 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_ConfirmAndEnterHotHouse_4

Route109_EventScript_ConfirmAndEnterHotHouse_8:
# 901 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, HotHouseGirlUnblockStepWest
# 902 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 903 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterHotHouseStepWest
# 904 "data/maps/Route109/scripts.pory"
	waitmovement 0
	goto Route109_EventScript_ConfirmAndEnterHotHouse_4


Route109_EventScript_SeashoreHouseGirlNoBadge::
# 920 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PapasSpotGettingFixed
# 921 "data/maps/Route109/scripts.pory"
	release
	end


Route109_EventScript_HotHouseNo::
# 926 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HotHouseNo
# 927 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 928 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 929 "data/maps/Route109/scripts.pory"
	release
	end


Route109_EventScript_SorryNotEnoughBadges::
# 934 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SorryNotEnoughBadges
# 935 "data/maps/Route109/scripts.pory"
	setvar VAR_HOT_HOUSE_STATE, 0
# 936 "data/maps/Route109/scripts.pory"
	setvar VAR_ENTERING_HOT_HOUSE, 0
# 937 "data/maps/Route109/scripts.pory"
	release
	end


HotHouseGirlUnblockStepWest::
# 943 "data/maps/Route109/scripts.pory"
	walk_left
# 944 "data/maps/Route109/scripts.pory"
	face_right
# 945 "data/maps/Route109/scripts.pory"
	step_end
	return


HotHouseGirlUnblockStepEast::
# 950 "data/maps/Route109/scripts.pory"
	walk_right
# 951 "data/maps/Route109/scripts.pory"
	face_left
# 952 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepEast::
# 957 "data/maps/Route109/scripts.pory"
	walk_right
# 958 "data/maps/Route109/scripts.pory"
	walk_up
# 959 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepWest::
# 964 "data/maps/Route109/scripts.pory"
	walk_left
# 965 "data/maps/Route109/scripts.pory"
	walk_up
# 966 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnterHotHouseStepNorth::
# 971 "data/maps/Route109/scripts.pory"
	walk_up
# 972 "data/maps/Route109/scripts.pory"
	walk_up
# 973 "data/maps/Route109/scripts.pory"
	step_end
	return


PlayerEnteredHotHouse::
# 978 "data/maps/Route109/scripts.pory"
	walk_up
# 979 "data/maps/Route109/scripts.pory"
	step_end
	return


SetHotHouseGirlPermLoc::
# 983 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_LITTLE_GIRL, 11, 6
	end


Route109_EventScript_WhichRewardMenu_Text_0:
# 639 "data/maps/Route109/scripts.pory"
	.string "2枚徽章$"

Route109_EventScript_WhichRewardMenu_Text_1:
# 642 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}3枚徽章{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_WhichRewardMenu_Text_2:
# 645 "data/maps/Route109/scripts.pory"
	.string "3枚徽章$"

Route109_EventScript_WhichRewardMenu_Text_3:
# 649 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}4枚徽章{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_WhichRewardMenu_Text_4:
# 652 "data/maps/Route109/scripts.pory"
	.string "4枚徽章$"

Route109_EventScript_WhichRewardMenu_Text_5:
# 656 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}5枚徽章{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_WhichRewardMenu_Text_6:
# 659 "data/maps/Route109/scripts.pory"
	.string "5枚徽章$"

Route109_EventScript_WhichRewardMenu_Text_7:
# 663 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}6枚徽章{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_WhichRewardMenu_Text_8:
# 666 "data/maps/Route109/scripts.pory"
	.string "6枚徽章$"

Route109_EventScript_WhichRewardMenu_Text_9:
# 670 "data/maps/Route109/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}7枚徽章{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_EventScript_WhichRewardMenu_Text_10:
# 673 "data/maps/Route109/scripts.pory"
	.string "7枚徽章$"

Route109_EventScript_WhichRewardMenu_Text_11:
# 676 "data/maps/Route109/scripts.pory"
	.string "取消$"

Route109_EventScript_Badge2Options_Text_0:
# 733 "data/maps/Route109/scripts.pory"
	.string "无畏小子$"

Route109_EventScript_Badge2Options_Text_1:
# 734 "data/maps/Route109/scripts.pory"
	.string "花椰猴$"

Route109_EventScript_Badge2Options_Text_2:
# 735 "data/maps/Route109/scripts.pory"
	.string "冷水猴$"

Route109_EventScript_Badge2Options_Text_3:
# 736 "data/maps/Route109/scripts.pory"
	.string "爆香猴$"

Route109_EventScript_Badge2Options_Text_4:
# 737 "data/maps/Route109/scripts.pory"
	.string "返回$"

Route109_EventScript_Badge3Options_Text_0:
# 758 "data/maps/Route109/scripts.pory"
	.string "梦妖$"

Route109_EventScript_Badge3Options_Text_1:
# 759 "data/maps/Route109/scripts.pory"
	.string "凯罗斯$"

Route109_EventScript_Badge3Options_Text_2:
# 760 "data/maps/Route109/scripts.pory"
	.string "赫拉克罗斯$"

Route109_EventScript_Badge3Options_Text_3:
# 761 "data/maps/Route109/scripts.pory"
	.string "飞天螳螂$"

Route109_EventScript_Badge4Options_Text_0:
# 783 "data/maps/Route109/scripts.pory"
	.string "伊布$"

Route109_EventScript_Badge4Options_Text_1:
# 784 "data/maps/Route109/scripts.pory"
	.string "鸭嘴宝宝$"

Route109_EventScript_Badge4Options_Text_2:
# 785 "data/maps/Route109/scripts.pory"
	.string "电击怪$"

Route109_EventScript_Badge4Options_Text_3:
# 786 "data/maps/Route109/scripts.pory"
	.string "迷唇娃$"

Route109_EventScript_Badge5Options_Text_0:
# 808 "data/maps/Route109/scripts.pory"
	.string "利欧路$"

Route109_EventScript_Badge5Options_Text_1:
# 809 "data/maps/Route109/scripts.pory"
	.string "波克比$"

Route109_EventScript_Badge6Options_Text_0:
# 831 "data/maps/Route109/scripts.pory"
	.string "属性：空$"

Route109_EventScript_Badge7Options_Text_0:
# 853 "data/maps/Route109/scripts.pory"
	.string "炭小侍$"

Route109_EventScript_Badge7Options_Text_1:
# 854 "data/maps/Route109/scripts.pory"
	.string "化石翼龙$"

Route109_Text_PapasSpotGettingFixed::
# 987 "data/maps/Route109/scripts.pory"
	.string "哟，训练家！\p"
	.string "抱歉，我老爸的场子现在\n"
	.string "正在整修。\p"
	.string "不过之后一定要再来看看\n"
	.string "镇上最热火的场子！$"

Route109_Text_HotHouseFullIntro::
# 995 "data/maps/Route109/scripts.pory"
	.string "哟，训练家！\n"
	.string "看来你有实力闯进\l"
	.string "全新的热焰馆！\p"
	.string "我老爸把它彻底翻新了，\n"
	.string "现在奖励五花八门，不过\l"
	.string "你要是冲着更好的奖励去，\l"
	.string "里面的训练家也会更强！\p"
	.string "你也可以多次回来\n"
	.string "挑战热焰馆，\l"
	.string "随你多少次，{COLOR GREEN}{SHADOW LIGHT_GREEN}但要小心，因为\l"
	.string "一旦进去，就不能离开，\l"
	.string "也不能用便携电脑！{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route109_Text_IntroQuestion::
# 1010 "data/maps/Route109/scripts.pory"
	.string "你想参加哪个\n"
	.string "等级的奖励赛？$"

Route109_Text_BadgeRewardsQuestion::
# 1015 "data/maps/Route109/scripts.pory"
	.string "你想竞争哪只{STR_VAR_1}徽章\n"
	.string "奖励宝可梦？$"

Route109_Text_EnterCantLeave::
# 1020 "data/maps/Route109/scripts.pory"
	.string "明白了，训练家！\n"
	.string "老爸说我得在每个人进去前\l"
	.string "再提醒一遍：\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}进入热焰馆后，在全员倒下\n"
	.string "或打赢所有训练家之前，不能\l"
	.string "离开或使用电脑，{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}可以吗？$"

Route109_Text_GoodLuckTrainer::
# 1029 "data/maps/Route109/scripts.pory"
	.string "这才对嘛！\n"
	.string "你没问题的，训练家，\l"
	.string "祝你好运！$"

Route109_Text_HotHouseNo::
# 1036 "data/maps/Route109/scripts.pory"
	.string "没关系！你要是改主意，\n"
	.string "热焰馆随时开着！$"

Route109_Text_SorryNotEnoughBadges::
# 1041 "data/maps/Route109/scripts.pory"
	.string "看来你的徽章还不够\n"
	.string "参加那个等级的奖励赛。\l"
	.string "等你拿到更多徽章再来吧！$"
