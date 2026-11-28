# 1 "data/maps/RustboroCity/scripts.pory"

# 2 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 3 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 4 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 5 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 6 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 7 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 8 "data/maps/RustboroCity/scripts.pory"

# 9 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 10 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 11 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 12 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 13 "data/maps/RustboroCity/scripts.pory"

# 14 "data/maps/RustboroCity/scripts.pory"

# 15 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 16 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 17 "data/maps/RustboroCity/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 18 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 19 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 20 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 21 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 22 "data/maps/RustboroCity/scripts.pory"
	end
# 23 "data/maps/RustboroCity/scripts.pory"

# 24 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 25 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 26 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 27 "data/maps/RustboroCity/scripts.pory"
	end
# 28 "data/maps/RustboroCity/scripts.pory"

# 29 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 30 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 31 "data/maps/RustboroCity/scripts.pory"
	end
# 32 "data/maps/RustboroCity/scripts.pory"

# 33 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 34 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 35 "data/maps/RustboroCity/scripts.pory"
	return
# 36 "data/maps/RustboroCity/scripts.pory"

# 37 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 38 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 39 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 40 "data/maps/RustboroCity/scripts.pory"

# 41 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 42 "data/maps/RustboroCity/scripts.pory"
	lockall
# 43 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 44 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 45 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 47 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 48 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 49 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 50 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 51 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 52 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 53 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 55 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 59 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 62 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 63 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 64 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 66 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 67 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 68 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 69 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 70 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 71 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 72 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 73 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 74 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 76 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 77 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 78 "data/maps/RustboroCity/scripts.pory"

# 79 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 80 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 81 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 82 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 83 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 84 "data/maps/RustboroCity/scripts.pory"

# 85 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 86 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 87 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 88 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 90 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 91 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 92 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 93 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 94 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 95 "data/maps/RustboroCity/scripts.pory"
	end
# 96 "data/maps/RustboroCity/scripts.pory"

# 97 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 98 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 99 "data/maps/RustboroCity/scripts.pory"
	step_end
# 100 "data/maps/RustboroCity/scripts.pory"

# 101 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 102 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 103 "data/maps/RustboroCity/scripts.pory"
	step_end
# 104 "data/maps/RustboroCity/scripts.pory"

# 105 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 106 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 107 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 108 "data/maps/RustboroCity/scripts.pory"
	step_end
# 109 "data/maps/RustboroCity/scripts.pory"

# 110 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 111 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 112 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 113 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 114 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 115 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 116 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 117 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 118 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 119 "data/maps/RustboroCity/scripts.pory"
	step_end
# 120 "data/maps/RustboroCity/scripts.pory"

# 121 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 122 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 123 "data/maps/RustboroCity/scripts.pory"
	step_end
# 124 "data/maps/RustboroCity/scripts.pory"

# 125 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 126 "data/maps/RustboroCity/scripts.pory"
	lock
# 127 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 128 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 129 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 130 "data/maps/RustboroCity/scripts.pory"
	release
# 131 "data/maps/RustboroCity/scripts.pory"
	end
# 132 "data/maps/RustboroCity/scripts.pory"

# 133 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 134 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 135 "data/maps/RustboroCity/scripts.pory"
	release
# 136 "data/maps/RustboroCity/scripts.pory"
	end
# 137 "data/maps/RustboroCity/scripts.pory"

# 138 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 139 "data/maps/RustboroCity/scripts.pory"
	lock
# 140 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 141 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 142 "data/maps/RustboroCity/scripts.pory"
	release
# 143 "data/maps/RustboroCity/scripts.pory"
	end
# 144 "data/maps/RustboroCity/scripts.pory"

# 145 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 146 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 147 "data/maps/RustboroCity/scripts.pory"
	end
# 148 "data/maps/RustboroCity/scripts.pory"

# 149 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 150 "data/maps/RustboroCity/scripts.pory"
	lock
# 151 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 152 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 153 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 154 "data/maps/RustboroCity/scripts.pory"
	release
# 155 "data/maps/RustboroCity/scripts.pory"
	end
# 156 "data/maps/RustboroCity/scripts.pory"

# 157 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 158 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 159 "data/maps/RustboroCity/scripts.pory"
	release
# 160 "data/maps/RustboroCity/scripts.pory"
	end
# 161 "data/maps/RustboroCity/scripts.pory"

# 162 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 163 "data/maps/RustboroCity/scripts.pory"
	lock
# 164 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 165 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 166 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 167 "data/maps/RustboroCity/scripts.pory"
	release
# 168 "data/maps/RustboroCity/scripts.pory"
	end
# 169 "data/maps/RustboroCity/scripts.pory"

# 170 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 171 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 172 "data/maps/RustboroCity/scripts.pory"
	release
# 173 "data/maps/RustboroCity/scripts.pory"
	end
# 174 "data/maps/RustboroCity/scripts.pory"

# 175 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 176 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 177 "data/maps/RustboroCity/scripts.pory"
	end
# 178 "data/maps/RustboroCity/scripts.pory"

# 179 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 180 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 181 "data/maps/RustboroCity/scripts.pory"
	end
# 182 "data/maps/RustboroCity/scripts.pory"

# 183 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 184 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 185 "data/maps/RustboroCity/scripts.pory"
	end
# 186 "data/maps/RustboroCity/scripts.pory"

# 187 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 188 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 189 "data/maps/RustboroCity/scripts.pory"
	end
# 190 "data/maps/RustboroCity/scripts.pory"

# 191 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 192 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 193 "data/maps/RustboroCity/scripts.pory"
	end
# 194 "data/maps/RustboroCity/scripts.pory"

