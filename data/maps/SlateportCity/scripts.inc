# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 32
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 33
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_10, 34
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 35
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/SlateportCity/scripts.pory"

# 25 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 26 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 27 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 28 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 29 "data/maps/SlateportCity/scripts.pory"

# 30 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 31 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 32 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 33 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 34 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 35 "data/maps/SlateportCity/scripts.pory"
	end
# 36 "data/maps/SlateportCity/scripts.pory"

# 37 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 38 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 39 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 40 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 41 "data/maps/SlateportCity/scripts.pory"
	return
# 42 "data/maps/SlateportCity/scripts.pory"

# 43 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 44 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 58 "data/maps/SlateportCity/scripts.pory"
	return
# 59 "data/maps/SlateportCity/scripts.pory"

# 60 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 61 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 63 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 64 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 65 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 66 "data/maps/SlateportCity/scripts.pory"
	return
# 67 "data/maps/SlateportCity/scripts.pory"

# 68 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 70 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 71 "data/maps/SlateportCity/scripts.pory"
	return
# 72 "data/maps/SlateportCity/scripts.pory"

# 73 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 74 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 75 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 76 "data/maps/SlateportCity/scripts.pory"

# 77 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 78 "data/maps/SlateportCity/scripts.pory"
	lockall
# 79 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 80 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 81 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 82 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 84 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 85 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 86 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 88 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 89 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 90 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 92 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 93 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 94 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 95 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 96 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 97 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 98 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 99 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 100 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 101 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 102 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 103 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 105 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 106 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 107 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 108 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 109 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 110 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 111 "data/maps/SlateportCity/scripts.pory"
	end
# 112 "data/maps/SlateportCity/scripts.pory"

# 113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 114 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 115 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 116 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 117 "data/maps/SlateportCity/scripts.pory"
	step_end
# 118 "data/maps/SlateportCity/scripts.pory"

# 119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 120 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 121 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 127 "data/maps/SlateportCity/scripts.pory"
	step_end
# 128 "data/maps/SlateportCity/scripts.pory"

# 129 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 130 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity/scripts.pory"
	step_end
# 139 "data/maps/SlateportCity/scripts.pory"

# 140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AbilityGuru::
# 141 "data/maps/SlateportCity/scripts.pory"
	lock
# 142 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 143 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_AbilityGuruSellWhatYouNeed
# 144 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 145 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DAWN_111, SlateportCity_EventScript_AbilityGuru2
# 146 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_AbilityGuru
# 147 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 148 "data/maps/SlateportCity/scripts.pory"
	release
# 149 "data/maps/SlateportCity/scripts.pory"
	end
# 150 "data/maps/SlateportCity/scripts.pory"

# 151 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 152 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_AbilityGuru:
# 153 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 155 "data/maps/SlateportCity/scripts.pory"
	release
# 156 "data/maps/SlateportCity/scripts.pory"
	end
# 157 "data/maps/SlateportCity/scripts.pory"

# 158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AbilityGuru2::
# 159 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_AbilityGuru2
# 160 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 161 "data/maps/SlateportCity/scripts.pory"
	release
# 162 "data/maps/SlateportCity/scripts.pory"
	end
# 163 "data/maps/SlateportCity/scripts.pory"

# 164 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_AbilityGuru2:
# 166 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 167 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 168 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 169 "data/maps/SlateportCity/scripts.pory"
	release
# 170 "data/maps/SlateportCity/scripts.pory"
	end
# 171 "data/maps/SlateportCity/scripts.pory"

# 172 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 173 "data/maps/SlateportCity/scripts.pory"
	lock
# 174 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 175 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 176 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 177 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 178 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 179 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 180 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 181 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 183 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 184 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 185 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 186 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 187 "data/maps/SlateportCity/scripts.pory"
	release
# 188 "data/maps/SlateportCity/scripts.pory"
	end
# 189 "data/maps/SlateportCity/scripts.pory"

# 190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 191 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 192 "data/maps/SlateportCity/scripts.pory"
	release
# 193 "data/maps/SlateportCity/scripts.pory"
	end
# 194 "data/maps/SlateportCity/scripts.pory"

# 195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 196 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 197 "data/maps/SlateportCity/scripts.pory"
	release
# 198 "data/maps/SlateportCity/scripts.pory"
	end
# 199 "data/maps/SlateportCity/scripts.pory"

# 200 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 201 "data/maps/SlateportCity/scripts.pory"
	lock
# 202 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 203 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 204 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 205 "data/maps/SlateportCity/scripts.pory"
	release
# 206 "data/maps/SlateportCity/scripts.pory"
	end
# 207 "data/maps/SlateportCity/scripts.pory"

# 208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 209 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 210 "data/maps/SlateportCity/scripts.pory"
	release
# 211 "data/maps/SlateportCity/scripts.pory"
	end
# 212 "data/maps/SlateportCity/scripts.pory"

# 213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 214 "data/maps/SlateportCity/scripts.pory"
	lock
# 215 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 216 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 217 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 218 "data/maps/SlateportCity/scripts.pory"
	release
# 219 "data/maps/SlateportCity/scripts.pory"
	end
# 220 "data/maps/SlateportCity/scripts.pory"

# 221 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 222 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 223 "data/maps/SlateportCity/scripts.pory"
	release
# 224 "data/maps/SlateportCity/scripts.pory"
	end
# 225 "data/maps/SlateportCity/scripts.pory"

# 226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 227 "data/maps/SlateportCity/scripts.pory"
	lock
# 228 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 229 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 230 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 231 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 232 "data/maps/SlateportCity/scripts.pory"
	release
# 233 "data/maps/SlateportCity/scripts.pory"
	end
# 234 "data/maps/SlateportCity/scripts.pory"

# 235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 236 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 237 "data/maps/SlateportCity/scripts.pory"
	release
# 238 "data/maps/SlateportCity/scripts.pory"
	end
# 239 "data/maps/SlateportCity/scripts.pory"

# 240 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 241 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 242 "data/maps/SlateportCity/scripts.pory"
	release
