# 1 "data/maps/LavaridgeTown/scripts.pory"

# 2 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 7
# 3 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 4 "data/maps/LavaridgeTown/scripts.pory"

# 5 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 6 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 7 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 8 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 9 "data/maps/LavaridgeTown/scripts.pory"

# 10 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 11 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 12 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 13 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 14 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 15 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 16 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
# 17 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 18 "data/maps/LavaridgeTown/scripts.pory"
	end
# 19 "data/maps/LavaridgeTown/scripts.pory"

# 20 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 21 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 22 "data/maps/LavaridgeTown/scripts.pory"
	return
# 23 "data/maps/LavaridgeTown/scripts.pory"

# 24 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 25 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 26 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 27 "data/maps/LavaridgeTown/scripts.pory"
	return
# 28 "data/maps/LavaridgeTown/scripts.pory"

# 29 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 30 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 31 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 32 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 34 "data/maps/LavaridgeTown/scripts.pory"
	return
# 35 "data/maps/LavaridgeTown/scripts.pory"

# 36 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 37 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 38 "data/maps/LavaridgeTown/scripts.pory"
	return
# 39 "data/maps/LavaridgeTown/scripts.pory"

# 40 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 41 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 42 "data/maps/LavaridgeTown/scripts.pory"
	return
# 43 "data/maps/LavaridgeTown/scripts.pory"

# 44 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 45 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 46 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 47 "data/maps/LavaridgeTown/scripts.pory"

# 48 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 49 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 50 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 51 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 52 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 53 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 54 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 55 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 56 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 57 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 58 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 59 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 60 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 61 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 62 "data/maps/LavaridgeTown/scripts.pory"
	end
# 63 "data/maps/LavaridgeTown/scripts.pory"

# 64 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 65 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 66 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_MEGA_RING
# 67 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 68 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES
# 69 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 70 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 71 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 72 "data/maps/LavaridgeTown/scripts.pory"
	end
# 73 "data/maps/LavaridgeTown/scripts.pory"

# 74 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 75 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 76 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_MEGA_RING
# 77 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 78 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES
# 79 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 80 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 81 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 82 "data/maps/LavaridgeTown/scripts.pory"
	end
# 83 "data/maps/LavaridgeTown/scripts.pory"

# 84 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 85 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 86 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 87 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 88 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 89 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 90 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 91 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 92 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 93 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 94 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 95 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 96 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 97 "data/maps/LavaridgeTown/scripts.pory"
	end
# 98 "data/maps/LavaridgeTown/scripts.pory"

# 99 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 100 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 101 "data/maps/LavaridgeTown/scripts.pory"
	return
# 102 "data/maps/LavaridgeTown/scripts.pory"

# 103 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 104 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 105 "data/maps/LavaridgeTown/scripts.pory"
	return
# 106 "data/maps/LavaridgeTown/scripts.pory"

# 107 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 108 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 109 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 110 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 111 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 112 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 113 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 114 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 115 "data/maps/LavaridgeTown/scripts.pory"
	return
# 116 "data/maps/LavaridgeTown/scripts.pory"

# 117 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 118 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 119 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 120 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 121 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 122 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 124 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 125 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 126 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 128 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 129 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 130 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 131 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 132 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 133 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 134 "data/maps/LavaridgeTown/scripts.pory"
	return
# 135 "data/maps/LavaridgeTown/scripts.pory"

# 136 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 137 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 138 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 139 "data/maps/LavaridgeTown/scripts.pory"
	return
# 140 "data/maps/LavaridgeTown/scripts.pory"

# 141 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 142 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 143 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/LavaridgeTown/scripts.pory"
	return
# 145 "data/maps/LavaridgeTown/scripts.pory"

# 146 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 147 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 148 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 149 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/LavaridgeTown/scripts.pory"
	return
# 151 "data/maps/LavaridgeTown/scripts.pory"

# 152 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 153 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 154 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 155 "data/maps/LavaridgeTown/scripts.pory"
	return