# 195 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 196 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 197 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 198 "data/maps/RustboroCity/scripts.pory"
	end
# 199 "data/maps/RustboroCity/scripts.pory"

# 200 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 201 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 202 "data/maps/RustboroCity/scripts.pory"
	end
# 203 "data/maps/RustboroCity/scripts.pory"

# 204 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 205 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 206 "data/maps/RustboroCity/scripts.pory"
	end
# 207 "data/maps/RustboroCity/scripts.pory"

# 208 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 209 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 210 "data/maps/RustboroCity/scripts.pory"
	end
# 211 "data/maps/RustboroCity/scripts.pory"

# 212 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 213 "data/maps/RustboroCity/scripts.pory"
	lock
# 214 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 215 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 216 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 217 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 218 "data/maps/RustboroCity/scripts.pory"
	release
# 219 "data/maps/RustboroCity/scripts.pory"
	end
# 220 "data/maps/RustboroCity/scripts.pory"

# 221 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 222 "data/maps/RustboroCity/scripts.pory"
	lock
# 223 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 224 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 225 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 226 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 227 "data/maps/RustboroCity/scripts.pory"
	release
# 228 "data/maps/RustboroCity/scripts.pory"
	end
# 229 "data/maps/RustboroCity/scripts.pory"

# 230 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 231 "data/maps/RustboroCity/scripts.pory"
	lock
# 232 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 233 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 234 "data/maps/RustboroCity/scripts.pory"
	release
# 235 "data/maps/RustboroCity/scripts.pory"
	end
# 236 "data/maps/RustboroCity/scripts.pory"

# 237 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 238 "data/maps/RustboroCity/scripts.pory"
	lockall
# 239 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 240 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 241 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 242 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 243 "data/maps/RustboroCity/scripts.pory"
	end
# 244 "data/maps/RustboroCity/scripts.pory"

# 245 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 246 "data/maps/RustboroCity/scripts.pory"
	lockall
# 247 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 248 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 249 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 250 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 251 "data/maps/RustboroCity/scripts.pory"
	end
# 252 "data/maps/RustboroCity/scripts.pory"

# 253 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 254 "data/maps/RustboroCity/scripts.pory"
	lockall
# 255 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 256 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 257 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 258 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 259 "data/maps/RustboroCity/scripts.pory"
	end
# 260 "data/maps/RustboroCity/scripts.pory"

# 261 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 262 "data/maps/RustboroCity/scripts.pory"
	lockall
# 263 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 264 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 265 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 266 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 267 "data/maps/RustboroCity/scripts.pory"
	end
# 268 "data/maps/RustboroCity/scripts.pory"

# 269 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 270 "data/maps/RustboroCity/scripts.pory"
	lockall
# 271 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 272 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 273 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 274 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 275 "data/maps/RustboroCity/scripts.pory"
	end
# 276 "data/maps/RustboroCity/scripts.pory"

# 277 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 278 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 279 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 280 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 281 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 282 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 283 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 284 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 286 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 287 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 288 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 289 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 290 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 291 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 292 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 293 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 294 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 295 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 296 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 297 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 298 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 299 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 300 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 301 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 302 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 303 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 304 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 305 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 306 "data/maps/RustboroCity/scripts.pory"
	end
# 307 "data/maps/RustboroCity/scripts.pory"

# 308 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 309 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 310 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 311 "data/maps/RustboroCity/scripts.pory"
	return
# 312 "data/maps/RustboroCity/scripts.pory"

# 313 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 314 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 315 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 316 "data/maps/RustboroCity/scripts.pory"
	return
# 317 "data/maps/RustboroCity/scripts.pory"

# 318 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 319 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 320 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 321 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/RustboroCity/scripts.pory"
	return
# 323 "data/maps/RustboroCity/scripts.pory"

# 324 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 325 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 326 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 327 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/RustboroCity/scripts.pory"
	return
# 329 "data/maps/RustboroCity/scripts.pory"

# 330 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 331 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 332 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 333 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 334 "data/maps/RustboroCity/scripts.pory"
	return
# 335 "data/maps/RustboroCity/scripts.pory"

# 336 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 337 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 338 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 339 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/RustboroCity/scripts.pory"
	return
# 341 "data/maps/RustboroCity/scripts.pory"

# 342 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 343 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 344 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 345 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 347 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 348 "data/maps/RustboroCity/scripts.pory"
	return
# 349 "data/maps/RustboroCity/scripts.pory"

# 350 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 351 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 352 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 353 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 354 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 356 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 357 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 358 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 359 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 360 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 361 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 362 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 363 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 364 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 365 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 366 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 367 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 368 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 369 "data/maps/RustboroCity/scripts.pory"
	step_end
# 370 "data/maps/RustboroCity/scripts.pory"

# 371 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 381 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 388 "data/maps/RustboroCity/scripts.pory"
	step_end
# 389 "data/maps/RustboroCity/scripts.pory"

# 390 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 398 "data/maps/RustboroCity/scripts.pory"
	step_end
# 399 "data/maps/RustboroCity/scripts.pory"

# 400 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 404 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 405 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 408 "data/maps/RustboroCity/scripts.pory"
	step_end
# 409 "data/maps/RustboroCity/scripts.pory"

# 410 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 411 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 415 "data/maps/RustboroCity/scripts.pory"
	step_end
# 416 "data/maps/RustboroCity/scripts.pory"

# 417 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 418 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 423 "data/maps/RustboroCity/scripts.pory"
	step_end
# 424 "data/maps/RustboroCity/scripts.pory"

# 425 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 426 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 428 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 429 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 430 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 431 "data/maps/RustboroCity/scripts.pory"
	step_end
