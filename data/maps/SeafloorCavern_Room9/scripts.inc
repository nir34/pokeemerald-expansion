# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE, 1
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_MAXIE, 3
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE_SLEEPING, 7
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_SHELLY, 8
# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_MATT, 9
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafloorCavern_Room9_OnTransition
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SeafloorCavern_Room9_OnLoad
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_OnTransition:
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_BEAT_AQUA_BACK_TO_BACK, 1, SetAquaAdminsPermLoc
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_FOUGHT_AND_LOST_TO_BOSS, 1, AddSleepingKyogre
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_OnLoad:
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_BEAT_AQUA_BACK_TO_BACK, 1, SetAquaAdminsPermLoc
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_EventScript_Archie::
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 1
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAwakenKyogre, MSGBOX_DEFAULT
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 17, 42, 0
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE_SLEEPING
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterDown
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieMasterBall, MSGBOX_DEFAULT
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieCaputredKyogre, MSGBOX_DEFAULT
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceLeft
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ARCHIE
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HACKY_DOUBLE_BATTLE
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_double TRAINER_ARCHIE, SeafloorCavern_Room9_Text_YouObstacle, SeafloorCavern_4F_Text_NotSurprised, SeafloorCavern_4F_Text_NotSurprised, SeafloorCavern_EventScript_ArchieContinued
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_EventScript_ArchieContinued::
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HACKY_DOUBLE_BATTLE
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 2
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceLeft
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_TextKyogreAwakened, MSGBOX_DEFAULT
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBackDown
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, ArchieWalkLeft
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_BEAT_ARCHIE_CAVERN, 1
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Shelly::
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_ShellyAqua, MSGBOX_NPC
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Matt::
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_NeverStopArchie, MSGBOX_NPC
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieMasterBall:
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "大师球，去吧！$"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieCaputredKyogre:
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "好极了，盖欧卡……现在，\n"
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "挡路的只剩一个\l"
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "障碍了……$"
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAwakenKyogre:
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "盖欧卡……\p"
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "终于，你从沉眠中\n"
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "醒来的时刻到了。\p"
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "你该对这颗蓝色宝珠\n"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "中的力量作出反应……\p"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "觉醒吧，盖欧卡，与我\n"
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "一起扩张海洋！$"
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_YouObstacle:
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "你，{PLAYER}。我尊重你\n"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "作为宝可梦训练家的\l"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "能力，你已经证明\l"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "自己是我很久以来\l"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "的眼中钉。\p"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我只希望你能加入\n"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我们……\p"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "可现在，你只是挡在\n"
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "水舰队与扩张海洋\l"
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "的梦想之间的\l"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "一个障碍……\p"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "对不起，{PLAYER}，我在\n"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "基地就警告过你，若再\l"
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "交手，我不会手下留情。\p"
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "现在，准备好承受\n"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "原始盖欧卡的怒火吧！$"
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_NotSurprised:
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我现在真不该\n"
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "再吃惊了……$"
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_TextKyogreAwakened:
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "什么？盖欧卡强得足以\n"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "逃出我的大师球？\p"
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "那本来不该可能的……\n"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "不知道它觉醒之后\l"
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "会做什么……$"
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_NeverStopArchie:
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "哈哈哈，小鬼，你根本没\n"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "机会对抗阿库亚。$"
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_ShellyAqua:
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我们的目标终于要\n"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "实现了。等阿库亚\l"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "收拾了你，就没人\l"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "能阻止我们。$"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "阿库亚：站住。$"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "阿库亚：呵呵呵……\n"
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "果然是你。$"
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "阿库亚：看吧！\p"
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "看那沉睡的古代宝可梦\n"
# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "盖欧卡多美！\p"
# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我等这一天\n"
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "等了太久了……$"
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "阿库亚：你居然能追到\n"
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "这里，真让我吃惊。\p"
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "不过一切都结束了。\p"
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "为了实现我的梦想，\n"
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "你现在必须消失！$"
# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "什么？！\n"
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我竟然输给你这样的小孩？！$"
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "阿库亚：呵呵呵……\p"
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我赞赏你。必须承认\n"
# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "你确实有天赋。\p"
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "可是！\n"
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我手里有这个！\p"
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "用这颗红色宝珠，我能\n"
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "让盖欧卡……$"
# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "红色宝珠突然自己\n"
# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "发出了光芒！$"
# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 354 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "阿库亚：什么？！\p"
# 355 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我什么都没做。\n"
# 356 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "红色宝珠为什么……\p"
# 357 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "盖欧卡去哪儿了？$"
# 358 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 359 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "嗯？外面成员发来的\n"
# 361 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "消息……$"
# 362 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 363 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "好，什么事？\p"
# 365 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm……\n"
# 366 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "下着大雨？\p"
# 367 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "那也说得通……\n"
# 368 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "原始盖欧卡已经解放，\l"
# 369 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我们该料到会有\l"
# 370 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "暴雨。\p"
# 371 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "什么？！\p"
# 372 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "雨下得比我们预想的\n"
# 373 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "大得多？你们有危险？\p"
# 374 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "那可麻烦了……\n"
# 375 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "也许这件事我们该\l"
# 376 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "更仔细地考虑……\p"
# 377 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "守住位置，继续\n"
# 378 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "观察情况！$"
# 379 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 380 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 381 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "也许我们做错了……\n"
# 382 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "把原始盖欧卡解放到\l"
# 383 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "世界上却控制不住它……\l"
# 384 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我本以为有蓝色宝珠\l"
# 385 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "和大师球就……$"
# 386 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 387 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 388 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "马克西：阿库亚，你都\n"
# 389 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "干了什么？你终于还是\l"
# 390 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "把盖欧卡唤醒了，对吧？\p"
# 391 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "这场暴雨要是一直\n"
# 392 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "下下去，世界会怎样？\p"
# 393 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "世界的陆地会沉进\n"
# 394 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "越来越深的海洋……$"
# 395 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 396 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 397 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "阿库亚：什、什么？！\n"
# 398 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "别跟我摆那副腔调！\p"
# 399 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "唤醒原始固拉多的\n"
# 400 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "不就是你们熔岩队吗？$"
# 401 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 402 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 403 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "马克西：现在没时间\n"
# 404 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "在这里争吵！\p"
# 405 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "出去自己看看！\n"
# 406 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "看看你造出来的是不是\l"
# 407 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我们想要的世界！$"
# 408 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 409 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 410 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "马克西：{PLAYER}，快，\n"
# 411 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "你也得离开这里！$"
# 412 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 413 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_ShellyDefeat:
# 414 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "我又失败了……$"
# 415 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 416 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_ShellyPostBattle:
# 417 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "希莉：该你了，马特。$"
# 418 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 419 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Text_MattDefeat:
# 420 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "呃啊！又输了！$"
# 421 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 422 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_4F_Text_MattPostBattle:
# 423 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "马特：这些对战反正也没\n"
# 424 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "意义，阿库亚会把你\l"
# 425 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "打得稀巴烂，小鬼。$"

