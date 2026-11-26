# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 3 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 7 "data/maps/PetalburgWoods/scripts.pory"

# 8 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 9 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 10 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 11 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 12 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 13 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 14 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 15 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 16 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 17 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 18 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 19 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 20 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 21 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 22 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 23 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 24 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 25 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 26 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 27 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 28 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 29 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 30 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 31 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 32 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 33 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 34 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 35 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 36 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 37 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 38 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 39 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 40 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 41 "data/maps/PetalburgWoods/scripts.pory"
	end
# 42 "data/maps/PetalburgWoods/scripts.pory"

# 43 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 44 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 45 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 46 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 47 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 48 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 49 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 50 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 51 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 52 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 53 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 54 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 55 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 56 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 57 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 58 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 59 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 61 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 62 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 63 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 64 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 65 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 66 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 68 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 69 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 71 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 73 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 74 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 75 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 76 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 77 "data/maps/PetalburgWoods/scripts.pory"
	end
# 78 "data/maps/PetalburgWoods/scripts.pory"

# 79 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 80 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 81 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 83 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 84 "data/maps/PetalburgWoods/scripts.pory"
	return
# 85 "data/maps/PetalburgWoods/scripts.pory"

# 86 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 87 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 88 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 89 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 90 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 91 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 92 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 94 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 95 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 96 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 97 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 98 "data/maps/PetalburgWoods/scripts.pory"
	end
# 99 "data/maps/PetalburgWoods/scripts.pory"

# 100 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 101 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 102 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 103 "data/maps/PetalburgWoods/scripts.pory"
	end
# 104 "data/maps/PetalburgWoods/scripts.pory"

# 105 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 106 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 107 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 108 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 109 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 110 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 111 "data/maps/PetalburgWoods/scripts.pory"
	return
# 112 "data/maps/PetalburgWoods/scripts.pory"

# 113 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 114 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 115 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 116 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 117 "data/maps/PetalburgWoods/scripts.pory"
	end
# 118 "data/maps/PetalburgWoods/scripts.pory"

# 119 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 120 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 121 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 122 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 123 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 124 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 125 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 126 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 127 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 128 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 129 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 130 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 131 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 132 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 133 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 134 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 135 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 136 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 137 "data/maps/PetalburgWoods/scripts.pory"

# 138 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 139 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 140 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 141 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 142 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 143 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 144 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 145 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 146 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 147 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 148 "data/maps/PetalburgWoods/scripts.pory"

# 149 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 150 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 151 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 152 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 153 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 154 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 155 "data/maps/PetalburgWoods/scripts.pory"

# 156 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 157 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 158 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 159 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 160 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 161 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 162 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 163 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 164 "data/maps/PetalburgWoods/scripts.pory"

# 165 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 166 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 167 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 168 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 170 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 171 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 172 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 173 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 174 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 175 "data/maps/PetalburgWoods/scripts.pory"

# 176 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 177 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 178 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 179 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 180 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 181 "data/maps/PetalburgWoods/scripts.pory"

# 182 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 188 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 189 "data/maps/PetalburgWoods/scripts.pory"

# 190 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 192 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 193 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 194 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 195 "data/maps/PetalburgWoods/scripts.pory"

# 196 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 197 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 198 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 199 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 200 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 201 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 202 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 203 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 204 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 205 "data/maps/PetalburgWoods/scripts.pory"

# 206 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 207 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 208 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 209 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 210 "data/maps/PetalburgWoods/scripts.pory"

# 211 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 212 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 213 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 214 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 215 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 216 "data/maps/PetalburgWoods/scripts.pory"

# 217 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 218 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 219 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 220 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 221 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 222 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 223 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 224 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 225 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 226 "data/maps/PetalburgWoods/scripts.pory"

# 227 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 228 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 229 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 230 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 231 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 232 "data/maps/PetalburgWoods/scripts.pory"