# 156 "data/maps/LavaridgeTown/scripts.pory"

# 157 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 158 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 159 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 160 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 161 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 162 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 163 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 164 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 165 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 166 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 167 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 168 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 169 "data/maps/LavaridgeTown/scripts.pory"

# 170 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 171 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 172 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 173 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 174 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 175 "data/maps/LavaridgeTown/scripts.pory"

# 176 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 177 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 178 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 179 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 180 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 181 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 182 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 183 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 184 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 185 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 186 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 187 "data/maps/LavaridgeTown/scripts.pory"

# 188 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 189 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 190 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 191 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 192 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 193 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 194 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 195 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 196 "data/maps/LavaridgeTown/scripts.pory"

# 197 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 198 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 199 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 200 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 201 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 202 "data/maps/LavaridgeTown/scripts.pory"

# 203 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 204 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 205 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 206 "data/maps/LavaridgeTown/scripts.pory"

# 207 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 208 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 209 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 210 "data/maps/LavaridgeTown/scripts.pory"
	end
# 211 "data/maps/LavaridgeTown/scripts.pory"

# 212 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 213 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 214 "data/maps/LavaridgeTown/scripts.pory"
	end
# 215 "data/maps/LavaridgeTown/scripts.pory"

# 216 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 217 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 218 "data/maps/LavaridgeTown/scripts.pory"
	end
# 219 "data/maps/LavaridgeTown/scripts.pory"

# 220 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 221 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 222 "data/maps/LavaridgeTown/scripts.pory"
	end
# 223 "data/maps/LavaridgeTown/scripts.pory"

# 224 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 225 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 226 "data/maps/LavaridgeTown/scripts.pory"
	end
# 227 "data/maps/LavaridgeTown/scripts.pory"

# 228 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 229 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 230 "data/maps/LavaridgeTown/scripts.pory"
	end
# 231 "data/maps/LavaridgeTown/scripts.pory"

# 232 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 233 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 234 "data/maps/LavaridgeTown/scripts.pory"
	end
# 235 "data/maps/LavaridgeTown/scripts.pory"

# 236 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 237 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 238 "data/maps/LavaridgeTown/scripts.pory"
	end
# 239 "data/maps/LavaridgeTown/scripts.pory"

# 240 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Sandygast::
# 241 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 242 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 243 "data/maps/LavaridgeTown/scripts.pory"
	waitse
# 244 "data/maps/LavaridgeTown/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_NORMAL
# 245 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_Sandygast, MSGBOX_DEFAULT
# 246 "data/maps/LavaridgeTown/scripts.pory"
	waitmoncry
# 247 "data/maps/LavaridgeTown/scripts.pory"
	release
# 248 "data/maps/LavaridgeTown/scripts.pory"
	end
# 249 "data/maps/LavaridgeTown/scripts.pory"

# 250 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 251 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 252 "data/maps/LavaridgeTown/scripts.pory"
	end
# 253 "data/maps/LavaridgeTown/scripts.pory"

# 254 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 255 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 256 "data/maps/LavaridgeTown/scripts.pory"
	end
# 257 "data/maps/LavaridgeTown/scripts.pory"

# 258 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 259 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 260 "data/maps/LavaridgeTown/scripts.pory"
	end
# 261 "data/maps/LavaridgeTown/scripts.pory"

# 262 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MiniMarket_EventScript_Saleswoman::
# 263 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 264 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 265 "data/maps/LavaridgeTown/scripts.pory"
	message gText_HowMayIServeYou
# 266 "data/maps/LavaridgeTown/scripts.pory"
	waitmessage
# 267 "data/maps/LavaridgeTown/scripts.pory"
	tmshop LavaridgeTown_MiniMart
# 268 "data/maps/LavaridgeTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 269 "data/maps/LavaridgeTown/scripts.pory"
	release
# 270 "data/maps/LavaridgeTown/scripts.pory"
	end
# 271 "data/maps/LavaridgeTown/scripts.pory"

