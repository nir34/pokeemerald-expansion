# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 4 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 5 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 6 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 7 "data/maps/MtChimney/scripts.pory"
.set LOCALID_DRAKE, 31
# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"

# 10 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 12 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 13 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 14 "data/maps/MtChimney/scripts.pory"

# 15 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 16 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 17 "data/maps/MtChimney/scripts.pory"
	end
# 18 "data/maps/MtChimney/scripts.pory"

# 19 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 20 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 21 "data/maps/MtChimney/scripts.pory"
	end
# 22 "data/maps/MtChimney/scripts.pory"

# 23 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 24 "data/maps/MtChimney/scripts.pory"
	lock
# 25 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 26 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 27 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 28 "data/maps/MtChimney/scripts.pory"
	closemessage
# 29 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 30 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 31 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 32 "data/maps/MtChimney/scripts.pory"
	release
# 33 "data/maps/MtChimney/scripts.pory"
	end
# 34 "data/maps/MtChimney/scripts.pory"

# 35 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 36 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 37 "data/maps/MtChimney/scripts.pory"
	return
# 38 "data/maps/MtChimney/scripts.pory"

# 39 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 40 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 41 "data/maps/MtChimney/scripts.pory"
	return
# 42 "data/maps/MtChimney/scripts.pory"

# 43 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 44 "data/maps/MtChimney/scripts.pory"
	lockall
# 45 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 46 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 47 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 48 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 49 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 50 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 51 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 52 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 53 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 54 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 55 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 56 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 57 "data/maps/MtChimney/scripts.pory"
	closemessage
# 58 "data/maps/MtChimney/scripts.pory"
	delay 30
# 59 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 61 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 62 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 63 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 64 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 65 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_DRAKE, 10, 12
# 67 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_DRAKE
# 68 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 69 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 70 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 71 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 72 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 73 "data/maps/MtChimney/scripts.pory"
	closemessage
# 74 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 75 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 76 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_DRAKE
# 77 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 78 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 79 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 80 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 81 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 82 "data/maps/MtChimney/scripts.pory"
	delay 30
# 83 "data/maps/MtChimney/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 84 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 85 "data/maps/MtChimney/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 86 "data/maps/MtChimney/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 87 "data/maps/MtChimney/scripts.pory"
	waitfanfare
# 88 "data/maps/MtChimney/scripts.pory"
	closemessage
# 89 "data/maps/MtChimney/scripts.pory"
	delay 30
# 90 "data/maps/MtChimney/scripts.pory"
	releaseall
# 91 "data/maps/MtChimney/scripts.pory"
	end
# 92 "data/maps/MtChimney/scripts.pory"

# 93 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 94 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieApproachPlayerEast
# 95 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 96 "data/maps/MtChimney/scripts.pory"
	return
# 97 "data/maps/MtChimney/scripts.pory"

# 98 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 99 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieApproachPlayerNorth
# 100 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 101 "data/maps/MtChimney/scripts.pory"
	return
# 102 "data/maps/MtChimney/scripts.pory"

# 103 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 104 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieExitEast
# 105 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 106 "data/maps/MtChimney/scripts.pory"
	return
# 107 "data/maps/MtChimney/scripts.pory"

# 108 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 109 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_DRAKE, MtChimney_Movement_ArchieExitNorth
# 110 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 111 "data/maps/MtChimney/scripts.pory"
	return
# 112 "data/maps/MtChimney/scripts.pory"

# 113 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 114 "data/maps/MtChimney/scripts.pory"
	lock
# 115 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 116 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 117 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 118 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 119 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 120 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 121 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 122 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 123 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 124 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 125 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 126 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 127 "data/maps/MtChimney/scripts.pory"
	release
# 128 "data/maps/MtChimney/scripts.pory"
	end
# 129 "data/maps/MtChimney/scripts.pory"

# 130 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 131 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 132 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 133 "data/maps/MtChimney/scripts.pory"
	release
# 134 "data/maps/MtChimney/scripts.pory"
	end
# 135 "data/maps/MtChimney/scripts.pory"

# 136 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 137 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 138 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 139 "data/maps/MtChimney/scripts.pory"
	return
# 140 "data/maps/MtChimney/scripts.pory"

# 141 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 142 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 143 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 144 "data/maps/MtChimney/scripts.pory"
	release
# 145 "data/maps/MtChimney/scripts.pory"
	end
# 146 "data/maps/MtChimney/scripts.pory"

# 147 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 148 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 149 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 150 "data/maps/MtChimney/scripts.pory"
	release
# 151 "data/maps/MtChimney/scripts.pory"
	end
# 152 "data/maps/MtChimney/scripts.pory"

# 153 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 154 "data/maps/MtChimney/scripts.pory"
	walk_up
# 155 "data/maps/MtChimney/scripts.pory"
	walk_up
# 156 "data/maps/MtChimney/scripts.pory"
	walk_up
# 157 "data/maps/MtChimney/scripts.pory"
	walk_up
# 158 "data/maps/MtChimney/scripts.pory"
	walk_up
# 159 "data/maps/MtChimney/scripts.pory"
	walk_up
# 160 "data/maps/MtChimney/scripts.pory"
	walk_right
# 161 "data/maps/MtChimney/scripts.pory"
	step_end
# 162 "data/maps/MtChimney/scripts.pory"

# 163 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 164 "data/maps/MtChimney/scripts.pory"
	walk_left
# 165 "data/maps/MtChimney/scripts.pory"
	walk_down
# 166 "data/maps/MtChimney/scripts.pory"
	walk_down