# 233 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 234 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 235 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 236 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 237 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 238 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 239 "data/maps/PetalburgWoods/scripts.pory"

# 240 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 241 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 242 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 243 "data/maps/PetalburgWoods/scripts.pory"

# 244 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 245 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 246 "data/maps/PetalburgWoods/scripts.pory"
	end
# 247 "data/maps/PetalburgWoods/scripts.pory"

# 248 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 249 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 250 "data/maps/PetalburgWoods/scripts.pory"
	end
# 251 "data/maps/PetalburgWoods/scripts.pory"

# 252 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 253 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 254 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 255 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 256 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 257 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 258 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 259 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 260 "data/maps/PetalburgWoods/scripts.pory"
	release
# 261 "data/maps/PetalburgWoods/scripts.pory"
	end
# 262 "data/maps/PetalburgWoods/scripts.pory"

# 263 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 264 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 265 "data/maps/PetalburgWoods/scripts.pory"
	release
# 266 "data/maps/PetalburgWoods/scripts.pory"
	end
# 267 "data/maps/PetalburgWoods/scripts.pory"

# 268 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 269 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 270 "data/maps/PetalburgWoods/scripts.pory"
	end
# 271 "data/maps/PetalburgWoods/scripts.pory"

# 272 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 273 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 274 "data/maps/PetalburgWoods/scripts.pory"
	end
# 275 "data/maps/PetalburgWoods/scripts.pory"

# 276 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 277 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 278 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 279 "data/maps/PetalburgWoods/scripts.pory"
	end
# 280 "data/maps/PetalburgWoods/scripts.pory"

# 281 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 282 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 283 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 284 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 285 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 286 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 287 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 288 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 289 "data/maps/PetalburgWoods/scripts.pory"
	release
# 290 "data/maps/PetalburgWoods/scripts.pory"
	end
# 291 "data/maps/PetalburgWoods/scripts.pory"

# 292 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 293 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 294 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 295 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 296 "data/maps/PetalburgWoods/scripts.pory"
	release
# 297 "data/maps/PetalburgWoods/scripts.pory"
	end
# 298 "data/maps/PetalburgWoods/scripts.pory"

# 299 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 300 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 301 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 302 "data/maps/PetalburgWoods/scripts.pory"
	release
# 303 "data/maps/PetalburgWoods/scripts.pory"
	end
# 304 "data/maps/PetalburgWoods/scripts.pory"

# 305 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 306 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 307 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 308 "data/maps/PetalburgWoods/scripts.pory"
	release
# 309 "data/maps/PetalburgWoods/scripts.pory"
	end
# 310 "data/maps/PetalburgWoods/scripts.pory"

# 311 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 312 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 313 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 314 "data/maps/PetalburgWoods/scripts.pory"
	release
# 315 "data/maps/PetalburgWoods/scripts.pory"
	end
# 316 "data/maps/PetalburgWoods/scripts.pory"

# 317 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 318 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 319 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 320 "data/maps/PetalburgWoods/scripts.pory"
	end
# 321 "data/maps/PetalburgWoods/scripts.pory"

# 322 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 323 "data/maps/PetalburgWoods/scripts.pory"
	.string "嗯……\n"
# 324 "data/maps/PetalburgWoods/scripts.pory"
	.string "一只也找不到……$"
# 325 "data/maps/PetalburgWoods/scripts.pory"

# 326 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 327 "data/maps/PetalburgWoods/scripts.pory"
	.string "你好，你在这附近\n"
# 328 "data/maps/PetalburgWoods/scripts.pory"
	.string "见过叫花椰猴的宝可梦吗？\p"
# 329 "data/maps/PetalburgWoods/scripts.pory"
	.string "我真的很喜欢那只宝可梦。$"
# 330 "data/maps/PetalburgWoods/scripts.pory"

# 331 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 332 "data/maps/PetalburgWoods/scripts.pory"
	.string "我本来想埋伏你，\n"
