# 1 "data/maps/Route116/scripts.pory"

# 2 "data/maps/Route116/scripts.pory"
.set LOCALID_BRINEY, 11
# 3 "data/maps/Route116/scripts.pory"
.set LOCALID_WANDAS_BF_OUTSIDE, 21
# 4 "data/maps/Route116/scripts.pory"
.set LOCALID_CANDICE, 29
# 5 "data/maps/Route116/scripts.pory"

# 6 "data/maps/Route116/scripts.pory"
Route116_MapScripts::
# 7 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route116_OnResume
# 8 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 9 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 10 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
# 11 "data/maps/Route116/scripts.pory"
	.byte 0
# 12 "data/maps/Route116/scripts.pory"

# 13 "data/maps/Route116/scripts.pory"
Route116_OnResume:
# 14 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route116_EventScript_TryRemoveTapuBulu
# 15 "data/maps/Route116/scripts.pory"
	end
# 16 "data/maps/Route116/scripts.pory"

# 17 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRemoveTapuBulu::
# 18 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 19 "data/maps/Route116/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 20 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 21 "data/maps/Route116/scripts.pory"
	return
# 22 "data/maps/Route116/scripts.pory"

# 23 "data/maps/Route116/scripts.pory"
Route116_OnTransition:
# 24 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 25 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 26 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
# 27 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
# 28 "data/maps/Route116/scripts.pory"
	call_if_unset FLAG_DEFEATED_TAPU_BULU, Route116_EventScript_ShowTapuBulu
# 29 "data/maps/Route116/scripts.pory"
	end
# 30 "data/maps/Route116/scripts.pory"

# 31 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 32 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_WANDAS_BF_OUTSIDE, 38, 10
# 33 "data/maps/Route116/scripts.pory"
	return
# 34 "data/maps/Route116/scripts.pory"

# 35 "data/maps/Route116/scripts.pory"
Route116_EventScript_ShowTapuBulu::
# 36 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_TAPU_BULU
# 37 "data/maps/Route116/scripts.pory"
	return
# 38 "data/maps/Route116/scripts.pory"

# 39 "data/maps/Route116/scripts.pory"
Route116_OnLoad:
# 40 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 41 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 42 "data/maps/Route116/scripts.pory"
	end
# 43 "data/maps/Route116/scripts.pory"

# 44 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 45 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 46 "data/maps/Route116/scripts.pory"
	.2byte 0
# 47 "data/maps/Route116/scripts.pory"

# 48 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 49 "data/maps/Route116/scripts.pory"
	lock
# 50 "data/maps/Route116/scripts.pory"
	faceplayer
# 51 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 52 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 53 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 54 "data/maps/Route116/scripts.pory"
	release
# 55 "data/maps/Route116/scripts.pory"
	end
# 56 "data/maps/Route116/scripts.pory"

# 57 "data/maps/Route116/scripts.pory"
Route116_EventScript_TapuBulu::
# 58 "data/maps/Route116/scripts.pory"
	lock
# 59 "data/maps/Route116/scripts.pory"
	faceplayer
# 60 "data/maps/Route116/scripts.pory"
	waitse
# 61 "data/maps/Route116/scripts.pory"
	playmoncry SPECIES_TAPU_BULU, CRY_MODE_ENCOUNTER
# 62 "data/maps/Route116/scripts.pory"
	delay 40
# 63 "data/maps/Route116/scripts.pory"
	waitmoncry
# 64 "data/maps/Route116/scripts.pory"
	setwildbattle SPECIES_TAPU_BULU, 70
# 65 "data/maps/Route116/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 66 "data/maps/Route116/scripts.pory"
	special StartRegiBattle
# 67 "data/maps/Route116/scripts.pory"
	waitstate
# 68 "data/maps/Route116/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 69 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route116_EventScript_DefeatedTapuBulu
# 71 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route116_EventScript_RanFromTapuBulu
# 72 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route116_EventScript_RanFromTapuBulu
# 73 "data/maps/Route116/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_BULU
# 74 "data/maps/Route116/scripts.pory"
	release
# 75 "data/maps/Route116/scripts.pory"
	end
# 76 "data/maps/Route116/scripts.pory"

