# 1 "data/maps/SSTidalCorridor/scripts.pory"

# 2 "data/maps/SSTidalCorridor/scripts.pory"
.set LOCALID_SAILOR, 1
# 3 "data/maps/SSTidalCorridor/scripts.pory"
.set LOCALID_SCOTT, 5
# 4 "data/maps/SSTidalCorridor/scripts.pory"

# 5 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_MapScripts::
# 6 "data/maps/SSTidalCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SSTidalCorridor_OnFrame
# 7 "data/maps/SSTidalCorridor/scripts.pory"
	.byte 0
# 8 "data/maps/SSTidalCorridor/scripts.pory"

# 9 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_OnFrame:
# 10 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_SCOTT_STATE, 0, SSTidalCorridor_EventScript_ScottScene
# 11 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT, SSTidalCorridor_EventScript_DepartSlateportForLilycove
# 12 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE, SSTidalCorridor_EventScript_DepartLilycoveForSlateport
# 13 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_EXIT_CURRENTS_RIGHT, SSTidalCorridor_EventScript_HalfwayToLilycove
# 14 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_EXIT_CURRENTS_LEFT, SSTidalCorridor_EventScript_ArrivedInSlateport
# 15 "data/maps/SSTidalCorridor/scripts.pory"
	.2byte 0
# 16 "data/maps/SSTidalCorridor/scripts.pory"

# 17 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_DepartSlateportForLilycove::
# 18 "data/maps/SSTidalCorridor/scripts.pory"
	special SetSSTidalFlag
# 19 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_DEPART_SLATEPORT
# 20 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 21 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 22 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_FastCurrentsHopeYouEnjoyVoyage, MSGBOX_DEFAULT
# 23 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 24 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 25 "data/maps/SSTidalCorridor/scripts.pory"

# 26 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_DepartLilycoveForSlateport::
# 27 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_DEPART_LILYCOVE
# 28 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 29 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 30 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_HopeYouEnjoyVoyage, MSGBOX_DEFAULT
# 31 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 32 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 33 "data/maps/SSTidalCorridor/scripts.pory"

# 34 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_HalfwayToSlateport::
# 35 "data/maps/SSTidalCorridor/scripts.pory"
	special SetSSTidalFlag
# 36 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_HALFWAY_SLATEPORT
# 37 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 38 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_FastCurrentsHopeYouEnjoyVoyage, MSGBOX_DEFAULT
# 39 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 40 "data/maps/SSTidalCorridor/scripts.pory"

# 41 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_ArrivedInLilycove::
# 42 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 43 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_LILYCOVE
# 44 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 45 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_MadeLandInLilycove, MSGBOX_DEFAULT
# 46 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 47 "data/maps/SSTidalCorridor/scripts.pory"

# 48 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ReachedStepCount::
# 49 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq VAR_SS_TIDAL_STATE, SS_TIDAL_DEPART_SLATEPORT, SSTidalCorridor_EventScript_HalfwayToLilycove
# 50 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq VAR_SS_TIDAL_STATE, SS_TIDAL_HALFWAY_SLATEPORT, SSTidalCorridor_EventScript_ArrivedInSlateport
# 51 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 52 "data/maps/SSTidalCorridor/scripts.pory"

# 53 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_HalfwayToLilycove::
# 54 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 55 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_HALFWAY_LILYCOVE
# 56 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 57 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 58 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_HopeYouEnjoyVoyage, MSGBOX_DEFAULT
# 59 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 60 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 61 "data/maps/SSTidalCorridor/scripts.pory"

# 62 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ArrivedInSlateport::
# 63 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 64 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_SLATEPORT
# 65 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 66 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 67 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_MadeLandInSlateport, MSGBOX_DEFAULT
# 68 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 69 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 70 "data/maps/SSTidalCorridor/scripts.pory"

# 71 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_ArrivedInSlateport::
# 72 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 73 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_SLATEPORT
# 74 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 75 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_MadeLandInSlateport, MSGBOX_DEFAULT
# 76 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 77 "data/maps/SSTidalCorridor/scripts.pory"

# 78 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_ProgessCruiseAfterBed::
# 79 "data/maps/SSTidalCorridor/scripts.pory"
	switch VAR_SS_TIDAL_STATE
# 80 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_DEPART_SLATEPORT, SSTidalRooms_EventScript_ArrivedInLilycove
# 81 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_HALFWAY_LILYCOVE, SSTidalRooms_EventScript_ArrivedInLilycove
# 82 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_DEPART_LILYCOVE, SSTidalRooms_EventScript_HalfwayToSlateport
# 83 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_HALFWAY_SLATEPORT, SSTidalRooms_EventScript_ArrivedInSlateport
# 84 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 85 "data/maps/SSTidalCorridor/scripts.pory"