# 272 "data/maps/LavaridgeTown/scripts.pory"
	.align 2
# 273 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MiniMart:
# 274 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 275 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_HYPER_VOICE
# 276 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 277 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 278 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 279 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_ENERGY_BALL
# 280 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_TM_DARK_PULSE
# 281 "data/maps/LavaridgeTown/scripts.pory"
	.2byte ITEM_NONE
# 282 "data/maps/LavaridgeTown/scripts.pory"
	release
# 283 "data/maps/LavaridgeTown/scripts.pory"
	end
# 284 "data/maps/LavaridgeTown/scripts.pory"

# 285 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 286 "data/maps/LavaridgeTown/scripts.pory"
	.string "嘿，{PLAYER}！真高兴\n"
# 287 "data/maps/LavaridgeTown/scripts.pory"
	.string "在这儿碰上你。\p"
# 288 "data/maps/LavaridgeTown/scripts.pory"
	.string "我前不久从橙华过来，\n"
# 289 "data/maps/LavaridgeTown/scripts.pory"
	.string "想看看你有没有\l"
# 290 "data/maps/LavaridgeTown/scripts.pory"
	.string "打赢亚莎，结果刚好\l"
# 291 "data/maps/LavaridgeTown/scripts.pory"
	.string "赶上，太巧了！\p"
# 292 "data/maps/LavaridgeTown/scripts.pory"
	.string "我刚在橙华道馆遇到你\n"
# 293 "data/maps/LavaridgeTown/scripts.pory"
	.string "爸爸，他说要是我\l"
# 294 "data/maps/LavaridgeTown/scripts.pory"
	.string "碰见你，就把这些\l"
# 295 "data/maps/LavaridgeTown/scripts.pory"
	.string "交给你。$"
# 296 "data/maps/LavaridgeTown/scripts.pory"

# 297 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 298 "data/maps/LavaridgeTown/scripts.pory"
	.string "这副护目镜能让你\n"
# 299 "data/maps/LavaridgeTown/scripts.pory"
	.string "穿过111号道路的沙漠。\p"
# 300 "data/maps/LavaridgeTown/scripts.pory"
	.string "我还附了些安全护目镜，\n"
# 301 "data/maps/LavaridgeTown/scripts.pory"
	.string "护目镜这种东西\l"
# 302 "data/maps/LavaridgeTown/scripts.pory"
	.string "多多益善嘛。\p"
# 303 "data/maps/LavaridgeTown/scripts.pory"
	.string "我跟你说的时候，你爸爸\n"
# 304 "data/maps/LavaridgeTown/scripts.pory"
	.string "说要给你那个超级环，\l"
# 305 "data/maps/LavaridgeTown/scripts.pory"
	.string "这样你挑战他时\l"
# 306 "data/maps/LavaridgeTown/scripts.pory"
	.string "才算公平。\p"
# 307 "data/maps/LavaridgeTown/scripts.pory"
	.string "哦，还有最后一件事。\p"
# 308 "data/maps/LavaridgeTown/scripts.pory"
	.string "我跟小胜的爸爸聊过，\n"
# 309 "data/maps/LavaridgeTown/scripts.pory"
	.string "他说本来要给你\l"
# 310 "data/maps/LavaridgeTown/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}秘传学习器03冲浪，\l"
# 311 "data/maps/LavaridgeTown/scripts.pory"
	.string "结果不小心把它掉在\l"
# 312 "data/maps/LavaridgeTown/scripts.pory"
	.string "沙漠里了。\p"
# 313 "data/maps/LavaridgeTown/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}好，我想就这些了，\n"
# 314 "data/maps/LavaridgeTown/scripts.pory"
	.string "回头见，{PLAYER}！\l"
# 315 "data/maps/LavaridgeTown/scripts.pory"
	.string "恭喜你打赢亚莎，\l"
# 316 "data/maps/LavaridgeTown/scripts.pory"
	.string "可别松懈，因为\l"