# 167 "data/maps/MtChimney/scripts.pory"
	walk_down
# 168 "data/maps/MtChimney/scripts.pory"
	walk_down
# 169 "data/maps/MtChimney/scripts.pory"
	walk_down
# 170 "data/maps/MtChimney/scripts.pory"
	walk_down
# 171 "data/maps/MtChimney/scripts.pory"
	walk_down
# 172 "data/maps/MtChimney/scripts.pory"
	step_end
# 173 "data/maps/MtChimney/scripts.pory"

# 174 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 175 "data/maps/MtChimney/scripts.pory"
	walk_up
# 176 "data/maps/MtChimney/scripts.pory"
	walk_up
# 177 "data/maps/MtChimney/scripts.pory"
	walk_up
# 178 "data/maps/MtChimney/scripts.pory"
	walk_up
# 179 "data/maps/MtChimney/scripts.pory"
	walk_up
# 180 "data/maps/MtChimney/scripts.pory"
	walk_right
# 181 "data/maps/MtChimney/scripts.pory"
	walk_right
# 182 "data/maps/MtChimney/scripts.pory"
	step_end
# 183 "data/maps/MtChimney/scripts.pory"

# 184 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 185 "data/maps/MtChimney/scripts.pory"
	walk_left
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 187 "data/maps/MtChimney/scripts.pory"
	walk_down
# 188 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_down
# 191 "data/maps/MtChimney/scripts.pory"
	walk_down
# 192 "data/maps/MtChimney/scripts.pory"
	walk_down
# 193 "data/maps/MtChimney/scripts.pory"
	walk_down
# 194 "data/maps/MtChimney/scripts.pory"
	step_end
# 195 "data/maps/MtChimney/scripts.pory"

# 196 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_down
# 201 "data/maps/MtChimney/scripts.pory"
	walk_down
# 202 "data/maps/MtChimney/scripts.pory"
	walk_left
# 203 "data/maps/MtChimney/scripts.pory"
	walk_left
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 205 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_down
# 207 "data/maps/MtChimney/scripts.pory"
	walk_down
# 208 "data/maps/MtChimney/scripts.pory"
	walk_left
# 209 "data/maps/MtChimney/scripts.pory"
	walk_left
# 210 "data/maps/MtChimney/scripts.pory"
	walk_left
# 211 "data/maps/MtChimney/scripts.pory"
	walk_left
# 212 "data/maps/MtChimney/scripts.pory"
	walk_left
# 213 "data/maps/MtChimney/scripts.pory"
	walk_down
# 214 "data/maps/MtChimney/scripts.pory"
	step_end
# 215 "data/maps/MtChimney/scripts.pory"

# 216 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 217 "data/maps/MtChimney/scripts.pory"
	walk_down
# 218 "data/maps/MtChimney/scripts.pory"
	walk_down
# 219 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 221 "data/maps/MtChimney/scripts.pory"
	walk_left
# 222 "data/maps/MtChimney/scripts.pory"
	walk_left
# 223 "data/maps/MtChimney/scripts.pory"
	walk_left
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 225 "data/maps/MtChimney/scripts.pory"
	step_end
# 226 "data/maps/MtChimney/scripts.pory"

# 227 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 228 "data/maps/MtChimney/scripts.pory"
	walk_right
# 229 "data/maps/MtChimney/scripts.pory"
	walk_down
# 230 "data/maps/MtChimney/scripts.pory"
	walk_down
# 231 "data/maps/MtChimney/scripts.pory"
	walk_down
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
# 233 "data/maps/MtChimney/scripts.pory"
	walk_left
# 234 "data/maps/MtChimney/scripts.pory"
	walk_left
# 235 "data/maps/MtChimney/scripts.pory"
	walk_left
# 236 "data/maps/MtChimney/scripts.pory"
	walk_left
# 237 "data/maps/MtChimney/scripts.pory"
	walk_left
# 238 "data/maps/MtChimney/scripts.pory"
	walk_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_down
# 242 "data/maps/MtChimney/scripts.pory"
	step_end
# 243 "data/maps/MtChimney/scripts.pory"

# 244 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 245 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 246 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 247 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 248 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_left
# 255 "data/maps/MtChimney/scripts.pory"
	walk_left
# 256 "data/maps/MtChimney/scripts.pory"
	walk_down
# 257 "data/maps/MtChimney/scripts.pory"
	walk_down
# 258 "data/maps/MtChimney/scripts.pory"
	walk_down
# 259 "data/maps/MtChimney/scripts.pory"
	walk_left
# 260 "data/maps/MtChimney/scripts.pory"
	walk_left
# 261 "data/maps/MtChimney/scripts.pory"
	walk_down
# 262 "data/maps/MtChimney/scripts.pory"
	walk_down
# 263 "data/maps/MtChimney/scripts.pory"
	walk_left
# 264 "data/maps/MtChimney/scripts.pory"
	walk_left
# 265 "data/maps/MtChimney/scripts.pory"
	walk_left
# 266 "data/maps/MtChimney/scripts.pory"
	walk_left
# 267 "data/maps/MtChimney/scripts.pory"
	walk_left
# 268 "data/maps/MtChimney/scripts.pory"
	walk_down
# 269 "data/maps/MtChimney/scripts.pory"
	step_end
# 270 "data/maps/MtChimney/scripts.pory"

# 271 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 272 "data/maps/MtChimney/scripts.pory"
	delay_16
# 273 "data/maps/MtChimney/scripts.pory"
	delay_16
# 274 "data/maps/MtChimney/scripts.pory"
	delay_16
