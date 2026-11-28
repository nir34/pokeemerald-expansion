# 1 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 2 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 4 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_MapScripts::
# 5 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentCorridor_OnFrame
# 6 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentCorridor_OnWarp
# 7 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.byte 0
# 8 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 9 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	@ This is Slateport Tent's version of the Battle Factory Pre-Battle Room
# 10 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 11 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_OnWarp:
# 12 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentCorridor_EventScript_SetUpObjects
# 13 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.2byte 0
# 14 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 15 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_SetUpObjects::
# 16 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_ne VAR_0x8006, 1, SlateportCity_BattleTentCorridor_EventScript_TurnPlayerNorth
# 18 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setobjectxy LOCALID_ATTENDANT, 2, 2
# 19 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	turnobject LOCALID_ATTENDANT, DIR_SOUTH
# 20 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_TurnPlayerNorth::
# 21 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 22 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	end
# 23 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 24 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_OnFrame:
# 25 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SlateportCity_BattleTentCorridor_EventScript_EnterCorridor
# 26 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.2byte 0
# 27 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 28 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterCorridor::
# 29 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_eq VAR_0x8006, 1, SlateportCity_BattleTentCorridor_EventScript_ReturnToRoomFromBattle
# 30 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 31 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT, SlateportCity_BattleTentCorridor_Movement_AttendantEnter
# 32 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_BattleTentCorridor_Movement_PlayerEnter
# 33 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 34 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_eq VAR_0x8006, 2, SlateportCity_BattleTentCorridor_EventScript_ResumeChallenge
# 35 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generaterentalmons
# 36 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generateopponentmons
# 37 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection, MSGBOX_DEFAULT
# 38 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_rentmons
# 40 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
# 41 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom::
# 42 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay, MSGBOX_DEFAULT
# 43 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	closemessage
# 44 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT, Common_Movement_WalkInPlaceFasterUp
# 45 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 46 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	opendoor 2, 1
# 47 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitdooranim
# 48 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT, SlateportCity_BattleTentCorridor_Movement_AttendantExit
# 49 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_BattleTentCorridor_Movement_PlayerExit
# 50 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 51 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	closedoor 2, 1
# 52 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitdooranim
# 53 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM, 4, 4
# 54 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
# 55 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	end
# 56 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 57 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ReturnToRoomFromBattle::
# 58 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_setopponentmons
# 59 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_resethelditems
# 60 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons, MSGBOX_DEFAULT
# 61 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	playfanfare MUS_HEAL
# 62 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitfanfare
# 63 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	special HealPlayerParty
# 64 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent::
# 65 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 66 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	call_if_eq VAR_RESULT, 1, SlateportCity_BattleTentCorridor_EventScript_ReadyFor2ndOpponent
# 67 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	call_if_eq VAR_RESULT, 2, SlateportCity_BattleTentCorridor_EventScript_ReadyFor3rdOpponent
# 68 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 69 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 0, SlateportCity_BattleTentCorridor_EventScript_AskSwapMon
# 71 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 1, SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge
# 72 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 2, SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge
# 73 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 74 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge::
# 75 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 76 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 77 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case NO, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 78 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case YES, SlateportCity_BattleTentCorridor_EventScript_PauseChallenge
# 79 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 80 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 81 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge::
# 82 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge
# 83 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 84 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 85 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 1, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 87 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 0, SlateportCity_BattleTent_EventScript_WarpToLobbyLost
# 88 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 89 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 90 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskSwapMon::
# 91 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generateopponentmons
# 92 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon, MSGBOX_YESNO
# 93 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 94 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case NO, SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 95 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case YES, SlateportCity_BattleTentCorridor_EventScript_SwapMons
# 96 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 97 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 98 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_SwapMons::
# 99 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_swapmons
# 101 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
# 102 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 103 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete, MSGBOX_DEFAULT
# 104 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 105 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 106 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ReadyFor2ndOpponent::
# 107 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent
# 108 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 109 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 110 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 111 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ReadyFor3rdOpponent::
# 112 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent
# 113 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 114 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 115 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 116 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_PauseChallenge::
# 117 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait
# 118 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 119 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_save CHALLENGE_STATUS_PAUSED
# 120 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	playse SE_SAVE
# 121 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitse
# 122 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	frontier_reset
# 124 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	end
# 125 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 126 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ResumeChallenge::
# 127 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	special SavePlayerParty
# 128 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_setparties 0
# 129 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 130 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 131 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_PlayerEnter:
# 132 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 133 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 134 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 135 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 136 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 137 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 138 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_PlayerExit:
# 139 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 140 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 141 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	set_invisible
# 142 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 143 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 144 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_AttendantEnter:
# 145 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 146 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 147 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 148 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 149 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_in_place_faster_down
# 150 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 151 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 152 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_AttendantExit:
# 153 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 154 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	set_invisible
# 155 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 156 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 157 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Leftover text from when this was a Contest Hall in R/S
# 158 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 159 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_AdviceForContests:
# 160 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "想听听关于华丽大赛的\n"
# 161 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "有用建议吗？\p"
# 162 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "在某个招式之后使用\n"
# 163 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "特定种类的招式，\l"
# 164 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "有时能获得额外的关注。\p"
# 165 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "只要你懂得诀窍，\n"
# 166 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "就能赚到很高的分数。\p"
# 167 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "当然，对手可能会来\n"
# 168 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "干扰你宝可梦的表演。$"
# 169 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 170 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 171 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MyPapaIsContestJudge:
# 172 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "我爸爸是华丽大赛的\n"
# 173 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "评审。\p"
# 174 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "我长大后该当评审呢，\n"
# 175 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "还是当道馆馆主呢？$"
# 176 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 177 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 178 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_ImLikeMajorlyCheesed:
# 179 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "嘿，哥们，我真是\n"
# 180 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "火大得不行。\p"
# 181 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "我就是想知道，我的宝可梦\n"
# 182 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "为什么老是赢不了，对吧？\p"
# 183 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "所以我就去跟评审\n"
# 184 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "提了意见，反正是免费的。\p"
# 185 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "可他根本不听我说！\n"
# 186 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "真是气死人了！\p"
# 187 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "喂，你！闭嘴，知道吗？\n"
# 188 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "就，拿上这个吧！$"
# 189 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 190 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 191 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_ExplainTorment:
# 192 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "那是学习器41号，知道吧？\n"
# 193 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "嘿，是折磨，听到了吗？\p"
# 194 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "它能让对手无法连续\n"
# 195 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "使用同一个招式，懂吗？\p"
# 196 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "喂，听着，我可不是在\n"
# 197 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "折磨你！$"
# 198 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 199 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 200 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MCStepUpTakePartInContest:
# 201 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "主持：哦，天哪！\n"
# 202 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "这宝可梦可真漂亮！\p"
# 203 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "来吧！请走上前来，\n"
# 204 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "参加我们精彩的华丽大赛！\p"
# 205 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "你一定会表现出色的！\n"
# 206 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "我的眼光从没看错过！$"
# 207 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 208 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 209 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_JudgeWouldntDoToMissContest:
# 210 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "评审：哦，你好！\n"
# 211 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "我看得出你是训练家！\p"
# 212 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "那么，你要是错过了\n"
# 213 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "宝可梦华丽大赛\l"
# 214 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "可就太可惜了！\p"
# 215 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "去绿荫镇领取参赛证，\n"
# 216 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "随时都能参加！$"
# 217 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 218 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 219 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_ItsAppealTime:
# 220 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "到表演时间了！\n"
# 221 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "我该以什么开场？$"
# 222 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 223 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 224 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_DidntPayAttentionToAppeal:
# 225 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "他们根本没怎么注意\n"
# 226 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "我宝可梦的表演……\p"
# 227 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "哼，那个评审，好东西\n"
# 228 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "摆在眼前都不识货。$"
# 229 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 230 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 231 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_RewardWithSageAdvice:
# 232 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "哦，你好！能靠得这么近，\n"
# 233 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "你一定是铁杆粉丝。\p"
# 234 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "为了奖励你的热情，\n"
# 235 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "我给你一条明智的建议。\p"
# 236 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "如果某个招式反响很好，\n"
# 237 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "观众就会兴奋起来。\p"
# 238 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "在大家都兴奋的时候\n"
# 239 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "正好表演的宝可梦……\p"
# 240 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "嗯，你想想，那肯定\n"
# 241 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "会有好事发生！$"
# 242 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 243 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 244 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MoreFreakedOutThanMon:
# 245 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "我做不到！我比我的宝可梦\n"
# 246 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "还要紧张。\p"
# 247 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "我浑身发抖，心跳得厉害！$"
# 248 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 249 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 250 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_BattleAndContestAlike:
# 251 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "对战和华丽大赛虽然不同，\n"
# 252 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "但也很相似。\p"
# 253 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "都需要努力，还要相信\n"
# 254 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "自己培养的宝可梦。$"
# 255 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 256 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 257 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MonLooksOnTopOfGame:
# 258 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "那只宝可梦看起来\n"
# 259 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "状态很好吧？\p"
# 260 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "在二次评审中表现好的\n"
# 261 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "宝可梦，表演时似乎\l"
# 262 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "也更加从容。$"
# 263 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 264 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 265 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MyMonBetterThanThatLot:
# 266 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "你看那副可怜样？\p"
# 267 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "嘿，我的宝可梦可比\n"
# 268 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "那一群强多了！$"
# 269 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 270 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 271 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_GetUrgeToMoveWithMon:
# 272 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "看到宝可梦跳起充满活力的\n"
# 273 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "表演，你不也想\l"
# 274 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "跟着动起来吗？$"
# 275 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 276 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 277 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_HyperRankStage:
# 278 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "宝可梦华丽大赛\n"
# 279 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "超级级别会场！$"