# 317 "data/maps/LavaridgeTown/scripts.pory"
	.string "小光和我都在拼命\l"
# 318 "data/maps/LavaridgeTown/scripts.pory"
	.string "训练！$"
# 319 "data/maps/LavaridgeTown/scripts.pory"

# 320 "data/maps/LavaridgeTown/scripts.pory"

# 321 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 322 "data/maps/LavaridgeTown/scripts.pory"
	.string "嘿，{PLAYER}！真高兴\n"
# 323 "data/maps/LavaridgeTown/scripts.pory"
	.string "在这儿碰上你。\p"
# 324 "data/maps/LavaridgeTown/scripts.pory"
	.string "我前不久从橙华过来，\n"
# 325 "data/maps/LavaridgeTown/scripts.pory"
	.string "想看看你有没有\l"
# 326 "data/maps/LavaridgeTown/scripts.pory"
	.string "打赢亚莎，结果刚好\l"
# 327 "data/maps/LavaridgeTown/scripts.pory"
	.string "赶上，太巧了！\p"
# 328 "data/maps/LavaridgeTown/scripts.pory"
	.string "我刚在橙华道馆遇到你\n"
# 329 "data/maps/LavaridgeTown/scripts.pory"
	.string "爸爸，他说要是我\l"
# 330 "data/maps/LavaridgeTown/scripts.pory"
	.string "碰见你，就把这些\l"
# 331 "data/maps/LavaridgeTown/scripts.pory"
	.string "交给你。$"
# 332 "data/maps/LavaridgeTown/scripts.pory"

# 333 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 334 "data/maps/LavaridgeTown/scripts.pory"
	.string "这副护目镜能让你\n"
# 335 "data/maps/LavaridgeTown/scripts.pory"
	.string "穿过111号道路的沙漠。\p"
# 336 "data/maps/LavaridgeTown/scripts.pory"
	.string "我还附了些安全护目镜，\n"
# 337 "data/maps/LavaridgeTown/scripts.pory"
	.string "护目镜这种东西\l"
# 338 "data/maps/LavaridgeTown/scripts.pory"
	.string "多多益善嘛。\p"
# 339 "data/maps/LavaridgeTown/scripts.pory"
	.string "我跟你说的时候，你爸爸\n"
# 340 "data/maps/LavaridgeTown/scripts.pory"
	.string "说要给你那个超级环，\l"
# 341 "data/maps/LavaridgeTown/scripts.pory"
	.string "这样你挑战他时\l"
# 342 "data/maps/LavaridgeTown/scripts.pory"
	.string "才算公平。\p"
# 343 "data/maps/LavaridgeTown/scripts.pory"
	.string "哦，还有最后一件事。\p"
# 344 "data/maps/LavaridgeTown/scripts.pory"
	.string "我跟小胜的爸爸聊过，\n"
# 345 "data/maps/LavaridgeTown/scripts.pory"
	.string "他说本来要给你\l"
# 346 "data/maps/LavaridgeTown/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}秘传学习器03冲浪，\l"
# 347 "data/maps/LavaridgeTown/scripts.pory"
	.string "结果不小心把它掉在\l"
# 348 "data/maps/LavaridgeTown/scripts.pory"
	.string "沙漠里了。\p"
# 349 "data/maps/LavaridgeTown/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}好，我想就这些了，\n"
# 350 "data/maps/LavaridgeTown/scripts.pory"
	.string "回头见，{PLAYER}！\l"
# 351 "data/maps/LavaridgeTown/scripts.pory"
	.string "恭喜你打赢亚莎，\l"
# 352 "data/maps/LavaridgeTown/scripts.pory"
	.string "可别松懈，因为\l"
# 353 "data/maps/LavaridgeTown/scripts.pory"
	.string "小光和我都在拼命\l"
# 354 "data/maps/LavaridgeTown/scripts.pory"
	.string "训练！$"
# 355 "data/maps/LavaridgeTown/scripts.pory"