# 243 "data/maps/SlateportCity/scripts.pory"
	end
# 244 "data/maps/SlateportCity/scripts.pory"

# 245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 246 "data/maps/SlateportCity/scripts.pory"
	lock
# 247 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 248 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 249 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 250 "data/maps/SlateportCity/scripts.pory"
	release
# 251 "data/maps/SlateportCity/scripts.pory"
	end
# 252 "data/maps/SlateportCity/scripts.pory"

# 253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 254 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 255 "data/maps/SlateportCity/scripts.pory"
	release
# 256 "data/maps/SlateportCity/scripts.pory"
	end
# 257 "data/maps/SlateportCity/scripts.pory"

# 258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 259 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 260 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 261 "data/maps/SlateportCity/scripts.pory"
	end
# 262 "data/maps/SlateportCity/scripts.pory"

# 263 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 264 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 265 "data/maps/SlateportCity/scripts.pory"
	end
# 266 "data/maps/SlateportCity/scripts.pory"

# 267 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 268 "data/maps/SlateportCity/scripts.pory"
	lock
# 269 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 270 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 271 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 272 "data/maps/SlateportCity/scripts.pory"
	release
# 273 "data/maps/SlateportCity/scripts.pory"
	end
# 274 "data/maps/SlateportCity/scripts.pory"

# 275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 276 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 277 "data/maps/SlateportCity/scripts.pory"
	release
# 278 "data/maps/SlateportCity/scripts.pory"
	end
# 279 "data/maps/SlateportCity/scripts.pory"

# 280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 281 "data/maps/SlateportCity/scripts.pory"
	lock
# 282 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 283 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 284 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 285 "data/maps/SlateportCity/scripts.pory"
	release
# 286 "data/maps/SlateportCity/scripts.pory"
	end
# 287 "data/maps/SlateportCity/scripts.pory"

# 288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 289 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 290 "data/maps/SlateportCity/scripts.pory"
	release
# 291 "data/maps/SlateportCity/scripts.pory"
	end
# 292 "data/maps/SlateportCity/scripts.pory"

# 293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 294 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 295 "data/maps/SlateportCity/scripts.pory"
	end
# 296 "data/maps/SlateportCity/scripts.pory"

# 297 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 298 "data/maps/SlateportCity/scripts.pory"
	lockall
# 299 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 300 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 301 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 302 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 303 "data/maps/SlateportCity/scripts.pory"
	end
# 304 "data/maps/SlateportCity/scripts.pory"

# 305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 306 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 307 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 308 "data/maps/SlateportCity/scripts.pory"
	end
# 309 "data/maps/SlateportCity/scripts.pory"

# 310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 311 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 312 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 313 "data/maps/SlateportCity/scripts.pory"
	end
# 314 "data/maps/SlateportCity/scripts.pory"

# 315 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 316 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 317 "data/maps/SlateportCity/scripts.pory"
	end
# 318 "data/maps/SlateportCity/scripts.pory"

# 319 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 320 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 321 "data/maps/SlateportCity/scripts.pory"
	end
# 322 "data/maps/SlateportCity/scripts.pory"

# 323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 324 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 325 "data/maps/SlateportCity/scripts.pory"
	end
# 326 "data/maps/SlateportCity/scripts.pory"

# 327 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 328 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 329 "data/maps/SlateportCity/scripts.pory"
	end
# 330 "data/maps/SlateportCity/scripts.pory"

# 331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 332 "data/maps/SlateportCity/scripts.pory"
	lockall
# 333 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 334 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 335 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 336 "data/maps/SlateportCity/scripts.pory"
	end
# 337 "data/maps/SlateportCity/scripts.pory"

# 338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 339 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 340 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 341 "data/maps/SlateportCity/scripts.pory"
	end
# 342 "data/maps/SlateportCity/scripts.pory"

# 343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 344 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 345 "data/maps/SlateportCity/scripts.pory"
	end
# 346 "data/maps/SlateportCity/scripts.pory"

# 347 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 348 "data/maps/SlateportCity/scripts.pory"
	lock
# 349 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 350 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 351 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 352 "data/maps/SlateportCity/scripts.pory"
	release
# 353 "data/maps/SlateportCity/scripts.pory"
	end
# 354 "data/maps/SlateportCity/scripts.pory"

# 355 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 357 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 358 "data/maps/SlateportCity/scripts.pory"
	release
# 359 "data/maps/SlateportCity/scripts.pory"
	end
# 360 "data/maps/SlateportCity/scripts.pory"

# 361 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 362 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 363 "data/maps/SlateportCity/scripts.pory"
	end
# 364 "data/maps/SlateportCity/scripts.pory"

# 365 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 366 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 367 "data/maps/SlateportCity/scripts.pory"
	end
# 368 "data/maps/SlateportCity/scripts.pory"

# 369 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 370 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 371 "data/maps/SlateportCity/scripts.pory"
	end
# 372 "data/maps/SlateportCity/scripts.pory"

# 373 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 374 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 375 "data/maps/SlateportCity/scripts.pory"
	end
# 376 "data/maps/SlateportCity/scripts.pory"

# 377 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 378 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 379 "data/maps/SlateportCity/scripts.pory"
	end
# 380 "data/maps/SlateportCity/scripts.pory"

# 381 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 382 "data/maps/SlateportCity/scripts.pory"
	lock
# 383 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 384 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 385 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 386 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 387 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 388 "data/maps/SlateportCity/scripts.pory"
	release
# 389 "data/maps/SlateportCity/scripts.pory"
	end
# 390 "data/maps/SlateportCity/scripts.pory"

# 391 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 392 "data/maps/SlateportCity/scripts.pory"
	lock
# 393 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 394 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 395 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 396 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 397 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 398 "data/maps/SlateportCity/scripts.pory"
	release
# 399 "data/maps/SlateportCity/scripts.pory"
	end
# 400 "data/maps/SlateportCity/scripts.pory"

# 401 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 402 "data/maps/SlateportCity/scripts.pory"
	lock