# 275 "data/maps/MtChimney/scripts.pory"
	walk_down
# 276 "data/maps/MtChimney/scripts.pory"
	walk_down
# 277 "data/maps/MtChimney/scripts.pory"
	walk_down
# 278 "data/maps/MtChimney/scripts.pory"
	walk_left
# 279 "data/maps/MtChimney/scripts.pory"
	walk_left
# 280 "data/maps/MtChimney/scripts.pory"
	walk_left
# 281 "data/maps/MtChimney/scripts.pory"
	walk_down
# 282 "data/maps/MtChimney/scripts.pory"
	step_end
# 283 "data/maps/MtChimney/scripts.pory"

# 284 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 285 "data/maps/MtChimney/scripts.pory"
	delay_16
# 286 "data/maps/MtChimney/scripts.pory"
	walk_left
# 287 "data/maps/MtChimney/scripts.pory"
	walk_down
# 288 "data/maps/MtChimney/scripts.pory"
	walk_down
# 289 "data/maps/MtChimney/scripts.pory"
	walk_down
# 290 "data/maps/MtChimney/scripts.pory"
	walk_down
# 291 "data/maps/MtChimney/scripts.pory"
	walk_left
# 292 "data/maps/MtChimney/scripts.pory"
	walk_left
# 293 "data/maps/MtChimney/scripts.pory"
	walk_left
# 294 "data/maps/MtChimney/scripts.pory"
	walk_left
# 295 "data/maps/MtChimney/scripts.pory"
	walk_left
# 296 "data/maps/MtChimney/scripts.pory"
	walk_down
# 297 "data/maps/MtChimney/scripts.pory"
	walk_down
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_down
# 300 "data/maps/MtChimney/scripts.pory"
	step_end
# 301 "data/maps/MtChimney/scripts.pory"

# 302 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 303 "data/maps/MtChimney/scripts.pory"
	delay_16
# 304 "data/maps/MtChimney/scripts.pory"
	walk_left
# 305 "data/maps/MtChimney/scripts.pory"
	walk_left
# 306 "data/maps/MtChimney/scripts.pory"
	walk_down
# 307 "data/maps/MtChimney/scripts.pory"
	walk_down
# 308 "data/maps/MtChimney/scripts.pory"
	walk_down
# 309 "data/maps/MtChimney/scripts.pory"
	walk_left
# 310 "data/maps/MtChimney/scripts.pory"
	walk_left
# 311 "data/maps/MtChimney/scripts.pory"
	walk_down
# 312 "data/maps/MtChimney/scripts.pory"
	walk_down
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_left
# 315 "data/maps/MtChimney/scripts.pory"
	walk_left
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_down
# 319 "data/maps/MtChimney/scripts.pory"
	step_end
# 320 "data/maps/MtChimney/scripts.pory"

# 321 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 322 "data/maps/MtChimney/scripts.pory"
	delay_16
# 323 "data/maps/MtChimney/scripts.pory"
	walk_down
# 324 "data/maps/MtChimney/scripts.pory"
	walk_left
# 325 "data/maps/MtChimney/scripts.pory"
	walk_left
# 326 "data/maps/MtChimney/scripts.pory"
	walk_left
# 327 "data/maps/MtChimney/scripts.pory"
	walk_left
# 328 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 329 "data/maps/MtChimney/scripts.pory"
	step_end
# 330 "data/maps/MtChimney/scripts.pory"

# 331 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 332 "data/maps/MtChimney/scripts.pory"
	walk_down
# 333 "data/maps/MtChimney/scripts.pory"
	walk_down
# 334 "data/maps/MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/MtChimney/scripts.pory"
	walk_down
# 336 "data/maps/MtChimney/scripts.pory"
	walk_left
# 337 "data/maps/MtChimney/scripts.pory"
	walk_left
# 338 "data/maps/MtChimney/scripts.pory"
	walk_left
# 339 "data/maps/MtChimney/scripts.pory"
	walk_left
# 340 "data/maps/MtChimney/scripts.pory"
	walk_left
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	walk_down
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_down
# 345 "data/maps/MtChimney/scripts.pory"
	step_end
# 346 "data/maps/MtChimney/scripts.pory"

# 347 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	step_end
# 350 "data/maps/MtChimney/scripts.pory"

# 351 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	walk_down
# 354 "data/maps/MtChimney/scripts.pory"
	walk_down
# 355 "data/maps/MtChimney/scripts.pory"
	walk_down
# 356 "data/maps/MtChimney/scripts.pory"
	walk_down
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	step_end
# 360 "data/maps/MtChimney/scripts.pory"

# 361 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 362 "data/maps/MtChimney/scripts.pory"
	delay_16
# 363 "data/maps/MtChimney/scripts.pory"
	delay_16
# 364 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 365 "data/maps/MtChimney/scripts.pory"
	delay_16
# 366 "data/maps/MtChimney/scripts.pory"
	walk_down
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	walk_down
# 369 "data/maps/MtChimney/scripts.pory"
	walk_down
# 370 "data/maps/MtChimney/scripts.pory"
	walk_down
# 371 "data/maps/MtChimney/scripts.pory"
	step_end
# 372 "data/maps/MtChimney/scripts.pory"

# 373 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 374 "data/maps/MtChimney/scripts.pory"
	delay_16
# 375 "data/maps/MtChimney/scripts.pory"
	delay_16
# 376 "data/maps/MtChimney/scripts.pory"
	delay_16
# 377 "data/maps/MtChimney/scripts.pory"
	delay_16
# 378 "data/maps/MtChimney/scripts.pory"
	delay_16