# 86 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Briney::
# 87 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_BrineyWelcomeAboard, MSGBOX_NPC
# 88 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 89 "data/maps/SSTidalCorridor/scripts.pory"

# 90 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Peeko::
# 91 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 92 "data/maps/SSTidalCorridor/scripts.pory"
	faceplayer
# 93 "data/maps/SSTidalCorridor/scripts.pory"
	waitse
# 94 "data/maps/SSTidalCorridor/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 95 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Peeko, MSGBOX_DEFAULT
# 96 "data/maps/SSTidalCorridor/scripts.pory"
	waitmoncry
# 97 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 98 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 99 "data/maps/SSTidalCorridor/scripts.pory"

# 100 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Cabin1Sign::
# 101 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin1, MSGBOX_SIGN
# 102 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 103 "data/maps/SSTidalCorridor/scripts.pory"

# 104 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Cabin2Sign::
# 105 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin2, MSGBOX_SIGN
# 106 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 107 "data/maps/SSTidalCorridor/scripts.pory"

# 108 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Cabin3Sign::
# 109 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin3, MSGBOX_SIGN
# 110 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 111 "data/maps/SSTidalCorridor/scripts.pory"

# 112 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Cabin4Sign::
# 113 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin4, MSGBOX_SIGN
# 114 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 115 "data/maps/SSTidalCorridor/scripts.pory"

# 116 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitSailor::
# 117 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 118 "data/maps/SSTidalCorridor/scripts.pory"
	faceplayer
# 119 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_LILYCOVE, SSTidalCorridor_EventScript_ExitLilycove
# 120 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_SLATEPORT, SSTidalCorridor_EventScript_ExitSlateport
# 121 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_CanRestInCabin2, MSGBOX_DEFAULT
# 122 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 123 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 124 "data/maps/SSTidalCorridor/scripts.pory"

# 125 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitLilycove::
# 126 "data/maps/SSTidalCorridor/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 127 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_WeveArrived, MSGBOX_DEFAULT
# 128 "data/maps/SSTidalCorridor/scripts.pory"
	call_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalCorridor_EventScript_HideSnatchGiver
# 129 "data/maps/SSTidalCorridor/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 130 "data/maps/SSTidalCorridor/scripts.pory"
	waitstate
# 131 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 132 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 133 "data/maps/SSTidalCorridor/scripts.pory"

# 134 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitSlateport::
# 135 "data/maps/SSTidalCorridor/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 136 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_WeveArrived, MSGBOX_DEFAULT
# 137 "data/maps/SSTidalCorridor/scripts.pory"
	call_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalCorridor_EventScript_HideSnatchGiver
# 138 "data/maps/SSTidalCorridor/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 139 "data/maps/SSTidalCorridor/scripts.pory"
	waitstate
# 140 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 141 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 142 "data/maps/SSTidalCorridor/scripts.pory"

# 143 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_HideSnatchGiver::
# 144 "data/maps/SSTidalCorridor/scripts.pory"
	setflag FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER
# 145 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 146 "data/maps/SSTidalCorridor/scripts.pory"

# 147 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Porthole::
# 148 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 149 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq VAR_SS_TIDAL_STATE, SS_TIDAL_DEPART_SLATEPORT, SSTidalCorridor_EventScript_LookThroughPorthole
# 150 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq VAR_SS_TIDAL_STATE, SS_TIDAL_HALFWAY_SLATEPORT, SSTidalCorridor_EventScript_LookThroughPorthole
# 151 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_HorizonSpreadsBeyondPorthole, MSGBOX_DEFAULT
# 152 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 153 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 154 "data/maps/SSTidalCorridor/scripts.pory"

# 155 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_LookThroughPorthole::
# 156 "data/maps/SSTidalCorridor/scripts.pory"
	special LookThroughPorthole
# 157 "data/maps/SSTidalCorridor/scripts.pory"
	waitstate
# 158 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 159 "data/maps/SSTidalCorridor/scripts.pory"

# 160 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Sailor::
# 161 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 162 "data/maps/SSTidalCorridor/scripts.pory"
	faceplayer
# 163 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_set FLAG_DEFEATED_SS_TIDAL_TRAINERS, SSTidalCorridor_EventScript_EnjoyYourCruise
# 164 "data/maps/SSTidalCorridor/scripts.pory"
	call SSTidalCorridor_EventScript_CheckIfTrainersDefeated