# 403 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 404 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 405 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 406 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 407 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 408 "data/maps/SlateportCity/scripts.pory"
	release
# 409 "data/maps/SlateportCity/scripts.pory"
	end
# 410 "data/maps/SlateportCity/scripts.pory"

# 411 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 412 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 413 "data/maps/SlateportCity/scripts.pory"
	end
# 414 "data/maps/SlateportCity/scripts.pory"

# 415 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 416 "data/maps/SlateportCity/scripts.pory"
	lock
# 417 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 418 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 419 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_ExclamationMark
# 420 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 421 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_Delay48
# 422 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 423 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 424 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 425 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 426 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 427 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, SlateportCity_Movement_DelayAquaGrunt
# 428 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 429 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FacePlayer
# 430 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 431 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 432 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 433 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 434 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 435 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, SlateportCity_Movement_DelayAquaGrunt
# 436 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 437 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 438 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 439 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FacePlayer
# 440 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 441 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, SlateportCity_Movement_DelayAquaGrunt
# 442 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 443 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 444 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 445 "data/maps/SlateportCity/scripts.pory"
	release
# 446 "data/maps/SlateportCity/scripts.pory"
	end
# 447 "data/maps/SlateportCity/scripts.pory"

# 448 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 449 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 450 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 451 "data/maps/SlateportCity/scripts.pory"
	step_end
# 452 "data/maps/SlateportCity/scripts.pory"

# 453 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 454 "data/maps/SlateportCity/scripts.pory"
	lock
# 455 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 456 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 457 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 458 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 459 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 460 "data/maps/SlateportCity/scripts.pory"
	release
# 461 "data/maps/SlateportCity/scripts.pory"
	end
# 462 "data/maps/SlateportCity/scripts.pory"

# 463 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 464 "data/maps/SlateportCity/scripts.pory"
	lock
# 465 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 466 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 467 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 468 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 469 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 470 "data/maps/SlateportCity/scripts.pory"
	release
# 471 "data/maps/SlateportCity/scripts.pory"
	end
# 472 "data/maps/SlateportCity/scripts.pory"

# 473 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 474 "data/maps/SlateportCity/scripts.pory"
	lock
# 475 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 476 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 477 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 478 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 479 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/SlateportCity/scripts.pory"
	release
# 481 "data/maps/SlateportCity/scripts.pory"
	end
# 482 "data/maps/SlateportCity/scripts.pory"

# 483 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 484 "data/maps/SlateportCity/scripts.pory"
	lock
# 485 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 486 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NoWeaklings, MSGBOX_DEFAULT
# 487 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 488 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 489 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 490 "data/maps/SlateportCity/scripts.pory"
	release
# 491 "data/maps/SlateportCity/scripts.pory"
	end
# 492 "data/maps/SlateportCity/scripts.pory"

# 493 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 494 "data/maps/SlateportCity/scripts.pory"
	lock
# 495 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 496 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MoralSupport, MSGBOX_DEFAULT
# 497 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 498 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_10, Common_Movement_FaceOriginalDirection
# 499 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/SlateportCity/scripts.pory"
	release
# 501 "data/maps/SlateportCity/scripts.pory"
	end
# 502 "data/maps/SlateportCity/scripts.pory"

# 503 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 504 "data/maps/SlateportCity/scripts.pory"
	lock
# 505 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 506 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThisArea, MSGBOX_DEFAULT
# 507 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 508 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 509 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/SlateportCity/scripts.pory"
	release
# 511 "data/maps/SlateportCity/scripts.pory"
	end
# 512 "data/maps/SlateportCity/scripts.pory"

# 513 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ShardClerk::
# 514 "data/maps/SlateportCity/scripts.pory"
	lock
# 515 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 516 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 517 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 518 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_PokemartDecor_Shards
# 519 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 520 "data/maps/SlateportCity/scripts.pory"
	release
# 521 "data/maps/SlateportCity/scripts.pory"
	end
# 522 "data/maps/SlateportCity/scripts.pory"

# 523 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 524 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Shards:
# 525 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLUE_SHARD
# 526 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RED_SHARD
# 527 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GREEN_SHARD
# 528 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_YELLOW_SHARD
# 529 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 530 "data/maps/SlateportCity/scripts.pory"
	release
# 531 "data/maps/SlateportCity/scripts.pory"
	end
# 532 "data/maps/SlateportCity/scripts.pory"

# 533 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 534 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 535 "data/maps/SlateportCity/scripts.pory"
	release
# 536 "data/maps/SlateportCity/scripts.pory"
	end
# 537 "data/maps/SlateportCity/scripts.pory"

# 538 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryClerk::
# 539 "data/maps/SlateportCity/scripts.pory"
	lock
# 540 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 541 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 542 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 543 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_PokemartBerries
# 544 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 545 "data/maps/SlateportCity/scripts.pory"
	release
# 546 "data/maps/SlateportCity/scripts.pory"
	end
# 547 "data/maps/SlateportCity/scripts.pory"

# 548 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 549 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartBerries:
# 550 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 551 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 552 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 553 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 554 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 555 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 556 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 557 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 558 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 559 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 560 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 561 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 562 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 563 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 564 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 565 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 566 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 567 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 568 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 569 "data/maps/SlateportCity/scripts.pory"
	release
# 570 "data/maps/SlateportCity/scripts.pory"
	end
# 571 "data/maps/SlateportCity/scripts.pory"

# 572 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 573 "data/maps/SlateportCity/scripts.pory"
	lock
# 574 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 575 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 576 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 577 "data/maps/SlateportCity/scripts.pory"
	tmshop SlateportCity_Pokemart_PowerTMs
# 578 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 579 "data/maps/SlateportCity/scripts.pory"
	release
# 580 "data/maps/SlateportCity/scripts.pory"
	end
# 581 "data/maps/SlateportCity/scripts.pory"

# 582 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 583 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 584 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 585 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_DEFOG
# 586 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 587 "data/maps/SlateportCity/scripts.pory"
	release
# 588 "data/maps/SlateportCity/scripts.pory"
	end
