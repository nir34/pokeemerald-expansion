# 1 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_SCIENTIST_1, 1
# 3 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_SCIENTIST_2, 2
# 4 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_SAILOR, 3
# 5 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_OLD_MAN, 4
# 6 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_WOMAN, 5
# 7 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_STAIR_GRUNT, 9
# 8 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 9 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_MapScripts::
# 10 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_SpaceCenter_1F_OnLoad
# 11 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_1F_OnTransition
# 12 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.byte 0
# 13 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 14 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnTransition:
# 15 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma
# 16 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 17 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 18 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma::
# 19 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SAILOR, 1, 9
# 20 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
# 21 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_WOMAN, 0, 8
# 22 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
# 23 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 1, 6
# 24 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
# 25 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST_1, 3, 4
# 26 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST_1, MOVEMENT_TYPE_FACE_RIGHT
# 27 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST_2, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 29 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 30 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardLeft::
# 31 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GRUNT, 12, 2
# 32 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 33 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 34 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardDown::
# 35 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GRUNT, 13, 3
# 36 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 37 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 38 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused. See comment on MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 39 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardRight::
# 40 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GRUNT, 14, 2
# 41 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 42 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 43 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnLoad:
# 44 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_le VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote
# 45 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 46 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 47 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote::
# 48 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setmetatile 2, 5, METATILE_Facility_DataPad, TRUE
# 49 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 50 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 51 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter::
# 52 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 53 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 54 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma
# 55 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 56 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 57 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 58 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet
# 59 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber
# 60 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 61 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 62 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 64 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 65 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 66 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet::
# 67 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent, MSGBOX_DEFAULT
# 68 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 69 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 70 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber::
# 71 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber, MSGBOX_DEFAULT
# 72 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 73 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 74 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma::
# 75 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 76 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 77 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 78 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma
# 79 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma
# 80 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 81 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 82 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 84 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 85 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 86 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma::
# 87 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent, MSGBOX_DEFAULT
# 88 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 89 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 90 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma::
# 91 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber, MSGBOX_DEFAULT
# 92 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 93 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 94 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Scientist::
# 95 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 96 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 97 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma
# 98 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection, MSGBOX_DEFAULT
# 99 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 100 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 101 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 102 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma::
# 103 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter, MSGBOX_DEFAULT
# 104 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 105 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 106 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 107 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 108 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 109 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan::
# 110 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 111 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 112 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma
# 113 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone
# 114 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt, MSGBOX_DEFAULT
# 115 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 116 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 117 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 118 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 119 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 120 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 121 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 122 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone::
# 123 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 124 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 125 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 126 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 127 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma::
# 128 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma
# 129 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis, MSGBOX_DEFAULT
# 130 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 131 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 132 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 133 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 134 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 135 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 136 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 137 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 138 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 139 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma::
# 140 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 141 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 142 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 143 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 144 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 145 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 146 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman::
# 147 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 148 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 149 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 150 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 151 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 152 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 153 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 154 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 155 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal::
# 156 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace, MSGBOX_DEFAULT
# 157 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 158 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 159 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 160 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma::
# 161 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma, MSGBOX_DEFAULT
# 162 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 163 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 164 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 165 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan::
# 166 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 167 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 168 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 169 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 170 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 171 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 172 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 173 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 174 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal::
# 175 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind, MSGBOX_DEFAULT
# 176 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 177 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 178 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 179 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 180 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 181 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 182 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma::
# 183 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream, MSGBOX_DEFAULT
# 184 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 185 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 186 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 187 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 189 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 190 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Steven::
# 191 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 192 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 193 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel, MSGBOX_DEFAULT
# 194 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 195 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 196 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 198 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 199 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MagmaNote::
# 200 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lockall
# 201 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice, MSGBOX_DEFAULT
# 202 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	releaseall
# 203 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 204 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 205 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3::
# 206 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 207 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 208 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro, MSGBOX_DEFAULT
# 209 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 210 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 211 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 212 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 213 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 214 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 215 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1::
# 216 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 217 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 218 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro, MSGBOX_DEFAULT
# 219 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 220 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 221 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 222 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 223 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 224 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 225 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt4::
# 226 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 227 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 228 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro, MSGBOX_DEFAULT
# 229 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 230 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 231 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 232 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 233 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 234 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 235 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2::
# 236 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 237 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 238 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro, MSGBOX_DEFAULT
# 239 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 240 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 241 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 242 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 243 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 244 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 245 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 246 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 247 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent:
# 248 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "火箭马上就要发射了！$"
# 249 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 250 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber:
# 251 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "火箭平安发射了！\n"
# 252 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "第{STR_VAR_1}次成功发射！$"
# 253 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 254 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent:
# 255 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我知道现在有点乱，\n"
# 256 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "不过……\p"
# 257 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "火箭马上就要发射了！$"
# 258 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 259 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber:
# 260 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我知道现在有点乱，\n"
# 261 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "不过……\p"
# 262 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "火箭平安发射了！\n"
# 263 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "第{STR_VAR_1}次成功发射！$"
# 264 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 265 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection:
# 266 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "发射火箭追求完美。\n"
# 267 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "连1％的误差都不能有。\p"
# 268 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "就算99％没问题，只要\n"
# 269 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "1％不行，整件事\l"
# 270 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "就白费。\p"
# 271 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "尽管如此，我们从不\n"
# 272 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "停止尝试。\p"
# 273 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "为什么？因为梦想\n"
# 274 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "没有尽头。$"
# 275 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 276 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter:
# 277 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "那些熔岩队的混混盯上了\n"
# 278 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我们的太空中心。\p"
# 279 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "可我们绝不能让这点\n"
# 280 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "小事影响发射！$"
# 281 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 282 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt:
# 283 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我在海滩散步时\n"
# 284 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "捡到这个。\p"
# 285 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我用不着，\n"
# 286 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "你拿去吧。$"
# 287 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 288 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers:
# 289 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "丰缘地区长久以来一直\n"
# 290 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "以流星雨闻名。$"
# 291 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 292 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis:
# 293 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "绝不能让熔岩队偷走\n"
# 294 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "火箭燃料。\p"
# 295 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "哦，对了，这块我在海滩\n"
# 296 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "捡的石头给你。$"
# 297 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 298 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma:
# 299 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "熔岩队在附近，海滩\n"
# 300 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "散步大概不安全了。$"
# 301 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 302 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace:
# 303 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "有人说宝可梦来自宇宙。\n"
# 304 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "会是真的吗？$"
# 305 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 306 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma:
# 307 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "水舰队该去收拾\n"
# 308 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "熔岩队！\p"
# 309 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "可他们真这么干了，\n"
# 310 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "水舰队不就更猖狂了？$"
# 311 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 312 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind:
# 313 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "一大块金属冲破天空\n"
# 314 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "飞进宇宙……\p"
# 315 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "真让人难以想象！$"
# 316 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 317 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream:
# 318 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "一大块金属冲破天空\n"
# 319 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "飞进宇宙……\p"
# 320 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "可熔岩队想毁掉\n"
# 321 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我这个梦想！\p"
# 322 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我可不答应！$"
# 323 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 324 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel:
# 325 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "大吾：{PLAYER}，你看到那张\n"
# 326 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "公告了吗？\p"
# 327 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "熔岩队要来抢这座岛上的\n"
# 328 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "火箭燃料。\p"
# 329 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我不知道他们要燃料\n"
# 330 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "做什么，绝不能让他们得手。\p"
# 331 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我会在这里再盯一会儿。\p"
# 332 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "这期间，你不如去\n"
# 333 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "镇上转转？$"
# 334 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 335 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro:
# 336 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "天啊……他们好强……$"
# 337 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 338 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro:
# 339 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "那根本不是公平的\n"
# 340 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "对决……唉。$"
# 341 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 342 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro:
# 343 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "唉，这次行动失败了……$"
# 344 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 345 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro:
# 346 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "马克西说谁也别想从我\n"
# 347 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "这儿过去……可他们\l"
# 348 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "还是过去了……$"
# 349 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 350 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat:
# 351 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "呃！呃！呃啊啊！$"
# 352 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 353 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle:
# 354 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "请告诉我们的老大，\n"
# 355 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我从没离开岗位。\l"
# 356 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我一直坚持到最后……$"
# 357 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 358 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice:
# 359 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "这是……\n"
# 360 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "一张盗窃预告？\p"
# 361 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“致太空中心的各位：\n"
# 362 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "你们好吗？我们很好。\p"
# 363 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“我们不久就会来取走\n"
# 364 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "你们的火箭燃料。\p"
# 365 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“请不要试图阻拦。\n"
# 366 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "我们无论如何都会拿走。\p"
# 367 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“愿大地更多！\n"
# 368 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "　　　　　　　　　　　熔岩队”$"