# 432 "data/maps/RustboroCity/scripts.pory"

# 433 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 434 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 440 "data/maps/RustboroCity/scripts.pory"
	step_end
# 441 "data/maps/RustboroCity/scripts.pory"

# 442 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 443 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 448 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 449 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 450 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 451 "data/maps/RustboroCity/scripts.pory"
	step_end
# 452 "data/maps/RustboroCity/scripts.pory"

# 453 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 454 "data/maps/RustboroCity/scripts.pory"
	lock
# 455 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 456 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 457 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 458 "data/maps/RustboroCity/scripts.pory"
	release
# 459 "data/maps/RustboroCity/scripts.pory"
	end
# 460 "data/maps/RustboroCity/scripts.pory"

# 461 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 462 "data/maps/RustboroCity/scripts.pory"
	waitse
# 463 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 464 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 465 "data/maps/RustboroCity/scripts.pory"
	end
# 466 "data/maps/RustboroCity/scripts.pory"

# 467 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 468 "data/maps/RustboroCity/scripts.pory"
	lockall
# 469 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 470 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 471 "data/maps/RustboroCity/scripts.pory"
	end
# 472 "data/maps/RustboroCity/scripts.pory"

# 473 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 474 "data/maps/RustboroCity/scripts.pory"
	lockall
# 475 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 476 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 477 "data/maps/RustboroCity/scripts.pory"
	end
# 478 "data/maps/RustboroCity/scripts.pory"

# 479 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 480 "data/maps/RustboroCity/scripts.pory"
	lockall
# 481 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 482 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 483 "data/maps/RustboroCity/scripts.pory"
	end
# 484 "data/maps/RustboroCity/scripts.pory"

# 485 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 486 "data/maps/RustboroCity/scripts.pory"
	lockall
# 487 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 488 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 489 "data/maps/RustboroCity/scripts.pory"
	end
# 490 "data/maps/RustboroCity/scripts.pory"

# 491 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 492 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 493 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 494 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 495 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 496 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 497 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 498 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 499 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 500 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 501 "data/maps/RustboroCity/scripts.pory"
	end
# 502 "data/maps/RustboroCity/scripts.pory"

# 503 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 504 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 505 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 506 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 507 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 508 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 509 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 511 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 512 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 513 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 514 "data/maps/RustboroCity/scripts.pory"
	return
# 515 "data/maps/RustboroCity/scripts.pory"

# 516 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 517 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 518 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 520 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 521 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 522 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 523 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 525 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/RustboroCity/scripts.pory"
	return
# 527 "data/maps/RustboroCity/scripts.pory"

# 528 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 532 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 533 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 535 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 537 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/RustboroCity/scripts.pory"
	return
# 539 "data/maps/RustboroCity/scripts.pory"

# 540 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 541 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 542 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 544 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 545 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 547 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 549 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 551 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/RustboroCity/scripts.pory"
	return
# 553 "data/maps/RustboroCity/scripts.pory"

# 554 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 555 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 556 "data/maps/RustboroCity/scripts.pory"
	step_end
# 557 "data/maps/RustboroCity/scripts.pory"

# 558 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 559 "data/maps/RustboroCity/scripts.pory"
	lockall
# 560 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 561 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 562 "data/maps/RustboroCity/scripts.pory"
	end
# 563 "data/maps/RustboroCity/scripts.pory"

# 564 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 565 "data/maps/RustboroCity/scripts.pory"
	lockall
# 566 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 567 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 568 "data/maps/RustboroCity/scripts.pory"
	end
# 569 "data/maps/RustboroCity/scripts.pory"

# 570 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 571 "data/maps/RustboroCity/scripts.pory"
	lockall
# 572 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 573 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 574 "data/maps/RustboroCity/scripts.pory"
	end
# 575 "data/maps/RustboroCity/scripts.pory"

# 576 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 577 "data/maps/RustboroCity/scripts.pory"
	lockall
# 578 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 579 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 580 "data/maps/RustboroCity/scripts.pory"
	end
# 581 "data/maps/RustboroCity/scripts.pory"

# 582 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 583 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 584 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 585 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 586 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 587 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 588 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 589 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 590 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 591 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 592 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 593 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 594 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 595 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 596 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 597 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 598 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 599 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 600 "data/maps/RustboroCity/scripts.pory"
	end
# 601 "data/maps/RustboroCity/scripts.pory"

# 602 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 603 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 604 "data/maps/RustboroCity/scripts.pory"
	return
# 605 "data/maps/RustboroCity/scripts.pory"

# 606 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 607 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 608 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 609 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 610 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 611 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 612 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 613 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 615 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 616 "data/maps/RustboroCity/scripts.pory"
	return
# 617 "data/maps/RustboroCity/scripts.pory"

# 618 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 619 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 620 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 621 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 622 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 623 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 624 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 625 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 627 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 628 "data/maps/RustboroCity/scripts.pory"
	return
# 629 "data/maps/RustboroCity/scripts.pory"

# 630 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 631 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 632 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 634 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 635 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 636 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 637 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 639 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/RustboroCity/scripts.pory"
	return
# 641 "data/maps/RustboroCity/scripts.pory"

# 642 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 644 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 646 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 647 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 649 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 651 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 653 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 654 "data/maps/RustboroCity/scripts.pory"
	return
# 655 "data/maps/RustboroCity/scripts.pory"

# 656 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 657 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 658 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 660 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 661 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 663 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/RustboroCity/scripts.pory"
	return
# 665 "data/maps/RustboroCity/scripts.pory"

# 666 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 667 "data/maps/RustboroCity/scripts.pory"
	lockall
# 668 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 669 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 670 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 672 "data/maps/RustboroCity/scripts.pory"

