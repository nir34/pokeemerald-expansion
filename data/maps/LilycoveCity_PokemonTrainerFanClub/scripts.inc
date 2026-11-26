# 1 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 2 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_LASS, 1
# 3 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_MAN, 2
# 4 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_POKEFAN_M, 3
# 5 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_LITTLE_GIRL, 4
# 6 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_NINJA_BOY, 5
# 7 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_BOY, 6
# 8 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_WOMAN, 7
# 9 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_EXPERT_F, 8
# 10 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 11 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_MapScripts::
# 12 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_PokemonTrainerFanClub_OnFrame
# 13 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonTrainerFanClub_OnTransition
# 14 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.byte 0
# 15 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 16 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	@ See field_specials.c for a breakdown of the Fan Club and its variables
# 17 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 18 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnFrame:
# 19 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script_2 VAR_LILYCOVE_FAN_CLUB_STATE, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
# 20 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.2byte 0
# 21 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 22 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 23 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lockall
# 24 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_WalkInPlaceFasterDown
# 25 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 26 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer, MSGBOX_DEFAULT
# 27 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer
# 28 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_MAN, LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 29 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 30 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 31 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 32 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan, MSGBOX_DEFAULT
# 33 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer
# 34 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 35 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 36 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 37 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer
# 38 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 39 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_LILYCOVE_FAN_CLUB_STATE, 2
# 40 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	releaseall
# 41 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 42 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 43 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer:
# 44 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 45 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 46 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 47 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 48 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 49 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 50 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 51 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 52 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 53 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer:
# 54 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 55 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 56 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 57 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 58 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 59 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 60 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 61 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 62 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer:
# 63 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 64 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_right
# 65 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 66 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 67 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer:
# 68 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	jump_in_place_right
# 69 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 70 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 71 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_right
# 72 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 73 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 74 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 75 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnTransition:
# 76 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer
# 77 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SetFanMemberPositionsForFirstFanMeeting
# 78 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 2, LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
# 79 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 80 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 81 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 82 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special TryLoseFansFromPlayTime
# 83 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow
# 84 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 85 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 86 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
# 87 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 88 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 89 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 90 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 91 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 92 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
# 93 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 94 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 95 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 96 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 97 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 98 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 99 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 100 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 101 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 102 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 103 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 104 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 105 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 106 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 107 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 108 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 109 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 110 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer::
# 111 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, ShouldHideFanClubInterviewer
# 112 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_HideInterviewer
# 113 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
# 114 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	clearflag FLAG_FAN_CLUB_STRENGTH_SHARED
# 115 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 116 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 117 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideInterviewer::
# 118 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
# 119 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 120 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 121 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Set up the fan club TV show, if the player has at least 5 fans in the club
# 122 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Rather than counting up, 1 is subtracted from the total for each member not a fan of the players
# 123 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow::
# 124 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8005, NUM_TRAINER_FAN_CLUB_MEMBERS
# 125 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 126 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 127 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 128 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 129 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 130 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 131 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 132 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 133 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 134 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 135 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 136 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 137 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 138 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 139 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 140 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 141 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 142 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 143 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 144 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 145 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 146 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 147 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 148 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 149 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_ge VAR_0x8005, 5, LilycoveCity_PokemonTrainerFanClub_EventScript_TrySetUpTVShow
# 150 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 151 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 152 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan::
# 153 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	subvar VAR_0x8005, 1
# 154 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 155 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 156 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_TrySetUpTVShow::
# 157 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special TryPutTrainerFanClubOnAir
# 158 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 159 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 160 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
# 161 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_LASS, 7, 5
# 162 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 163 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 164 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
# 165 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_POKEFAN_M, 3, 4
# 166 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 167 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 168 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
# 169 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_LITTLE_GIRL, 7, 2
# 170 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 171 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 172 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 173 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_NINJA_BOY, 5, 5
# 174 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 175 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 176 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 177 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_BOY, 5, 2
# 178 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 179 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 180 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 181 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_MAN, 8, 4
# 182 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 183 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 184 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 185 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_WOMAN, 3, 3
# 186 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 187 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 188 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 189 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_EXPERT_F, 8, 3
# 190 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 191 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 192 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_SetFanMemberPositionsForFirstFanMeeting::
# 193 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow
# 194 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 195 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 196 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 197 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 198 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 199 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 200 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 201 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Man::
# 202 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 203 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 204 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 205 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 206 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayerNotChampion
# 207 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 208 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan
# 209 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 210 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyNonFan
# 211 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary, MSGBOX_DEFAULT
# 212 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 213 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 214 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 215 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan::
# 216 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 217 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyFan
# 218 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin, MSGBOX_DEFAULT
# 219 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 220 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 221 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 222 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyFan::
# 223 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest, MSGBOX_DEFAULT
# 224 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 225 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 226 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 227 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyNonFan::
# 228 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen, MSGBOX_DEFAULT
# 229 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 230 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 231 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 232 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayerNotChampion::
# 233 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer, MSGBOX_DEFAULT
# 234 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 235 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 236 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 237 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Lass::
# 238 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 239 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 240 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 241 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 242 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayerNotChampion
# 243 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 244 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan
# 245 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 246 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyNonFan
# 247 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly, MSGBOX_DEFAULT
# 248 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 249 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 250 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 251 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan::
# 252 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 253 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyFan
# 254 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou, MSGBOX_DEFAULT
# 255 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 256 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 257 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 258 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyFan::
# 259 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan, MSGBOX_DEFAULT
# 260 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 261 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 262 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 263 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyNonFan::
# 264 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly, MSGBOX_DEFAULT
# 265 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 266 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 267 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 268 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayerNotChampion::
# 269 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly, MSGBOX_DEFAULT
# 270 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 271 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 272 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 273 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM::
# 274 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 275 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 276 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 277 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 278 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayerNotChampion
# 279 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 280 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan
# 281 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 282 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyNonFan
# 283 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman, MSGBOX_DEFAULT
# 284 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 285 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 286 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 287 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan::
# 288 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 289 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyFan
# 290 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather, MSGBOX_DEFAULT
# 291 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 292 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 293 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 294 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyFan::
# 295 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling, MSGBOX_DEFAULT
# 296 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 297 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 298 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 299 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyNonFan::
# 300 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent, MSGBOX_DEFAULT
# 301 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 302 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 303 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 304 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayerNotChampion::
# 305 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers, MSGBOX_DEFAULT
# 306 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 307 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 308 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 309 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 310 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 311 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 312 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 313 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 314 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
# 315 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 316 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
# 317 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 318 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
# 319 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool, MSGBOX_DEFAULT
# 320 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 321 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 322 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 323 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
# 324 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 325 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
# 326 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer, MSGBOX_DEFAULT
# 327 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 328 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 329 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 330 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
# 331 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou, MSGBOX_DEFAULT
# 332 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 333 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 334 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 335 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
# 336 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe, MSGBOX_DEFAULT
# 337 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 338 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 339 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 340 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
# 341 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat, MSGBOX_DEFAULT
# 342 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 343 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 344 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 345 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoy::
# 346 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 347 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 348 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 349 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 350 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 351 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan
# 352 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 353 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyNonFan
# 354 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool, MSGBOX_DEFAULT
# 355 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 356 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 357 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 358 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan::
# 359 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 360 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyFan
# 361 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou, MSGBOX_DEFAULT
# 362 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 363 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 364 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 365 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyFan::
# 366 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou, MSGBOX_DEFAULT
# 367 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 368 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 369 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 370 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyNonFan::
# 371 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan, MSGBOX_DEFAULT
# 372 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 373 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 374 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 375 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Boy::
# 376 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 377 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 378 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 379 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 380 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 381 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan
# 382 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 383 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyNonFan
# 384 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne, MSGBOX_DEFAULT
# 385 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 386 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 387 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 388 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan::
# 389 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 390 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyFan
# 391 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll, MSGBOX_DEFAULT
# 392 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 393 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 394 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 395 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyFan::
# 396 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner, MSGBOX_DEFAULT
# 397 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 398 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 399 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 400 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyNonFan::
# 401 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer, MSGBOX_DEFAULT
# 402 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 403 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 404 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 405 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Woman::
# 406 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 407 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 408 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 409 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 410 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 411 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
# 412 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 413 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
# 414 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout, MSGBOX_DEFAULT
# 415 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 416 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 417 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 418 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
# 419 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 420 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
# 421 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind, MSGBOX_DEFAULT
# 422 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 423 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 424 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 425 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
# 426 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation, MSGBOX_DEFAULT
# 427 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 428 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 429 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 430 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
# 431 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger, MSGBOX_DEFAULT
# 432 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 433 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 434 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 435 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertF::
# 436 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 437 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 438 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 439 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 440 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 441 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan
# 442 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 443 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyNonFan
# 444 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential, MSGBOX_DEFAULT
# 445 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 446 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 447 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 448 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan::
# 449 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 450 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyFan
# 451 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive, MSGBOX_DEFAULT
# 452 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 453 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 454 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 455 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyFan::
# 456 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth, MSGBOX_DEFAULT
# 457 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 458 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 459 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 460 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyNonFan::
# 461 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength, MSGBOX_DEFAULT
# 462 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 463 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 464 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 465 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer::
# 466 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 467 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 468 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_set FLAG_FAN_CLUB_STRENGTH_SHARED, LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed
# 469 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_unset FLAG_FAN_CLUB_STRENGTH_SHARED, LilycoveCity_PokemonTrainerFanClub_EventScript_Interview
# 470 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 471 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 472 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ The interviewer doesnt count as an individual fan club member
# 473 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Instead they always ask about whoever the Lass would be interested in, if not the player
# 474 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interview::
# 475 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8005, TVSHOW_FAN_CLUB_SPECIAL
# 476 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special InterviewBefore
# 477 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed2
# 478 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8006
# 479 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 480 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 481 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer, MSGBOX_DEFAULT
# 482 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_FAN_QUESTION
# 483 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 484 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call Common_ShowEasyChatScreen
# 485 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 486 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 487 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion
# 488 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion
# 489 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 490 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 491 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion::
# 492 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink, MSGBOX_DEFAULT
# 493 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer
# 494 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 495 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 496 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion::
# 497 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 498 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 499 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer, MSGBOX_YESNO
# 500 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer
# 501 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion
# 502 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 503 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 504 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion::
# 505 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 506 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 507 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2, MSGBOX_DEFAULT
# 508 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_FAN_QUESTION
# 509 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 510 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call Common_ShowEasyChatScreen
# 511 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 512 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 513 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion
# 514 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion
# 515 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 516 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 517 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer::
# 518 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 519 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 520 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	message LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer
# 521 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmessage
# 522 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_POKEMON_FAN_CLUB_RATER
# 523 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special ShowScrollableMultichoice
# 524 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitstate
# 525 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 526 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	switch VAR_RESULT
# 527 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	case 11, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer
# 528 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer
# 529 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 530 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 531 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8006, VAR_0x800A
# 532 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 533 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special PutFanClubSpecialOnTheAir
# 534 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CompleteInterview
# 535 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 536 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 537 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer::
# 538 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 539 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 540 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer2, MSGBOX_YESNO
# 541 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer
# 542 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer
# 543 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 544 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 545 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer::
# 546 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 547 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 548 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer, MSGBOX_DEFAULT
# 549 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 550 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 551 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 552 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CompleteInterview::
# 553 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 554 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 555 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo, MSGBOX_DEFAULT
# 556 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setflag FLAG_FAN_CLUB_STRENGTH_SHARED
# 557 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 558 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 559 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 560 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed::
# 561 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 562 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 563 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial, MSGBOX_DEFAULT
# 564 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 565 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 566 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 567 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Shouldnt be reached
# 568 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed2::
# 569 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 570 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 571 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer:
# 572 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "哦，哇！\n"
# 573 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "是{PLAYER}！$"
# 574 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 575 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan:
# 576 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我听说消息了！\n"
# 577 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你真的很强吧？\p"
# 578 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我们在这儿总是争论\n"
# 579 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "谁是最强的训练家。\p"
# 580 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "所以我一听说你，就\n"
# 581 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "决定当你的粉丝！\p"
# 582 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "希望你继续和其他\n"
# 583 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "强训练家对战。\p"
# 584 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "这样我们就能看到更多\n"
# 585 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你火热火热的对战。\p"
# 586 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "这样这里的人就能\n"
# 587 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "知道你有多厉害。\p"
# 588 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "记住，我在为你加油，\n"
# 589 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}！$"
# 590 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 591 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin:
# 592 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "哟，{PLAYER}！\n"
# 593 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你就是我们要的赢家！$"
# 594 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 595 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest:
# 596 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "其他人还不知道你是\n"
# 597 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "高手中的高手！\p"
# 598 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "对吧，{PLAYER}？\n"
# 599 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "让他们看看你的骨气！$"
# 600 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 601 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary:
# 602 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我真不想这么说，不过\n"
# 603 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "现在大家都在说的训练家\l"
# 604 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "是{STR_VAR_1}，毫无疑问！\p"
# 605 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "那个训练家的实力……\n"
# 606 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "非同一般。$"
# 607 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 608 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen:
# 609 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "可恶……我一直跟大家\n"
# 610 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "说{STR_VAR_1}现在最强……\p"
# 611 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "可没人听……$"
# 612 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 613 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer:
# 614 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我一直听说有个很强的\n"
# 615 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "新训练家。\p"
# 616 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "据说这个训练家连道馆\n"
# 617 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "馆主都能打败。\p"
# 618 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你知道这个新训练家的\n"
# 619 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "什么事吗？$"
# 620 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 621 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou:
# 622 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "哦！\n"
# 623 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}！\p"
# 624 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "加油！\n"
# 625 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我支持你！$"
# 626 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 627 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan:
# 628 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "唉……\n"
# 629 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "藤树……\p"
# 630 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "哦，不对！等等！\n"
# 631 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "不是的！不不不！\p"
# 632 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我完完全全是你的粉丝！\p"
# 633 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "那就让我骄傲吧！\n"
# 634 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "加油！$"
# 635 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 636 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly:
# 637 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我没办法，我就是只\n"
# 638 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "喜欢藤树……$"
# 639 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 640 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly:
# 641 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "没人懂藤树的\n"
# 642 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "魅力……\p"
# 643 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我不在乎！\p"
# 644 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "就算只有我一个，我也\n"
# 645 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "会一直给藤树加油！$"
# 646 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 647 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly:
# 648 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "不管别人怎么说，我最\n"
# 649 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "喜欢的训练家就是\l"
# 650 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "武斗道馆的馆主藤树！$"
# 651 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 652 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather:
# 653 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你在各方面都超越了你\n"
# 654 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "父亲！\p"
# 655 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我这么说了，那就\n"
# 656 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "毫无疑问！$"
# 657 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 658 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling:
# 659 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "就算情况变得灰暗，\n"
# 660 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你父亲也从不放弃。\p"
# 661 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "这是千真万确的。\p"
# 662 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你就算输了也不放弃！\n"
# 663 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "那就继续对战吧！$"
# 664 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 665 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman:
# 666 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "和千里比起来，你还\n"
# 667 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "差得远。\p"
# 668 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "千里的对战比你有更多\n"
# 669 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "力量、魅力和表演感。\p"
# 670 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "就算有人说你很强……\p"
# 671 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "和你父亲相比，你还有\n"
# 672 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "很长的路要走。$"
# 673 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 674 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent:
# 675 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你开始有了千里那种\n"
# 676 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "让人敬畏的气场。\p"
# 677 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "可你和千里之间有某种\n"
# 678 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "决定性的不同。\p"
# 679 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我说不出那是什么。\n"
# 680 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你得自己找到。$"
# 681 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 682 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers:
# 683 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "这里所有人都是宝可梦\n"
# 684 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "对战的超级粉丝。\p"
# 685 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我们讨论谁才是\n"
# 686 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "最强的训练家。\p"
# 687 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你要是出了名，\n"
# 688 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "说不定我们也会\l"
# 689 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "成为你的粉丝！$"
# 690 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 691 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer:
# 692 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "哦，哇哇！是{PLAYER}！\n"
# 693 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "真的耶！\p"
# 694 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "拜托，握个手，\n"
# 695 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "握个手！$"
# 696 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 697 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou:
# 698 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我会一直给你加油，\n"
# 699 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}！一直一直！\p"
# 700 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我一点也不想看到\n"
# 701 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你输，{PLAYER}。\p"
# 702 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "因为我知道你非常\n"
# 703 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "非常强，{PLAYER}！$"
# 704 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 705 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool:
# 706 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}真帅……\p"
# 707 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "大家都这么想，\n"
# 708 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "对吧对吧？$"
# 709 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 710 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe:
# 711 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}真的很帅，\n"
# 712 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你不觉得吗？\p"
# 713 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "就算只有我一个，我也\n"
# 714 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "会一直给我最喜欢的\l"
# 715 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "训练家加油。$"
# 716 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 717 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat:
# 718 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我最喜欢的训练家是……\p"
# 719 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "帅……\p"
# 720 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "强……\p"
# 721 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "还特别亲切……\p"
# 722 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "要是有那样的训练家\n"
# 723 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "就好了……$"
# 724 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 725 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou:
# 726 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "哇！是{PLAYER}！\n"
# 727 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "太酷了！\p"
# 728 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我长大了也要像你\n"
# 729 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "一样强，{PLAYER}！$"
# 730 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 731 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou:
# 732 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "就算只有我一个……\p"
# 733 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你永远是我唯一\n"
# 734 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "加油的人，{PLAYER}！\p"
# 735 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "因为我相信你，{PLAYER}！$"
# 736 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 737 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool:
# 738 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}酷得没边了……\n"
# 739 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我想和我的英雄握手。$"
# 740 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 741 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan:
# 742 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "就算只有我一个……\p"
# 743 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我也永远不会不当\n"
# 744 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}的粉丝！\p"
# 745 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "因为我听说，\n"
# 746 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}从不认输！$"
# 747 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 748 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll:
# 749 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}！\n"
# 750 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你果然了不起！\p"
# 751 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我第一眼看到你，\n"
# 752 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "就知道你了不起。\p"
# 753 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "看来我的眼睛\n"
# 754 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "没骗我。$"
# 755 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 756 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner:
# 757 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "管别人怎么想。\n"
# 758 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我站在你这边！\p"
# 759 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你不用担心。就像平时\n"
# 760 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "那样去打就好。$"
# 761 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 762 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne:
# 763 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我觉得你是个相当不错\n"
# 764 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "的训练家。\p"
# 765 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "可我也觉得{STR_VAR_1}\n"
# 766 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "现在才是第一。\p"
# 767 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "这只是我的看法。\n"
# 768 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "别太在意。$"
# 769 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 770 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer:
# 771 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "哇，你真的很强。\n"
# 772 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "也许比{STR_VAR_1}还强。\p"
# 773 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "可{STR_VAR_1}需要我。\p"
# 774 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我要是不给{STR_VAR_1}\n"
# 775 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "加油，还有谁？$"
# 776 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 777 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind:
# 778 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你改变了我的想法！\n"
# 779 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你确实很强，对吧？\p"
# 780 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我想请你告诉我，你\n"
# 781 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "是怎么变这么强的！$"
# 782 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 783 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation:
# 784 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "局面越艰难，你的\n"
# 785 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "对战越有魅力。\p"
# 786 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我等不及看你的\n"
# 787 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "下一场对战了！$"
# 788 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 789 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout:
# 790 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "在最近热门的训练家\n"
# 791 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "里，{STR_VAR_1}最出众。\p"
# 792 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "那份强悍，\n"
# 793 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "简直不正常。\p"
# 794 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你打得不错，可你和\n"
# 795 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}不是一个级别。$"
# 796 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 797 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger:
# 798 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你真受欢迎……\p"
# 799 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你又强又关心宝可梦。\n"
# 800 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "没人能挑你的毛病。\p"
# 801 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "不过，你知道吗，\n"
# 802 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我相信{STR_VAR_1}。\p"
# 803 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}肯定更强！\n"
# 804 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我确信！$"
# 805 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 806 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive:
# 807 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你……\p"
# 808 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "了不起！$"
# 809 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 810 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth:
# 811 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你的真正价值，就算只有\n"
# 812 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我一个人认可也没关系。\p"
# 813 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我想其他人不会懂你\n"
# 814 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "心中那股隐藏的力量。$"
# 815 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 816 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential:
# 817 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "是的，我在你眼里\n"
# 818 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "看到了力量。\p"
# 819 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "可是！\p"
# 820 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你还没有唤醒\n"
# 821 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "自己的潜能。$"
# 822 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 823 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength:
# 824 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "你的确强得惊人。\p"
# 825 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "可是！\n"
# 826 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "我看得出来……\p"
# 827 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "那份力量还不能算\n"
# 828 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "真正的强大！\p"
# 829 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "真正的强大是……！\n"
# 830 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "……\p"
# 831 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "其实我也不知道。$"