# 77 "data/maps/Route116/scripts.pory"
Route116_EventScript_DefeatedTapuBulu::
# 78 "data/maps/Route116/scripts.pory"
	setflag FLAG_DEFEATED_TAPU_BULU
# 79 "data/maps/Route116/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 80 "data/maps/Route116/scripts.pory"
	end
# 81 "data/maps/Route116/scripts.pory"

# 82 "data/maps/Route116/scripts.pory"
Route116_EventScript_RanFromTapuBulu::
# 83 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, SPECIES_TAPU_BULU
# 84 "data/maps/Route116/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 85 "data/maps/Route116/scripts.pory"
	end
# 86 "data/maps/Route116/scripts.pory"

# 87 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 88 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 89 "data/maps/Route116/scripts.pory"
	release
# 90 "data/maps/Route116/scripts.pory"
	end
# 91 "data/maps/Route116/scripts.pory"

# 92 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 93 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 94 "data/maps/Route116/scripts.pory"
	release
# 95 "data/maps/Route116/scripts.pory"
	end
# 96 "data/maps/Route116/scripts.pory"

# 97 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 98 "data/maps/Route116/scripts.pory"
	lock
# 99 "data/maps/Route116/scripts.pory"
	faceplayer
# 100 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 101 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 102 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 103 "data/maps/Route116/scripts.pory"
	end
# 104 "data/maps/Route116/scripts.pory"

# 105 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 106 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 107 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 108 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
# 109 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 110 "data/maps/Route116/scripts.pory"
	closemessage
# 111 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 112 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 113 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 114 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 115 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 116 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 117 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 118 "data/maps/Route116/scripts.pory"
	release
# 119 "data/maps/Route116/scripts.pory"
	end
# 120 "data/maps/Route116/scripts.pory"

# 121 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 122 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 123 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route116/scripts.pory"
	return
# 125 "data/maps/Route116/scripts.pory"

# 126 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 127 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 128 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route116/scripts.pory"
	return
# 130 "data/maps/Route116/scripts.pory"

# 131 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 132 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 133 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 134 "data/maps/Route116/scripts.pory"
	end
# 135 "data/maps/Route116/scripts.pory"

# 136 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 137 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 138 "data/maps/Route116/scripts.pory"
	release
# 139 "data/maps/Route116/scripts.pory"
	end
# 140 "data/maps/Route116/scripts.pory"

# 141 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
# 142 "data/maps/Route116/scripts.pory"
	walk_left
# 143 "data/maps/Route116/scripts.pory"
	walk_left
# 144 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 146 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 148 "data/maps/Route116/scripts.pory"
	walk_left
# 149 "data/maps/Route116/scripts.pory"
	walk_left
# 150 "data/maps/Route116/scripts.pory"
	step_end
# 151 "data/maps/Route116/scripts.pory"

# 152 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 153 "data/maps/Route116/scripts.pory"
	walk_down
# 154 "data/maps/Route116/scripts.pory"
	walk_left
# 155 "data/maps/Route116/scripts.pory"
	walk_left
# 156 "data/maps/Route116/scripts.pory"
	walk_left
# 157 "data/maps/Route116/scripts.pory"
	walk_left
# 158 "data/maps/Route116/scripts.pory"
	walk_left
# 159 "data/maps/Route116/scripts.pory"
	walk_left
# 160 "data/maps/Route116/scripts.pory"
	walk_left
# 161 "data/maps/Route116/scripts.pory"
	walk_left
# 162 "data/maps/Route116/scripts.pory"
	walk_left
# 163 "data/maps/Route116/scripts.pory"
	step_end
# 164 "data/maps/Route116/scripts.pory"

# 165 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 166 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 167 "data/maps/Route116/scripts.pory"
	end
# 168 "data/maps/Route116/scripts.pory"

# 169 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 170 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 171 "data/maps/Route116/scripts.pory"
	end
# 172 "data/maps/Route116/scripts.pory"

# 173 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 174 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 175 "data/maps/Route116/scripts.pory"
	end
# 176 "data/maps/Route116/scripts.pory"

# 177 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 178 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 179 "data/maps/Route116/scripts.pory"
	end
# 180 "data/maps/Route116/scripts.pory"

# 181 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 182 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 183 "data/maps/Route116/scripts.pory"
	end
# 184 "data/maps/Route116/scripts.pory"