# 589 "data/maps/SlateportCity/scripts.pory"

# 590 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 591 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 592 "data/maps/SlateportCity/scripts.pory"
	lockall
# 593 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 594 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 595 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 596 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 597 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 598 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 599 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 600 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 601 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 602 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 603 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 604 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 605 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 606 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 607 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 608 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 609 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 610 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 611 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 612 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 613 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 614 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 615 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 616 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 617 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 618 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 619 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 620 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 621 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 622 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 623 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 624 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 625 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 626 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 628 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 630 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 632 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 633 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 634 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 635 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 636 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 638 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 639 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 640 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 641 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 642 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 643 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 644 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 645 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 646 "data/maps/SlateportCity/scripts.pory"
	end
# 647 "data/maps/SlateportCity/scripts.pory"

# 648 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 649 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 650 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 651 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 652 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 653 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 654 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 655 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 656 "data/maps/SlateportCity/scripts.pory"
	step_end
# 657 "data/maps/SlateportCity/scripts.pory"

# 658 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 659 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 661 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 662 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 663 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 664 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 665 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 666 "data/maps/SlateportCity/scripts.pory"
	step_end
# 667 "data/maps/SlateportCity/scripts.pory"

# 668 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 669 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 670 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 671 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 672 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 674 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 675 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 678 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 679 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 680 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 681 "data/maps/SlateportCity/scripts.pory"
	step_end
# 682 "data/maps/SlateportCity/scripts.pory"

# 683 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 684 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 685 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 686 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 687 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 688 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 689 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 690 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 691 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 692 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 693 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 694 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 695 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 696 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 697 "data/maps/SlateportCity/scripts.pory"
	step_end
# 698 "data/maps/SlateportCity/scripts.pory"

# 699 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 700 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 701 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 702 "data/maps/SlateportCity/scripts.pory"
	step_end
# 703 "data/maps/SlateportCity/scripts.pory"

# 704 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 705 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 706 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 707 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 708 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 709 "data/maps/SlateportCity/scripts.pory"
	step_end
# 710 "data/maps/SlateportCity/scripts.pory"

# 711 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 712 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 713 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 714 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 715 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 716 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 717 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 718 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 719 "data/maps/SlateportCity/scripts.pory"
	step_end
# 720 "data/maps/SlateportCity/scripts.pory"

# 721 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 722 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 723 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 724 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 725 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 726 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 727 "data/maps/SlateportCity/scripts.pory"
	step_end
# 728 "data/maps/SlateportCity/scripts.pory"

# 729 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 730 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 731 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 732 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 733 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 734 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 735 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 736 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 737 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 738 "data/maps/SlateportCity/scripts.pory"
	step_end
# 739 "data/maps/SlateportCity/scripts.pory"

# 740 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 741 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 742 "data/maps/SlateportCity/scripts.pory"
	end
# 743 "data/maps/SlateportCity/scripts.pory"

# 744 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 745 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 746 "data/maps/SlateportCity/scripts.pory"
	end
# 747 "data/maps/SlateportCity/scripts.pory"

# 748 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 749 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 750 "data/maps/SlateportCity/scripts.pory"
	end
# 751 "data/maps/SlateportCity/scripts.pory"

# 752 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 753 "data/maps/SlateportCity/scripts.pory"
	lock
# 754 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 755 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 756 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 757 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 758 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 759 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 760 "data/maps/SlateportCity/scripts.pory"
	release
# 761 "data/maps/SlateportCity/scripts.pory"
	end
# 762 "data/maps/SlateportCity/scripts.pory"

# 763 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 764 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 765 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 766 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 767 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 768 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 769 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 770 "data/maps/SlateportCity/scripts.pory"
	end
# 771 "data/maps/SlateportCity/scripts.pory"

# 772 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 773 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 774 "data/maps/SlateportCity/scripts.pory"
	release
# 775 "data/maps/SlateportCity/scripts.pory"
	end
# 776 "data/maps/SlateportCity/scripts.pory"

# 777 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 778 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 779 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 780 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 781 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 782 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 783 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 784 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 785 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 786 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 787 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 788 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 789 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 790 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 791 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 792 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 793 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 794 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 795 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 796 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 797 "data/maps/SlateportCity/scripts.pory"
	end
# 798 "data/maps/SlateportCity/scripts.pory"

# 799 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 800 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 801 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 802 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 803 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 804 "data/maps/SlateportCity/scripts.pory"
	end
# 805 "data/maps/SlateportCity/scripts.pory"

# 806 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 807 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 808 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 809 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 810 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 811 "data/maps/SlateportCity/scripts.pory"
	end
# 812 "data/maps/SlateportCity/scripts.pory"

# 813 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 814 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 815 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 816 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 817 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 818 "data/maps/SlateportCity/scripts.pory"
	end
# 819 "data/maps/SlateportCity/scripts.pory"

# 820 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 821 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 822 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 823 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 824 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 825 "data/maps/SlateportCity/scripts.pory"
	end
# 826 "data/maps/SlateportCity/scripts.pory"

# 827 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 828 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 829 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 830 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 831 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 832 "data/maps/SlateportCity/scripts.pory"
	end
# 833 "data/maps/SlateportCity/scripts.pory"

# 834 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 835 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 836 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 837 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 838 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 839 "data/maps/SlateportCity/scripts.pory"
	end
# 840 "data/maps/SlateportCity/scripts.pory"

# 841 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 842 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 843 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 844 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 845 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 846 "data/maps/SlateportCity/scripts.pory"
	end
# 847 "data/maps/SlateportCity/scripts.pory"

# 848 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 849 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 850 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 851 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 852 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 853 "data/maps/SlateportCity/scripts.pory"
	end
# 854 "data/maps/SlateportCity/scripts.pory"

# 855 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 856 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 857 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 858 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 859 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 860 "data/maps/SlateportCity/scripts.pory"
	end
# 861 "data/maps/SlateportCity/scripts.pory"

# 862 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 863 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 864 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 865 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 866 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 867 "data/maps/SlateportCity/scripts.pory"
	end