# 379 "data/maps/MtChimney/scripts.pory"
	delay_16
# 380 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 381 "data/maps/MtChimney/scripts.pory"
	delay_16
# 382 "data/maps/MtChimney/scripts.pory"
	walk_down
# 383 "data/maps/MtChimney/scripts.pory"
	walk_down
# 384 "data/maps/MtChimney/scripts.pory"
	step_end
# 385 "data/maps/MtChimney/scripts.pory"

# 386 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 387 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 388 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 389 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 390 "data/maps/MtChimney/scripts.pory"
	face_right
# 391 "data/maps/MtChimney/scripts.pory"
	step_end
# 392 "data/maps/MtChimney/scripts.pory"

# 393 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 394 "data/maps/MtChimney/scripts.pory"
	walk_left
# 395 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 396 "data/maps/MtChimney/scripts.pory"
	delay_16
# 397 "data/maps/MtChimney/scripts.pory"
	step_end
# 398 "data/maps/MtChimney/scripts.pory"

# 399 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 400 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 401 "data/maps/MtChimney/scripts.pory"
	end
# 402 "data/maps/MtChimney/scripts.pory"

# 403 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 404 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 405 "data/maps/MtChimney/scripts.pory"
	end
# 406 "data/maps/MtChimney/scripts.pory"

# 407 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 408 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 409 "data/maps/MtChimney/scripts.pory"
	end
# 410 "data/maps/MtChimney/scripts.pory"

# 411 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 412 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 413 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 414 "data/maps/MtChimney/scripts.pory"
	end
# 415 "data/maps/MtChimney/scripts.pory"

# 416 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 417 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 418 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 419 "data/maps/MtChimney/scripts.pory"
	end
# 420 "data/maps/MtChimney/scripts.pory"

# 421 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 422 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 423 "data/maps/MtChimney/scripts.pory"
	end
# 424 "data/maps/MtChimney/scripts.pory"

# 425 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 426 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 427 "data/maps/MtChimney/scripts.pory"
	end
# 428 "data/maps/MtChimney/scripts.pory"

# 429 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 430 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 431 "data/maps/MtChimney/scripts.pory"
	end
# 432 "data/maps/MtChimney/scripts.pory"

# 433 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 434 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 435 "data/maps/MtChimney/scripts.pory"
	end
# 436 "data/maps/MtChimney/scripts.pory"

# 437 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 438 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 439 "data/maps/MtChimney/scripts.pory"
	end
# 440 "data/maps/MtChimney/scripts.pory"

# 441 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 442 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 443 "data/maps/MtChimney/scripts.pory"
	end
# 444 "data/maps/MtChimney/scripts.pory"

# 445 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 446 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 447 "data/maps/MtChimney/scripts.pory"
	end
# 448 "data/maps/MtChimney/scripts.pory"

# 449 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 450 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 451 "data/maps/MtChimney/scripts.pory"
	end
# 452 "data/maps/MtChimney/scripts.pory"

# 453 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 454 "data/maps/MtChimney/scripts.pory"
	lockall
# 455 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 456 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 457 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 458 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 459 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 460 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 461 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 462 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 463 "data/maps/MtChimney/scripts.pory"
	releaseall
# 464 "data/maps/MtChimney/scripts.pory"
	end
# 465 "data/maps/MtChimney/scripts.pory"

# 466 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 467 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 468 "data/maps/MtChimney/scripts.pory"
	releaseall
# 469 "data/maps/MtChimney/scripts.pory"
	end
# 470 "data/maps/MtChimney/scripts.pory"

# 471 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 472 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 473 "data/maps/MtChimney/scripts.pory"
	releaseall
# 474 "data/maps/MtChimney/scripts.pory"
	end
# 475 "data/maps/MtChimney/scripts.pory"

# 476 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 477 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 478 "data/maps/MtChimney/scripts.pory"
	releaseall
# 479 "data/maps/MtChimney/scripts.pory"
	end
# 480 "data/maps/MtChimney/scripts.pory"

# 481 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 482 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 483 "data/maps/MtChimney/scripts.pory"
	end
# 484 "data/maps/MtChimney/scripts.pory"

# 485 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 486 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 487 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 488 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 489 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 490 "data/maps/MtChimney/scripts.pory"
	release
# 491 "data/maps/MtChimney/scripts.pory"
	end
# 492 "data/maps/MtChimney/scripts.pory"

# 493 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 494 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 495 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 496 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 497 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 498 "data/maps/MtChimney/scripts.pory"
	release
# 499 "data/maps/MtChimney/scripts.pory"
	end
# 500 "data/maps/MtChimney/scripts.pory"

# 501 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 502 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 503 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 504 "data/maps/MtChimney/scripts.pory"
	end
# 505 "data/maps/MtChimney/scripts.pory"

# 506 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 507 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 508 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 509 "data/maps/MtChimney/scripts.pory"
	end
# 510 "data/maps/MtChimney/scripts.pory"

# 511 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 512 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 513 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 514 "data/maps/MtChimney/scripts.pory"
	end
# 515 "data/maps/MtChimney/scripts.pory"

# 516 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 517 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 518 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 519 "data/maps/MtChimney/scripts.pory"
	end
# 520 "data/maps/MtChimney/scripts.pory"

# 521 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 522 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 523 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 524 "data/maps/MtChimney/scripts.pory"
	end
# 525 "data/maps/MtChimney/scripts.pory"

# 526 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 527 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 528 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 529 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 530 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 531 "data/maps/MtChimney/scripts.pory"
	release
# 532 "data/maps/MtChimney/scripts.pory"
	end