# 673 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 674 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 675 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 676 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 677 "data/maps/RustboroCity/scripts.pory"
	return
# 678 "data/maps/RustboroCity/scripts.pory"

# 679 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 680 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 681 "data/maps/RustboroCity/scripts.pory"
	return
# 682 "data/maps/RustboroCity/scripts.pory"

# 683 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 684 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 685 "data/maps/RustboroCity/scripts.pory"
	return
# 686 "data/maps/RustboroCity/scripts.pory"

# 687 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 688 "data/maps/RustboroCity/scripts.pory"
	lockall
# 689 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 690 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 691 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 692 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 693 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 694 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 695 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 696 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 697 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 698 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 699 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 700 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 701 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 702 "data/maps/RustboroCity/scripts.pory"

# 703 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 704 "data/maps/RustboroCity/scripts.pory"
	lockall
# 705 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 706 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 707 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 708 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 709 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 710 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 711 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 712 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 713 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 714 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 716 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 718 "data/maps/RustboroCity/scripts.pory"

# 719 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 720 "data/maps/RustboroCity/scripts.pory"
	lockall
# 721 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 722 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 723 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 724 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 725 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 726 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 727 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 728 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 730 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 732 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 734 "data/maps/RustboroCity/scripts.pory"

# 735 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 736 "data/maps/RustboroCity/scripts.pory"
	lockall
# 737 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 738 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 739 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 740 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 741 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 742 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 743 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 744 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 746 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 748 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 750 "data/maps/RustboroCity/scripts.pory"

# 751 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 752 "data/maps/RustboroCity/scripts.pory"
	lockall
# 753 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 754 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 755 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 756 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 757 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 758 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 759 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 760 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 761 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 762 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 764 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 765 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 766 "data/maps/RustboroCity/scripts.pory"

# 767 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 768 "data/maps/RustboroCity/scripts.pory"
	lockall
# 769 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 770 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 771 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 772 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 773 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 774 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 775 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 776 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 780 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 782 "data/maps/RustboroCity/scripts.pory"

# 783 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 784 "data/maps/RustboroCity/scripts.pory"
	lockall
# 785 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 786 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 787 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 788 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 789 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 790 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 791 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 792 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 796 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 798 "data/maps/RustboroCity/scripts.pory"

# 799 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 800 "data/maps/RustboroCity/scripts.pory"
	lockall
# 801 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 802 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 803 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 804 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 805 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 806 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 807 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 808 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 812 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 813 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 814 "data/maps/RustboroCity/scripts.pory"

# 815 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 816 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 817 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 818 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 819 "data/maps/RustboroCity/scripts.pory"
	end
# 820 "data/maps/RustboroCity/scripts.pory"

# 821 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 822 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 823 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 824 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 825 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 826 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 827 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 828 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 829 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 830 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 831 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 832 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 833 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 834 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 835 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 836 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 837 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleMay2
# 838 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 839 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 840 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 841 "data/maps/RustboroCity/scripts.pory"
	end
# 842 "data/maps/RustboroCity/scripts.pory"

# 843 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 844 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 845 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 846 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 847 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleMay2
# 848 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 849 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 850 "data/maps/RustboroCity/scripts.pory"
	end
# 851 "data/maps/RustboroCity/scripts.pory"

# 852 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 853 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 854 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 855 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 856 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 857 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 858 "data/maps/RustboroCity/scripts.pory"
	end
# 859 "data/maps/RustboroCity/scripts.pory"

# 860 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay2::
# 861 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TooBad, MSGBOX_DEFAULT
# 862 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 863 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 864 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 865 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 866 "data/maps/RustboroCity/scripts.pory"
	end
# 867 "data/maps/RustboroCity/scripts.pory"

# 868 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 869 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 870 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 871 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 872 "data/maps/RustboroCity/scripts.pory"
	end
# 873 "data/maps/RustboroCity/scripts.pory"

# 874 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage::
# 875 "data/maps/RustboroCity/scripts.pory"
    msgbox RustboroCity_Text_RivalExplainFlyFromPokeNav
# 876 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 877 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 878 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 879 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 880 "data/maps/RustboroCity/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 881 "data/maps/RustboroCity/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 882 "data/maps/RustboroCity/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 883 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 884 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 885 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 886 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 887 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 888 "data/maps/RustboroCity/scripts.pory"
	end
# 889 "data/maps/RustboroCity/scripts.pory"

# 890 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 891 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 892 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 893 "data/maps/RustboroCity/scripts.pory"
	return
# 894 "data/maps/RustboroCity/scripts.pory"

# 895 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 896 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 897 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 898 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 899 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 900 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 901 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 902 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 903 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 904 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage
# 905 "data/maps/RustboroCity/scripts.pory"
	end
# 906 "data/maps/RustboroCity/scripts.pory"

# 907 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 908 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 909 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 910 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 911 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 912 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 913 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 914 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 915 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 916 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage
# 917 "data/maps/RustboroCity/scripts.pory"
	end
# 918 "data/maps/RustboroCity/scripts.pory"

# 919 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 920 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 921 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 922 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 923 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 924 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 925 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 926 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 927 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 928 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHintWithLevelCapMessage
# 929 "data/maps/RustboroCity/scripts.pory"
	end
# 930 "data/maps/RustboroCity/scripts.pory"

# 931 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 932 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 933 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 934 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 935 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 936 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 937 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 938 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 939 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 940 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 941 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 942 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 943 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 944 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 945 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 946 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 947 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleBrendan2
# 948 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 949 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 950 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 951 "data/maps/RustboroCity/scripts.pory"
	end
# 952 "data/maps/RustboroCity/scripts.pory"