# 165 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_VisitOtherCabins, MSGBOX_DEFAULT
# 166 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 167 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 168 "data/maps/SSTidalCorridor/scripts.pory"

# 169 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_EnjoyYourCruise::
# 170 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_EnjoyYourCruise, MSGBOX_DEFAULT
# 171 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 172 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 173 "data/maps/SSTidalCorridor/scripts.pory"

# 174 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_CheckIfTrainersDefeated::
# 175 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_PHILLIP, SSTidalCorridor_EventScript_TrainerNotDefeated
# 176 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_LEONARD, SSTidalCorridor_EventScript_TrainerNotDefeated
# 177 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_COLTON, SSTidalCorridor_EventScript_TrainerNotDefeated
# 178 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_MICAH, SSTidalCorridor_EventScript_TrainerNotDefeated
# 179 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_THOMAS, SSTidalCorridor_EventScript_TrainerNotDefeated
# 180 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_LEA_AND_JED, SSTidalCorridor_EventScript_TrainerNotDefeated
# 181 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_GARRET, SSTidalCorridor_EventScript_TrainerNotDefeated
# 182 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_NAOMI, SSTidalCorridor_EventScript_TrainerNotDefeated
# 183 "data/maps/SSTidalCorridor/scripts.pory"
	setflag FLAG_DEFEATED_SS_TIDAL_TRAINERS
# 184 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_EnjoyYourCruise
# 185 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 186 "data/maps/SSTidalCorridor/scripts.pory"

# 187 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_TrainerNotDefeated::
# 188 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 189 "data/maps/SSTidalCorridor/scripts.pory"

# 190 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ScottScene::
# 191 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 192 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SCOTT, SSTidalCorridor_Movement_ScottApproachPlayer
# 193 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 194 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 195 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 196 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_ScottBattleFrontierInvite, MSGBOX_DEFAULT
# 197 "data/maps/SSTidalCorridor/scripts.pory"
	closemessage
# 198 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSTidalCorridor_Movement_PlayerWatchScottExit
# 199 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SAILOR, SSTidalCorridor_Movement_SailorMoveForScott
# 200 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SCOTT, SSTidalCorridor_Movement_ScottExit
# 201 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 202 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_EXIT
# 203 "data/maps/SSTidalCorridor/scripts.pory"
	waitse
# 204 "data/maps/SSTidalCorridor/scripts.pory"
	removeobject LOCALID_SCOTT
# 205 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SAILOR, SSTidalCorridor_Movement_SailorReturn
# 206 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 207 "data/maps/SSTidalCorridor/scripts.pory"
	delay 30
# 208 "data/maps/SSTidalCorridor/scripts.pory"
	setflag FLAG_MET_SCOTT_ON_SS_TIDAL
# 209 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_SCOTT_STATE, 1
# 210 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 211 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 212 "data/maps/SSTidalCorridor/scripts.pory"

# 213 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Movement_ScottApproachPlayer:
# 214 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 215 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 216 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 217 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 218 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 219 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 220 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 221 "data/maps/SSTidalCorridor/scripts.pory"
	step_end
# 222 "data/maps/SSTidalCorridor/scripts.pory"

# 223 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Movement_ScottExit:
# 224 "data/maps/SSTidalCorridor/scripts.pory"
	walk_in_place_faster_down
# 225 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 226 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 227 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 228 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 229 "data/maps/SSTidalCorridor/scripts.pory"
	walk_down
# 230 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 231 "data/maps/SSTidalCorridor/scripts.pory"
	step_end
# 232 "data/maps/SSTidalCorridor/scripts.pory"

# 233 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Movement_PlayerWatchScottExit:
# 234 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 235 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 236 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 237 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 238 "data/maps/SSTidalCorridor/scripts.pory"
	delay_8
# 239 "data/maps/SSTidalCorridor/scripts.pory"
	walk_in_place_faster_down
# 240 "data/maps/SSTidalCorridor/scripts.pory"
	step_end
# 241 "data/maps/SSTidalCorridor/scripts.pory"

# 242 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Movement_SailorMoveForScott:
# 243 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 244 "data/maps/SSTidalCorridor/scripts.pory"
	walk_right
# 245 "data/maps/SSTidalCorridor/scripts.pory"
	walk_right
# 246 "data/maps/SSTidalCorridor/scripts.pory"
	walk_in_place_faster_up
# 247 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 248 "data/maps/SSTidalCorridor/scripts.pory"
	walk_in_place_faster_left
