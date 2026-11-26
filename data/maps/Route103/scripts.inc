# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 3 "data/maps/Route103/scripts.pory"

# 4 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 5 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 6 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 7 "data/maps/Route103/scripts.pory"
	.byte 0
# 8 "data/maps/Route103/scripts.pory"

# 9 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 10 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route103/scripts.pory"
	end
# 13 "data/maps/Route103/scripts.pory"

# 14 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 15 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 16 "data/maps/Route103/scripts.pory"
	call_if_unset FLAG_BADGE06_GET, Route103_CloseLakeEntrance
# 17 "data/maps/Route103/scripts.pory"
	end
# 18 "data/maps/Route103/scripts.pory"

# 19 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 20 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 21 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 22 "data/maps/Route103/scripts.pory"
	return
# 23 "data/maps/Route103/scripts.pory"

# 24 "data/maps/Route103/scripts.pory"
Route103_CloseLakeEntrance::
# 25 "data/maps/Route103/scripts.pory"
	setmetatile 34, 7, METATILE_General_RockWall_RockBase, TRUE
# 26 "data/maps/Route103/scripts.pory"
	setmetatile 34, 8, METATILE_General_RockWall_SandBase, TRUE
# 27 "data/maps/Route103/scripts.pory"
	return
# 28 "data/maps/Route103/scripts.pory"

# 29 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 30 "data/maps/Route103/scripts.pory"
	lockall
# 31 "data/maps/Route103/scripts.pory"
	checkplayergender
# 32 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 33 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 34 "data/maps/Route103/scripts.pory"
	end
# 35 "data/maps/Route103/scripts.pory"

# 36 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 37 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 38 "data/maps/Route103/scripts.pory"
	closemessage
# 39 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 40 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 41 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 43 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 45 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 47 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 48 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 49 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 50 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 51 "data/maps/Route103/scripts.pory"
	end
# 52 "data/maps/Route103/scripts.pory"

# 53 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 54 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 55 "data/maps/Route103/scripts.pory"
	closemessage
# 56 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 57 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 58 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 60 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 62 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 64 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 65 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 66 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 67 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 68 "data/maps/Route103/scripts.pory"
	end
# 69 "data/maps/Route103/scripts.pory"

# 70 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 71 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 72 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 73 "data/maps/Route103/scripts.pory"
	end
# 74 "data/maps/Route103/scripts.pory"

# 75 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 76 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 77 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 78 "data/maps/Route103/scripts.pory"
	end
# 79 "data/maps/Route103/scripts.pory"

# 80 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 81 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 82 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 83 "data/maps/Route103/scripts.pory"
	end
# 84 "data/maps/Route103/scripts.pory"

# 85 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 86 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 87 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 88 "data/maps/Route103/scripts.pory"
	end
# 89 "data/maps/Route103/scripts.pory"

# 90 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 91 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 92 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 93 "data/maps/Route103/scripts.pory"
	end
# 94 "data/maps/Route103/scripts.pory"

# 95 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 96 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 97 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 98 "data/maps/Route103/scripts.pory"
	end
# 99 "data/maps/Route103/scripts.pory"

# 100 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 101 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 102 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 103 "data/maps/Route103/scripts.pory"
	end
# 104 "data/maps/Route103/scripts.pory"

# 105 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 106 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 107 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 108 "data/maps/Route103/scripts.pory"
	end
# 109 "data/maps/Route103/scripts.pory"

# 110 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 111 "data/maps/Route103/scripts.pory"
	closemessage
# 112 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 113 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 114 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 115 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 116 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 117 "data/maps/Route103/scripts.pory"
	end
# 118 "data/maps/Route103/scripts.pory"

# 119 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 120 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 121 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 122 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 124 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 125 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 127 "data/maps/Route103/scripts.pory"
	end
# 128 "data/maps/Route103/scripts.pory"

# 129 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 130 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 131 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 132 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 134 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 135 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 137 "data/maps/Route103/scripts.pory"
	end
# 138 "data/maps/Route103/scripts.pory"

# 139 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 140 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 141 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 143 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 144 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 146 "data/maps/Route103/scripts.pory"
	end
# 147 "data/maps/Route103/scripts.pory"

# 148 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 149 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 150 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 151 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 152 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 153 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 154 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 155 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 156 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 157 "data/maps/Route103/scripts.pory"
	releaseall
# 158 "data/maps/Route103/scripts.pory"
	end
# 159 "data/maps/Route103/scripts.pory"