# 953 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 954 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 955 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 956 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 957 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_EventScript_BattleBrendan2
# 958 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 959 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 960 "data/maps/RustboroCity/scripts.pory"
	end
# 961 "data/maps/RustboroCity/scripts.pory"

# 962 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 963 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 964 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 965 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 966 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 967 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 968 "data/maps/RustboroCity/scripts.pory"
	end
# 969 "data/maps/RustboroCity/scripts.pory"

# 970 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan2::
# 971 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TooBad, MSGBOX_DEFAULT
# 972 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 973 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 974 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 975 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 976 "data/maps/RustboroCity/scripts.pory"
	end
# 977 "data/maps/RustboroCity/scripts.pory"

# 978 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 979 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 980 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 981 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 982 "data/maps/RustboroCity/scripts.pory"
	end
# 983 "data/maps/RustboroCity/scripts.pory"

# 984 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage::
# 985 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RivalExplainFlyFromPokeNav, MSGBOX_DEFAULT
# 986 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 987 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 988 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 989 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 990 "data/maps/RustboroCity/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 991 "data/maps/RustboroCity/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 992 "data/maps/RustboroCity/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 993 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 994 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 995 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 996 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 997 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 998 "data/maps/RustboroCity/scripts.pory"
	end
# 999 "data/maps/RustboroCity/scripts.pory"

# 1000 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 1001 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 1002 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1003 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1004 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1005 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 1006 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 1007 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 1008 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 1009 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage
# 1010 "data/maps/RustboroCity/scripts.pory"
	end
# 1011 "data/maps/RustboroCity/scripts.pory"

# 1012 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 1013 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 1014 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1015 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1016 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1017 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 1018 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 1019 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 1020 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 1021 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage
# 1022 "data/maps/RustboroCity/scripts.pory"
	end
# 1023 "data/maps/RustboroCity/scripts.pory"

# 1024 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 1025 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 1026 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1027 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1028 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1029 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 1030 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 1031 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 1032 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 1033 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHintWithLevelCapMessage
# 1034 "data/maps/RustboroCity/scripts.pory"
	end
# 1035 "data/maps/RustboroCity/scripts.pory"

# 1036 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1037 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1038 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1039 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1040 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1041 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1042 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1043 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1044 "data/maps/RustboroCity/scripts.pory"

# 1045 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1046 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1047 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1048 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1049 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1050 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1051 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1052 "data/maps/RustboroCity/scripts.pory"

# 1053 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1054 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1055 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1056 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1057 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1058 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1059 "data/maps/RustboroCity/scripts.pory"

# 1060 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1061 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1062 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1063 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1064 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1065 "data/maps/RustboroCity/scripts.pory"

# 1066 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1067 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1068 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1069 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1070 "data/maps/RustboroCity/scripts.pory"

# 1071 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1072 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1073 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1074 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1075 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1076 "data/maps/RustboroCity/scripts.pory"

# 1077 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1078 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1079 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1080 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1081 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1082 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1083 "data/maps/RustboroCity/scripts.pory"

# 1084 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1085 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1086 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1087 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1088 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1089 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1090 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1091 "data/maps/RustboroCity/scripts.pory"

# 1092 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1093 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1094 "data/maps/RustboroCity/scripts.pory"
	end
# 1095 "data/maps/RustboroCity/scripts.pory"

# 1096 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MiniMarket_EventScript_Saleswoman::
# 1097 "data/maps/RustboroCity/scripts.pory"
	lock
# 1098 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 1099 "data/maps/RustboroCity/scripts.pory"
	message gText_HowMayIServeYou
# 1100 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1101 "data/maps/RustboroCity/scripts.pory"
	pokemart RustboroCity_MiniMart
# 1102 "data/maps/RustboroCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1103 "data/maps/RustboroCity/scripts.pory"
	release
# 1104 "data/maps/RustboroCity/scripts.pory"
	end
# 1105 "data/maps/RustboroCity/scripts.pory"

# 1106 "data/maps/RustboroCity/scripts.pory"
	.align 2
# 1107 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MiniMart:
# 1108 "data/maps/RustboroCity/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 1109 "data/maps/RustboroCity/scripts.pory"
	.2byte ITEM_NONE
# 1110 "data/maps/RustboroCity/scripts.pory"
	release
# 1111 "data/maps/RustboroCity/scripts.pory"
	end
# 1112 "data/maps/RustboroCity/scripts.pory"

# 1113 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "得文公司……\n"
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "我们都简称它得文。\p"
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "这家公司制造各种\n"
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "方便的产品。$"
# 1118 "data/maps/RustboroCity/scripts.pory"

# 1119 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "嗯？鬼鬼祟祟的人？\p"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "说起来确实有，一个形迹\n"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "可疑的家伙转过了街角。$"
# 1123 "data/maps/RustboroCity/scripts.pory"

# 1124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "你挑战过宝可梦道馆了吗？\p"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "等你拿到了闪闪发亮的徽章，\n"
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "训练家大概就会明白\l"
# 1128 "data/maps/RustboroCity/scripts.pory"
	.string "自己该做些什么了。$"
# 1129 "data/maps/RustboroCity/scripts.pory"

# 1130 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "嘿，那是卡那兹道馆的徽章！\p"
# 1132 "data/maps/RustboroCity/scripts.pory"
	.string "要说所有道馆徽章里，\n"
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "卡那兹的最帅了。$"
# 1134 "data/maps/RustboroCity/scripts.pory"

# 1135 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "哦？你是哪位？\n"
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "在这附近没见过你。\p"
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "你是刚转学来\n"
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "宝可梦训练家学校的吗？$"
# 1140 "data/maps/RustboroCity/scripts.pory"