# 185 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 186 "data/maps/Route116/scripts.pory"
	lock
# 187 "data/maps/Route116/scripts.pory"
	faceplayer
# 188 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 189 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 190 "data/maps/Route116/scripts.pory"
	release
# 191 "data/maps/Route116/scripts.pory"
	end
# 192 "data/maps/Route116/scripts.pory"

# 193 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 194 "data/maps/Route116/scripts.pory"
	lockall
# 195 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 196 "data/maps/Route116/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 197 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 199 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 200 "data/maps/Route116/scripts.pory"
	releaseall
# 201 "data/maps/Route116/scripts.pory"
	end
# 202 "data/maps/Route116/scripts.pory"

# 203 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 204 "data/maps/Route116/scripts.pory"
	lock
# 205 "data/maps/Route116/scripts.pory"
	faceplayer
# 206 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 207 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
# 208 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 209 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesNotOnPlayer
# 210 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 211 "data/maps/Route116/scripts.pory"
	release
# 212 "data/maps/Route116/scripts.pory"
	end
# 213 "data/maps/Route116/scripts.pory"

# 214 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 215 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 216 "data/maps/Route116/scripts.pory"
	closemessage
# 217 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 218 "data/maps/Route116/scripts.pory"
	end
# 219 "data/maps/Route116/scripts.pory"

# 220 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 221 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 222 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 223 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 224 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesOnPlayer
# 225 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 226 "data/maps/Route116/scripts.pory"
	release
# 227 "data/maps/Route116/scripts.pory"
	end
# 228 "data/maps/Route116/scripts.pory"

# 229 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 230 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 231 "data/maps/Route116/scripts.pory"
	closemessage
# 232 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 233 "data/maps/Route116/scripts.pory"
	end
# 234 "data/maps/Route116/scripts.pory"

# 235 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 236 "data/maps/Route116/scripts.pory"
	delay 20
# 237 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 238 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 239 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 240 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 241 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 242 "data/maps/Route116/scripts.pory"
	release
# 243 "data/maps/Route116/scripts.pory"
	end
# 244 "data/maps/Route116/scripts.pory"

# 245 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 246 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 247 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route116/scripts.pory"
	return
# 249 "data/maps/Route116/scripts.pory"

# 250 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 251 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 252 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 253 "data/maps/Route116/scripts.pory"
	return
# 254 "data/maps/Route116/scripts.pory"

# 255 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
# 256 "data/maps/Route116/scripts.pory"
	walk_left
# 257 "data/maps/Route116/scripts.pory"
	walk_left
# 258 "data/maps/Route116/scripts.pory"
	walk_left
# 259 "data/maps/Route116/scripts.pory"
	walk_left
# 260 "data/maps/Route116/scripts.pory"
	walk_left
# 261 "data/maps/Route116/scripts.pory"
	walk_left
# 262 "data/maps/Route116/scripts.pory"
	walk_left
# 263 "data/maps/Route116/scripts.pory"
	walk_left
# 264 "data/maps/Route116/scripts.pory"
	walk_left
# 265 "data/maps/Route116/scripts.pory"
	step_end
# 266 "data/maps/Route116/scripts.pory"

# 267 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 268 "data/maps/Route116/scripts.pory"
	walk_up
# 269 "data/maps/Route116/scripts.pory"
	walk_left
# 270 "data/maps/Route116/scripts.pory"
	walk_left
# 271 "data/maps/Route116/scripts.pory"
	walk_left
# 272 "data/maps/Route116/scripts.pory"
	walk_left
# 273 "data/maps/Route116/scripts.pory"
	walk_left
# 274 "data/maps/Route116/scripts.pory"
	walk_left
# 275 "data/maps/Route116/scripts.pory"
	walk_left
# 276 "data/maps/Route116/scripts.pory"
	walk_left
# 277 "data/maps/Route116/scripts.pory"
	walk_left
# 278 "data/maps/Route116/scripts.pory"
	step_end
# 279 "data/maps/Route116/scripts.pory"

# 280 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 281 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 282 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/Route116/scripts.pory"
	end
# 284 "data/maps/Route116/scripts.pory"

# 285 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 286 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 287 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route116/scripts.pory"
	end
# 289 "data/maps/Route116/scripts.pory"

