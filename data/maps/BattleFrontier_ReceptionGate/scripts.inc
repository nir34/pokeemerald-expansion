# 1 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 2 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
.set LOCALID_GREETER, 1
# 3 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
.set LOCALID_GUIDE, 2
# 4 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
.set LOCALID_SCOTT, 4
# 5 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 6 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_MapScripts::
# 7 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_ReceptionGate_OnFrame
# 8 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_ReceptionGate_OnTransition
# 9 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 11 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_OnTransition:
# 12 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 14 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 15 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_OnFrame:
# 16 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script_2 VAR_HAS_ENTERED_BATTLE_FRONTIER, 0, BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering
# 17 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.2byte 0
# 18 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 19 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering::
# 20 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lockall
# 21 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
# 22 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 23 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_GREETER, Common_Movement_ExclamationMark
# 24 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 25 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_GREETER, Common_Movement_Delay48
# 26 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 27 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay, MSGBOX_DEFAULT
# 28 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 29 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter
# 30 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 31 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ScottScene
# 32 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 33 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 34 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ScottScene::
# 35 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 36 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IssueFrontierPass, MSGBOX_DEFAULT
# 37 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass
# 39 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitfanfare
# 40 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 41 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass, MSGBOX_DEFAULT
# 42 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_SYS_FRONTIER_PASS
# 43 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 44 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame, MSGBOX_DEFAULT
# 45 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 46 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_GREETER, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_GUIDE, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 50 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_GREETER, Common_Movement_ExclamationMark
# 52 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_GUIDE, Common_Movement_ExclamationMark
# 53 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 54 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay, MSGBOX_DEFAULT
# 56 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 57 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_GREETER, BattleFrontier_ReceptionGate_Movement_GreeterFaceScott
# 58 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_GUIDE, BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott
# 59 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerFaceScott
# 60 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottEnter
# 61 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 62 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere, MSGBOX_DEFAULT
# 63 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 64 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottExit
# 65 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 66 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	removeobject LOCALID_SCOTT
# 67 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	releaseall
# 68 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 69 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 70 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter:
# 71 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 72 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 73 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 74 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 75 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 76 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 77 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerFaceScott:
# 78 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 79 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 80 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 81 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 82 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 83 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 84 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 85 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
@ Unused
# 86 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_WalkDown:
# 87 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 88 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 89 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 90 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 91 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottEnter:
# 92 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 93 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 94 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 95 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 96 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 97 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 98 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 99 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 100 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 101 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottExit:
# 102 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_right
# 103 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 104 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 105 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 106 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 107 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 108 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 109 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 110 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 111 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_GreeterFaceScott:
# 112 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 113 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 114 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 115 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 116 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 117 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 118 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 119 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott:
# 120 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 121 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 122 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 123 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 124 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_left
# 125 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 126 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 127 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Greeter::
# 128 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 129 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 130 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 131 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 132 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 133 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 134 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 135 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FacilityGuide::
# 136 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 137 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 138 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFacilities, MSGBOX_DEFAULT
# 139 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 140 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 141 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 142 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout::
# 143 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich2
# 144 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 145 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_RECEPTIONIST
# 146 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	special ShowScrollableMultichoice
# 147 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitstate
# 148 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 149 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_BattleTower
# 150 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_BattleDome
# 151 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePalace
# 152 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_BattleArena
# 153 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_BattleFactory
# 154 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_BattlePike
# 155 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 6, BattleFrontier_ReceptionGate_EventScript_BattlePyramid
# 156 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 7, BattleFrontier_ReceptionGate_EventScript_RankingHall
# 157 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 8, BattleFrontier_ReceptionGate_EventScript_ExchangeCorner
# 158 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 9, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 159 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 160 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 161 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 162 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleTower::
# 163 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleTowerInfo, MSGBOX_DEFAULT
# 164 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 165 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 166 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 167 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleDome::
# 168 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleDomeInfo, MSGBOX_DEFAULT
# 169 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 170 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 171 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 172 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePalace::
# 173 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePalaceInfo, MSGBOX_DEFAULT
# 174 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 175 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 176 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 177 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleArena::
# 178 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleArenaInfo, MSGBOX_DEFAULT
# 179 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 180 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 181 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 182 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleFactory::
# 183 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleFactoryInfo, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 185 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 186 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 187 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePike::
# 188 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePikeInfo, MSGBOX_DEFAULT
# 189 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 190 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 191 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 192 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePyramid::
# 193 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePyramidInfo, MSGBOX_DEFAULT
# 194 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 195 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 196 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 197 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RankingHall::
# 198 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RankingHallInfo, MSGBOX_DEFAULT
# 199 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 200 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 201 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 202 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExchangeCorner::
# 203 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo, MSGBOX_DEFAULT
# 204 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 205 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 206 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 207 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide::
# 208 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 209 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 210 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 211 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 212 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RulesGuide::
# 213 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 214 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 215 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToRules, MSGBOX_DEFAULT
# 216 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 217 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 218 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 219 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout::
# 220 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhat
# 221 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 222 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 15, 0, MULTI_FRONTIER_RULES, FALSE
# 223 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 224 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_LevelMode
# 225 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_Level50
# 226 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_OpenLevel
# 227 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_MonEntry
# 228 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_HoldItems
# 229 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 230 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 231 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 232 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 233 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_LevelMode::
# 234 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_LevelModeInfo, MSGBOX_DEFAULT
# 235 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 236 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 237 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 238 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Level50::
# 239 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_Level50Info, MSGBOX_DEFAULT
# 240 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 241 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 242 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 243 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_OpenLevel::
# 244 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OpenLevelInfo, MSGBOX_DEFAULT
# 245 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 246 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 247 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 248 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_MonEntry::
# 249 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_MonEntryInfo, MSGBOX_DEFAULT
# 250 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 251 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 252 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 253 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_HoldItems::
# 254 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_HoldItemsInfo, MSGBOX_DEFAULT
# 255 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 256 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 257 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 258 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide::
# 259 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 260 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 261 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 262 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 263 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide::
# 264 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 265 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 266 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass, MSGBOX_DEFAULT
# 267 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 268 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 269 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 270 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout::
# 271 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich1
# 272 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 273 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 16, 4, MULTI_FRONTIER_PASS_INFO, FALSE
# 274 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 275 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_Symbols
# 276 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_RecordBattle
# 277 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePoints
# 278 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 279 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 280 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 281 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 282 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Symbols::
# 283 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_SymbolsInfo, MSGBOX_DEFAULT
# 284 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 285 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 286 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 287 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RecordBattle::
# 288 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RecordedBattleInfo, MSGBOX_DEFAULT
# 289 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 290 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 291 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 292 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePoints::
# 293 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePointsInfo, MSGBOX_DEFAULT
# 294 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 295 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 296 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 297 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide::
# 298 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 299 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 300 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 301 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 302 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay:
# 303 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "你是第一次来吗？\n"
# 304 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "请往这边走！$"
# 305 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 306 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier:
# 307 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "宝可梦对战的最前线！\n"
# 308 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "欢迎来到对战开拓区！$"
# 309 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 310 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IssueFrontierPass:
# 311 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "首次来访的客人，我们会\n"
# 312 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "发给开拓区通行证。\p"
# 313 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "这是在对战开拓区所有\n"
# 314 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "设施通用的。\p"
# 315 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "给你！$"
# 316 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 317 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass:
# 318 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER}获得了\n"
# 319 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "开拓区通行证。$"
# 320 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 321 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass:
# 322 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER}把训练家卡\n"
# 323 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "放进了开拓区通行证。$"
# 324 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 325 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier:
# 326 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "希望你喜欢对战开拓区\n"
# 327 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "提供的一切！$"
# 328 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 329 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame:
# 330 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "？？？：哦，这不是{PLAYER}吗！\n"
# 331 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "你来了！$"
# 332 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 333 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay:
# 334 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "引导员：哦！史考特先生！\n"
# 335 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "先生，日安！$"
# 336 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 337 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere:
# 338 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "史考特：在这儿见到你真好，\n"
# 339 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "真的！\p"
# 340 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "希望你慢慢逛，\n"
# 341 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "到处都去看看。\p"
# 342 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "当然，我也希望你体验\n"
# 343 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战的纯粹本质。\p"
# 344 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "我在这儿也有住处，有空\n"
# 345 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "随时来坐坐。$"
# 346 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 347 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFacilities:
# 348 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "我是对战开拓区各个设施\n"
# 349 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "的向导。$"
# 350 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 351 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich2:
# 352 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "你想了解哪一项？$"
# 353 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 354 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleTowerInfo:
# 355 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "那是被认为是对战开拓区\n"
# 356 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "象征的巨塔。\p"
# 357 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "塔里有四种对战房间，\n"
# 358 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "分别是单打、双打、多人，\l"
# 359 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "以及联机多人对战。$"
# 360 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 361 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleDomeInfo:
# 362 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战巨蛋是那栋像\n"
# 363 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "巨大蛋一样的大建筑。\p"
# 364 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "这里会举办叫对战大赛\n"
# 365 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "的活动。\p"
# 366 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战大赛分两种课程——\n"
# 367 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "单打和双打对战。$"
# 368 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 369 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePalaceInfo:
# 370 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战宫殿是对战开拓区\n"
# 371 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "右侧的红色建筑。\p"
# 372 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "有两种对战厅，\n"
# 373 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "分别进行单打和双打对战。$"
# 374 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 375 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleArenaInfo:
# 376 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战竞技场是对战开拓区\n"
# 377 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "中右侧那栋像道场的\l"
# 378 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "建筑。\p"
# 379 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战竞技场里会举办\n"
# 380 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "叫定数击倒大赛的活动。$"
# 381 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 382 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleFactoryInfo:
# 383 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战工厂是离我们\n"
# 384 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "最近的巨大建筑。\p"
# 385 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "那里会举办叫交换对战\n"
# 386 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "的活动。\p"
# 387 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "交换对战分两种课程，\n"
# 388 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "单打和双打对战。$"
# 389 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 390 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePikeInfo:
# 391 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战管道是对战开拓区\n"
# 392 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "中左侧那栋像宝可梦的\l"
# 393 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "建筑。\p"
# 394 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "那里会举办叫对战选择\n"
# 395 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "的活动。$"
# 396 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 397 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePyramidInfo:
# 398 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战金字塔是那座\n"
# 399 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "巨大的金字塔。\p"
# 400 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "那里会举办叫对战任务\n"
# 401 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "的活动。$"
# 402 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 403 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RankingHallInfo:
# 404 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "排行榜大厅在对战塔附近。\p"
# 405 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "在那里，你可以看到挑战\n"
# 406 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战开拓区各种项目的\l"
# 407 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "训练家留下的最惊人\l"
# 408 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "记录。$"
# 409 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 410 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo:
# 411 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "兑换服务处在对战塔附近。\p"
# 412 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "你在对战开拓区赚到的\n"
# 413 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战点数，可以在那里\l"
# 414 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "换成精美奖品。$"
# 415 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 416 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToRules:
# 417 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "我是对战开拓区各设施\n"
# 418 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "挑战通用基本规则的向导。$"
# 419 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 420 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhat:
# 421 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "你想了解什么？$"
# 422 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 423 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LevelModeInfo:
# 424 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战开拓区各设施的挑战\n"
# 425 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "都分两种课程——50级和\l"
# 426 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "开放等级。$"
# 427 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 428 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_Level50Info:
# 429 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "50级课程接受50级\n"
# 430 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "及以下的宝可梦。\p"
# 431 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "不过请记住，你面对的\n"
# 432 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "训练家不会有任何\l"
# 433 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "低于50级的宝可梦。\p"
# 434 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "这个课程是对战开拓区\n"
# 435 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "的对战入门级。\p"
# 436 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "一开始，我们希望你先\n"
# 437 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "挑战这个课程。$"
# 438 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 439 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OpenLevelInfo:
# 440 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "开放等级课程不限制\n"
# 441 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "参战宝可梦的等级。\p"
# 442 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对手的等级会调整成\n"
# 443 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "和你宝可梦相当。\p"
# 444 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "不过，你面对的\n"
# 445 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "训练家的宝可梦都不会\l"
# 446 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "低于60级。$"
# 447 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 448 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_MonEntryInfo:
# 449 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "几乎所有种类的宝可梦\n"
# 450 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "都能参加各设施的挑战。\p"
# 451 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "不过蛋和某些种类的\n"
# 452 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "宝可梦不能参加。\p"
# 453 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "挑战所需宝可梦的数量\n"
# 454 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "因设施而异。\p"
# 455 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "但在所有设施，都\n"
# 456 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "不允许两只以上同种\l"
# 457 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "的宝可梦。$"
# 458 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 459 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_HoldItemsInfo:
# 460 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "在对战开拓区设施参加\n"
# 461 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "挑战时，宝可梦不能携带\l"
# 462 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "同种类的道具。\p"
# 463 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "请确保参加挑战的所有\n"
# 464 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "宝可梦携带不同\l"
# 465 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "的道具。$"
# 466 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 467 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass:
# 468 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "我是开拓区通行证的向导。$"
# 469 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 470 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich1:
# 471 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "你想了解哪一项？$"
# 472 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 473 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_SymbolsInfo:
# 474 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战开拓区有七个设施。\p"
# 475 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "能力获得认可的训练家，\n"
# 476 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "可能得到各设施颁发的\l"
# 477 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "象征。\p"
# 478 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "要拿到象征，训练家可能\n"
# 479 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "需要连续打败其他训练家，\l"
# 480 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "也可能需要反复赢下活动。\p"
# 481 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "拿到象征当然不容易。\n"
# 482 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "祝你好运！$"
# 483 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 484 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RecordedBattleInfo:
# 485 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "你可以在开拓区通行证上\n"
# 486 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "记录一场对战。\p"
# 487 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "你可以记录和朋友\n"
# 488 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "进行的一场对战。\p"
# 489 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "也可以记录在对战开拓区\n"
# 490 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "进行的对战，但排除\l"
# 491 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战管道和对战金字塔\l"
# 492 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "的比赛。\p"
# 493 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "你可以在对战结束时\n"
# 494 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "选择记录。$"
# 495 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 496 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePointsInfo:
# 497 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "对战点数是对战开拓区里\n"
# 498 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "表现杰出的训练家获得的\l"
# 499 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "奖励。\p"
# 500 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "你可以在兑换服务处\n"
# 501 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "用对战点数换取奖品。$"