# 1141 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "我挑战了道馆馆主，可是……\p"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "用我的火属性宝可梦\n"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "想赢可不容易……\p"
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "火属性对岩石属性\n"
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "可不占优势……$"
# 1147 "data/maps/RustboroCity/scripts.pory"

# 1148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "老船员布林尼先生住在\n"
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "海边的屋子里。\p"
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "他时不时会到隧道里\n"
# 1152 "data/maps/RustboroCity/scripts.pory"
	.string "散散步。$"
# 1153 "data/maps/RustboroCity/scripts.pory"

# 1154 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "老船员布林尼先生住在\n"
# 1156 "data/maps/RustboroCity/scripts.pory"
	.string "海边的屋子里。\p"
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "他说要去凯那市\n"
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "给他的皮皮买点东西。\p"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "这个老水手，一定\n"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "很喜欢那只皮皮。$"
# 1161 "data/maps/RustboroCity/scripts.pory"

# 1162 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "哇，你也带着宝可梦啊。\p"
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "等我长大了，也要\n"
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "和宝可梦一起去旅行。$"
# 1166 "data/maps/RustboroCity/scripts.pory"

# 1167 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "宝可梦训练家学校！\p"
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "我要是上了这所学校，\n"
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "是不是就能轻松抓到\l"
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "稀有的宝可梦了？$"
# 1172 "data/maps/RustboroCity/scripts.pory"

# 1173 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "宝可梦在对战中积累经验，\n"
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "有时候外形也会\l"
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "发生变化。$"
# 1177 "data/maps/RustboroCity/scripts.pory"

# 1178 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "宝可梦会改变外形？\n"
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "要是真那样，\l"
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "我会吓一跳的！$"
# 1182 "data/maps/RustboroCity/scripts.pory"

# 1183 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "从别人那里交换来的\n"
# 1185 "data/maps/RustboroCity/scripts.pory"
	.string "宝可梦长得很快。\p"
# 1186 "data/maps/RustboroCity/scripts.pory"
	.string "但如果没有特定的\l"
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "道馆徽章，它可能\l"
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "不会听你的话……$"
# 1189 "data/maps/RustboroCity/scripts.pory"

# 1190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "让开！\n"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "别挡道！$"
# 1193 "data/maps/RustboroCity/scripts.pory"

# 1194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "等等！求求你了！\p"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "别抢走我的货！$"
# 1197 "data/maps/RustboroCity/scripts.pory"

# 1198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "哦，是你！\p"
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "你就是那位在橙华森林\n"
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "帮了我的训练家！\p"
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "救命！我被水舰队抢了！\n"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "我得把得文的货物拿回来！\p"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "要是拿不回来……\n"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "我可就闯大祸了。$"
# 1206 "data/maps/RustboroCity/scripts.pory"

# 1207 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "那个形迹可疑的家伙，\n"
# 1209 "data/maps/RustboroCity/scripts.pory"
	.string "好像是往那边的隧道\l"
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "跑掉了。$"
# 1211 "data/maps/RustboroCity/scripts.pory"

# 1212 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "哦！怎么样了？\n"
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "得文的货物呢？\p"
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "你拿到了！\n"
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "你把它拿回来了！\p"
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "你真是位了不起的训练家！\p"
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "对了！作为谢礼，\n"
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "再送你一个超级球！$"
# 1220 "data/maps/RustboroCity/scripts.pory"

# 1221 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1222 "data/maps/RustboroCity/scripts.pory"
	.string "你身上带的东西太多了。\n"
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "这个超级球没法给你。$"
# 1224 "data/maps/RustboroCity/scripts.pory"

# 1225 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1226 "data/maps/RustboroCity/scripts.pory"
	.string "打扰一下，请！\n"
# 1227 "data/maps/RustboroCity/scripts.pory"
	.string "请跟我来！$"
# 1228 "data/maps/RustboroCity/scripts.pory"

# 1229 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "小遥：哦，你好，{PLAYER}！\p"
# 1231 "data/maps/RustboroCity/scripts.pory"
	.string "你的导航装了\n"
# 1232 "data/maps/RustboroCity/scripts.pory"
	.string "宝可梦对话功能！\p"
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "我们互相登录一下，\n"
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "随时都能联系！\p"
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1236 "data/maps/RustboroCity/scripts.pory"

# 1237 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "在宝可梦导航里\n"
# 1239 "data/maps/RustboroCity/scripts.pory"
	.string "登录了小遥。$"
# 1240 "data/maps/RustboroCity/scripts.pory"

# 1241 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "小遥：对了，\n"
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "我刚才在橙华森林\l"
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "碰见了布林尼先生。\p"
# 1245 "data/maps/RustboroCity/scripts.pory"
	.string "他大概是要回海边的\n"
# 1246 "data/maps/RustboroCity/scripts.pory"
	.string "小屋去吧。\p"
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}，你的图鉴\n"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "进展怎么样？\l"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "我的看起来还不错哦！\p"
# 1250 "data/maps/RustboroCity/scripts.pory"
	.string "那么……\n"
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "要不要来对战一场？$"
# 1252 "data/maps/RustboroCity/scripts.pory"

# 1253 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "小遥：哦，怎么了？\p"
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "你还没怎么抓过\n"
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "或培养过宝可梦吗？\p"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "这样可不像个训练家哦！$"
# 1258 "data/maps/RustboroCity/scripts.pory"

# 1259 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "小遥：怎么样？\n"
# 1261 "data/maps/RustboroCity/scripts.pory"
	.string "要不要在这里对战一场？$"
# 1262 "data/maps/RustboroCity/scripts.pory"