# 533 "data/maps/MtChimney/scripts.pory"

# 534 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 535 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 536 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 537 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 538 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 539 "data/maps/MtChimney/scripts.pory"
	release
# 540 "data/maps/MtChimney/scripts.pory"
	end
# 541 "data/maps/MtChimney/scripts.pory"

# 542 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 543 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 544 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 545 "data/maps/MtChimney/scripts.pory"
	end
# 546 "data/maps/MtChimney/scripts.pory"

# 547 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 548 "data/maps/MtChimney/scripts.pory"
	.string "这颗陨石里蕴含的\n"
# 549 "data/maps/MtChimney/scripts.pory"
	.string "力量……\p"
# 550 "data/maps/MtChimney/scripts.pory"
	.string "用这台机器把它放大，\n"
# 551 "data/maps/MtChimney/scripts.pory"
	.string "烟囱山的火山活动\l"
# 552 "data/maps/MtChimney/scripts.pory"
	.string "就会立刻加剧……\p"
# 553 "data/maps/MtChimney/scripts.pory"
	.string "能量会在火山口深处\n"
# 554 "data/maps/MtChimney/scripts.pory"
	.string "膨胀，然后……\l"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "呵呵呵……$"
# 556 "data/maps/MtChimney/scripts.pory"

# 557 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 558 "data/maps/MtChimney/scripts.pory"
	.string "马克西：嗯？\n"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "你是谁？\p"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "我听说阿库亚在抱怨\n"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "有个小孩一直\l"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "插手水舰队的行动。\p"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "他说的就是你吧。\p"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "哼！看来你还想\n"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "插手我们熔岩队的事？\p"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "你给我听好。\n"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "很久以前，生物是靠\l"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "大地生活、成长的。\p"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "所以大地才是最重要的！\n"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "它是一切之母！\p"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "所以熔岩队致力于\n"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "扩大陆地。\p"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "这是为了人类和宝可梦\n"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "更进一步的进步！\p"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "而为了这个，我们需要\n"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "这座山里沉睡的力量……\p"
# 579 "data/maps/MtChimney/scripts.pory"
	.string "哦！这些不该让你\n"
# 580 "data/maps/MtChimney/scripts.pory"
	.string "知道得这么清楚。\p"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "不过，无所谓！\n"
# 582 "data/maps/MtChimney/scripts.pory"
	.string "我就让你尝尝\l"
# 583 "data/maps/MtChimney/scripts.pory"
	.string "妨碍我们大计的后果！$"
# 584 "data/maps/MtChimney/scripts.pory"

# 585 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 586 "data/maps/MtChimney/scripts.pory"
	.string "什么？！\p"
# 587 "data/maps/MtChimney/scripts.pory"
	.string "我马克西竟然\n"
# 588 "data/maps/MtChimney/scripts.pory"
	.string "被偷袭了？！$"
# 589 "data/maps/MtChimney/scripts.pory"

# 590 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 591 "data/maps/MtChimney/scripts.pory"
	.string "马克西：不过，算了。\n"
# 592 "data/maps/MtChimney/scripts.pory"
	.string "这次我就退让。\p"
# 593 "data/maps/MtChimney/scripts.pory"
	.string "可别以为这就是\n"
# 594 "data/maps/MtChimney/scripts.pory"
	.string "熔岩队最后一次出现。\p"
# 595 "data/maps/MtChimney/scripts.pory"
	.string "呵呵呵……\p"
# 596 "data/maps/MtChimney/scripts.pory"
	.string "就算没有陨石，\n"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "只要拿到那颗宝珠……\l"
# 598 "data/maps/MtChimney/scripts.pory"
	.string "呵呵呵……$"
# 599 "data/maps/MtChimney/scripts.pory"

# 600 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 601 "data/maps/MtChimney/scripts.pory"
	.string "嘿嘿嘿！\p"
# 602 "data/maps/MtChimney/scripts.pory"
	.string "你居然追到这种\n"
# 603 "data/maps/MtChimney/scripts.pory"
	.string "地方来了！\p"
# 604 "data/maps/MtChimney/scripts.pory"
	.string "可你来晚了！\n"
# 605 "data/maps/MtChimney/scripts.pory"
	.string "我已经把陨石从\l"
# 606 "data/maps/MtChimney/scripts.pory"
	.string "流星瀑布送到老大手里了！$"
# 607 "data/maps/MtChimney/scripts.pory"

# 608 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 609 "data/maps/MtChimney/scripts.pory"
	.string "嘿嘿嘿……\p"
# 610 "data/maps/MtChimney/scripts.pory"
	.string "就算我输了，只要\n"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "老大让那东西苏醒……$"
# 612 "data/maps/MtChimney/scripts.pory"

# 613 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 614 "data/maps/MtChimney/scripts.pory"
	.string "老大，快！\n"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "把陨石的能量给它！\p"
# 616 "data/maps/MtChimney/scripts.pory"
	.string "嘿嘿嘿……$"
# 617 "data/maps/MtChimney/scripts.pory"

# 618 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 619 "data/maps/MtChimney/scripts.pory"
	.string "我们熔岩队是为了\n"
# 620 "data/maps/MtChimney/scripts.pory"
	.string "大家的利益在努力。\p"
# 621 "data/maps/MtChimney/scripts.pory"
	.string "比如说，那东西的力量\n"
# 622 "data/maps/MtChimney/scripts.pory"
	.string "要是造出更多陆地，\l"
# 623 "data/maps/MtChimney/scripts.pory"
	.string "能住的地方就更多了。\p"