# 333 "data/maps/PetalburgWoods/scripts.pory"
	.string "可你偏要在橙华森林里\l"
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "磨磨蹭蹭，对吧？\p"
# 335 "data/maps/PetalburgWoods/scripts.pory"
	.string "我等得实在不耐烦，\n"
# 336 "data/maps/PetalburgWoods/scripts.pory"
	.string "只好亲自来了！$"
# 337 "data/maps/PetalburgWoods/scripts.pory"

# 338 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 339 "data/maps/PetalburgWoods/scripts.pory"
	.string "你！得文公司的研究员！\p"
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.string "把那些资料交出来！$"
# 341 "data/maps/PetalburgWoods/scripts.pory"

# 342 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 343 "data/maps/PetalburgWoods/scripts.pory"
	.string "哇啊啊！\p"
# 344 "data/maps/PetalburgWoods/scripts.pory"
	.string "你是宝可梦训练家吧？\n"
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "求你帮帮我！$"
# 346 "data/maps/PetalburgWoods/scripts.pory"

# 347 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "嗯？你想干什么？\n"
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "什么，你要护着他？\p"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	.string "跟水舰队作对的人，\n"
# 351 "data/maps/PetalburgWoods/scripts.pory"
	.string "一个都别想好过，\l"
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "就算是小孩也一样！\p"
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "来吧，跟我对战！$"
# 354 "data/maps/PetalburgWoods/scripts.pory"

# 355 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "开什么玩笑！你还挺厉害的！$"
# 357 "data/maps/PetalburgWoods/scripts.pory"

# 358 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "可恶……你还真敢\n"
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "来管水舰队的闲事！\l"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "再来打一场！\p"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "我真想这么说，可是\n"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "我的宝可梦已经用光了……\p"
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "而且，我们水舰队\n"
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "在卡那兹市也有目标。\p"
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "今天就放你一马！$"
# 367 "data/maps/PetalburgWoods/scripts.pory"

# 368 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "呼……\n"
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "真是好险！\p"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "多亏了你，他才没能\n"
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "抢走这些重要资料。\p"
# 373 "data/maps/PetalburgWoods/scripts.pory"
	.string "对了，这个超级球\n"
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "算我谢你的！$"
# 375 "data/maps/PetalburgWoods/scripts.pory"

# 376 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 377 "data/maps/PetalburgWoods/scripts.pory"
	.string "刚才那个水舰队的家伙说，\n"
# 378 "data/maps/PetalburgWoods/scripts.pory"
	.string "他们在卡那兹市也有目标，\l"
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "对吧？$"
# 380 "data/maps/PetalburgWoods/scripts.pory"

# 381 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 382 "data/maps/PetalburgWoods/scripts.pory"
	.string "不好！这是紧急情况！\n"
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "我没时间耽搁了！$"
# 384 "data/maps/PetalburgWoods/scripts.pory"

# 385 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 386 "data/maps/PetalburgWoods/scripts.pory"
	.string "你身上带的东西太多了。\n"
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "这个超级球没法给你。$"
# 388 "data/maps/PetalburgWoods/scripts.pory"

# 389 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 390 "data/maps/PetalburgWoods/scripts.pory"
	.string "我抓了一大堆宝可梦！\p"
# 391 "data/maps/PetalburgWoods/scripts.pory"
	.string "上吧上吧！\n"
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "我的虫宝可梦队伍！$"
# 393 "data/maps/PetalburgWoods/scripts.pory"

# 394 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 395 "data/maps/PetalburgWoods/scripts.pory"
	.string "我有这么多宝可梦，\n"
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "却还是赢不了……$"
# 397 "data/maps/PetalburgWoods/scripts.pory"

# 398 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 399 "data/maps/PetalburgWoods/scripts.pory"
	.string "我抓了一堆宝可梦，\n"
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "现在精灵球都用光了。$"
# 401 "data/maps/PetalburgWoods/scripts.pory"