# 290 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 291 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 292 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 293 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchJerry
# 294 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 295 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 296 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterJerry
# 297 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 298 "data/maps/Route116/scripts.pory"
	release
# 299 "data/maps/Route116/scripts.pory"
	end
# 300 "data/maps/Route116/scripts.pory"

# 301 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 302 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 303 "data/maps/Route116/scripts.pory"
	release
# 304 "data/maps/Route116/scripts.pory"
	end
# 305 "data/maps/Route116/scripts.pory"

# 306 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 307 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 308 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 309 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 310 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 311 "data/maps/Route116/scripts.pory"
	release
# 312 "data/maps/Route116/scripts.pory"
	end
# 313 "data/maps/Route116/scripts.pory"

# 314 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 315 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 316 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 317 "data/maps/Route116/scripts.pory"
	release
# 318 "data/maps/Route116/scripts.pory"
	end
# 319 "data/maps/Route116/scripts.pory"

# 320 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 321 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 322 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 323 "data/maps/Route116/scripts.pory"
	release
# 324 "data/maps/Route116/scripts.pory"
	end
# 325 "data/maps/Route116/scripts.pory"

# 326 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 327 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 328 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route116/scripts.pory"
	end
# 330 "data/maps/Route116/scripts.pory"

# 331 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 332 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 333 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 334 "data/maps/Route116/scripts.pory"
	end
# 335 "data/maps/Route116/scripts.pory"

# 336 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 337 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 338 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 339 "data/maps/Route116/scripts.pory"
	end
# 340 "data/maps/Route116/scripts.pory"

# 341 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 342 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 343 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 344 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchKaren
# 345 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 346 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 347 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterKaren
# 348 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 349 "data/maps/Route116/scripts.pory"
	release
# 350 "data/maps/Route116/scripts.pory"
	end
# 351 "data/maps/Route116/scripts.pory"

# 352 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 353 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 354 "data/maps/Route116/scripts.pory"
	release
# 355 "data/maps/Route116/scripts.pory"
	end
# 356 "data/maps/Route116/scripts.pory"

# 357 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 358 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 359 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 360 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 361 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 362 "data/maps/Route116/scripts.pory"
	release
# 363 "data/maps/Route116/scripts.pory"
	end
# 364 "data/maps/Route116/scripts.pory"

# 365 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 366 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 367 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 368 "data/maps/Route116/scripts.pory"
	release
# 369 "data/maps/Route116/scripts.pory"
	end
# 370 "data/maps/Route116/scripts.pory"

# 371 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 372 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 373 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 374 "data/maps/Route116/scripts.pory"
	release
# 375 "data/maps/Route116/scripts.pory"
	end
# 376 "data/maps/Route116/scripts.pory"

# 377 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 378 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 379 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 380 "data/maps/Route116/scripts.pory"
	end
# 381 "data/maps/Route116/scripts.pory"

# 382 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 383 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 384 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 385 "data/maps/Route116/scripts.pory"
	end
# 386 "data/maps/Route116/scripts.pory"

# 387 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 388 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 389 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 390 "data/maps/Route116/scripts.pory"
	end
# 391 "data/maps/Route116/scripts.pory"

# 392 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 393 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 394 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 395 "data/maps/Route116/scripts.pory"
	end
# 396 "data/maps/Route116/scripts.pory"

# 397 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 398 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 399 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 400 "data/maps/Route116/scripts.pory"
	end
# 401 "data/maps/Route116/scripts.pory"

# 402 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 403 "data/maps/Route116/scripts.pory"
	.string "哦哦，我该怎么办啊？\p"
# 404 "data/maps/Route116/scripts.pory"
	.string "我和皮皮正在散步，\n"
# 405 "data/maps/Route116/scripts.pory"
	.string "突然被一个奇怪的\l"
# 406 "data/maps/Route116/scripts.pory"
	.string "混混缠上了……\p"
# 407 "data/maps/Route116/scripts.pory"
	.string "那混蛋把我心爱的\n"
# 408 "data/maps/Route116/scripts.pory"
	.string "皮皮抢走了！\p"
# 409 "data/maps/Route116/scripts.pory"
	.string "呜哇啊啊！皮皮！$"
# 410 "data/maps/Route116/scripts.pory"