# 160 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 161 "data/maps/Route103/scripts.pory"
	walk_left
# 162 "data/maps/Route103/scripts.pory"
	walk_down
# 163 "data/maps/Route103/scripts.pory"
	step_end
# 164 "data/maps/Route103/scripts.pory"

# 165 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 166 "data/maps/Route103/scripts.pory"
	jump_2_down
# 167 "data/maps/Route103/scripts.pory"
	delay_16
# 168 "data/maps/Route103/scripts.pory"
	walk_down
# 169 "data/maps/Route103/scripts.pory"
	walk_down
# 170 "data/maps/Route103/scripts.pory"
	walk_down
# 171 "data/maps/Route103/scripts.pory"
	walk_down
# 172 "data/maps/Route103/scripts.pory"
	step_end
# 173 "data/maps/Route103/scripts.pory"

# 174 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 175 "data/maps/Route103/scripts.pory"
	delay_16
# 176 "data/maps/Route103/scripts.pory"
	delay_4
# 177 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 178 "data/maps/Route103/scripts.pory"
	delay_16
# 179 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 180 "data/maps/Route103/scripts.pory"
	step_end
# 181 "data/maps/Route103/scripts.pory"

# 182 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 183 "data/maps/Route103/scripts.pory"
	walk_down
# 184 "data/maps/Route103/scripts.pory"
	step_end
# 185 "data/maps/Route103/scripts.pory"

# 186 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 187 "data/maps/Route103/scripts.pory"
	jump_2_down
# 188 "data/maps/Route103/scripts.pory"
	delay_16
# 189 "data/maps/Route103/scripts.pory"
	walk_down
# 190 "data/maps/Route103/scripts.pory"
	walk_down
# 191 "data/maps/Route103/scripts.pory"
	walk_down
# 192 "data/maps/Route103/scripts.pory"
	step_end
# 193 "data/maps/Route103/scripts.pory"

# 194 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 195 "data/maps/Route103/scripts.pory"
	delay_16
# 196 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/Route103/scripts.pory"
	step_end
# 198 "data/maps/Route103/scripts.pory"

# 199 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 200 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 201 "data/maps/Route103/scripts.pory"
	end
# 202 "data/maps/Route103/scripts.pory"

# 203 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 204 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 205 "data/maps/Route103/scripts.pory"
	end
# 206 "data/maps/Route103/scripts.pory"

# 207 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 208 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 209 "data/maps/Route103/scripts.pory"
	end
# 210 "data/maps/Route103/scripts.pory"

# 211 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 212 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 213 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route103/scripts.pory"
	end
# 215 "data/maps/Route103/scripts.pory"

# 216 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 217 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 218 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 219 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 220 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route103/scripts.pory"
	end
# 222 "data/maps/Route103/scripts.pory"

# 223 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 224 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 225 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 226 "data/maps/Route103/scripts.pory"
	release
# 227 "data/maps/Route103/scripts.pory"
	end
# 228 "data/maps/Route103/scripts.pory"

# 229 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 230 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 231 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/Route103/scripts.pory"
	end
# 233 "data/maps/Route103/scripts.pory"

# 234 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 235 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 236 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 237 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 238 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route103/scripts.pory"
	end
# 240 "data/maps/Route103/scripts.pory"

# 241 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 242 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 243 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 244 "data/maps/Route103/scripts.pory"
	release
# 245 "data/maps/Route103/scripts.pory"
	end
# 246 "data/maps/Route103/scripts.pory"

# 247 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 248 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 249 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/Route103/scripts.pory"
	end
# 251 "data/maps/Route103/scripts.pory"

# 252 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 253 "data/maps/Route103/scripts.pory"
	lock
# 254 "data/maps/Route103/scripts.pory"
	faceplayer
# 255 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route103_EventScript_ReceivedGoodRod
# 256 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
# 257 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route103_EventScript_ReceiveGoodRod
# 258 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route103_EventScript_DeclineGoodRod
# 259 "data/maps/Route103/scripts.pory"
	end
# 260 "data/maps/Route103/scripts.pory"

# 261 "data/maps/Route103/scripts.pory"
Route103_EventScript_ReceiveGoodRod::
# 262 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
# 263 "data/maps/Route103/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 264 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 265 "data/maps/Route103/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 266 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_TryYourLuckFishing, MSGBOX_DEFAULT
# 267 "data/maps/Route103/scripts.pory"
	release
# 268 "data/maps/Route103/scripts.pory"
	end
