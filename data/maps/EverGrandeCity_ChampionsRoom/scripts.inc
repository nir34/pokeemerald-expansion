# 1 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_RIVAL, 2
# 4 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_BIRCH, 3
# 5 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_STEVEN, 4
# 6 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_DAWN, 5
# 7 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 9 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 11 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceIntroSpeech, MSGBOX_DEFAULT
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech, MSGBOX_DEFAULT
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceAndISaidYes, MSGBOX_DEFAULT
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_two_trainers TRAINER_STEVEN_WITH_WALLACE, EverGrandeCity_ChampionsRoom_Text_StevenDefeat, TRAINER_WALLACE_WITH_STEVEN, EverGrandeCity_ChampionsRoom_Text_WallaceDefeat
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	release
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_RIVAL
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_Delay48
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_DawnYouveWon, MSGBOX_DEFAULT
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_ExclamationMark
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_Delay48
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_DawnYouveWon, MSGBOX_DEFAULT
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_BIRCH
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterUp
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, Common_Movement_WalkInPlaceFasterUp
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer1
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_DAWN
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 15
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer2
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, EverGrandeCity_ChampionsRoom_Movement_DawnApproachPlayer
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_DAWN, EverGrandeCity_ChampionsRoom_Movement_DawnLookBackAndForth
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer1:
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer2:
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_DawnApproachPlayer:
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_DawnLookBackAndForth:
# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceIntroSpeech:
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "亚当：欢迎，{PLAYER}！\p"
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "琉璃市那件事……\n"
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "你一个人就平息了\l"
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "那场危机，干得漂亮。\p"
# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "哎呀！\p"
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "说你一个人平息了\n"
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "危机，也不太公平。\p"
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "当然，是你和宝可梦\n"
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "同心协力，才渡过\l"
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "那个难关！\p"
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "现在，你一定在想为什么\n"
# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "我不是一个人在这里……\l"
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "那个……$"
# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenIntroSpeech:
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "大吾：我就是受不了\n"
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "被排除在所有乐趣之外！\p"
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "你看，在亚当之前，\n"
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "我是丰缘的冠军，\l"
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "这些年我们换过\l"
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "几次位子。\p"
# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "后来源治变坏了，我们\n"
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "把小光叫来，感觉\l"
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "好像每个人都要和\l"
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "你——我们很久以来\l"
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "见过的最强新星——\l"
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "打一场，就除了我！\p"
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "我实在没法坐在\n"
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "边上看，所以我问\l"
# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "亚当，就这一次，\l"
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "我们能不能当\l"
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "双冠军，和你打一场。$"
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceAndISaidYes:
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "亚当：然后我答应了，\n"
# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "所以我们来了！\p"
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "不过话说到这里\n"
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "够了……\p"
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}，该给你\n"
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "最后一场考验了……\p"
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "该打最后一场，看看\n"
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "你是不是丰缘地区\l"
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "最强的训练家！$"
# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceDefeat:
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "干得漂亮。\n"
# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "你优雅得让人生气。\l"
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "可又那么辉煌！\p"
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}，恭喜你！\p"
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "你真是丰缘地区最强的\n"
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "宝可梦训练家，\l"
# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "也肯定是我面对过\l"
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "最强的。$"
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenDefeat:
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "哈哈！太了不起了，\n"
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}。我真高兴亚当\l"
# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "让我一起打这一场，\l"
# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "能亲眼见识你的实力。\p"
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}，恭喜你成为\n"
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "新的宝可梦联盟冠军！$"
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "亚当：你派上场的\n"
# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "宝可梦……\p"
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "它们时而像春风\n"
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "起舞，时而像\l"
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "闪电出击。\p"
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "你带领宝可梦的方式，\n"
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "轻盈却又稳健优雅。\p"
# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "连我都为你精湛的\n"
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "表现目眩神迷！\p"
# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "你现在站在宝可梦联盟\n"
# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "光辉的顶点。\p"
# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "我现在宣布你为\n"
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "丰缘地区新的……$"
# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "小遥：{PLAYER}！\p"
# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "你挑战冠军之前，\n"
# 352 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "给你点建议……$"
# 353 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 354 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "佑树：{PLAYER}！\p"
# 356 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "挑战冠军之前，\n"
# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "想不想听点建议？……$"
# 358 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 359 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_DawnYouveWon:
# 360 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "小光：嗯？\n"
# 361 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "什么，什么，什么？\p"
# 362 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}……\n"
# 363 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "难道是……\l"
# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "已经结束了？\p"
# 365 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "我还不敢相信你能\n"
# 366 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "打赢辛西娅，这……$"
# 367 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 369 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "小田卷博士：看吧？\n"
# 370 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "我跟你们两个说什么来着？\p"
# 371 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "我不是说过，不用\n"
# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "担心{PLAYER}吗？\p"
# 373 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 374 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}，你终于做到了。\p"
# 375 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "我听说你在橙华道馆\n"
# 376 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "打败了自己的父亲，\l"
# 377 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "就想着也许你有机会……\p"
# 378 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "可没想到你真的成了\n"
# 379 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "冠军！\p"
# 380 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "啊，对了！\p"
# 381 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "你的宝可梦图鉴\n"
# 382 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "怎么样了？让我看看。$"
# 383 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 384 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 385 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "小田卷博士：总之，\n"
# 386 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "恭喜你！\p"
# 387 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "现在，自豪地走进\n"
# 388 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "最后的房间吧！$"
# 389 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 390 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
# 391 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "亚当：{PLAYER}……\p"
# 392 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "不，我该好好\n"
# 393 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "改口。\p"
# 394 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "新的冠军！\p"
# 395 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "跟我来。$"
# 396 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 397 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
# 398 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "亚当：抱歉，不过……\p"
# 399 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "从这里开始，只有\n"
# 400 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "成为冠军的训练家\l"
# 401 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "才能进入。\p"
# 402 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "你得和小田卷博士\n"
# 403 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "在外面等。$"
# 404 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 405 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 406 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "小遥：唔……\p"
# 407 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 408 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 409 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "我开玩笑的！没关系！\n"
# 410 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "这是规定！\p"
# 411 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}！\n"
# 412 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "真心恭喜你！$"
# 413 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 414 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 415 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "佑树：什么？！…… … …\n"
# 416 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 417 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "规定是这样就没办法。\p"
# 418 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}，干得好！\n"
# 419 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "恭喜你！$"