# 868 "data/maps/SlateportCity/scripts.pory"

# 869 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 870 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 871 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 872 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 873 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 874 "data/maps/SlateportCity/scripts.pory"
	end
# 875 "data/maps/SlateportCity/scripts.pory"

# 876 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 877 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 878 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 879 "data/maps/SlateportCity/scripts.pory"
	release
# 880 "data/maps/SlateportCity/scripts.pory"
	end
# 881 "data/maps/SlateportCity/scripts.pory"

# 882 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 883 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 884 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 885 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 886 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 887 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 888 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 889 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 890 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 891 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 892 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 893 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 894 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 895 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 896 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 897 "data/maps/SlateportCity/scripts.pory"
	release
# 898 "data/maps/SlateportCity/scripts.pory"
	end
# 899 "data/maps/SlateportCity/scripts.pory"

# 900 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 901 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 902 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 903 "data/maps/SlateportCity/scripts.pory"
	release
# 904 "data/maps/SlateportCity/scripts.pory"
	end
# 905 "data/maps/SlateportCity/scripts.pory"

# 906 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 907 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 908 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 909 "data/maps/SlateportCity/scripts.pory"
	end
# 910 "data/maps/SlateportCity/scripts.pory"

# 911 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 912 "data/maps/SlateportCity/scripts.pory"
	lockall
# 913 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 914 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 915 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 916 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 917 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 918 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 919 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 920 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 921 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 922 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 923 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 924 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 925 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 926 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 927 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 928 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 929 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 930 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 931 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 932 "data/maps/SlateportCity/scripts.pory"
	end
# 933 "data/maps/SlateportCity/scripts.pory"

# 934 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 935 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 936 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 937 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 938 "data/maps/SlateportCity/scripts.pory"
	step_end
# 939 "data/maps/SlateportCity/scripts.pory"

# 940 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 941 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 942 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 943 "data/maps/SlateportCity/scripts.pory"
	step_end
# 944 "data/maps/SlateportCity/scripts.pory"

# 945 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 946 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 947 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 948 "data/maps/SlateportCity/scripts.pory"
	step_end
# 949 "data/maps/SlateportCity/scripts.pory"

# 950 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 951 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 952 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 953 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 954 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 955 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 956 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 957 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 958 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 959 "data/maps/SlateportCity/scripts.pory"
	step_end
# 960 "data/maps/SlateportCity/scripts.pory"

# 961 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 962 "data/maps/SlateportCity/scripts.pory"
	lockall
# 963 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 964 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 965 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 966 "data/maps/SlateportCity/scripts.pory"
	end
# 967 "data/maps/SlateportCity/scripts.pory"

# 968 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AbilityGuruSellWhatYouNeed:
# 969 "data/maps/SlateportCity/scripts.pory"
	.string "我是特性大师！我会想办法\n"
# 970 "data/maps/SlateportCity/scripts.pory"
	.string "卖给你需要的东西！$"
# 971 "data/maps/SlateportCity/scripts.pory"

# 972 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 973 "data/maps/SlateportCity/scripts.pory"
	.string "哦？\n"
# 974 "data/maps/SlateportCity/scripts.pory"
	.string "你的{STR_VAR_1}……$"
# 975 "data/maps/SlateportCity/scripts.pory"

# 976 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "真是太拼了！\p"
# 978 "data/maps/SlateportCity/scripts.pory"
	.string "作为奖励，请给它\n"
# 979 "data/maps/SlateportCity/scripts.pory"
	.string "戴上这枚努力缎带。$"
# 980 "data/maps/SlateportCity/scripts.pory"

# 981 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}得到了\n"
# 983 "data/maps/SlateportCity/scripts.pory"
	.string "努力缎带。$"
# 984 "data/maps/SlateportCity/scripts.pory"

# 985 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 986 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}把努力缎带\n"
# 987 "data/maps/SlateportCity/scripts.pory"
	.string "戴在了{STR_VAR_1}身上。$"
# 988 "data/maps/SlateportCity/scripts.pory"

# 989 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 990 "data/maps/SlateportCity/scripts.pory"
	.string "你还需要再努力一点。\p"
# 991 "data/maps/SlateportCity/scripts.pory"
	.string "要是做到了，我就给你的\n"
# 992 "data/maps/SlateportCity/scripts.pory"
	.string "宝可梦一点好东西。$"
# 993 "data/maps/SlateportCity/scripts.pory"

# 994 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "哦！你的{STR_VAR_1}，\n"
# 996 "data/maps/SlateportCity/scripts.pory"
	.string "那枚努力缎带很合适！$"
# 997 "data/maps/SlateportCity/scripts.pory"

# 998 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 999 "data/maps/SlateportCity/scripts.pory"
	.string "灯塔的光能照到\n"
# 1000 "data/maps/SlateportCity/scripts.pory"
	.string "几十英里以外。\p"
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "不知道会不会吓到\n"
# 1002 "data/maps/SlateportCity/scripts.pory"
	.string "海里的宝可梦。$"
# 1003 "data/maps/SlateportCity/scripts.pory"

# 1004 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "哦，你看这个！\p"
# 1006 "data/maps/SlateportCity/scripts.pory"
	.string "这一带能采到的海藻，\n"
# 1007 "data/maps/SlateportCity/scripts.pory"
	.string "新鲜又充满活力。\p"
# 1008 "data/maps/SlateportCity/scripts.pory"
	.string "它看起来简直会\n"
# 1009 "data/maps/SlateportCity/scripts.pory"
	.string "竖起来攻击人！$"
# 1010 "data/maps/SlateportCity/scripts.pory"

# 1011 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "水干净的地方，\n"
# 1013 "data/maps/SlateportCity/scripts.pory"
	.string "丰收的果实就会聚集。\p"
# 1014 "data/maps/SlateportCity/scripts.pory"
	.string "人聚集的地方，\n"
# 1015 "data/maps/SlateportCity/scripts.pory"
	.string "市场很快就会形成。\p"