# 269 "data/maps/Route103/scripts.pory"

# 270 "data/maps/Route103/scripts.pory"
Route103_EventScript_DeclineGoodRod::
# 271 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 272 "data/maps/Route103/scripts.pory"
	release
# 273 "data/maps/Route103/scripts.pory"
	end
# 274 "data/maps/Route103/scripts.pory"

# 275 "data/maps/Route103/scripts.pory"
Route103_EventScript_ReceivedGoodRod::
# 276 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
# 277 "data/maps/Route103/scripts.pory"
	release
# 278 "data/maps/Route103/scripts.pory"
	end
# 279 "data/maps/Route103/scripts.pory"

# 280 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 281 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 282 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 283 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 284 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 285 "data/maps/Route103/scripts.pory"
	release
# 286 "data/maps/Route103/scripts.pory"
	end
# 287 "data/maps/Route103/scripts.pory"

# 288 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 289 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 290 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 292 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 293 "data/maps/Route103/scripts.pory"
	release
# 294 "data/maps/Route103/scripts.pory"
	end
# 295 "data/maps/Route103/scripts.pory"

# 296 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 297 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 298 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 299 "data/maps/Route103/scripts.pory"
	end
# 300 "data/maps/Route103/scripts.pory"

# 301 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 302 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 303 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route103/scripts.pory"
	end
# 305 "data/maps/Route103/scripts.pory"

# 306 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 307 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 308 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 309 "data/maps/Route103/scripts.pory"
	end
# 310 "data/maps/Route103/scripts.pory"

# 311 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 312 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 313 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route103/scripts.pory"
	end
# 315 "data/maps/Route103/scripts.pory"

# 316 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 317 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 318 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 319 "data/maps/Route103/scripts.pory"
	end
# 320 "data/maps/Route103/scripts.pory"

# 321 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 322 "data/maps/Route103/scripts.pory"
	.string "让我看看……103号道路上\n"
# 323 "data/maps/Route103/scripts.pory"
	.string "能找到的宝可梦有……$"
# 324 "data/maps/Route103/scripts.pory"

# 325 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 326 "data/maps/Route103/scripts.pory"
	.string "哦，嗨，{PLAYER}{KUN}！\p"
# 327 "data/maps/Route103/scripts.pory"
	.string "……哦，我知道了，\n"
# 328 "data/maps/Route103/scripts.pory"
	.string "爸爸送了你一只宝可梦。\p"
# 329 "data/maps/Route103/scripts.pory"
	.string "既然都来了，\n"
# 330 "data/maps/Route103/scripts.pory"
	.string "我们就快点打一场吧！\p"
# 331 "data/maps/Route103/scripts.pory"
	.string "让你体验一下\n"
# 332 "data/maps/Route103/scripts.pory"
	.string "当训练家的感觉。$"
# 333 "data/maps/Route103/scripts.pory"

# 334 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 335 "data/maps/Route103/scripts.pory"
	.string "哇！真厉害！\n"
# 336 "data/maps/Route103/scripts.pory"
	.string "{KUN}，你挺行的嘛！$"
# 337 "data/maps/Route103/scripts.pory"

# 338 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 339 "data/maps/Route103/scripts.pory"
	.string "我想我知道爸爸\n"
# 340 "data/maps/Route103/scripts.pory"
	.string "为什么看好你了。\p"
# 341 "data/maps/Route103/scripts.pory"
	.string "你看，你才刚得到宝可梦，\n"
# 342 "data/maps/Route103/scripts.pory"
	.string "它就已经喜欢上你了。\p"
# 343 "data/maps/Route103/scripts.pory"
	.string "也许你能轻松地和\n"
# 344 "data/maps/Route103/scripts.pory"
	.string "任何宝可梦成为朋友。\p"
# 345 "data/maps/Route103/scripts.pory"
	.string "好了，该回研究所了。$"
# 346 "data/maps/Route103/scripts.pory"

# 347 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 348 "data/maps/Route103/scripts.pory"
	.string "好，住在103号道路的\n"
# 349 "data/maps/Route103/scripts.pory"
	.string "是这只和那只……$"
# 350 "data/maps/Route103/scripts.pory"

# 351 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 352 "data/maps/Route103/scripts.pory"
	.string "嘿，是{PLAYER}啊！\p"
# 353 "data/maps/Route103/scripts.pory"
	.string "……哦，对了，\n"
