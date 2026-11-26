# 1 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 2
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
# 7 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
# 8 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.byte 0
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition:
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 13 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 14 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 3, 2
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	return
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnWarp:
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnFrame:
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_WATER_STONE, 10
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 10
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_THUNDER_STONE, 10
# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_SUN_STONE, 10
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "我是得文公司的\n"
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "社长兹伏奇。\p"
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "我刚听说了你的事！\p"
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "你不只一次，而是两次\n"
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "救了我们公司的员工！\p"
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "我想拜托像你这样\n"
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "了不起的人一件事。\p"
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "我知道你要把包裹送到\n"
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "凯那市的造船厂。\p"
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "那么，路上能不能\n"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "先到武斗镇去一趟？\p"
# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "我希望你能把一封信\n"
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "交给武斗镇的大吾。$"
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "兹伏奇社长：你要知道，\n"
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "我可是个了不起的社长。\p"
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "所以我绝不会小气到\n"
# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "白白请你帮忙。\p"
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "所以，这个请你收下！$"
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER}得到了\n"
# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "宝可梦导航。$"
# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "兹伏奇社长：那个装置……\p"
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "叫宝可梦导航，简称导航。\p"
# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "对任何冒险中的训练家\n"
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "都是必不可少的工具。\p"
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "里面有丰缘地区的地图。\p"
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "能轻松查到武斗镇和\n"
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "凯那市的位置！\p"
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "对了，我听说有群\n"
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "邪恶的坏人——好像是\l"
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "熔岩队和水舰队——\l"
# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "正在到处惹事。\p"
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "我看你出发之前，\n"
# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "最好先休息一下。$"
# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "兹伏奇社长：那么，\n"
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER}，一路小心谨慎！$"
# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "兹伏奇社长：就拜托你了！$"
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "兹伏奇社长：你把我的信\n"
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "送到了？太感谢你了！\p"
# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "这是我的一点谢意。\n"
# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "这些应该对你有用。$"
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "兹伏奇社长：说出来你\n"
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "可能不信，\l"
# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "我特别喜欢收集各种石头！\p"
# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "进化石、河里的石头，\n"
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "连地上捡的石头都要！\p"
# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "不过我想，比起我今早上班\n"
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "路上捡的石头，你会更喜欢\l"
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "这些吧，哈哈！$"
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "兹伏奇社长：我从小就一头\n"
# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "埋进工作和收藏里。\p"
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "所以对流行之类的\n"
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "事情不太了解。\p"
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "不过现在的年轻人都想\n"
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "当宝可梦联盟的训练家吗？$"
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "这里是得文公司的\n"
# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "三楼。\p"
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "我们社长的办公室\n"
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "就在这一层。\p"
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "总之，我真不知道该怎么\n"
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "感谢你才好。\p"
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "嗯……对了，你帮我们\n"
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "拿回来的那个包裹……\p"
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "能不能麻烦你把它送到\n"
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "凯那市的造船厂去？\p"
# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "要是再被那些抢匪盯上\n"
# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "可就糟了。\p"
# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "呃……嘿嘿，所以说，\n"
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "能不能拜托你跑一趟？\p"
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "哦，对了。\n"
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "请在这里等一下好吗？$"
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "社长想和你说几句话。\p"
# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "请跟我来。$"
# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "请进。$"
# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "如果你去凯那市的造船厂，\n"
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "一定要去见见斯图船长。$"
# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 300 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "得文的新产品，重复球和\n"
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "计时球，在训练家当中\l"
# 303 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "大受欢迎。$"
# 304 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 305 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 306 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "这是社长收集的\n"
# 307 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "珍稀岩石和矿石。$"