# 624 "data/maps/MtChimney/scripts.pory"
	.string "大家都会幸福！$"
# 625 "data/maps/MtChimney/scripts.pory"

# 626 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 627 "data/maps/MtChimney/scripts.pory"
	.string "嗯？\n"
# 628 "data/maps/MtChimney/scripts.pory"
	.string "你说我输了，什么意思？$"
# 629 "data/maps/MtChimney/scripts.pory"

# 630 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 631 "data/maps/MtChimney/scripts.pory"
	.string "老大说，那会“让所有人\n"
# 632 "data/maps/MtChimney/scripts.pory"
	.string "都幸福”。\p"
# 633 "data/maps/MtChimney/scripts.pory"
	.string "可为什么大家老是\n"
# 634 "data/maps/MtChimney/scripts.pory"
	.string "来碍我们的事？$"
# 635 "data/maps/MtChimney/scripts.pory"

# 636 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 637 "data/maps/MtChimney/scripts.pory"
	.string "我和这个笨蛋手下\n"
# 638 "data/maps/MtChimney/scripts.pory"
	.string "就在这里拦住你！$"
# 639 "data/maps/MtChimney/scripts.pory"

# 640 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 641 "data/maps/MtChimney/scripts.pory"
	.string "都是这个笨蛋\n"
# 642 "data/maps/MtChimney/scripts.pory"
	.string "拖累了我……$"
# 643 "data/maps/MtChimney/scripts.pory"

# 644 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 645 "data/maps/MtChimney/scripts.pory"
	.string "没关系。\n"
# 646 "data/maps/MtChimney/scripts.pory"
	.string "你过不了塔比莎那一关。$"
# 647 "data/maps/MtChimney/scripts.pory"

# 648 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 649 "data/maps/MtChimney/scripts.pory"
	.string "那帮讨厌的水舰队……\n"
# 650 "data/maps/MtChimney/scripts.pory"
	.string "老是来搅乱我们的计划！$"
# 651 "data/maps/MtChimney/scripts.pory"

# 652 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 653 "data/maps/MtChimney/scripts.pory"
	.string "陨石里蕴含着\n"
# 654 "data/maps/MtChimney/scripts.pory"
	.string "惊人的力量！$"
# 655 "data/maps/MtChimney/scripts.pory"

# 656 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 657 "data/maps/MtChimney/scripts.pory"
	.string "你最好别来惹我们！\p"
# 658 "data/maps/MtChimney/scripts.pory"
	.string "我们让那东西苏醒，\n"
# 659 "data/maps/MtChimney/scripts.pory"
	.string "可是为了大家的利益！$"
# 660 "data/maps/MtChimney/scripts.pory"

# 661 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 662 "data/maps/MtChimney/scripts.pory"
	.string "我们是熔岩队！\p"
# 663 "data/maps/MtChimney/scripts.pory"
	.string "他们是水舰队！\p"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "他们居然用跟我们\n"
# 665 "data/maps/MtChimney/scripts.pory"
	.string "差不多的名字，真气人！$"
# 666 "data/maps/MtChimney/scripts.pory"

# 667 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 668 "data/maps/MtChimney/scripts.pory"
	.string "对！\n"
# 669 "data/maps/MtChimney/scripts.pory"
	.string "给他们来点火！$"
# 670 "data/maps/MtChimney/scripts.pory"

# 671 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 672 "data/maps/MtChimney/scripts.pory"
	.string "我们要不断\n"
# 673 "data/maps/MtChimney/scripts.pory"
	.string "造出更多陆地！$"
# 674 "data/maps/MtChimney/scripts.pory"

# 675 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 676 "data/maps/MtChimney/scripts.pory"
	.string "布波！$"
# 677 "data/maps/MtChimney/scripts.pory"

# 678 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 679 "data/maps/MtChimney/scripts.pory"
	.string "阿库亚：唔，{PLAYER}！\n"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "我早该想到你会来！\p"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "你自己看看吧，那些\n"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "熔岩队的狂徒在干什么！\p"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "他们想把偷来的陨石\n"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "的能量灌进火山！\p"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "干那种事会引发\n"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "火山喷发的！$"
# 687 "data/maps/MtChimney/scripts.pory"

# 688 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 689 "data/maps/MtChimney/scripts.pory"
	.string "阿库亚：唔……\p"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "我想阻止马克西，\n"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "可我做不到！\p"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "我一个人要对付三个\n"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "对手，实在忙不过来！$"
# 694 "data/maps/MtChimney/scripts.pory"

# 695 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou::
# 696 "data/maps/MtChimney/scripts.pory"
	.string "源治：{PLAYER}，我们又见面了。\p"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "你真是个机灵的人。自从\n"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "博物馆那件事以后，\l"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "我一直在关注熔岩队和\l"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "水舰队的活动，可你\l"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "还是比我先赶到了这里。\p"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "什么？马克西提到了\n"
# 704 "data/maps/MtChimney/scripts.pory"
	.string "在找什么宝珠？\p"
# 705 "data/maps/MtChimney/scripts.pory"
	.string "我大概猜到\n"
# 706 "data/maps/MtChimney/scripts.pory"
	.string "他说的是什么……\p"
# 707 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}，你怎么看\n"
# 708 "data/maps/MtChimney/scripts.pory"
	.string "这个世界运转的方式？\p"
# 709 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 710 "data/maps/MtChimney/scripts.pory"
	.string "我这话什么意思？\n"
# 711 "data/maps/MtChimney/scripts.pory"
	.string "这个嘛……\p"
# 712 "data/maps/MtChimney/scripts.pory"
	.string "算了，下次见面时\n"