# 1016 "data/maps/SlateportCity/scripts.pory"
	.string "城镇就是这样诞生\n"
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "并成长起来的。$"
# 1018 "data/maps/SlateportCity/scripts.pory"

# 1019 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1020 "data/maps/SlateportCity/scripts.pory"
	.string "能闻着海的味道购物……\p"
# 1021 "data/maps/SlateportCity/scripts.pory"
	.string "凯那真是个\n"
# 1022 "data/maps/SlateportCity/scripts.pory"
	.string "好地方！$"
# 1023 "data/maps/SlateportCity/scripts.pory"

# 1024 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1025 "data/maps/SlateportCity/scripts.pory"
	.string "把娃娃或靠垫放在地上，\n"
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "会弄脏的。\p"
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "我要买些砖块铺上，\n"
# 1028 "data/maps/SlateportCity/scripts.pory"
	.string "这样把娃娃和靠垫\l"
# 1029 "data/maps/SlateportCity/scripts.pory"
	.string "摆出来也不会脏。$"
# 1030 "data/maps/SlateportCity/scripts.pory"

# 1031 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1032 "data/maps/SlateportCity/scripts.pory"
	.string "吼！我也要去参加\n"
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "对战帐篷的比赛！\p"
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "不过在那之前，\n"
# 1035 "data/maps/SlateportCity/scripts.pory"
	.string "我得先抓些宝可梦！$"
# 1036 "data/maps/SlateportCity/scripts.pory"

# 1037 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1038 "data/maps/SlateportCity/scripts.pory"
	.string "呼……我累坏了……\p"
# 1039 "data/maps/SlateportCity/scripts.pory"
	.string "我从紫堇市走过来。\n"
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "不过，这城市可真大。\p"
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "早知道这样，我就\n"
# 1042 "data/maps/SlateportCity/scripts.pory"
	.string "骑车来了。$"
# 1043 "data/maps/SlateportCity/scripts.pory"

# 1044 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1045 "data/maps/SlateportCity/scripts.pory"
	.string "建了博物馆的斯图，\n"
# 1046 "data/maps/SlateportCity/scripts.pory"
	.string "同时也是海底探险队的\l"
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "队长。\p"
# 1048 "data/maps/SlateportCity/scripts.pory"
	.string "所以大家都叫他\n"
# 1049 "data/maps/SlateportCity/scripts.pory"
	.string "斯图船长。$"
# 1050 "data/maps/SlateportCity/scripts.pory"

# 1051 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1052 "data/maps/SlateportCity/scripts.pory"
	.string "那边是什么？\n"
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "那么长的队伍……$"
# 1054 "data/maps/SlateportCity/scripts.pory"

# 1055 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "我小时候常去\n"
# 1057 "data/maps/SlateportCity/scripts.pory"
	.string "博物馆。\p"
# 1058 "data/maps/SlateportCity/scripts.pory"
	.string "看了那些展品，我总\n"
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "梦想着大海的奥秘。$"
# 1060 "data/maps/SlateportCity/scripts.pory"

# 1061 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1062 "data/maps/SlateportCity/scripts.pory"
	.string "喂！别挤！\n"
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "你没看见在排队吗？$"
# 1064 "data/maps/SlateportCity/scripts.pory"

# 1065 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1066 "data/maps/SlateportCity/scripts.pory"
	.string "水舰队的规矩是\n"
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "在行动地点集合、\l"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "再分散行动。$"
# 1069 "data/maps/SlateportCity/scripts.pory"

# 1070 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1071 "data/maps/SlateportCity/scripts.pory"
	.string "我们老大很了不起。\p"
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "他现在要博物馆\n"
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "做什么呢？$"
# 1074 "data/maps/SlateportCity/scripts.pory"

# 1075 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1076 "data/maps/SlateportCity/scripts.pory"
	.string "排长队啊？\p"
# 1077 "data/maps/SlateportCity/scripts.pory"
	.string "让我想起以前排队\n"
# 1078 "data/maps/SlateportCity/scripts.pory"
	.string "买热销游戏的日子……$"
# 1079 "data/maps/SlateportCity/scripts.pory"

# 1080 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "我们干嘛要排队付钱？\n"
# 1082 "data/maps/SlateportCity/scripts.pory"
	.string "直接冲进去不就行了！$"
# 1083 "data/maps/SlateportCity/scripts.pory"

# 1084 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NoWeaklings:
# 1085 "data/maps/SlateportCity/scripts.pory"
	.string "滚开，小鬼！现在\n"
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "这里不让弱者通过。$"
# 1087 "data/maps/SlateportCity/scripts.pory"

# 1088 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MoralSupport:
# 1089 "data/maps/SlateportCity/scripts.pory"
	.string "我主要是来\n"
# 1090 "data/maps/SlateportCity/scripts.pory"
	.string "帮大家打气的。$"
# 1091 "data/maps/SlateportCity/scripts.pory"

# 1092 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThisArea:
# 1093 "data/maps/SlateportCity/scripts.pory"
	.string "现在这一带\n"
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "谁都不许进去。$"
# 1095 "data/maps/SlateportCity/scripts.pory"

# 1096 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "什么？\n"
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "你想干什么？$"
# 1099 "data/maps/SlateportCity/scripts.pory"

# 1100 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "你想读这块牌子？\n"
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "我来读给你听！$"
# 1103 "data/maps/SlateportCity/scripts.pory"

# 1104 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1105 "data/maps/SlateportCity/scripts.pory"
	.string "我看看……\p"
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "嗯……好像是说\n"
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "“海中的生命无穷无尽”。\p"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "对，我确定就是\n"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "这个意思。$"
# 1110 "data/maps/SlateportCity/scripts.pory"

# 1111 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1112 "data/maps/SlateportCity/scripts.pory"
	.string "嘀咕……\p"
# 1113 "data/maps/SlateportCity/scripts.pory"
	.string "我该带Game Boy Advance来，\n"
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "这样排队就不会无聊了……\p"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "嘀咕……$"
# 1116 "data/maps/SlateportCity/scripts.pory"