# 1263 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "小遥：你才刚当上训练家，\n"
# 1265 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}。我可不会输！$"
# 1266 "data/maps/RustboroCity/scripts.pory"

# 1267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TooBad:
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "真可惜！$"
# 1269 "data/maps/RustboroCity/scripts.pory"

# 1270 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "哎呀！\n"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "你比我想的厉害多了！$"
# 1273 "data/maps/RustboroCity/scripts.pory"

# 1274 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "小遥：对了，刚才\n"
# 1276 "data/maps/RustboroCity/scripts.pory"
	.string "我碰到的布林尼先生……\p"
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}，你刚搬来，可能\n"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "不知道，布林尼先生以前\l"
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "可是位受人尊敬的老船员。$"
# 1280 "data/maps/RustboroCity/scripts.pory"

# 1281 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "佑树：哦，嘿，{PLAYER}！\p"
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "你的导航装了\n"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "宝可梦对话功能！真不错！\p"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "我们互相登录一下，\n"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "随时都能联系！\p"
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1288 "data/maps/RustboroCity/scripts.pory"

# 1289 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "在宝可梦导航里\n"
# 1291 "data/maps/RustboroCity/scripts.pory"
	.string "登录了佑树。$"
# 1292 "data/maps/RustboroCity/scripts.pory"

# 1293 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "佑树：对了，{PLAYER}，\n"
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "我在橙华森林\l"
# 1296 "data/maps/RustboroCity/scripts.pory"
	.string "路过布林尼先生身边。\p"
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "他一定是回海边的\n"
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "小屋去了。\p"
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}，你的图鉴呢？\n"
# 1300 "data/maps/RustboroCity/scripts.pory"
	.string "填上新的页数了吗？\p"
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "我的可厉害了。\p"
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "想不想对战一场，\n"
# 1303 "data/maps/RustboroCity/scripts.pory"
	.string "看看你进步了多少？$"
# 1304 "data/maps/RustboroCity/scripts.pory"

# 1305 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "佑树：怎么了？\n"
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "对自己的宝可梦没信心吗？$"
# 1308 "data/maps/RustboroCity/scripts.pory"

# 1309 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1310 "data/maps/RustboroCity/scripts.pory"
	.string "佑树：怎么了？\n"
# 1311 "data/maps/RustboroCity/scripts.pory"
	.string "要和我对战一场吗？$"
# 1312 "data/maps/RustboroCity/scripts.pory"

# 1313 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1314 "data/maps/RustboroCity/scripts.pory"
	.string "佑树：我知道你才刚当上\n"
# 1315 "data/maps/RustboroCity/scripts.pory"
	.string "训练家，但我不会放水！$"
# 1316 "data/maps/RustboroCity/scripts.pory"

# 1317 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1318 "data/maps/RustboroCity/scripts.pory"
	.string "嗯……\n"
# 1319 "data/maps/RustboroCity/scripts.pory"
	.string "你还挺厉害的。$"
# 1320 "data/maps/RustboroCity/scripts.pory"

# 1321 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1322 "data/maps/RustboroCity/scripts.pory"
	.string "佑树：对了，你知道\n"
# 1323 "data/maps/RustboroCity/scripts.pory"
	.string "刚才我路过的布林尼先生吗？\p"
# 1324 "data/maps/RustboroCity/scripts.pory"
	.string "你刚搬来，{PLAYER}，\n"
# 1325 "data/maps/RustboroCity/scripts.pory"
	.string "大概不知道吧，\l"
# 1326 "data/maps/RustboroCity/scripts.pory"
	.string "布林尼先生以前是\l"
# 1327 "data/maps/RustboroCity/scripts.pory"
	.string "位了不起的老船员。$"
# 1328 "data/maps/RustboroCity/scripts.pory"

# 1329 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RivalExplainFlyFromPokeNav:
# 1330 "data/maps/RustboroCity/scripts.pory"
	.string "对了，{PLAYER}，你看看\n"
# 1331 "data/maps/RustboroCity/scripts.pory"
	.string "你的导航能加的新功能。\l"
# 1332 "data/maps/RustboroCity/scripts.pory"
	.string "借我用一下。\p"
# 1333 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …\n"
# 1334 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …\p"
# 1335 "data/maps/RustboroCity/scripts.pory"
	.string "好了！这是得文公司的\n"
# 1336 "data/maps/RustboroCity/scripts.pory"
	.string "开发员教我的。\p"
# 1337 "data/maps/RustboroCity/scripts.pory"
	.string "我刚在你的导航里装了\n"
# 1338 "data/maps/RustboroCity/scripts.pory"
	.string "新功能，只要看着地图，\l"
# 1339 "data/maps/RustboroCity/scripts.pory"
	.string "就能飞到以前去过的地方！\p"
# 1340 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}在导航地图上把光标移\n"
# 1341 "data/maps/RustboroCity/scripts.pory"
	.string "到你去过的城镇，\l"
# 1342 "data/maps/RustboroCity/scripts.pory"
	.string "就会看到按“R”键\l"
# 1343 "data/maps/RustboroCity/scripts.pory"
	.string "飞过去的选项。{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
# 1344 "data/maps/RustboroCity/scripts.pory"
	.string "很酷吧？$"
# 1345 "data/maps/RustboroCity/scripts.pory"

# 1346 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1347 "data/maps/RustboroCity/scripts.pory"
	.string "“省时隧道即将\n"
# 1348 "data/maps/RustboroCity/scripts.pory"
	.string "完工！”\p"
# 1349 "data/maps/RustboroCity/scripts.pory"
	.string "……牌子上这么写着，\n"