# 411 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 412 "data/maps/Route116/scripts.pory"
	.string "嗯……吼！\p"
# 413 "data/maps/Route116/scripts.pory"
	.string "我想挖那个隧道！$"
# 414 "data/maps/Route116/scripts.pory"

# 415 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 416 "data/maps/Route116/scripts.pory"
	.string "嗯……吼！\n"
# 417 "data/maps/Route116/scripts.pory"
	.string "这是怎么了？\p"
# 418 "data/maps/Route116/scripts.pory"
	.string "我正徒手挖着隧道，\n"
# 419 "data/maps/Route116/scripts.pory"
	.string "就有个混混把我赶了出来！\p"
# 420 "data/maps/Route116/scripts.pory"
	.string "那个隧道里住着很多\n"
# 421 "data/maps/Route116/scripts.pory"
	.string "怕大声响的宝可梦，\l"
# 422 "data/maps/Route116/scripts.pory"
	.string "弄不好会闹起来。\p"
# 423 "data/maps/Route116/scripts.pory"
	.string "所以挖隧道时就不再用\n"
# 424 "data/maps/Route116/scripts.pory"
	.string "重型机械了……\p"
# 425 "data/maps/Route116/scripts.pory"
	.string "我怕那混混干出什么蠢事，\n"
# 426 "data/maps/Route116/scripts.pory"
	.string "把宝可梦惊得闹起来。$"
# 427 "data/maps/Route116/scripts.pory"

# 428 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 429 "data/maps/Route116/scripts.pory"
	.string "嗯……吼！\p"
# 430 "data/maps/Route116/scripts.pory"
	.string "那个傻混混从隧道里\n"
# 431 "data/maps/Route116/scripts.pory"
	.string "跑掉了！我又能挖了！$"
# 432 "data/maps/Route116/scripts.pory"

# 433 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 434 "data/maps/Route116/scripts.pory"
	.string "哦！是你！\p"
# 435 "data/maps/Route116/scripts.pory"
	.string "你就是那位在橙华森林\n"
# 436 "data/maps/Route116/scripts.pory"
	.string "帮了我，又帮我拿回被抢的\l"
# 437 "data/maps/Route116/scripts.pory"
	.string "包裹，还把它送到凯那市的\l"
# 438 "data/maps/Route116/scripts.pory"
	.string "那个人吧！\p"
# 439 "data/maps/Route116/scripts.pory"
	.string "斯图船长也通知我们\n"
# 440 "data/maps/Route116/scripts.pory"
	.string "包裹送到了！\p"
# 441 "data/maps/Route116/scripts.pory"
	.string "真是太感谢你了！\p"
# 442 "data/maps/Route116/scripts.pory"
	.string "如果我是雨云，一定会\n"
# 443 "data/maps/Route116/scripts.pory"
	.string "把感谢全下给你，\l"
# 444 "data/maps/Route116/scripts.pory"
	.string "把你当成英雄来赞美！\p"
# 445 "data/maps/Route116/scripts.pory"
	.string "对你这最棒的训练家，\n"
# 446 "data/maps/Route116/scripts.pory"
	.string "我有个好消息！\p"
# 447 "data/maps/Route116/scripts.pory"
	.string "最近我们公司开发了\n"
# 448 "data/maps/Route116/scripts.pory"
	.string "一种新的精灵球。\p"
# 449 "data/maps/Route116/scripts.pory"
	.string "作为一点心意，\n"
# 450 "data/maps/Route116/scripts.pory"
	.string "这是我们送给最棒的\l"
# 451 "data/maps/Route116/scripts.pory"
	.string "训练家的礼物！$"
# 452 "data/maps/Route116/scripts.pory"

# 453 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart:
# 454 "data/maps/Route116/scripts.pory"
	.string "我们的新精灵球将在\n"
# 455 "data/maps/Route116/scripts.pory"
	.string "卡那兹市的宝可梦商店发售。\p"
# 456 "data/maps/Route116/scripts.pory"
	.string "请一定要试试！\n"
# 457 "data/maps/Route116/scripts.pory"
	.string "谢谢，再见！$"
# 458 "data/maps/Route116/scripts.pory"

# 459 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 460 "data/maps/Route116/scripts.pory"
	.string "你的背包已经塞满了。\n"