# 356 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 357 "data/maps/LavaridgeTown/scripts.pory"
	.string "我们想要多少热水\n"
# 358 "data/maps/LavaridgeTown/scripts.pory"
	.string "就取多少，\l"
# 359 "data/maps/LavaridgeTown/scripts.pory"
	.string "可温泉从来不会枯竭。\p"
# 360 "data/maps/LavaridgeTown/scripts.pory"
	.string "很神奇吧？\p"
# 361 "data/maps/LavaridgeTown/scripts.pory"
	.string "这些温泉出现在活火山\n"
# 362 "data/maps/LavaridgeTown/scripts.pory"
	.string "附近。地下的水脉\l"
# 363 "data/maps/LavaridgeTown/scripts.pory"
	.string "被岩浆加热，涌上来\l"
# 364 "data/maps/LavaridgeTown/scripts.pory"
	.string "就成了温泉。$"
# 365 "data/maps/LavaridgeTown/scripts.pory"

# 366 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 367 "data/maps/LavaridgeTown/scripts.pory"
	.string "被这热沙子埋着……\n"
# 368 "data/maps/LavaridgeTown/scripts.pory"
	.string "唉……\p"
# 369 "data/maps/LavaridgeTown/scripts.pory"
	.string "又暖和又舒服……\p"
# 370 "data/maps/LavaridgeTown/scripts.pory"
	.string "咦？哇啊！好痛！\p"
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "有宝可梦咬了我的\n"
# 372 "data/maps/LavaridgeTown/scripts.pory"
	.string "屁股！$"
# 373 "data/maps/LavaridgeTown/scripts.pory"

# 374 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 375 "data/maps/LavaridgeTown/scripts.pory"
	.string "哦，你喜欢温泉啊？\p"
# 376 "data/maps/LavaridgeTown/scripts.pory"
	.string "像你这么年轻，\n"
# 377 "data/maps/LavaridgeTown/scripts.pory"
	.string "还真少见。$"
# 378 "data/maps/LavaridgeTown/scripts.pory"

# 379 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 380 "data/maps/LavaridgeTown/scripts.pory"
	.string "我每天都泡温泉。\p"
# 381 "data/maps/LavaridgeTown/scripts.pory"
	.string "我想成为像亚莎那样\n"
# 382 "data/maps/LavaridgeTown/scripts.pory"
	.string "又美丽又强大的\l"
# 383 "data/maps/LavaridgeTown/scripts.pory"
	.string "道馆馆主。$"
# 384 "data/maps/LavaridgeTown/scripts.pory"

# 385 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 386 "data/maps/LavaridgeTown/scripts.pory"
	.string "要是人们把宝可梦\n"
# 387 "data/maps/LavaridgeTown/scripts.pory"
	.string "放进温泉里，那可真是\l"
# 388 "data/maps/LavaridgeTown/scripts.pory"
	.string "相当奇怪的事。\p"
# 389 "data/maps/LavaridgeTown/scripts.pory"
	.string "说不定会变成电浴、\n"
# 390 "data/maps/LavaridgeTown/scripts.pory"
	.string "泡泡浴，甚至是\l"
# 391 "data/maps/LavaridgeTown/scripts.pory"
	.string "熔岩浴……$"
# 392 "data/maps/LavaridgeTown/scripts.pory"

# 393 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "他们宣称这些温泉能\n"
# 395 "data/maps/LavaridgeTown/scripts.pory"
	.string "缓解神经紧张、\l"
# 396 "data/maps/LavaridgeTown/scripts.pory"
	.string "消除肌肉酸痛、解决\l"
# 397 "data/maps/LavaridgeTown/scripts.pory"
	.string "感情烦恼，还能\l"
# 398 "data/maps/LavaridgeTown/scripts.pory"
	.string "招财……$"
# 399 "data/maps/LavaridgeTown/scripts.pory"

# 400 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 401 "data/maps/LavaridgeTown/scripts.pory"
	.string "釜炎镇\p"