# 1117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "等这次行动结束，\n"
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "我带你到温泉去！\p"
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "我们老大这么说的。\n"
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "我都等不及了！$"
# 1122 "data/maps/SlateportCity/scripts.pory"

# 1123 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "大海真是太辽阔了……\p"
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "海会不会是宝可梦\n"
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "流下的眼泪汇成的呢？$"
# 1127 "data/maps/SlateportCity/scripts.pory"

# 1128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "你知道那些旧得再也\n"
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "不能航行的船会怎样吗？\p"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "会被沉进海里，变成\n"
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "宝可梦的栖息地。$"
# 1133 "data/maps/SlateportCity/scripts.pory"

# 1134 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "每次来这里，我都会\n"
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "买过头。$"
# 1137 "data/maps/SlateportCity/scripts.pory"

# 1138 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "想改宝可梦的昵称，\n"
# 1140 "data/maps/SlateportCity/scripts.pory"
	.string "去看看队伍菜单里的\l"
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "选项吧。$"
# 1142 "data/maps/SlateportCity/scripts.pory"

# 1143 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "交换来的宝可梦，\n"
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "昵称是改不了的。\p"
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "因为有原训练家对它的\n"
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "感情在那昵称里。$"
# 1148 "data/maps/SlateportCity/scripts.pory"

# 1149 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "最近凯那市建了\n"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "一座对战帐篷。\p"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "道馆很好玩，不过对战\n"
# 1153 "data/maps/SlateportCity/scripts.pory"
	.string "帐篷也有自己的妙处。\p"
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "你真该为对战帐篷\n"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "培养些强大的宝可梦！$"
# 1156 "data/maps/SlateportCity/scripts.pory"

# 1157 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "我还以为是哪个明星，\n"
# 1159 "data/maps/SlateportCity/scripts.pory"
	.string "好去要个签名。\p"
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "可是被采访的是谁？\n"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "那不是斯图船长吗？$"
# 1162 "data/maps/SlateportCity/scripts.pory"

# 1163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "那位女记者\n"
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "又漂亮又酷。\p"
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "等我长大了，也要当\n"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "国际记者！$"
# 1168 "data/maps/SlateportCity/scripts.pory"

# 1169 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "斯图船长说他们在海底\n"
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "发现了什么。\p"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "到底是什么呢？\n"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "会是什么呢？$"
# 1174 "data/maps/SlateportCity/scripts.pory"

# 1175 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "这里怎么了？\p"
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "船长从海底带回了\n"
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "一条大鱼吗？$"
# 1179 "data/maps/SlateportCity/scripts.pory"

# 1180 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "嘿！你在看吗？\n"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "我上电视了吗？$"
# 1183 "data/maps/SlateportCity/scripts.pory"

# 1184 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "电视采访！就在这里！\n"
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "船长成名人啦！$"
# 1187 "data/maps/SlateportCity/scripts.pory"

# 1188 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "TY：好，斯图船长，\n"
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "对着镜头笑一个！$"
# 1191 "data/maps/SlateportCity/scripts.pory"

# 1192 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "加比：我明白了，明白了。\n"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "您经历了极其宝贵的事……$"
# 1195 "data/maps/SlateportCity/scripts.pory"

# 1196 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "斯图船长：是的，没错。\n"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "我们打算继续推进探险。$"
# 1199 "data/maps/SlateportCity/scripts.pory"

# 1200 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "加比：那太好了，斯图船长！\n"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "感谢您在百忙之中\l"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "抽时间接受采访。\p"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "希望下次还能就更多\n"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "发现再来采访您！$"
# 1206 "data/maps/SlateportCity/scripts.pory"

# 1207 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "斯图船长：呼……\p"
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "这是我第一次\n"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "上电视。真紧张。$"
# 1211 "data/maps/SlateportCity/scripts.pory"

# 1212 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "哦！{PLAYER}！\n"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "你看上去气色很好！\p"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "我们在上次海底探险中\n"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "有了重大发现。\p"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "我们在128号道路找到了\n"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "一个海底洞窟。\p"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "我们认为那里住着一种\n"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "传说早已灭绝的宝可梦。$"
# 1221 "data/maps/SlateportCity/scripts.pory"

# 1222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "呵呵呵……\n"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "想必你就是斯图船长吧。\p"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "我们水舰队要接管\n"
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "你的潜水艇！\p"
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "你的反对毫无意义！\n"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "我们要求你全面配合！\p"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "呵呵呵……\n"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "就等着看水舰队\l"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "的计划吧！$"
# 1232 "data/maps/SlateportCity/scripts.pory"

# 1233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "斯图船长：那到底\n"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "是怎么回事？\p"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "听起来像是有人\n"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "在用扩音器……\p"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "是从哪儿传来的？$"
# 1239 "data/maps/SlateportCity/scripts.pory"

# 1240 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "是从港口传来的！\p"
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "是潜水艇！\n"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "他们想把它抢走！$"
# 1244 "data/maps/SlateportCity/scripts.pory"

# 1245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}！\n"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "请跟我来！$"
# 1248 "data/maps/SlateportCity/scripts.pory"

# 1249 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "对战帐篷 凯那会场\n"
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "“找到它！最强的宝可梦！”$"
# 1252 "data/maps/SlateportCity/scripts.pory"

# 1253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "斯图造船厂\p"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "“诚征：能在任何\n"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "水流中航行的船员。”$"
# 1257 "data/maps/SlateportCity/scripts.pory"

# 1258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "斯图造船厂\p"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "“渡轮潮汐号即将完工，\n"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "将往返于凯那与\l"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "水静市之间。”$"
# 1263 "data/maps/SlateportCity/scripts.pory"

# 1264 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "斯图造船厂\p"
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "“凯那—水静渡轮潮汐号\n"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "的乘船手续请到\l"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "港口办理。”$"
# 1269 "data/maps/SlateportCity/scripts.pory"

# 1270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "宝可梦粉丝俱乐部\n"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "“召集所有宝可梦粉丝！”$"
# 1273 "data/maps/SlateportCity/scripts.pory"

