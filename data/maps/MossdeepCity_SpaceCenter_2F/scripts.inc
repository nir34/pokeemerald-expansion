# 1 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_RICH_BOY, 1
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GENTLEMAN, 2
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_SCIENTIST, 3
# 5 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_STEVEN, 4
# 6 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Grunt names numbered like their Trainer values (which are for the full Space Center)
# 7 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_6, 5
# 8 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_5, 6
# 9 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_7, 7
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_DRAKE, 8
# 11 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_MapScripts::
# 13 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
# 14 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_OnFrame
# 15 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.byte 0
# 16 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 17 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition:
# 18 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
# 19 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 21 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
# 22 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 3
# 23 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 24 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 3, 2
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 26 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GENTLEMAN, 1, 3
# 27 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 30 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnFrame:
# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 1, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.2byte 0
# 33 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 34 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
# 35 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 36 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 38 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_DEFAULT
# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOnTwo, MSGBOX_DEFAULT
# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 45 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOnThree, MSGBOX_DEFAULT
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 59 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 60 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 61 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 62 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
# 64 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 74 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
# 83 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 84 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 91 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 92 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 93 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 98 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 99 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 100 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 105 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
# 107 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 115 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 118 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 122 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 123 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Drake::
# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 125 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Drake, MSGBOX_DEFAULT
# 127 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 128 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 129 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenRoundUp, MSGBOX_DEFAULT
# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadenewbgm MUS_RUSTBORO
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 143 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_6
# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_7
# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_5
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SCIENTIST, 5, 6
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SCIENTIST, DIR_SOUTH
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_GENTLEMAN, 11, 8
# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_GENTLEMAN, DIR_NORTH
# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_RICH_BOY, 6, 2
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_RICH_BOY, DIR_NORTH
# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 155 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenMagmaEmblem, MSGBOX_DEFAULT
# 156 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 157 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenPursueMagma, MSGBOX_DEFAULT
# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayer
# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DrakePursueAqua, MSGBOX_DEFAULT
# 163 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenMeetHouse, MSGBOX_DEFAULT
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_STEVEN
# 171 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_DRAKE
# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 10
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 6
# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SCIENTIST
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 182 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 185 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 189 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 190 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 191 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFight:
# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_left
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_EAST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerEast
# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_NORTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerNorth
# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_NORTH
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerEast::
# 227 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_WEST
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerNorth::
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_SOUTH
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayer::
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerSouth
# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_EAST, MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerEast
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_NORTH, MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerNorth
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerSouth::
# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_DRAKE, DIR_NORTH
# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 244 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerEast::
# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_DRAKE, DIR_WEST
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DrakeFacePlayerNorth::
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_DRAKE, DIR_SOUTH
# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkplayergender
# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 262 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "绿岭以晴天为主，\n"
# 275 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "风向也稳定。\p"
# 276 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "这里是发射火箭的\n"
# 277 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "理想地点。$"
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel:
# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "熔岩队到底为什么\n"
# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "想偷我们的火箭燃料？$"
# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "要是能再年轻一点，\n"
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我真想当宇航员……\p"
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "不……还不算晚！\n"
# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我要试，我一定会试！$"
# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 289 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis:
# 290 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "要是熔岩队拿走火箭\n"
# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "燃料，我就上不了太空了！\p"
# 292 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "绝不能让他们这么\n"
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "无法无天！$"
# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "真希望有一天普通人\n"
# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "也能上太空……$"
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace:
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "熔岩队……\n"
# 301 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "他们也想上太空吗？$"
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "那两个人到底是什么……$"
# 305 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 306 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOnTwo:
# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我们根本没机会……$"
# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOnThree:
# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "至少马克西跑了……$"
# 311 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "回答得好！\n"
# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "聪明人都会这么做！$"
# 315 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
# 317 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "鲁莽的愣头青，是吧？\n"
# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "好，我先上！$"
# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我输了！\n"
# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "可是！$"
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "现在松气还太早！\n"
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "下一个是我！$"
# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我也输了！\n"
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "可是！$"
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro:
# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我打赌你想歇口气。\n"
# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "可我偏不让你歇！$"
# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat:
# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我们该歇口气的……\n"
# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "真该那么做的……$"
# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我们三个人在这儿，\n"
# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "看看落得什么惨样。$"
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle:
# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我们三个这样输……\n"
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "狼狈得是三倍！$"
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "真不敢相信他们\n"
# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "那么强……$"
# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Drake::
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "源治：{PLAYER}。\n"
# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "你来得正好。\p"
# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "那些小兵很弱，\n"
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "可马克西从我们手里跑了。\p"
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "不过，我们从这里熔岩队\n"
# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "成员口中问出了\l"
# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "一些他们的计划。\p"
# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "关于我在烟囱山问你的\n"
# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "事，你想过更多了吗？\p"
# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我一直在想，有时候我们的\n"
# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "世界太有秩序，\l"
# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "太非黑即白了……\p"
# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "很难解释，可看你的表情，\n"
# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我说的好像让你\l"
# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "摸不着头绪。$"
# 368 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 369 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenRoundUp:
# 370 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "大吾：哦，{PLAYER}，\n"
# 371 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "又见面了。\p"
# 372 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "看来你打赢了绿岭\n"
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "道馆的馆主，干得漂亮。\p"
# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "这期间我和源治在这里\n"
# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "也打了点架，\l"
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "如你所见。\p"
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "啊，等一下，看来当局\n"
# 378 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "来带走我们抓到的\l"
# 379 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "熔岩队成员了。$"
# 380 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenMagmaEmblem:
# 382 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "大吾：就像我说的，很遗憾，\n"
# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "马克西从我们手里跑了。\p"
# 384 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "不过我们打听到，\n"
# 385 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}熔岩队正在他们位于\l"
# 386 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "崎岖小径、靠近\l"
# 387 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "釜炎镇的基地策划大事。\p"
# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}我们还从一个小兵身上\n"
# 389 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "拿到了这个，我们想\l"
# 390 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "这应该能让我们进基地。$"
# 391 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 392 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenPursueMagma:
# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "大吾：这大概是我们暂时\n"
# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "分道扬镳的地方。\p"
# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我要留在家乡，确保这里\n"
# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "从这次事件中恢复、\l"
# 397 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "回到正轨。\p"
# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "我觉得你该追着熔岩队\n"
# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "去他们基地看看，\l"
# 400 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "不过千万小心，{PLAYER}。$"
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_DrakePursueAqua:
# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "源治：这期间，我会跟进\n"
# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "水舰队偷走潜水艇\l"
# 405 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "之后的动向。\p"
# 406 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}，你调查完\n"
# 407 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "熔岩队基地后，\l"
# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "去找大吾，看看我\l"
# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "有没有给他新的消息。\p"
# 410 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "如果到那时还没我的\n"
# 411 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "消息，也许你该\l"
# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "也去查查水舰队。$"
# 413 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenMeetHouse:
# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "大吾：这计划听起来不错。\n"
# 416 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}，来绿岭我\l"
# 417 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "家里一趟，我有件礼物，\l"
# 418 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "想亲自谢谢你这一路的帮忙。$"