# 249 "data/maps/SSTidalCorridor/scripts.pory"
	step_end
# 250 "data/maps/SSTidalCorridor/scripts.pory"

# 251 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Movement_SailorReturn:
# 252 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 253 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 254 "data/maps/SSTidalCorridor/scripts.pory"
	walk_in_place_faster_up
# 255 "data/maps/SSTidalCorridor/scripts.pory"
	step_end
# 256 "data/maps/SSTidalCorridor/scripts.pory"

# 257 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_ScottBattleFrontierInvite:
# 258 "data/maps/SSTidalCorridor/scripts.pory"
	.string "史考特：哎呀，你好你好！\n"
# 259 "data/maps/SSTidalCorridor/scripts.pory"
	.string "{PLAYER}，{PLAYER}！\p"
# 260 "data/maps/SSTidalCorridor/scripts.pory"
	.string "临时有事，我得下船了，\n"
# 261 "data/maps/SSTidalCorridor/scripts.pory"
	.string "不过见到你真高兴！\p"
# 262 "data/maps/SSTidalCorridor/scripts.pory"
	.string "恭喜你，联盟冠军！\p"
# 263 "data/maps/SSTidalCorridor/scripts.pory"
	.string "有个地方，我想邀请\n"
# 264 "data/maps/SSTidalCorridor/scripts.pory"
	.string "你这样的人去。\p"
# 265 "data/maps/SSTidalCorridor/scripts.pory"
	.string "就是……\n"
# 266 "data/maps/SSTidalCorridor/scripts.pory"
	.string "对战开拓区！\p"
# 267 "data/maps/SSTidalCorridor/scripts.pory"
	.string "那地方什么样？\n"
# 268 "data/maps/SSTidalCorridor/scripts.pory"
	.string "你去了就明白！\p"
# 269 "data/maps/SSTidalCorridor/scripts.pory"
	.string "我已经跟船长说好了。\p"
# 270 "data/maps/SSTidalCorridor/scripts.pory"
	.string "下次坐渡轮的时候，\n"
# 271 "data/maps/SSTidalCorridor/scripts.pory"
	.string "你应该就能开往\l"
# 272 "data/maps/SSTidalCorridor/scripts.pory"
	.string "对战开拓区了。\p"
# 273 "data/maps/SSTidalCorridor/scripts.pory"
	.string "好，{PLAYER}，我在对战\n"
# 274 "data/maps/SSTidalCorridor/scripts.pory"
	.string "开拓区等你！$"
# 275 "data/maps/SSTidalCorridor/scripts.pory"

# 276 "data/maps/SSTidalCorridor/scripts.pory"
SSTidal_Text_FastCurrentsHopeYouEnjoyVoyage:
# 277 "data/maps/SSTidalCorridor/scripts.pory"
	.string "这艘渡轮是专门为\n"
# 278 "data/maps/SSTidalCorridor/scripts.pory"
	.string "冲破急流造的。\p"
# 279 "data/maps/SSTidalCorridor/scripts.pory"
	.string "希望你喜欢这次航行。\n"
# 280 "data/maps/SSTidalCorridor/scripts.pory"
	.string "可以随意在船上走走。$"
# 281 "data/maps/SSTidalCorridor/scripts.pory"

# 282 "data/maps/SSTidalCorridor/scripts.pory"
SSTidal_Text_HopeYouEnjoyVoyage:
# 283 "data/maps/SSTidalCorridor/scripts.pory"
	.string "希望你喜欢这次\n"
# 284 "data/maps/SSTidalCorridor/scripts.pory"
	.string "渡轮航行。$"
# 285 "data/maps/SSTidalCorridor/scripts.pory"

# 286 "data/maps/SSTidalCorridor/scripts.pory"
SSTidal_Text_MadeLandInSlateport:
# 287 "data/maps/SSTidalCorridor/scripts.pory"
	.string "我们在凯那市上岸了。\n"
# 288 "data/maps/SSTidalCorridor/scripts.pory"
	.string "感谢乘坐。$"
# 289 "data/maps/SSTidalCorridor/scripts.pory"

# 290 "data/maps/SSTidalCorridor/scripts.pory"
SSTidal_Text_MadeLandInLilycove:
# 291 "data/maps/SSTidalCorridor/scripts.pory"
	.string "我们在绿岭市上岸了。\n"
# 292 "data/maps/SSTidalCorridor/scripts.pory"
	.string "感谢乘坐。$"
# 293 "data/maps/SSTidalCorridor/scripts.pory"