# 461 "data/maps/Route116/scripts.pory"
	.string "这个重复球没法给你。$"
# 462 "data/maps/Route116/scripts.pory"

# 463 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 464 "data/maps/Route116/scripts.pory"
	.string "为了感谢你送来了包裹，\n"
# 465 "data/maps/Route116/scripts.pory"
	.string "我准备了一种新精灵球，\l"
# 466 "data/maps/Route116/scripts.pory"
	.string "送给最棒的你这位训练家！$"
# 467 "data/maps/Route116/scripts.pory"

# 468 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 469 "data/maps/Route116/scripts.pory"
	.string "我的眼镜掉了……\n"
# 470 "data/maps/Route116/scripts.pory"
	.string "你能帮我找找吗？$"
# 471 "data/maps/Route116/scripts.pory"

# 472 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses:
# 473 "data/maps/Route116/scripts.pory"
	.string "那副眼镜！\n"
# 474 "data/maps/Route116/scripts.pory"
	.string "能让我看一下吗？$"
# 475 "data/maps/Route116/scripts.pory"

# 476 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 477 "data/maps/Route116/scripts.pory"
	.string "嗯……\n"
# 478 "data/maps/Route116/scripts.pory"
	.string "这是黑色眼镜。\l"
# 479 "data/maps/Route116/scripts.pory"
	.string "不是我要找的东西……\p"
# 480 "data/maps/Route116/scripts.pory"
	.string "也许我的眼镜\n"
# 481 "data/maps/Route116/scripts.pory"
	.string "不在这附近……$"
# 482 "data/maps/Route116/scripts.pory"

# 483 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere:
# 484 "data/maps/Route116/scripts.pory"
	.string "嗯……\n"
# 485 "data/maps/Route116/scripts.pory"
	.string "哪里都找不到我的眼镜……\l"
# 486 "data/maps/Route116/scripts.pory"
	.string "也许不在这附近……$"
# 487 "data/maps/Route116/scripts.pory"

# 488 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor:
# 489 "data/maps/Route116/scripts.pory"
	.string "嗯……\n"
# 490 "data/maps/Route116/scripts.pory"
	.string "这是黑色眼镜。\l"
# 491 "data/maps/Route116/scripts.pory"
	.string "不是我要找的东西……$"
# 492 "data/maps/Route116/scripts.pory"

# 493 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 494 "data/maps/Route116/scripts.pory"
	.string "116号道路\n"
# 495 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} 卡那兹市$"
# 496 "data/maps/Route116/scripts.pory"

# 497 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 498 "data/maps/Route116/scripts.pory"
	.string "碎石隧道\n"
# 499 "data/maps/Route116/scripts.pory"
	.string "“连接卡那兹与绿荫\p"
# 500 "data/maps/Route116/scripts.pory"
	.string "“隧道工程已经\n"
# 501 "data/maps/Route116/scripts.pory"
	.string "取消了。”$"
# 502 "data/maps/Route116/scripts.pory"

# 503 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 504 "data/maps/Route116/scripts.pory"
	.string "隧道工人休息屋$"
# 505 "data/maps/Route116/scripts.pory"

# 506 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 507 "data/maps/Route116/scripts.pory"
	.string "训练家入门\p"
# 508 "data/maps/Route116/scripts.pory"
	.string "按“L”键就能打开一个\n"
# 509 "data/maps/Route116/scripts.pory"
	.string "很好用的第二菜单。$"
# 510 "data/maps/Route116/scripts.pory"

# 511 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 512 "data/maps/Route116/scripts.pory"
	.string "训练家入门\p"
# 513 "data/maps/Route116/scripts.pory"
	.string "学习器可以反复使用\n"
# 514 "data/maps/Route116/scripts.pory"
	.string "任意多次。$"

Route116_EventScript_Candice::
# 519 "data/maps/Route116/scripts.pory"
	lockall
# 520 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_CANDICE, Common_Movement_FacePlayer
# 521 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ICY_WIND, Route116_EventScript_CandiceDefeated
# 522 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route116_EventScript_CandiceRequestBattleAgain
# 523 "data/maps/Route116/scripts.pory"
	msgbox Candice_Greeting, MSGBOX_DEFAULT