# 354 "data/maps/Route103/scripts.pory"
	.string "爸爸给了你一只宝可梦。\p"
# 355 "data/maps/Route103/scripts.pory"
	.string "既然都来了，\n"
# 356 "data/maps/Route103/scripts.pory"
	.string "我们来打一场吧？\p"
# 357 "data/maps/Route103/scripts.pory"
	.string "我来教教你\n"
# 358 "data/maps/Route103/scripts.pory"
	.string "什么叫训练家！$"
# 359 "data/maps/Route103/scripts.pory"

# 360 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 361 "data/maps/Route103/scripts.pory"
	.string "哦，{PLAYER}，\n"
# 362 "data/maps/Route103/scripts.pory"
	.string "你也不赖嘛。$"
# 363 "data/maps/Route103/scripts.pory"

# 364 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 365 "data/maps/Route103/scripts.pory"
	.string "我想我明白了。\n"
# 366 "data/maps/Route103/scripts.pory"
	.string "我知道爸爸为什么\l"
# 367 "data/maps/Route103/scripts.pory"
	.string "看好你了。\p"
# 368 "data/maps/Route103/scripts.pory"
	.string "看，你才刚得到宝可梦，\n"
# 369 "data/maps/Route103/scripts.pory"
	.string "它就已经喜欢你了。\p"
# 370 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}，我感觉你能\n"
# 371 "data/maps/Route103/scripts.pory"
	.string "轻松和任何宝可梦成为朋友，\l"
# 372 "data/maps/Route103/scripts.pory"
	.string "这是训练家很棒的特质。\p"
# 373 "data/maps/Route103/scripts.pory"
	.string "总之，我们该回研究所了。$"
# 374 "data/maps/Route103/scripts.pory"

# 375 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 376 "data/maps/Route103/scripts.pory"
	.string "我的宝可梦累得不行……\n"
# 377 "data/maps/Route103/scripts.pory"
	.string "我该带伤药的……$"
# 378 "data/maps/Route103/scripts.pory"

# 379 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 380 "data/maps/Route103/scripts.pory"
	.string "从这里穿过大海，\n"
# 381 "data/maps/Route103/scripts.pory"
	.string "就能抄近路到古辰镇。\p"
# 382 "data/maps/Route103/scripts.pory"
	.string "呵呵，很方便吧？$"
# 383 "data/maps/Route103/scripts.pory"

# 384 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 385 "data/maps/Route103/scripts.pory"
	.string "103号道路\n"
# 386 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} 古辰镇$"
# 387 "data/maps/Route103/scripts.pory"

# 388 "data/maps/Route103/scripts.pory"
Route103_Text_YouAgreeGoodRodIsGood:
# 389 "data/maps/Route103/scripts.pory"
	.string "嗯！\n"
# 390 "data/maps/Route103/scripts.pory"
	.string "好钓竿真的很好！\p"
# 391 "data/maps/Route103/scripts.pory"
	.string "你不这么觉得吗？$"
# 392 "data/maps/Route103/scripts.pory"

# 393 "data/maps/Route103/scripts.pory"
Route103_Text_IdenticalMindsTakeThis:
# 394 "data/maps/Route103/scripts.pory"
	.string "嗯！\n"
# 395 "data/maps/Route103/scripts.pory"
	.string "我们想到一块去了！\p"
# 396 "data/maps/Route103/scripts.pory"
	.string "嗯！\n"
# 397 "data/maps/Route103/scripts.pory"
	.string "这个好钓竿给你！$"
# 398 "data/maps/Route103/scripts.pory"

# 399 "data/maps/Route103/scripts.pory"
Route103_Text_TryYourLuckFishing:
# 400 "data/maps/Route103/scripts.pory"
	.string "只要有水的地方，\n"
# 401 "data/maps/Route103/scripts.pory"
	.string "就试着钓一钓吧。$"
# 402 "data/maps/Route103/scripts.pory"

# 403 "data/maps/Route103/scripts.pory"
Route103_Text_DontYouLikeToFish:
# 404 "data/maps/Route103/scripts.pory"
	.string "你不喜欢钓鱼吗？$"
# 405 "data/maps/Route103/scripts.pory"

# 406 "data/maps/Route103/scripts.pory"
Route103_Text_TryCatchingMonWithGoodRod:
# 407 "data/maps/Route103/scripts.pory"
	.string "用好钓竿去抓\n"
# 408 "data/maps/Route103/scripts.pory"
	.string "各种各样的宝可梦吧。$"