PlayerBackDown::
# 429 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 430 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 431 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 433 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ArchieWalkLeft::
# 437 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 438 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_EventScript_ArchieTrigger1::
# 442 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 443 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 444 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie1
# 445 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 446 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


SeafloorCavern_EventScript_ArchieTrigger2::
# 450 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 451 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 452 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie2
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 454 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


SeafloorCavern_EventScript_ArchieTrigger3::
# 458 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 459 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 460 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachArchie3
# 461 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 462 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_Archie
	end


ApproachArchie1::
# 467 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 468 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ApproachArchie2::
# 471 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 472 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 473 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 474 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ApproachArchie3::
# 477 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 478 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 479 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 480 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 481 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_EventScript_BackToBackTrigger::
# 485 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_EventScript_BackToBackScene
	end


SeafloorCavern_EventScript_BackToBackScene::
# 490 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 491 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 492 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterRight
# 493 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 494 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox CantStopArchie
# 495 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmessage
# 496 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 497 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 498 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 499 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_ExclamationMark
# 500 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 501 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 502 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterUp
# 503 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 504 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 505 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 506 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox ShellyRevenge
# 507 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmessage
# 508 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, SeafloorCavern_Movement_ShellyApproachPlayer
# 509 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 510 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_LookAtShelly
# 511 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox GoingDown
# 512 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Text_ShellyDefeat
# 513 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Text_ShellyPostBattle
# 514 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 515 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, ShellyLost
# 516 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 517 "data/maps/SeafloorCavern_Room9/scripts.pory"
	copyobjectxytoperm LOCALID_SHELLY
# 518 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 519 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, SeafloorCavern_Movement_BackToBackMattApproachPlayer
# 520 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 521 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_LookAtMatt
# 522 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 523 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox MattRevenge, MSGBOX_DEFAULT
# 524 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_SEAFLOOR_CAVERN, SeafloorCavern_Text_MattDefeat
# 525 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_4F_Text_MattPostBattle, MSGBOX_DEFAULT
# 526 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 527 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, MattLost
# 528 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 529 "data/maps/SeafloorCavern_Room9/scripts.pory"
	copyobjectxytoperm LOCALID_MATT
# 530 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_BEAT_AQUA_BACK_TO_BACK, 1
# 531 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
	end


SeafloorCavern_Movement_ShellyApproachPlayer::
# 536 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 537 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 538 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 539 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_Movement_BackToBackMattApproachPlayer::
# 543 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 544 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 545 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_LookAtShelly::
# 549 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 550 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SeafloorCavern_LookAtMatt::
# 554 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 555 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


ShellyLost::
# 559 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 560 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 561 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 562 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


MattLost::
# 566 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 567 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 568 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 569 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
	return


SetAquaAdminsPermLoc::
# 595 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 14, 8
# 596 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_MATT, 10, 8
	return


AddSleepingKyogre::
# 601 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP
# 602 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE_SLEEPING
	return


CantStopArchie::
# 572 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "马特：嘿嘿嘿……一旦阿库亚掌控了\n"
	.string "原始盖欧卡，这世上就\l"
	.string "再也没人能阻止他了……$"

ShellyRevenge::
# 578 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "雪莉：又是这小鬼……我要为\n"
	.string "天气研究所的事\l"
	.string "报仇雪恨！$"

GoingDown::
# 584 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "雪莉：你完蛋了！$"

MattRevenge::
# 588 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "马特：嘿嘿嘿……小子，我早就\n"
	.string "想找你算账了。\l"
	.string "你别想从我这儿过去！$"