# 402 "data/maps/LavaridgeTown/scripts.pory"
	.string "“宝可梦中心温泉——\n"
# 403 "data/maps/LavaridgeTown/scripts.pory"
	.string "放松身心的好地方！”$"
# 404 "data/maps/LavaridgeTown/scripts.pory"

# 405 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 406 "data/maps/LavaridgeTown/scripts.pory"
	.string "釜炎镇宝可梦道馆\n"
# 407 "data/maps/LavaridgeTown/scripts.pory"
	.string "馆主：亚莎\l"
# 408 "data/maps/LavaridgeTown/scripts.pory"
	.string "“燃烧的炽热之心！”$"
# 409 "data/maps/LavaridgeTown/scripts.pory"

# 410 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 411 "data/maps/LavaridgeTown/scripts.pory"
	.string "宝可梦药草店\n"
# 412 "data/maps/LavaridgeTown/scripts.pory"
	.string "“味道越苦，药效越好！”$"
# 413 "data/maps/LavaridgeTown/scripts.pory"

# 414 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_Sandygast:
# 415 "data/maps/LavaridgeTown/scripts.pory"
	.string "沙丘娃：沙啊啊啊啊！$"

LavaridgeTown_EventScript_EggWoman::
# 419 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 420 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 421 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EggWomanIntro, MSGBOX_YESNO
# 423 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_EventScript_EggWoman_2
LavaridgeTown_EventScript_EggWoman_1:
# 428 "data/maps/LavaridgeTown/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 429 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LavaridgeTown_EventScript_ComeBackWithYellowShard
# 430 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 431 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
# 432 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 433 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 434 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 435 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 436 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_KLAWF
# 437 "data/maps/LavaridgeTown/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 438 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_ComeBackWithMore, MSGBOX_DEFAULT
# 439 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_2:
# 425 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_EggWomanManNo
	goto LavaridgeTown_EventScript_EggWoman_1


LavaridgeTown_EventScript_EggWomanManNo::
# 445 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EggWomanDeclined, MSGBOX_DEFAULT
# 446 "data/maps/LavaridgeTown/scripts.pory"
	release
	end


LavaridgeTown_EventScript_ComeBackWithYellowShard::
# 451 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeBackWithYellowShard, MSGBOX_DEFAULT
# 452 "data/maps/LavaridgeTown/scripts.pory"
	release
	end


LavaridgeTown_EventScript_NoRoomForEgg::
# 457 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 458 "data/maps/LavaridgeTown/scripts.pory"
	release
	end


LavaridgeTown_EggWomanIntro::
# 462 "data/maps/LavaridgeTown/scripts.pory"
	.string "你好，训练家。我手上有几颗\n"
	.string "很大的蛋。\p"
	.string "我现在正需要黄色碎片，\n"
	.string "你愿意用一枚黄色碎片\l"
	.string "来换其中\l"
	.string "一颗蛋吗？$"

LavaridgeTown_EggWomanDeclined::
# 471 "data/maps/LavaridgeTown/scripts.pory"
	.string "我明白了。若你改变主意，\n"
	.string "请再来。$"

LavaridgeTown_Text_ComeBackWithYellowShard::
# 477 "data/maps/LavaridgeTown/scripts.pory"
	.string "看来你没有\n"
	.string "黄色碎片。有了再来吧。$"

LavaridgeTown_Text_NoRoomForThisEgg::
# 482 "data/maps/LavaridgeTown/scripts.pory"
	.string "哦？你的宝可梦太多了。\n"
	.string "没地方放这颗蛋……$"

LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg::
# 487 "data/maps/LavaridgeTown/scripts.pory"
	.string "好！希望你能带着\n"
	.string "这颗蛋多走走！$"

LavaridgeTown_Text_ReceivedTheEgg::
# 492 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}收到了蛋。$"

LavaridgeTown_ComeBackWithMore::
# 496 "data/maps/LavaridgeTown/scripts.pory"
	.string "若还有更多想交换的\n"
	.string "黄色碎片，请再来。$"