# 402 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "带虫宝可梦去学校，\n"
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "马上就会变成人气王！$"
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "输了可就没法当人气王了。$"
# 408 "data/maps/PetalburgWoods/scripts.pory"

# 409 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 410 "data/maps/PetalburgWoods/scripts.pory"
	.string "要是有一只大虫宝可梦，\n"
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "大家都会很尊敬你。$"
# 412 "data/maps/PetalburgWoods/scripts.pory"

# 413 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "等我的虫宝可梦长大，\n"
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "我要再和你打一场！\p"
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "我把你登录到导航里了！$"
# 417 "data/maps/PetalburgWoods/scripts.pory"

# 418 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "等我的虫宝可梦长大，\n"
# 420 "data/maps/PetalburgWoods/scripts.pory"
	.string "我要再和你打一场！\p"
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "我把你登录到导航里了！$"
# 422 "data/maps/PetalburgWoods/scripts.pory"

# 423 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "我的虫宝可梦长大了。\n"
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "我马上又要变成人气王了。$"
# 426 "data/maps/PetalburgWoods/scripts.pory"

# 427 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "输了可就没法当人气王了。$"
# 429 "data/maps/PetalburgWoods/scripts.pory"

# 430 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "宝可梦强就会变成人气王，\n"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "对吧？\l"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "所以我一直拼命训练。$"
# 434 "data/maps/PetalburgWoods/scripts.pory"

# 435 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "哟，你好！\n"
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "你的宝可梦还好吗？\p"
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "如果宝可梦太弱，\n"
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "不想对战的话，\l"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "就离高草远一点。$"
# 441 "data/maps/PetalburgWoods/scripts.pory"

# 442 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "有时候地上藏着东西，\n"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "你根本看不见。\p"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "所以我走路时\n"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "总是会到处检查。$"
# 447 "data/maps/PetalburgWoods/scripts.pory"

# 448 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "哦，不错嘛！\n"
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "那是卡那兹道馆的徽章！\p"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "你一定是训练家。\n"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "你试试用这个道具吧。$"
# 453 "data/maps/PetalburgWoods/scripts.pory"

# 454 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "这是奇迹种子。\n"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "宝可梦带着它，\l"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "草属性招式的威力就会提高。\p"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "除了奇迹种子，\n"
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "我想还有很多方便的道具\l"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "能让宝可梦携带。$"
# 461 "data/maps/PetalburgWoods/scripts.pory"

# 462 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "训练家入门\p"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "在背包的口袋里\n"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "按“Start”键，\l"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "就能整理道具。$"
# 467 "data/maps/PetalburgWoods/scripts.pory"

# 468 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "训练家入门\p"
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "可以登录多个重要道具，\n"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "按“Select”键就能\l"
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "把它们列出来。\p"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "如果只登录了一个道具，\n"
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "就不会打开列表，\l"
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "而是直接使用。$"

PetalburgWoods_EventScript_Gardenia::
# 480 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 481 "data/maps/PetalburgWoods/scripts.pory"
	applymovement 14, Common_Movement_FacePlayer
# 482 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_defeated TRAINER_GARDENIA, PetalburgWoods_EventScript_GardeniaDefeated
# 483 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_defeated TRAINER_GARDENIA2, PetalburgWoods_EventScript_GardeniaDefeated
# 484 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_TEMP_1, PetalburgWoods_EventScript_GardeniaRequestBattleAgain
# 485 "data/maps/PetalburgWoods/scripts.pory"
	msgbox Gardenia_Greeting, MSGBOX_DEFAULT
# 486 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
# 487 "data/maps/PetalburgWoods/scripts.pory"
	msgbox Gardenia_WillYouBattleMe, MSGBOX_YESNO
# 488 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_BattleGardeniaPrompt
	end


PetalburgWoods_EventScript_GardeniaRequestBattleAgain::
# 493 "data/maps/PetalburgWoods/scripts.pory"
	msgbox Gardenia_ReadyYet, MSGBOX_YESNO