# 294 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_CanRestInCabin2:
# 295 "data/maps/SSTidalCorridor/scripts.pory"
	.string "我看还要过一阵子\n"
# 296 "data/maps/SSTidalCorridor/scripts.pory"
	.string "才上岸。\p"
# 297 "data/maps/SSTidalCorridor/scripts.pory"
	.string "想休息的话，可以在\n"
# 298 "data/maps/SSTidalCorridor/scripts.pory"
	.string "自己的船舱里歇着。\l"
# 299 "data/maps/SSTidalCorridor/scripts.pory"
	.string "你的船舱是2号。\p"
# 300 "data/maps/SSTidalCorridor/scripts.pory"
	.string "里面的床又软又蓬。\n"
# 301 "data/maps/SSTidalCorridor/scripts.pory"
	.string "我可以保证有多舒服！$"
# 302 "data/maps/SSTidalCorridor/scripts.pory"

# 303 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_WeveArrived:
# 304 "data/maps/SSTidalCorridor/scripts.pory"
	.string "我们到了！$"
# 305 "data/maps/SSTidalCorridor/scripts.pory"

# 306 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_VisitOtherCabins:
# 307 "data/maps/SSTidalCorridor/scripts.pory"
	.string "去别的船舱看看吧。\n"
# 308 "data/maps/SSTidalCorridor/scripts.pory"
	.string "坐船坐闷了的训练家\l"
# 309 "data/maps/SSTidalCorridor/scripts.pory"
	.string "正手痒想对战呢。$"
# 310 "data/maps/SSTidalCorridor/scripts.pory"

# 311 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_EnjoyYourCruise:
# 312 "data/maps/SSTidalCorridor/scripts.pory"
	.string "祝旅途愉快！$"
# 313 "data/maps/SSTidalCorridor/scripts.pory"

# 314 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_HorizonSpreadsBeyondPorthole:
# 315 "data/maps/SSTidalCorridor/scripts.pory"
	.string "舷窗外面延伸着\n"
# 316 "data/maps/SSTidalCorridor/scripts.pory"
	.string "地平线。$"
# 317 "data/maps/SSTidalCorridor/scripts.pory"

# 318 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_BrineyWelcomeAboard:
# 319 "data/maps/SSTidalCorridor/scripts.pory"
	.string "布林尼先生：欢迎上船，\n"
# 320 "data/maps/SSTidalCorridor/scripts.pory"
	.string "{PLAYER}！\p"
# 321 "data/maps/SSTidalCorridor/scripts.pory"
	.string "他们让我当了潮汐号的\n"
# 322 "data/maps/SSTidalCorridor/scripts.pory"
	.string "名誉船长！\p"
# 323 "data/maps/SSTidalCorridor/scripts.pory"
	.string "现在你可以叫我\n"
# 324 "data/maps/SSTidalCorridor/scripts.pory"
	.string "布林尼船长！\p"
# 325 "data/maps/SSTidalCorridor/scripts.pory"
	.string "说起来，我以前退休过\n"
# 326 "data/maps/SSTidalCorridor/scripts.pory"
	.string "一次，可一见这艘\l"
# 327 "data/maps/SSTidalCorridor/scripts.pory"
	.string "气派的船……\p"
# 328 "data/maps/SSTidalCorridor/scripts.pory"
	.string "我沉睡的水手之魂\n"
# 329 "data/maps/SSTidalCorridor/scripts.pory"
	.string "就被唤醒了！$"
# 330 "data/maps/SSTidalCorridor/scripts.pory"

# 331 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_Peeko:
# 332 "data/maps/SSTidalCorridor/scripts.pory"
	.string "皮皮：吡哟吡哟哟……$"
# 333 "data/maps/SSTidalCorridor/scripts.pory"

# 334 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_Cabin1:
# 335 "data/maps/SSTidalCorridor/scripts.pory"
	.string "1号船舱$"
# 336 "data/maps/SSTidalCorridor/scripts.pory"

# 337 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_Cabin2:
# 338 "data/maps/SSTidalCorridor/scripts.pory"
	.string "2号船舱$"
# 339 "data/maps/SSTidalCorridor/scripts.pory"

# 340 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_Cabin3:
# 341 "data/maps/SSTidalCorridor/scripts.pory"
	.string "3号船舱$"
# 342 "data/maps/SSTidalCorridor/scripts.pory"

# 343 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_Cabin4:
# 344 "data/maps/SSTidalCorridor/scripts.pory"
	.string "4号船舱$"
