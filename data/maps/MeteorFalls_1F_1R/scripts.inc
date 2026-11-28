# 1 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 5
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 6
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_ARCHIE, 7
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_1, 8
# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_2, 9
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceDown
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterUp
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_Delay48
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_ARCHIE
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_1
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_2
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieArrive
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_ARCHIE
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_1
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_2
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "嘿嘿嘿！\p"
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "有了这颗陨石，烟囱山\n"
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "那个东西就会……$"
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "嗯？\p"
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "我不知道你是谁，可要是\n"
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "挡了熔岩队的路，\l"
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "可别指望我们留情！$"
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "站住，熔岩队！\p"
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "要是以为能随心所欲\n"
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "摆布世界，你们可就\l"
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "大错特错了！$"
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "嘿嘿嘿！\n"
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "连水舰队也来了！\p"
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "可应付你们太麻烦了……\p"
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "嘿，无所谓！\p"
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "我们拿到陨石了，\n"
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "这就去烟囱山！\p"
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "嘿嘿嘿！再会了，\n"
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "水舰队的蠢货们！$"
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "阿库亚：我们是不是\n"
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "见过？在凯那的博物馆？\p"
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "啊，原来你叫{PLAYER}。\p"
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "当时我还以为你是\n"
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "熔岩队的手下。\p"
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "哼……\n"
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "你这孩子真奇怪。\p"
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "熔岩队是一群危险的\n"
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "彻头彻尾的狂徒。\p"
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "他们打着扩大陆地的\n"
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "旗号搞破坏。\p"
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "他们是我们这些\n"
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "热爱大海的水舰队的\l"
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "死对头！$"
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "老大，我们该去追\n"
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "熔岩队……$"
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "阿库亚：对，对，必须去！\n"
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "我们得快点。\p"
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "谁也不知道熔岩队\n"
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "在烟囱山会干出什么！$"
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "阿库亚：{PLAYER}，你也要\n"
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "留意熔岩队。\p"
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "再会！$"
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "我……我是科斯莫……\n"
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "我是个博士……\p"
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "熔岩队让我带他们\n"
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "去流星瀑布……\p"
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "可他们骗了我。\n"
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "还把我的陨石抢走了……\p"
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "然后另一伙差不多的\n"
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "水舰队又出现了。\p"
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "之后……\n"
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "我完全搞不明白了。\p"
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "可是那个熔岩队……\p"
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "他们要用那颗陨石\n"
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "在烟囱山干什么？$"
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "科斯莫博士：可是那个\n"
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "熔岩队……\p"
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "他们要用那颗陨石\n"
# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "在烟囱山干什么？$"
