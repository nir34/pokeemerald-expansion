# 1 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_CAPT_STERN, 1
# 3 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_GRUNT_1, 3
# 5 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_GRUNT_2, 4
# 6 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_MapScripts::
# 8 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.byte 0
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 16 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_GRUNT_1
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_GRUNT_2
# 20 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 34 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
# 35 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
# 37 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 38 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 40 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 42 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis, MSGBOX_DEFAULT
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 46 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterDown
# 48 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 49 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_ARCHIE
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_ARCHIE
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	callnative UpdateFollowingPokemon
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_DRAKE_SLATEPORT, 1
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 203 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 225 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 284 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "是？你找斯图的话，\n"
# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "那就是我。\p"
# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "啊！那些一定是得文\n"
# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "兹伏奇社长订的零件。\p"
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "谢谢！太好了！\n"
# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "这下就能准备探险了。$"
# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "嘿嘿嘿，站住！\n"
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "那些零件我们收下了！$"
# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "斯图船长：什、什么？\n"
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "你们是什么人？$"
# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "我们是水舰队！\p"
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "老大要那些零件！\n"
# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "少废话，交出来！$"
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "哇啊啊啊！\n"
# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "我竟然输给一个小孩！$"
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "糟糕，真是场灾难……\n"
# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "老大会大发雷霆的……$"
# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "哼，没用的东西！\n"
# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "让我来收拾他！$"
# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "什么？！\n"
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "连我也输了！$"
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "这下怎么办？拿不到零件，\n"
# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "我们可就惨了！\p"
# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "可恶，没想到会被\n"
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "这种小鬼插手！$"
# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 329 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "我来看看拿个零件\n"
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "怎么磨蹭这么久，\l"
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "结果你们这些废物\l"
# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "竟被一个小孩子拦住？$"
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "我们是水舰队，\n"
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "我们热爱大海！\p"
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "而我，就是水舰队的首领\n"
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "阿库亚！\p"
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "你为什么要来碍事？\p"
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "……不！不可能！\n"
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "你难道不是熔岩队的人？\p"
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "等等，那也不对。\n"
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "你的打扮不像。\p"
# 345 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\n"
# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "宝可梦，人类……\n"
# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "一切生命都依赖大海。\p"
# 349 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "所以，水舰队致力于\n"
# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "扩大海洋。\p"
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "你不这么认为吗？我们做的\n"
# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "是件宏伟的事业。\p"
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "唉，算了……\n"
# 354 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "你还太年轻，\l"
# 355 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "无法理解我们崇高的目标。\p"
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "不过我警告你，别再\n"
# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "想着插手我们的计划。\p"
# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "否则你会付出\n"
# 359 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "惨重的代价！\p"
# 360 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "别忘了！$"
# 361 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 362 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
# 363 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "斯图船长：你是……\n"
# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "啊，对了，你是{PLAYER}……\p"
# 365 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "总之，刚才真是危急！\n"
# 366 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "谢谢你救了我们！\p"
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "哦，对了，我差点忘了，\n"
# 368 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "你还从得文送来了零件！$"
# 369 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 370 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
# 371 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "斯图船长：糟糕！\n"
# 372 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "没时间耽误了！\p"
# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "我们马上就要出发\n"
# 374 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "进行海底探险。\p"
# 375 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "再次感谢，不过我现在\n"
# 376 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "得走了！\p"
# 377 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "你可以随便走走，\n"
# 378 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "参观我们的设施。$"
# 379 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 380 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 381 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "我在这里看到了一艘\n"
# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "船的模型。\p"
# 383 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "它让我想起武斗镇附近的\n"
# 384 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "废弃船……$"
# 385 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 386 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 387 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "在博物馆里\n"
# 388 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "不许乱跑！$"
# 389 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 390 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 391 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "哇，潜水艇真厉害！\n"
# 392 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "我想坐上去试试！$"
# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "牌子上写着\n"
# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“水质样本1”。\p"
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "大海都是连在一起的，\n"
# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "但不同海域的水好像不一样。$"
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "牌子上写着\n"
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“水质样本2”。\p"
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "海水的咸度也会\n"
# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "随海域不同而变化吗？$"
# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "一个橡胶球在\n"
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "膨胀又收缩。\p"
# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“在海里，水本身的重量\n"
# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "会产生压力。\p"
# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“在浅水里，压力\n"
# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "并不大。\p"
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“但在极深的水中，\n"
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "小小的面积上\l"
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "就能承受几万吨的压力。”$"
# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“丰缘地区模型”\p"
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "这是丰缘地区的\n"
# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "微缩景观。\p"
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "未白镇在这上面\n"
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "的哪里呢？$"
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "这是关于海水流动的\n"
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "展示。\p"
# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“在海底附近，水因为\n"
# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "温度与盐度等\l"
# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "差异而流动。”$"
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "这是关于海水流动的\n"
# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "展示。\p"
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“在接近海面的地方，\n"
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "海水被风推着\l"
# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "形成海流。”$"
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“渡轮 潮汐号\p"
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“斯图造船厂正在建造\n"
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "的船只的比例模型。”$"
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“一号深海探险艇\p"
# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“高性能海底探险潜水艇\n"
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "的模型。”$"
# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“潜水舱\p"
# 450 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“用于海底探测的小型\n"
# 451 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "无人舱的模型。”$"
# 452 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 453 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 454 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“圣安奴号\p"
# 455 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“环球航行的豪华客轮\n"
# 456 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "的模型。”$"