# 524 "data/maps/Route116/scripts.pory"
	waitmessage
# 525 "data/maps/Route116/scripts.pory"
	msgbox Candice_WillYouBattleMe, MSGBOX_YESNO
# 526 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_BattleCandicePrompt
	end


Route116_EventScript_CandiceRequestBattleAgain::
# 531 "data/maps/Route116/scripts.pory"
	msgbox Ready_Yet, MSGBOX_YESNO
# 532 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_BattleCandicePrompt
	end


Route116_EventScript_BattleCandicePrompt::
# 537 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route116_EventScript_BattleCandice
# 538 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route116_EventScript_DeclineCandiceBattle
# 539 "data/maps/Route116/scripts.pory"
	closemessage
	end


Route116_EventScript_DeclineCandiceBattle::
# 544 "data/maps/Route116/scripts.pory"
	setflag FLAG_TEMP_1
# 545 "data/maps/Route116/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 546 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_BattleCandice::
# 551 "data/maps/Route116/scripts.pory"
	msgbox Route116_EventScript_BattleCandice_Text_0, MSGBOX_DEFAULT
# 552 "data/maps/Route116/scripts.pory"
	trainerbattle_no_intro TRAINER_CANDICE, Candice_Outro
# 553 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_CandiceGiveRockTomb
	return


Route116_EventScript_CandiceDefeated::
# 559 "data/maps/Route116/scripts.pory"
	msgbox PostBattle_Candice, MSGBOX_DEFAULT
# 560 "data/maps/Route116/scripts.pory"
	releaseall
	end


Route116_EventScript_CandiceGiveRockTomb::
# 565 "data/maps/Route116/scripts.pory"
	giveitem ITEM_TM_ICY_WIND
# 566 "data/maps/Route116/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 567 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_TM_ICY_WIND
# 568 "data/maps/Route116/scripts.pory"
	msgbox Candice_ExplainRockTombAndMuscleBand
# 569 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_BattleCandice_Text_0:
# 551 "data/maps/Route116/scripts.pory"
	.string "来吧！$"

Candice_ExplainRockTombAndMuscleBand::
# 573 "data/maps/Route116/scripts.pory"
	.string "这个招式学习器21号，\n"
	.string "里面装着冰冻之风。\p"
	.string "它不只以寒气造成伤害，\n"
	.string "还会降低速度。\p"
	.string "你对付这儿的第一个\n"
	.string "道馆馆主时会用得上！\p"
	.string "使用学习器，就能立刻\n"
	.string "让宝可梦学会招式。\p"
	.string "多亏了技术的\n"
	.string "进步，现在学习器\l"
	.string "想用多少次都行！\p"
	.string "而力量头带能提高持有者的\n"
	.string "攻击！$"

Candice_Greeting::
# 589 "data/maps/Route116/scripts.pory"
	.string "哦，你好。我是小菘，神奥地区\n"
	.string "的第七位道馆馆主。\p"
	.string "我来卡那兹市，是想\n"
	.string "参观训练家学校，看看\l"
	.string "丰缘地区这里的\l"
	.string "教育水准。\p"
	.string "我自己也是老师哦！\p"
	.string "你看起来像刚踏上旅程的\n"
	.string "训练家，要不要先和我\l"
	.string "打一场，当作第一次\l"
	.string "道馆挑战的热身？$"

Candice_WillYouBattleMe::
# 603 "data/maps/Route116/scripts.pory"
	.string "放心，我带的是等级较低的\n"
	.string "队伍，以防遇到有前途的\l"
	.string "新训练家，所以你不用\l"
	.string "面对我的全部实力！\p"
	.string "来打一场怎么样？$"

Candice_Outro::
# 611 "data/maps/Route116/scripts.pory"
	.string "看来这儿的训练家\n"
	.string "都很强！请收下这些，\l"
	.string "算打赢我的奖励。$"

PostBattle_Candice::
# 618 "data/maps/Route116/scripts.pory"
	.string "看来丰缘这里的教育\n"
	.string "水准不比神奥差！$"

Ready_Yet::
# 623 "data/maps/Route116/scripts.pory"
	.string "准备好对战了吗？$"

Come_Back_When_Ready::
# 627 "data/maps/Route116/scripts.pory"
	.string "准备好了再来。$"