# 1350 "data/maps/RustboroCity/scripts.pory"
	.string "不过上面还被人用红漆\l"
# 1351 "data/maps/RustboroCity/scripts.pory"
	.string "画了个大大的“X”……$"
# 1352 "data/maps/RustboroCity/scripts.pory"

# 1353 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1354 "data/maps/RustboroCity/scripts.pory"
	.string "得文公司\p"
# 1355 "data/maps/RustboroCity/scripts.pory"
	.string "“为了生活所需，\n"
# 1356 "data/maps/RustboroCity/scripts.pory"
	.string "我们什么都制造。”$"
# 1357 "data/maps/RustboroCity/scripts.pory"

# 1358 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1359 "data/maps/RustboroCity/scripts.pory"
	.string "卡那兹市宝可梦道馆\n"
# 1360 "data/maps/RustboroCity/scripts.pory"
	.string "馆主：杜娟\p"
# 1361 "data/maps/RustboroCity/scripts.pory"
	.string "“热爱岩石的优等生！”$"
# 1362 "data/maps/RustboroCity/scripts.pory"

# 1363 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1364 "data/maps/RustboroCity/scripts.pory"
	.string "得文公司分公司\p"
# 1365 "data/maps/RustboroCity/scripts.pory"
	.string "“仅限得文员工\n"
# 1366 "data/maps/RustboroCity/scripts.pory"
	.string "及相关人员进入。”$"
# 1367 "data/maps/RustboroCity/scripts.pory"

# 1368 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1369 "data/maps/RustboroCity/scripts.pory"
	.string "卡那兹市\p"
# 1370 "data/maps/RustboroCity/scripts.pory"
	.string "“探寻自然与科学\n"
# 1371 "data/maps/RustboroCity/scripts.pory"
	.string "融合之道的城市。”$"
# 1372 "data/maps/RustboroCity/scripts.pory"

# 1373 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1374 "data/maps/RustboroCity/scripts.pory"
	.string "宝可梦训练家学校\p"
# 1375 "data/maps/RustboroCity/scripts.pory"
	.string "“宝可梦的事，\n"
# 1376 "data/maps/RustboroCity/scripts.pory"
	.string "我们什么都教！”$"
# 1377 "data/maps/RustboroCity/scripts.pory"

# 1378 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1379 "data/maps/RustboroCity/scripts.pory"
	.string "樵夫之家$"
# 1380 "data/maps/RustboroCity/scripts.pory"

# 1381 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1382 "data/maps/RustboroCity/scripts.pory"
	.string "我一直在给宝可梦导航\n"
# 1383 "data/maps/RustboroCity/scripts.pory"
	.string "开发新功能……\p"
# 1384 "data/maps/RustboroCity/scripts.pory"
	.string "结果做得非常成功！\p"
# 1385 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}，能让我看看\n"
# 1386 "data/maps/RustboroCity/scripts.pory"
	.string "你的导航吗？\l"
# 1387 "data/maps/RustboroCity/scripts.pory"
	.string "就是社长给你的那台。$"
# 1388 "data/maps/RustboroCity/scripts.pory"

# 1389 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1390 "data/maps/RustboroCity/scripts.pory"
	.string "好了，{PLAYER}！\p"
# 1391 "data/maps/RustboroCity/scripts.pory"
	.string "我在你的导航里加了个\n"
# 1392 "data/maps/RustboroCity/scripts.pory"
	.string "叫宝可梦对话的新功能。\p"
# 1393 "data/maps/RustboroCity/scripts.pory"
	.string "用宝可梦对话，\n"
# 1394 "data/maps/RustboroCity/scripts.pory"
	.string "就能和在导航里登录过的人\l"
# 1395 "data/maps/RustboroCity/scripts.pory"
	.string "聊天。\p"
# 1396 "data/maps/RustboroCity/scripts.pory"
	.string "好，我该回去工作了。\n"
# 1397 "data/maps/RustboroCity/scripts.pory"
	.string "你多保重，{PLAYER}！$"
# 1398 "data/maps/RustboroCity/scripts.pory"

# 1399 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1400 "data/maps/RustboroCity/scripts.pory"
	.string "请选择宝可梦导航。$"
# 1401 "data/maps/RustboroCity/scripts.pory"

# 1402 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1403 "data/maps/RustboroCity/scripts.pory"
	.string "你知道吗？\p"
# 1404 "data/maps/RustboroCity/scripts.pory"
	.string "就算没有别的训练家，\n"
# 1405 "data/maps/RustboroCity/scripts.pory"
	.string "也能进行二对二的战斗。\p"
# 1406 "data/maps/RustboroCity/scripts.pory"
	.string "带着两只以上宝可梦时，\n"
# 1407 "data/maps/RustboroCity/scripts.pory"
	.string "如果被两个训练家看见，\l"
# 1408 "data/maps/RustboroCity/scripts.pory"
	.string "他们就会一起挑战你。\p"
# 1409 "data/maps/RustboroCity/scripts.pory"
	.string "一个人打赢两个训练家，\n"
# 1410 "data/maps/RustboroCity/scripts.pory"
	.string "不觉得很酷吗？$"

RustboroCity_Trigger_BlockGymEntrance::
# 1414 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1415 "data/maps/RustboroCity/scripts.pory"
	msgbox GoBeatRoark, MSGBOX_SIGN
# 1416 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1417 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 1418 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1419 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


# 1429 "data/maps/RustboroCity/scripts.pory"
StopPlayer:
# 1430 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

GoBeatRoark::
# 1423 "data/maps/RustboroCity/scripts.pory"
	.string "你该去看看还有没有\n"
	.string "其他强手可以打，\l"
	.string "也许116号道路最东边有。$"