# 1274 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "“无边的大海养育\n"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "一切生命。”\p"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "海洋博物馆$"
# 1278 "data/maps/SlateportCity/scripts.pory"

# 1279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "凯那市\p"
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "“人与宝可梦\n"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "交汇的港口。”$"
# 1283 "data/maps/SlateportCity/scripts.pory"

# 1284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "凯那市场\n"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "“别处找不到的独特商品！”$"
# 1287 "data/maps/SlateportCity/scripts.pory"

# 1288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "凯那港\p"
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "“渡轮潮汐号正在\n"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "造船厂建造中。\p"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "“预计不久后\n"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "开始运营。”$"
# 1294 "data/maps/SlateportCity/scripts.pory"

# 1295 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "凯那港\p"
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "“乘坐渡轮潮汐号，\n"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "享受愉快的航程。”$"
# 1299 "data/maps/SlateportCity/scripts.pory"

# 1300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "忘招之家\n"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "“帮宝可梦忘记招式。”$"
# 1303 "data/maps/SlateportCity/scripts.pory"

# 1304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "野生宝可梦受伤时，\n"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "会嚼树果来治疗自己。\p"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "你知道吗？\p"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "有人看到这个，就想到了\n"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "用树果做药。\p"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "你知道吗？\p"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "要把树果变成药，\n"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "得先把它磨成粉。\p"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "你知道吗？\p"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "看来你对树果\n"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "很感兴趣！\p"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "对这样的人，\n"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "我有好东西。$"
# 1318 "data/maps/SlateportCity/scripts.pory"

# 1319 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "最近宝可梦中心装了\n"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "磨树果的机器。\p"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "树果粉碎机就在楼上\n"
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "的直连角。\p"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "你知道吗？\p"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "你能用那些机器\n"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "帮我做点树果粉吗？\p"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "只要你带来足够的树果粉，\n"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "我就能做出各种药。$"
# 1329 "data/maps/SlateportCity/scripts.pory"

# 1330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "你给我带了\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "树果粉吗？$"
# 1333 "data/maps/SlateportCity/scripts.pory"

# 1334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "你想用它\n"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "换什么？$"
# 1337 "data/maps/SlateportCity/scripts.pory"

# 1338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "好，你想用树果粉\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "换一个{STR_VAR_1}？$"
# 1341 "data/maps/SlateportCity/scripts.pory"

# 1342 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "哎呀，你的树果粉\n"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "不够啊。$"
# 1345 "data/maps/SlateportCity/scripts.pory"

# 1346 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "这是很好的树果粉。\n"
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "能做成上等的药。\p"
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "你还想再用树果粉\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "换点别的东西吗？$"
# 1351 "data/maps/SlateportCity/scripts.pory"

# 1352 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "好！等你再多攒些\n"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "树果粉，就带来给我吧！$"
# 1355 "data/maps/SlateportCity/scripts.pory"

# 1356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "想用树果粉换药，\n"
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "就再来找我吧。\p"
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "我这儿总是在摆摊。\p"
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "你知道吗？$"
# 1361 "data/maps/SlateportCity/scripts.pory"

# 1362 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1363 "data/maps/SlateportCity/scripts.pory"
	.string "嗯？哦，我记得你！\n"
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "你就是在橙华市\l"
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "我送学习装置的那个训练家。\p"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "我跟你自我介绍过吗？\n"
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "要是没有，我叫史考特。\p"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "我刚才看见水舰队\n"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "像被蛰了一样从这儿跑了。\p"
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "更奇怪的是，我好像还看见\n"
# 1371 "data/maps/SlateportCity/scripts.pory"
	.string "四天王之一的源治\l"
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "刚从里面出来。\l"
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "真是个疯狂的日子。\p"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "总之让我猜猜——\n"
# 1375 "data/maps/SlateportCity/scripts.pory"
	.string "是你把水舰队赶走的？$"
# 1376 "data/maps/SlateportCity/scripts.pory"

# 1377 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "史考特：嗯……\n"
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "也许，只是也许，这个训练家……$"
# 1380 "data/maps/SlateportCity/scripts.pory"

# 1381 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "史考特：好吧！我觉得你会\n"
# 1383 "data/maps/SlateportCity/scripts.pory"
	.string "成为我的好朋友。\p"
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "那就在彼此的导航里\n"
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "登录一下吧。\p"
# 1386 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1387 "data/maps/SlateportCity/scripts.pory"

# 1388 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "在宝可梦导航里登录了\n"
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "这位叫史考特的人。$"
# 1391 "data/maps/SlateportCity/scripts.pory"

# 1392 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "史考特：我真想\n"
# 1394 "data/maps/SlateportCity/scripts.pory"
	.string "跟着你一起走，\l"
# 1395 "data/maps/SlateportCity/scripts.pory"
	.string "不过我也想多看看\l"
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "别人的才能。\p"
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "所以我再去别的城镇\n"
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "转转。\p"
# 1399 "data/maps/SlateportCity/scripts.pory"
	.string "再见了，{PLAYER}！$"
# 1400 "data/maps/SlateportCity/scripts.pory"

# 1401 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "史考特：哦，嘿！\n"
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "这不是{PLAYER}吗！\p"
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}，让我猜猜——\n"
# 1405 "data/maps/SlateportCity/scripts.pory"
	.string "你是要去挑战\l"
# 1406 "data/maps/SlateportCity/scripts.pory"
	.string "对战帐篷吧？\p"
# 1407 "data/maps/SlateportCity/scripts.pory"
	.string "对！这主意不错！\n"
# 1408 "data/maps/SlateportCity/scripts.pory"
	.string "这主意真是太好了！\p"
# 1409 "data/maps/SlateportCity/scripts.pory"
	.string "毕竟，强壮的训练家\n"
# 1410 "data/maps/SlateportCity/scripts.pory"
	.string "最适合对战帐篷了！\p"
# 1411 "data/maps/SlateportCity/scripts.pory"
	.string "好好加油！$"