# 494 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_BattleGardeniaPrompt
	end


PetalburgWoods_EventScript_BattleGardeniaPrompt::
# 499 "data/maps/PetalburgWoods/scripts.pory"
	call_if_eq VAR_RESULT, YES, PetalburgWoods_EventScript_BattleGardenia
# 500 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgWoods_EventScript_DeclineGardeniaBattle
# 501 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	end


PetalburgWoods_EventScript_DeclineGardeniaBattle::
# 506 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_1
# 507 "data/maps/PetalburgWoods/scripts.pory"
	msgbox Gardenia_ComeBackWhenReady, MSGBOX_DEFAULT
# 508 "data/maps/PetalburgWoods/scripts.pory"
	release
	end


PetalburgWoods_EventScript_BattleGardenia::
# 513 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_BattleGardenia_Text_0, MSGBOX_DEFAULT
# 514 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PetalburgWoods_EventScript_BattleGardenia2
# 515 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GARDENIA, Gardenia_Outro
# 516 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_GardeniaGiveItems
	return


PetalburgWoods_EventScript_BattleGardenia2::
# 521 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GARDENIA2, Gardenia_Outro
# 522 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_GardeniaGiveItems
	end


PetalburgWoods_EventScript_GardeniaDefeated::
# 529 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PostBattle_Gardenia, MSGBOX_DEFAULT
# 530 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


PetalburgWoods_EventScript_GardeniaGiveItems::
# 535 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 536 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_EVIOLITE
# 537 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_LEAF_STONE, 10
# 538 "data/maps/PetalburgWoods/scripts.pory"
	msgbox Gardenia_ExplainItems
# 539 "data/maps/PetalburgWoods/scripts.pory"
	release
	end


PetalburgWoods_EventScript_BattleGardenia_Text_0:
# 513 "data/maps/PetalburgWoods/scripts.pory"
	.string "上吧！$"

Gardenia_Greeting::
# 543 "data/maps/PetalburgWoods/scripts.pory"
	.string "啊哈！刚才我在抓草属性\n"
	.string "宝可梦时，看见你从那些树\l"
	.string "旁跑过，当时你显然还\l"
	.string "砍不断它们。既然你现在\l"
	.string "能砍了，说明你是个\l"
	.string "能打赢杜娟的训练家，\l"
	.string "那就是我想\l"
	.string "对战的训练家！\p"
	.string "顺便说，我是菜种，神奥地区\n"
	.string "的第二位道馆馆主。\p"
	.string "你要是能打赢我，\n"
	.string "我绝不会亏待你！$"

Gardenia_ReadyYet::
# 558 "data/maps/PetalburgWoods/scripts.pory"
	.string "现在想打一场吗？$"

Gardenia_ComeBackWhenReady::
# 562 "data/maps/PetalburgWoods/scripts.pory"
	.string "我就在这儿顺便再找找\n"
	.string "草属性的宝可梦。$"

Gardenia_ExplainItems::
# 567 "data/maps/PetalburgWoods/scripts.pory"
	.string "那个学习器里是急速折返，\n"
	.string "用来打一下再换下\l"
	.string "宝可梦非常方便。\p"
	.string "我还放了一些有用的\n"
	.string "进化之石，还有一件适合\l"
	.string "暂时还无法进化的\l"
	.string "宝可梦的道具。$"

Gardenia_WillYouBattleMe::
# 577 "data/maps/PetalburgWoods/scripts.pory"
	.string "听起来怎么样？\n"
	.string "要来打一场吗？$"

Gardenia_Outro::
# 582 "data/maps/PetalburgWoods/scripts.pory"
	.string "相当不错！按约定，请收下\n"
	.string "这些打赢我的奖励。$"

PostBattle_Gardenia::
# 588 "data/maps/PetalburgWoods/scripts.pory"
	.string "希望这个地区有\n"
	.string "帅气的草属性宝可梦！$"