# 713 "data/maps/MtChimney/scripts.pory"
	.string "你再想想这个问题吧。\p"
# 714 "data/maps/MtChimney/scripts.pory"
	.string "我先去进一步调查\n"
# 715 "data/maps/MtChimney/scripts.pory"
	.string "这件事。再次谢谢\l"
# 716 "data/maps/MtChimney/scripts.pory"
	.string "你的帮助，{PLAYER}。\l"
# 717 "data/maps/MtChimney/scripts.pory"
	.string "我们一定会再见面的。$"
# 718 "data/maps/MtChimney/scripts.pory"

# 719 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 720 "data/maps/MtChimney/scripts.pory"
	.string "可恶……熔岩队\n"
# 721 "data/maps/MtChimney/scripts.pory"
	.string "人太多了！\l"
# 722 "data/maps/MtChimney/scripts.pory"
	.string "我们顶不住！$"
# 723 "data/maps/MtChimney/scripts.pory"

# 724 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 725 "data/maps/MtChimney/scripts.pory"
	.string "他们要是扩大陆地，\n"
# 726 "data/maps/MtChimney/scripts.pory"
	.string "水属性宝可梦\l"
# 727 "data/maps/MtChimney/scripts.pory"
	.string "就少了栖息地！$"
# 728 "data/maps/MtChimney/scripts.pory"

# 729 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 730 "data/maps/MtChimney/scripts.pory"
	.string "我们是水舰队！\p"
# 731 "data/maps/MtChimney/scripts.pory"
	.string "他们是熔岩队！\p"
# 732 "data/maps/MtChimney/scripts.pory"
	.string "他们用这种容易混的名字，\n"
# 733 "data/maps/MtChimney/scripts.pory"
	.string "真让人火大！$"
# 734 "data/maps/MtChimney/scripts.pory"

# 735 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 736 "data/maps/MtChimney/scripts.pory"
	.string "布沙！$"
# 737 "data/maps/MtChimney/scripts.pory"

# 738 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 739 "data/maps/MtChimney/scripts.pory"
	.string "熔岩饼干是烟囱山\n"
# 740 "data/maps/MtChimney/scripts.pory"
	.string "的特产。\p"
# 741 "data/maps/MtChimney/scripts.pory"
	.string "尝尝吧，只要200元。$"
# 742 "data/maps/MtChimney/scripts.pory"

# 743 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 744 "data/maps/MtChimney/scripts.pory"
	.string "谢谢你，亲爱的！$"
# 745 "data/maps/MtChimney/scripts.pory"

# 746 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 747 "data/maps/MtChimney/scripts.pory"
	.string "哎呀。没钱的话\n"
# 748 "data/maps/MtChimney/scripts.pory"
	.string "可什么都买不了。$"
# 749 "data/maps/MtChimney/scripts.pory"

# 750 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 751 "data/maps/MtChimney/scripts.pory"
	.string "哦，那好吧。$"
# 752 "data/maps/MtChimney/scripts.pory"

# 753 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 754 "data/maps/MtChimney/scripts.pory"
	.string "陨石被装在一台神秘的\n"
# 755 "data/maps/MtChimney/scripts.pory"
	.string "机器上……\p"
# 756 "data/maps/MtChimney/scripts.pory"
	.string "机器似乎在把能量\n"
# 757 "data/maps/MtChimney/scripts.pory"
	.string "储存进陨石里。$"
# 758 "data/maps/MtChimney/scripts.pory"

# 759 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 760 "data/maps/MtChimney/scripts.pory"
	.string "陨石被装在一台神秘的\n"
# 761 "data/maps/MtChimney/scripts.pory"
	.string "机器上……\p"
# 762 "data/maps/MtChimney/scripts.pory"
	.string "要把陨石取下来吗？$"
# 763 "data/maps/MtChimney/scripts.pory"

# 764 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 765 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}从神秘机器上\n"
# 766 "data/maps/MtChimney/scripts.pory"
	.string "取下了陨石。$"
# 767 "data/maps/MtChimney/scripts.pory"

# 768 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 769 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}把陨石\n"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "留在了原处。$"
# 771 "data/maps/MtChimney/scripts.pory"

# 772 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 773 "data/maps/MtChimney/scripts.pory"
	.string "这台神秘的机器……\n"
# 774 "data/maps/MtChimney/scripts.pory"
	.string "完全没有反应。$"
# 775 "data/maps/MtChimney/scripts.pory"

# 776 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 777 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} 崎岖小径\n"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "前方是釜炎镇$"
# 779 "data/maps/MtChimney/scripts.pory"

# 780 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 781 "data/maps/MtChimney/scripts.pory"
	.string "我去泡了温泉，\n"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "把酸痛的骨头都放松了。\l"
# 783 "data/maps/MtChimney/scripts.pory"
	.string "现在我浑身是劲！$"
# 784 "data/maps/MtChimney/scripts.pory"

# 785 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 786 "data/maps/MtChimney/scripts.pory"
	.string "哎哟。\n"
# 787 "data/maps/MtChimney/scripts.pory"
	.string "你可真了不起！$"
# 788 "data/maps/MtChimney/scripts.pory"

# 789 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 790 "data/maps/MtChimney/scripts.pory"
	.string "唉呀，我输了。现在\n"
# 791 "data/maps/MtChimney/scripts.pory"
	.string "可不敢自称高手了。$"
# 792 "data/maps/MtChimney/scripts.pory"

# 793 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 794 "data/maps/MtChimney/scripts.pory"
	.string "谢谢你，孩子。真好玩，\n"
