# 1 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 2 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_SS_TIDAL, 2
# 3 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_FERRY_ATTENDANT, 3
# 4 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_MANIAC_1, 9
# 5 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_MANIAC_2, 10
# 6 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_GIRL, 12
# 7 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_CAMPER, 14
# 8 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_FISHERMAN_2, 18
# 9 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_MAN_4, 23
# 10 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 11 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 12 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 14 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 15 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition:
# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 18 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 20 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 22 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 27 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 35 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 36 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 37 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 38 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 40 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 41 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 42 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 43 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 45 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 46 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 47 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 48 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 49 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 50 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 52 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 53 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 54 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 56 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 57 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 59 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 61 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 66 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 76 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 77 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 78 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 79 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 85 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 86 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 87 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 88 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 89 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 90 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 93 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 96 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 98 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 100 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 101 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 103 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 104 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 105 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 106 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 109 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 110 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 111 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 114 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 115 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 116 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 118 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 119 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 120 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 121 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 124 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 125 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 127 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 128 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 135 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 136 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 141 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 152 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 153 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 162 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 177 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 178 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 189 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 191 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 192 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 195 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 197 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 198 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 200 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 209 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 212 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 213 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 215 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 218 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 220 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 227 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 241 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 246 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 258 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 259 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 264 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 265 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 270 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 279 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 282 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 284 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 300 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 301 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_MAN_4, Common_Movement_FaceOriginalDirection
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 305 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 306 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign:
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "这里是对战巨蛋！\n"
# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "通往无敌超级明星之路！$"
# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign:
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "这里是对战工厂！\n"
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "寻找最强宝可梦！$"
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign:
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "这里是对战管道！\n"
# 321 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "从三条路里选一条！$"
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 323 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "这里是对战塔。\p"
# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "训练家带来培养得最好的\n"
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "宝可梦参加淘汰赛制对战。$"
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 328 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "你好，你是来坐渡轮的吗？\n"
# 330 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "能让我看看票吗？$"
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
# 333 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER}没有票……\p"
# 334 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "非常抱歉。\p"
# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "必须要有票才能\n"
# 336 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "上渡轮。$"
# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 338 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER}出示了票。\p"
# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "太好了！这样就够了！\p"
# 341 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "你想去哪儿？$"
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs:
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "那就去凯那市！$"
# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs:
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "那就去绿岭市！$"
# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "请下次再乘我们的船！$"
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 352 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
# 353 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "请上船等待\n"
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "出发。$"
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
# 357 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "那么，你想去哪儿？$"
# 358 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "在我朋友里我最强。\n"
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "可在这儿……\l"
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我一点用都没有！$"
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower:
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我想去对战塔，可我有\n"
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "对战开拓区的地图也找不到。\p"
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "这地方实在太大了！$"
# 368 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 369 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
# 370 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我本想一到就去挑战。\p"
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "可来的路上，我晕船了……\n"
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "呃……$"
# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 374 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "你知道不是谁都能\n"
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "来这里的吧？\p"
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "只有被认可为强者的\n"
# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "训练家才会被带到这儿。\p"
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "所以很多训练家根本\n"
# 380 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "不知道对战开拓区。$"
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "嘿，兄弟……\p"
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我们真的没有宝可梦\n"
# 385 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "也能挑战吗？$"
# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 387 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
# 388 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "呃……\n"
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我想没问题吧。\p"
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "大概……\p"
# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "不过你记得那个可怕的大\n"
# 392 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "个子吗？他说：“我借你宝可梦！”$"
# 393 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "那是对战工厂。\n"
# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "在那儿可以租到强宝可梦。\p"
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "不过我一直在想。\n"
# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "那些租借宝可梦是谁养的？$"
# 399 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "因为有饭匙蛇，我怕进\n"
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "对战管道……\p"
# 403 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "不、不过我大老远来的，\n"
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我会努力全部征服！\l"
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "……抖……$"
# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 407 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
# 408 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "来玩石头剪刀布吧！\n"
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "一、二、三！\p"
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "耶！我赢了！\n"
# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我要去挑战对战管道！$"
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "哦，不……\n"
# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我输了。\p"
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "看来我今天运气不好。\n"
# 420 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "对战管道的挑战我推到\l"
# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "明天吧。$"
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我相信这儿只有我，\n"
# 425 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "不知为什么，会选钓鱼\l"
# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "而不是对战。\p"
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "嗯？这里钓不到东西？\n"
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "真失望……$"
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "今天我要一直对战下去，\n"
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "不管怎样，直到拿到\l"
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "象征。$"
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "哦？你要去挑战\n"
# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "对战巨蛋？\p"
# 438 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "祝你好运。\n"
# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "让我们都一路赢上去，\l"
# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "在挑战中相遇。$"
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "爷爷，这边！\n"
# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "对战巨蛋在这儿！\l"
# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "上啊，爷爷！$"
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "啊，这里就是对战巨蛋？\n"
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我可不让绅士们赢我！\p"
# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "可入口在哪儿？$"
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "不久前这里还什么都\n"
# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "没有。\p"
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "可你看看现在！真了不起！\n"
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我要带我妈妈来看看。$"
# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我终于到对战\n"
# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "开拓区了！\p"
# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "凭我的长相和实力，\n"
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "一定能引人注目！$"
# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "嚼，嚼……\p"
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "这个广场好像挤满了\n"
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "厉害的人。\p"
# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "嚼，嚼……$"
# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "咔嚓，嚼……\p"
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "前阵子我在对战管道\n"
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "遇到一个大姐姐。\p"
# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "她的眼神凶得\n"
# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "让人害怕。\p"
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "咔嚓，嚼……\p"
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "她大发雷霆：“你能不能\n"
# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "别吃了！”然后狠狠揍了我。\p"
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "那真是毛骨悚然的\n"
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "经历。\p"
# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "咔嚓，嚼……$"
# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "嗯？你听听自己在说什么？\n"
# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "那算什么！\p"
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "上次我给他加油，\n"
# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我们目光一对，火花四溅！$"
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "什么————？！\n"
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "噗！\p"
# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "那只是因为我刚好\n"
# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "坐在你旁边！\p"
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "巨蛋之星看我们这边，\n"
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "是因为我加油声太大！$"
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine:
# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "哦，小声点！\n"
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "别吵！\p"
# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "你们这些凑热闹的粉丝\n"
# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "该去给道馆馆主加油！\p"
# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "巨蛋之星是我的！\n"
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我唯一的偶像！$"
# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "那边吵架的人……\p"
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "很难相信，可他们以前\n"
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "也是训练家，还挺强。\p"
# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "他们曾经强得惊人，\n"
# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "也很有名。\p"
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "可他们在一场大赛里\n"
# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "被某位训练家彻底打爆。\p"
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "他们被揍得太惨，\n"
# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "反而迷上了那位训练家。\p"
# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "现在他们只是那位训练家的\n"
# 516 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "粉丝。每天去对战巨蛋\l"
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "给偶像加油。$"
# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
# 520 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我听说有个传闻，说有人\n"
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "在对战开拓区某处看到\l"
# 522 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "一只尾巴特别长的宝可梦。\p"
# 523 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "一定很可爱。我敢肯定……\p"
# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "哦，挑战可以先等等。\n"
# 525 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "我非得找到那只\l"
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "可爱的小家伙！$"
