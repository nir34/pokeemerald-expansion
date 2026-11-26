# 1 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidFloor_OnResume
# 4 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidFloor_OnFrame
# 5 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidFloor_OnTransition
# 6 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.byte 0
# 7 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 8 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnFrame:
# 9 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_D, 1, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight
# 10 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic
# 11 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName
# 12 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 14 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight::
# 15 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	lockall
# 16 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	@ pyramid_updatelight, cant use macro because it straddles the loop
# 17 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_UPDATE_LIGHT
# 18 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8005, 4
# 19 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8006, PYRAMID_LIGHT_INCR_RADIUS
# 20 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8007, SE_SAVE
# 21 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 22 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop::
# 23 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special CallBattlePyramidFunction
# 24 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	delay 2
# 25 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_ne VAR_RESULT, 2, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop
# 26 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 0
# 27 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
# 28 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 30 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName::
# 31 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special ShowMapNamePopup
# 32 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 0
# 33 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 34 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 35 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic::
# 36 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	playbgm MUS_B_PYRAMID, FALSE
# 37 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
# 38 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 40 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume:
# 41 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setfloorpal
# 42 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_getstatus
# 43 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 44 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case 0, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
# 45 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby
# 46 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
# 47 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 48 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 49 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 50 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 51 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 52 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 53 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 54 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_isbattletype BATTLE_TYPE_TRAINER  @ VAR_RESULT seems to be ignored here
# 55 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 56 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ResetParty::
# 57 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_resetparty
# 58 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 59 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 60 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost::
# 61 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 62 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_set PYRAMID_DATA_TRAINER_FLAGS, 255
# 63 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramid_EventScript_WarpToLobby::
# 64 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 0, PYRAMID_LIGHT_SET_RADIUS
# 65 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_clearhelditems
# 66 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special HealPlayerParty
# 67 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 68 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 69 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 70 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 71 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge::
# 72 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 73 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special SavePlayerParty
# 74 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 75 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_settrainers
# 76 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 77 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
# 78 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 79 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 80 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnTransition:
# 81 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	call BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius
# 82 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
# 83 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 84 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 85 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius::
# 86 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 32, PYRAMID_LIGHT_SET_RADIUS
# 87 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	return
# 88 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 89 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToNextFloor::
# 90 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 91 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM  @ Floor number
# 92 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	addvar VAR_RESULT, 1
# 93 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 94 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, 7, BattlePyramid_WarpToTop
# 95 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_seedfloor
# 96 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 97 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 98 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
# 99 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 100 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 101 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 102 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToTop::
# 103 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 17, 17
# 104 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 105 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 107 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
@ TRAINER_PHILLIP is used as a placeholder
# 108 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_TrainerBattle::
# 109 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	trainerbattle TRAINER_BATTLE_PYRAMID, TRAINER_PHILLIP, 0, BattleFacility_TrainerBattle_PlaceholderText, BattleFacility_TrainerBattle_PlaceholderText
# 110 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_showhint
# 111 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitmessage
# 112 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitbuttonpress
# 113 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	closemessage
# 114 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
# 115 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 116 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 117 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBall::
# 118 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setitem
# 119 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	callstd STD_FIND_ITEM
# 120 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_0x8007, 0, BattlePyramid_FindItemBallEnd
# 121 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_hideitem
# 122 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBallEnd::
# 123 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 124 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 125 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Retire::
# 126 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 127 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 128 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
@ Also used by Trainer Hill
# 129 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFacility_TrainerBattle_PlaceholderText:
# 130 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这是一条示例文本。$"
# 131 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 132 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
gText_BattlePyramidConfirmRest::
# 133 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你的对战金字塔进度会被保存，\n"
# 134 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你可以先退出。\l"
# 135 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这样可以吗？$"
# 136 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 137 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
gText_BattlePyramidConfirmRetire::
# 138 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你确定要放弃\n"
# 139 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "金字塔挑战吗？$"
# 140 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 141 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp1::
# 142 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层的出口在\n"
# 143 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那边：{UP_ARROW}$"
# 144 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 145 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft1::
# 146 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层的出口在\n"
# 147 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那边：{LEFT_ARROW}$"
# 148 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 149 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight1::
# 150 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层的出口在\n"
# 151 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那边：{RIGHT_ARROW}$"
# 152 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 153 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown1::
# 154 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层的出口在\n"
# 155 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那边：{DOWN_ARROW}$"
# 156 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 157 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp2::
# 158 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层的出口在\n"
# 159 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{UP_ARROW}方向。$"
# 160 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 161 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft2::
# 162 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层的出口在\n"
# 163 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{LEFT_ARROW}方向。$"
# 164 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 165 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight2::
# 166 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层的出口在\n"
# 167 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{RIGHT_ARROW}方向。$"
# 168 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 169 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown2::
# 170 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层的出口在\n"
# 171 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{DOWN_ARROW}方向。$"
# 172 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 173 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp3::
# 174 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口在\n"
# 175 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那个{UP_ARROW}方向。$"
# 176 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 177 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft3::
# 178 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口在\n"
# 179 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那个{LEFT_ARROW}方向。$"
# 180 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 181 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight3::
# 182 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口在\n"
# 183 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那个{RIGHT_ARROW}方向。$"
# 184 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 185 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown3::
# 186 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口在\n"
# 187 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那个{DOWN_ARROW}方向。$"
# 188 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 189 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp4::
# 190 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层，出口在\n"
# 191 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{UP_ARROW}方向的某处。$"
# 192 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 193 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft4::
# 194 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层，出口在\n"
# 195 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{LEFT_ARROW}方向的某处。$"
# 196 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 197 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight4::
# 198 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层，出口在\n"
# 199 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{RIGHT_ARROW}方向的某处。$"
# 200 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 201 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown4::
# 202 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这一层，出口在\n"
# 203 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{DOWN_ARROW}方向的某处。$"
# 204 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 205 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp5::
# 206 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口？\n"
# 207 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "在那个{UP_ARROW}方向。$"
# 208 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 209 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft5::
# 210 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口？\n"
# 211 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "在那个{LEFT_ARROW}方向。$"
# 212 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 213 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight5::
# 214 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口？\n"
# 215 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "在那个{RIGHT_ARROW}方向。$"
# 216 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 217 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown5::
# 218 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口？\n"
# 219 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "在那个{DOWN_ARROW}方向。$"
# 220 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 221 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp6::
# 222 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口恰好在\n"
# 223 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{UP_ARROW}方向。$"
# 224 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 225 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft6::
# 226 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口恰好在\n"
# 227 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{LEFT_ARROW}方向。$"
# 228 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 229 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight6::
# 230 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口恰好在\n"
# 231 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{RIGHT_ARROW}方向。$"
# 232 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 233 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown6::
# 234 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "出口恰好在\n"
# 235 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "{DOWN_ARROW}方向。$"
# 236 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 237 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining1::
# 238 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你在找道具吗？\p"
# 239 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "还有8件道具没被找到。$"
# 240 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 241 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining1::
# 242 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你在找道具吗？\p"
# 243 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "还有7件道具没被找到。$"
# 244 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 245 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining1::
# 246 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你在找道具吗？\p"
# 247 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "还有6件道具没被找到。$"
# 248 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 249 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining1::
# 250 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你在找道具吗？\p"
# 251 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "还有5件道具没被找到。$"
# 252 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 253 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining1::
# 254 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你在找道具吗？\p"
# 255 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "还有4件道具没被找到。$"
# 256 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 257 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining1::
# 258 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你在找道具吗？\p"
# 259 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "还有3件道具没被找到。$"
# 260 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 261 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining1::
# 262 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你在找道具吗？\p"
# 263 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "还有2件道具没被找到。$"
# 264 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 265 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining1::
# 266 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你在找道具吗？\p"
# 267 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "还有1件道具没被找到。$"
# 268 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 269 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining1::
# 270 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你在找道具吗？\p"
# 271 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "已经什么都不剩了！$"
# 272 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 273 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining2::
# 274 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "因为你是赢家，我告诉你个小秘密！\p"
# 275 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这里还散落着8件道具。$"
# 276 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 277 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining2::
# 278 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "因为你是赢家，我告诉你个小秘密！\p"
# 279 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这里还散落着7件道具。$"
# 280 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 281 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining2::
# 282 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "因为你是赢家，我告诉你个小秘密！\p"
# 283 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这里还散落着6件道具。$"
# 284 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 285 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining2::
# 286 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "因为你是赢家，我告诉你个小秘密！\p"
# 287 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这里还散落着5件道具。$"
# 288 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 289 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining2::
# 290 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "因为你是赢家，我告诉你个小秘密！\p"
# 291 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这里还散落着4件道具。$"
# 292 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 293 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining2::
# 294 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "因为你是赢家，我告诉你个小秘密！\p"
# 295 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这里还散落着3件道具。$"
# 296 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 297 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining2::
# 298 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "因为你是赢家，我告诉你个小秘密！\p"
# 299 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这里还散落着2件道具。$"
# 300 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 301 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining2::
# 302 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "因为你是赢家，我告诉你个小秘密！\p"
# 303 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这里还散落着1件道具。$"
# 304 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 305 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining2::
# 306 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "因为你是赢家，我告诉你个小秘密！\p"
# 307 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这里什么都不剩了。$"
# 308 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 309 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining3::
# 310 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你的道具还够用吗？\p"
# 311 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我估计这一层还有8件道具等着被发现。$"
# 312 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 313 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining3::
# 314 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你的道具还够用吗？\p"
# 315 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我估计这一层还有7件道具等着被发现。$"
# 316 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 317 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining3::
# 318 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你的道具还够用吗？\p"
# 319 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我估计这一层还有6件道具等着被发现。$"
# 320 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 321 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining3::
# 322 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你的道具还够用吗？\p"
# 323 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我估计这一层还有5件道具等着被发现。$"
# 324 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 325 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining3::
# 326 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你的道具还够用吗？\p"
# 327 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我估计这一层还有4件道具等着被发现。$"
# 328 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 329 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining3::
# 330 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你的道具还够用吗？\p"
# 331 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我估计这一层还有3件道具等着被发现。$"
# 332 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 333 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining3::
# 334 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你的道具还够用吗？\p"
# 335 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我估计这一层还有2件道具等着被发现。$"
# 336 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 337 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining3::
# 338 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你的道具还够用吗？\p"
# 339 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我估计这一层还有1件道具等着被发现。$"
# 340 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 341 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining3::
# 342 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你的道具还够用吗？\p"
# 343 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我估计这一层没有道具了。\l"
# 344 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你保重！$"
# 345 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 346 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining4::
# 347 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你很强，所以给你个提示！\p"
# 348 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "地上好像还有8件道具。$"
# 349 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 350 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining4::
# 351 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你很强，所以给你个提示！\p"
# 352 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "地上好像还有7件道具。$"
# 353 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 354 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining4::
# 355 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你很强，所以给你个提示！\p"
# 356 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "地上好像还有6件道具。$"
# 357 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 358 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining4::
# 359 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你很强，所以给你个提示！\p"
# 360 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "地上好像还有5件道具。$"
# 361 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 362 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining4::
# 363 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你很强，所以给你个提示！\p"
# 364 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "地上好像还有4件道具。$"
# 365 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 366 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining4::
# 367 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你很强，所以给你个提示！\p"
# 368 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "地上好像还有3件道具。$"
# 369 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 370 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining4::
# 371 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你很强，所以给你个提示！\p"
# 372 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "地上好像还有2件道具。$"
# 373 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 374 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining4::
# 375 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你很强，所以给你个提示！\p"
# 376 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "地上好像还有1件道具。$"
# 377 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 378 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining4::
# 379 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你很强，所以给你个提示！\p"
# 380 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "地上好像没有道具了。$"
# 381 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 382 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining5::
# 383 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我听说这层金字塔里\n"
# 384 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "有8件道具……$"
# 385 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 386 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining5::
# 387 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我听说这层金字塔里\n"
# 388 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "有7件道具……$"
# 389 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 390 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining5::
# 391 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我听说这层金字塔里\n"
# 392 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "有6件道具……$"
# 393 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 394 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining5::
# 395 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我听说这层金字塔里\n"
# 396 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "有5件道具……$"
# 397 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 398 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining5::
# 399 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我听说这层金字塔里\n"
# 400 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "有4件道具……$"
# 401 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 402 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining5::
# 403 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我听说这层金字塔里\n"
# 404 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "有3件道具……$"
# 405 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 406 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining5::
# 407 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我听说这层金字塔里\n"
# 408 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "有2件道具……$"
# 409 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 410 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining5::
# 411 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我听说这层金字塔里\n"
# 412 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "有1件道具……$"
# 413 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 414 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining5::
# 415 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我听说这层金字塔里\n"
# 416 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "没有道具了……$"
# 417 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 418 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining6::
# 419 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你收集到道具了吗？\p"
# 420 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我相信这一层还有8件道具。$"
# 421 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 422 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining6::
# 423 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你收集到道具了吗？\p"
# 424 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我相信这一层还有7件道具。$"
# 425 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 426 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining6::
# 427 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你收集到道具了吗？\p"
# 428 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我相信这一层还有6件道具。$"
# 429 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 430 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining6::
# 431 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你收集到道具了吗？\p"
# 432 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我相信这一层还有5件道具。$"
# 433 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 434 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining6::
# 435 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你收集到道具了吗？\p"
# 436 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我相信这一层还有4件道具。$"
# 437 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 438 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining6::
# 439 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你收集到道具了吗？\p"
# 440 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我相信这一层还有3件道具。$"
# 441 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 442 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining6::
# 443 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你收集到道具了吗？\p"
# 444 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我相信这一层还有2件道具。$"
# 445 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 446 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining6::
# 447 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你收集到道具了吗？\p"
# 448 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我相信这一层还有1件道具。$"
# 449 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 450 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining6::
# 451 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你收集到道具了吗？\p"
# 452 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "我相信这一层没有道具了。$"
# 453 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 454 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining1::
# 455 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你真是太棒了！\p"
# 456 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "不过除我之外还有7个强训练家！$"
# 457 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 458 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining1::
# 459 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你真是太棒了！\p"
# 460 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "不过除我之外还有6个强训练家！$"
# 461 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 462 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining1::
# 463 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你真是太棒了！\p"
# 464 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "不过除我之外还有5个强训练家！$"
# 465 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 466 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining1::
# 467 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你真是太棒了！\p"
# 468 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "不过除我之外还有4个强训练家！$"
# 469 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 470 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining1::
# 471 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你真是太棒了！\p"
# 472 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "不过除我之外还有3个强训练家！$"
# 473 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 474 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining1::
# 475 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你真是太棒了！\p"
# 476 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "不过除我之外还有2个强训练家！$"
# 477 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 478 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining1::
# 479 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你真是太棒了！\p"
# 480 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "不过除我之外还有1个强训练家！$"
# 481 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 482 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining1::
# 483 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你真是太棒了！\p"
# 484 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "已经没人能打败你了！$"
# 485 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 486 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining2::
# 487 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "真让人不甘心！\p"
# 488 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可还有7个训练家！\n"
# 489 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "总会有人让你吃瘪的！$"
# 490 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 491 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining2::
# 492 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "真让人不甘心！\p"
# 493 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可还有6个训练家！\n"
# 494 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "总会有人让你吃瘪的！$"
# 495 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 496 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining2::
# 497 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "真让人不甘心！\p"
# 498 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可还有5个训练家！\n"
# 499 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "总会有人让你吃瘪的！$"
# 500 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 501 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining2::
# 502 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "真让人不甘心！\p"
# 503 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可还有4个训练家！\n"
# 504 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "总会有人让你吃瘪的！$"
# 505 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 506 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining2::
# 507 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "真让人不甘心！\p"
# 508 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可还有3个训练家！\n"
# 509 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "总会有人让你吃瘪的！$"
# 510 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 511 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining2::
# 512 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "真让人不甘心！\p"
# 513 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可还有2个训练家！\n"
# 514 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "总会有人让你吃瘪的！$"
# 515 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 516 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining2::
# 517 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "真让人不甘心！\p"
# 518 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可还有1个训练家！\n"
# 519 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "总会有人让你吃瘪的！$"
# 520 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 521 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining2::
# 522 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "真让人不甘心！\p"
# 523 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可已经没有训练家\n"
# 524 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "能挑战你了！$"
# 525 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 526 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining3::
# 527 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那真是厉害！\p"
# 528 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可这一层还有7个训练家。\n"
# 529 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能全打赢吗？$"
# 530 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 531 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining3::
# 532 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那真是厉害！\p"
# 533 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可这一层还有6个训练家。\n"
# 534 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能全打赢吗？$"
# 535 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 536 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining3::
# 537 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那真是厉害！\p"
# 538 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可这一层还有5个训练家。\n"
# 539 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能全打赢吗？$"
# 540 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 541 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining3::
# 542 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那真是厉害！\p"
# 543 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可这一层还有4个训练家。\n"
# 544 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能全打赢吗？$"
# 545 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 546 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining3::
# 547 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那真是厉害！\p"
# 548 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可这一层还有3个训练家。\n"
# 549 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能全打赢吗？$"
# 550 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 551 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining3::
# 552 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那真是厉害！\p"
# 553 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可这一层还有2个训练家。\n"
# 554 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能全打赢吗？$"
# 555 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 556 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining3::
# 557 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那真是厉害！\p"
# 558 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "可这一层还有1个训练家。\n"
# 559 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能全打赢吗？$"
# 560 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 561 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining3::
# 562 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "那真是厉害！\p"
# 563 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你已经打赢这一层\n"
# 564 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "所有训练家了。$"
# 565 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 566 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining4::
# 567 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "也许你能把这一层剩下的\n"
# 568 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "7个训练家全扫掉。$"
# 569 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 570 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining4::
# 571 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "也许你能把这一层剩下的\n"
# 572 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "6个训练家全扫掉。$"
# 573 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 574 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining4::
# 575 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "也许你能把这一层剩下的\n"
# 576 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "5个训练家全扫掉。$"
# 577 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 578 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining4::
# 579 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "也许你能把这一层剩下的\n"
# 580 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "4个训练家全扫掉。$"
# 581 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 582 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining4::
# 583 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "也许你能把这一层剩下的\n"
# 584 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "3个训练家全扫掉。$"
# 585 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 586 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining4::
# 587 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "也许你能把这一层剩下的\n"
# 588 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "2个训练家全扫掉。$"
# 589 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 590 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining4::
# 591 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "也许你能把这一层剩下的\n"
# 592 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "1个训练家全扫掉。$"
# 593 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 594 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining4::
# 595 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "现在已经没有一个人\n"
# 596 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "能打败你了……$"
# 597 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 598 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining5::
# 599 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你也许有实力打败\n"
# 600 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "剩下的7个高手训练家。$"
# 601 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 602 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining5::
# 603 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你也许有实力打败\n"
# 604 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "剩下的6个高手训练家。$"
# 605 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 606 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining5::
# 607 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你也许有实力打败\n"
# 608 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "剩下的5个高手训练家。$"
# 609 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 610 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining5::
# 611 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你也许有实力打败\n"
# 612 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "剩下的4个高手训练家。$"
# 613 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 614 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining5::
# 615 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你也许有实力打败\n"
# 616 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "剩下的3个高手训练家。$"
# 617 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 618 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining5::
# 619 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你也许有实力打败\n"
# 620 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "剩下的2个高手训练家。$"
# 621 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 622 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining5::
# 623 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你也许有实力打败\n"
# 624 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "剩下的1个高手训练家。$"
# 625 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 626 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining5::
# 627 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你的本领无可挑剔。\p"
# 628 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "这里已经没有训练家\n"
# 629 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "有机会打败你了。$"
# 630 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 631 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining6::
# 632 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能继续赢下去，\n"
# 633 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "打败剩下的7个训练家吗？$"
# 634 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 635 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining6::
# 636 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能继续赢下去，\n"
# 637 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "打败剩下的6个训练家吗？$"
# 638 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 639 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining6::
# 640 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能继续赢下去，\n"
# 641 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "打败剩下的5个训练家吗？$"
# 642 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 643 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining6::
# 644 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能继续赢下去，\n"
# 645 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "打败剩下的4个训练家吗？$"
# 646 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 647 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining6::
# 648 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能继续赢下去，\n"
# 649 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "打败剩下的3个训练家吗？$"
# 650 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 651 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining6::
# 652 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能继续赢下去，\n"
# 653 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "打败剩下的2个训练家吗？$"
# 654 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 655 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining6::
# 656 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "你能继续赢下去，\n"
# 657 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "打败剩下的1个训练家吗？$"
# 658 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 659 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining6::
# 660 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "现在已经没有训练家\n"
# 661 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "能跟你交手了……$"