# 795 "data/maps/MtChimney/scripts.pory"
	.string "就像和自己的孙子对战。\p"
# 796 "data/maps/MtChimney/scripts.pory"
	.string "有空再来找我\n"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "再打一场。$"
# 798 "data/maps/MtChimney/scripts.pory"

# 799 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 800 "data/maps/MtChimney/scripts.pory"
	.string "要是你的心能和宝可梦的\n"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "心合在一起，那就能\l"
# 802 "data/maps/MtChimney/scripts.pory"
	.string "成就了不起的事。$"
# 803 "data/maps/MtChimney/scripts.pory"

# 804 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 805 "data/maps/MtChimney/scripts.pory"
	.string "哎哟。\n"
# 806 "data/maps/MtChimney/scripts.pory"
	.string "你可真了不起！$"
# 807 "data/maps/MtChimney/scripts.pory"

# 808 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 809 "data/maps/MtChimney/scripts.pory"
	.string "也许你的心已经和\n"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "宝可梦的心合一了。$"
# 811 "data/maps/MtChimney/scripts.pory"

# 812 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 813 "data/maps/MtChimney/scripts.pory"
	.string "我体内有火，宝贝。\n"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "受不了了！我必须对战！$"
# 815 "data/maps/MtChimney/scripts.pory"

# 816 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 817 "data/maps/MtChimney/scripts.pory"
	.string "哦，那真是场\n"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "滚烫的对战！$"
# 819 "data/maps/MtChimney/scripts.pory"

# 820 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 821 "data/maps/MtChimney/scripts.pory"
	.string "烟囱山的热气\n"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "把我暖起来了，宝贝！$"
# 823 "data/maps/MtChimney/scripts.pory"

# 824 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 825 "data/maps/MtChimney/scripts.pory"
	.string "我终于来到烟囱山了。\n"
# 826 "data/maps/MtChimney/scripts.pory"
	.string "我要让宝可梦好好对战！$"
# 827 "data/maps/MtChimney/scripts.pory"

# 828 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 829 "data/maps/MtChimney/scripts.pory"
	.string "你的对战方式……\n"
# 830 "data/maps/MtChimney/scripts.pory"
	.string "就像烟囱山喷发！$"
# 831 "data/maps/MtChimney/scripts.pory"

# 832 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 833 "data/maps/MtChimney/scripts.pory"
	.string "就像我说的，我终于\n"
# 834 "data/maps/MtChimney/scripts.pory"
	.string "来到烟囱山了。只稍微\l"
# 835 "data/maps/MtChimney/scripts.pory"
	.string "观光一下就太可惜了……\p"
# 836 "data/maps/MtChimney/scripts.pory"
	.string "我想打几场对战，\n"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "再买些饼干当纪念品。$"
# 838 "data/maps/MtChimney/scripts.pory"

# 839 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 840 "data/maps/MtChimney/scripts.pory"
	.string "泡过温泉以后，\n"
# 841 "data/maps/MtChimney/scripts.pory"
	.string "我一直感觉很好！\l"
# 842 "data/maps/MtChimney/scripts.pory"
	.string "我肯定会赢！$"
# 843 "data/maps/MtChimney/scripts.pory"

# 844 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 845 "data/maps/MtChimney/scripts.pory"
	.string "哎哟！\n"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "我从水里出来发冷了。$"
# 847 "data/maps/MtChimney/scripts.pory"

# 848 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 849 "data/maps/MtChimney/scripts.pory"
	.string "我得再去泡一次\n"
# 850 "data/maps/MtChimney/scripts.pory"
	.string "温泉。要一起来吗？\p"
# 851 "data/maps/MtChimney/scripts.pory"
	.string "开玩笑的！$"
# 852 "data/maps/MtChimney/scripts.pory"

# 853 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 854 "data/maps/MtChimney/scripts.pory"
	.string "这真是座好山！周围\n"
# 855 "data/maps/MtChimney/scripts.pory"
	.string "有不少热情的人作伴！$"
# 856 "data/maps/MtChimney/scripts.pory"

# 857 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 858 "data/maps/MtChimney/scripts.pory"
	.string "哦，你也是个\n"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "真正的火爆脾气！$"
# 860 "data/maps/MtChimney/scripts.pory"

# 861 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 862 "data/maps/MtChimney/scripts.pory"
	.string "我看我得和当地人一起\n"
# 863 "data/maps/MtChimney/scripts.pory"
	.string "去泡釜炎温泉了！$"
# 864 "data/maps/MtChimney/scripts.pory"

# 865 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 866 "data/maps/MtChimney/scripts.pory"
	.string "我喜欢你这种小火焰。\n"
# 867 "data/maps/MtChimney/scripts.pory"
	.string "让我把你登录进导航。$"
# 868 "data/maps/MtChimney/scripts.pory"

# 869 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 870 "data/maps/MtChimney/scripts.pory"
	.string "我身边都是热情的人，\n"
# 871 "data/maps/MtChimney/scripts.pory"
	.string "真开心。我不会输！$"
# 872 "data/maps/MtChimney/scripts.pory"

# 873 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 874 "data/maps/MtChimney/scripts.pory"
	.string "天哪，你还跟以前一样\n"
# 875 "data/maps/MtChimney/scripts.pory"
	.string "是个火爆脾气！$"
# 876 "data/maps/MtChimney/scripts.pory"

# 877 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 878 "data/maps/MtChimney/scripts.pory"
	.string "其实这里真的很热。\n"
# 879 "data/maps/MtChimney/scripts.pory"
	.string "我穿得太多了。$"
