# 1 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
.set LOCALID_FAMILIAR_GRUNT, 13
# 3 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
.set LOCALID_DRAKE, 15
# 4 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 5 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_MapScripts::
# 6 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.byte 0
# 7 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 8 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_EntranceAttendant::
# 9 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_NPC
# 10 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 11 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 12 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeLeft::
# 13 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 14 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 15 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 17 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 18 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 19 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeRight::
# 20 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 21 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 22 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 24 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 25 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 26 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee::
# 27 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	showmoneybox 0, 0
# 28 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter, MSGBOX_YESNO
# 29 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee
# 30 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 31 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 32 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 33 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 35 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 36 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 37 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee::
# 38 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	checkmoney 50
# 39 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney
# 40 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_SHOP
# 41 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removemoney 50
# 42 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	updatemoneybox
# 43 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 44 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 45 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 46 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 47 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 48 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 49 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney::
# 50 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway
# 51 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 52 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 53 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 54 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 55 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 56 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 57 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 58 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 59 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway::
# 60 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup, MSGBOX_DEFAULT
# 61 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 62 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 63 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 64 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 65 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 66 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter:
# 67 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_down
# 68 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 69 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 70 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt1::
# 71 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll, MSGBOX_NPC
# 72 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 73 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 74 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt2::
# 75 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere, MSGBOX_NPC
# 76 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 77 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 78 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt3::
# 79 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich, MSGBOX_NPC
# 80 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 81 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 82 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt4::
# 83 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds, MSGBOX_SIGN
# 84 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 85 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 86 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt5::
# 87 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RustboroBungled, MSGBOX_NPC
# 88 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 89 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 90 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt6::
# 91 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney, MSGBOX_NPC
# 92 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 93 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 94 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WhirlpoolExperiment::
# 95 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment, MSGBOX_SIGN
# 96 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 97 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 98 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WaterfallExperiment::
# 99 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment, MSGBOX_SIGN
# 100 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 101 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 102 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanSoilDisplay::
# 103 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay, MSGBOX_SIGN
# 104 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 105 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 106 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_BeachSandDisplay::
# 107 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay, MSGBOX_SIGN
# 108 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 109 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 110 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact1::
# 111 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1, MSGBOX_SIGN
# 112 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 113 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 114 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact2::
# 115 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2, MSGBOX_SIGN
# 116 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 117 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 118 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact3::
# 119 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3, MSGBOX_SIGN
# 120 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 121 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 122 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FossilDisplay::
# 123 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_FossilDisplay, MSGBOX_SIGN
# 124 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 125 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 126 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_DepthMeasuringMachine::
# 127 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine, MSGBOX_SIGN
# 128 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 129 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 130 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron1::
# 131 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling, MSGBOX_NPC
# 132 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 133 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 134 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron2::
# 135 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel, MSGBOX_NPC
# 136 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 137 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 138 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron3::
# 139 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow, MSGBOX_NPC
# 140 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 141 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 142 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron4::
# 143 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon, MSGBOX_NPC
# 144 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 145 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 146 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt::
# 147 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lock
# 148 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	faceplayer
# 149 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay 8
# 150 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_PIN
# 151 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, Common_Movement_ExclamationMark
# 152 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 153 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, Common_Movement_Delay48
# 154 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 155 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis, MSGBOX_DEFAULT
# 156 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	giveitem ITEM_TM_FLIP_TURN
# 157 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief
# 158 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_FLIP_TURN
# 159 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain, MSGBOX_DEFAULT
# 160 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 161 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth
# 162 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth
# 163 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 164 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 165 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 166 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 167 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth::
# 168 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth
# 169 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth
# 170 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 171 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 172 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 173 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 174 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth::
# 175 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 178 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 180 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast::
# 181 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast
# 182 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 183 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 184 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 185 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 186 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 187 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited::
# 188 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
# 189 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_EXIT
# 190 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removeobject LOCALID_FAMILIAR_GRUNT
# 191 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 192 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 193 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 194 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief::
# 195 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis, MSGBOX_DEFAULT
# 196 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 197 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 198 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 199 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth:
# 200 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 201 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 202 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_4
# 203 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 204 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 205 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 206 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast:
# 207 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 208 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 209 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 210 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 211 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit:
# 212 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	face_down
# 213 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 214 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 215 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 216 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 217 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 218 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 219 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 220 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth:
# 221 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 222 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 223 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 224 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 225 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 226 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 227 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 228 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 229 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter:
# 230 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "欢迎来到海洋博物馆。\p"
# 231 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "门票50元。\n"
# 232 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "你要进去吗？$"
# 233 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 234 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself:
# 235 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "请慢慢参观。$"
# 236 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 237 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney:
# 238 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "哦？抱歉，你的钱\n"
# 239 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "好像不够。$"
# 240 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 241 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup:
# 242 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "哦？你是刚才那批\n"
# 243 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "进去的人？\p"
# 244 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "就你一个来晚了。\n"
# 245 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "快去追上他们吧！$"
# 246 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 247 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll:
# 248 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "我们水舰队，\n"
# 249 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "是为了大家的利益而存在！$"
# 250 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 251 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere:
# 252 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "我们接到集合的命令\n"
# 253 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "就来了，可是……\p"
# 254 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "我们的老大，那个核心人物，\n"
# 255 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "还没到。$"
# 256 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 257 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich:
# 258 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "要是我把这儿的东西\n"
# 259 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "都抢走，能发财吗？$"
# 260 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 261 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds:
# 262 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "我在这儿学到的东西，\n"
# 263 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "能用在坏事上……$"
# 264 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 265 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RustboroBungled:
# 266 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "要不是我们的人在卡那兹\n"
# 267 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "搞砸了，我们也不用在这儿！$"
# 268 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 269 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney:
# 270 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "我没有50元，\n"
# 271 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "所以花了很久才通过前台。$"
# 272 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 273 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling:
# 274 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "我想了解大海，\n"
# 275 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "再把那些知识用在对战上。$"
# 276 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 277 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel:
# 278 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "一看到大海，我就\n"
# 279 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "心潮澎湃！\p"
# 280 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "对我来说，斯图船长就是\n"
# 281 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "第一号的榜样！$"
# 282 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 283 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow:
# 284 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "大海无边无际，\n"
# 285 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "深不可测……\p"
# 286 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "一定还有很多我们\n"
# 287 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "不知道的宝可梦。$"
# 288 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 289 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon:
# 290 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "我想要一只海里的\n"
# 291 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "宝可梦。\p"
# 292 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "抱着它一定会觉得\n"
# 293 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "又凉快又舒服。$"
# 294 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 295 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis:
# 296 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "哇啊啊！\n"
# 297 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "你在这儿干什么？\p"
# 298 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "我？我就是之前在碎石隧道\n"
# 299 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "被你揍过的\l"
# 300 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "水舰队成员，记得吗？\p"
# 301 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "来，拿着这个！\n"
# 302 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "你一定要原谅我！$"
# 303 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 304 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain:
# 305 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "我？我要赶紧溜走！\n"
# 306 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "希望再也见不到你！\p"
# 307 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "哇哈哈！$"
# 308 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 309 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis:
# 310 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "哎哟，别这样！\n"
# 311 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "你收下这个，就放我走吧！$"
# 312 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 313 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment:
# 314 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "玻璃容器里，蓝色的液体\n"
# 315 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "在打着旋。\p"
# 316 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“这是利用风人工制造\n"
# 317 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "漩涡的实验。”$"
# 318 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 319 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment:
# 320 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "玻璃容器里，红色的球\n"
# 321 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "在上下浮动。\p"
# 322 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“这是利用球的浮力\n"
# 323 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "模拟瀑布的实验。”$"
# 324 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 325 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay:
# 326 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "这是海底土壤的\n"
# 327 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "样本。\p"
# 328 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“经过许多年，生物的\n"
# 329 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "遗骸沉积在海底，\l"
# 330 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "形成沉积层。\p"
# 331 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“通过分析这些沉积层，\n"
# 332 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "就能看清远古的过去。”$"
# 333 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 334 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay:
# 335 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "这是沙滩沙子的\n"
# 336 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "样本。\p"
# 337 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“山上的石头被河水\n"
# 338 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "冲下来，在途中\l"
# 339 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "被削碎、磨细。\p"
# 340 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“它们被磨成颗粒，\n"
# 341 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "最后成为沙滩上的沙。”$"
# 342 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 343 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1:
# 344 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“海洋小知识1\n"
# 345 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "为什么海水是蓝色的？\p"
# 346 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“光是由许多颜色\n"
# 347 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "组成的。\p"
# 348 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“光穿过水时，\n"
# 349 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "大部分颜色都会褪去。\p"
# 350 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“只有蓝光保留了颜色，\n"
# 351 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "所以大海看起来是蓝的。”$"
# 352 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 353 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2:
# 354 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“海洋小知识2\n"
# 355 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "为什么海水是咸的？\p"
# 356 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“海水中溶解着盐，\n"
# 357 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "以钠离子和氯离子的\l"
# 358 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "形式存在。\p"
# 359 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“这些离子从岩石中渗出，\n"
# 360 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "被雨水带进大海。\p"
# 361 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“溶解盐的浓度\n"
# 362 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "让海水变咸。”$"
# 363 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 364 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3:
# 365 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“海洋小知识3\n"
# 366 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "海和陆地哪个更大？\p"
# 367 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“海洋覆盖了地球大约\n"
# 368 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "70%的表面，其余是陆地。\p"
# 369 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“所以海洋的面积\n"
# 370 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "是陆地的两倍多。”$"
# 371 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 372 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_FossilDisplay:
# 373 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "这是一块带有波浪状\n"
# 374 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "纹路的化石。\p"
# 375 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“海底的泥土会\n"
# 376 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "被潮水冲刷。\p"
# 377 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“流动的海水在泥土上\n"
# 378 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "留下细小的脊和沟。\p"
# 379 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“如果这种泥土变成化石，\n"
# 380 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "就叫波痕。”$"
# 381 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 382 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine:
# 383 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "玻璃罩里有台奇怪的\n"
# 384 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "机器在转动。\p"
# 385 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "也许是用来测量\n"
# 386 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "什么的深度……$"

SlateportCity_OceanicMuseum_1F_EventScript_DrakeTrigger1::
# 391 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 392 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_DrakeScene
	end


SlateportCity_OceanicMuseum_1F_EventScript_DrakeTrigger2::
# 398 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 399 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_DrakeScene
	end


SlateportCity_OceanicMuseum_1F_EventScript_DrakeScene::
# 405 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 406 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, SlateportCity_OceanicMuseum_1F_EventScript_DrakeApproachPlayer1
# 407 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, SlateportCity_OceanicMuseum_1F_EventScript_DrakeApproachPlayer2
# 408 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1FDrakeIntro, MSGBOX_DEFAULT
# 409 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 410 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay 10
# 411 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	call ApplyMovementDrakeExit
# 412 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removeobject LOCALID_DRAKE
# 413 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_DRAKE_SLATEPORT, 2
# 414 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
	end


SlateportCity_OceanicMuseum_1F_EventScript_DrakeApproachPlayer1::
# 419 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_DOOR
# 420 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	addobject LOCALID_DRAKE
# 421 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_DRAKE, SlateportCity_OceanicMuseum_1F_Movement_DrakeApproachPlayer
# 422 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_1F_EventScript_DrakeApproachPlayer2::
# 427 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_DOOR
# 428 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setobjectxyperm LOCALID_DRAKE, 10, 8
# 429 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	addobject LOCALID_DRAKE
# 430 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_DRAKE, SlateportCity_OceanicMuseum_1F_Movement_DrakeApproachPlayer
# 431 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_1F_Movement_DrakeApproachPlayer::
# 436 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_up
# 437 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
	return


ApplyMovementDrakeExit::
# 441 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_DOOR
# 442 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_DRAKE, SlateportCity_OceanicMuseum_1F_EventScript_DrakeExit
# 443 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_1F_EventScript_DrakeExit::
# 448 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_down
# 449 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
	return


SlateportCity_OceanicMuseum_1FDrakeIntro::
# 452 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "哼。哦，抱歉，\n"
	.string "撞到你了。\p"
	.string "我正好在这附近，看到\n"
	.string "几个水舰队的成员从这座\l"
	.string "博物馆里逃出来。\p"
	.string "你知道他们\n"
	.string "为什么逃跑吗？\p"
	.string "………………\p"
	.string "原来如此，他们是冲着要\n"
	.string "交给史特恩船长的大吾零件，\l"
	.string "结果被你打败，\l"
	.string "吓跑了。\p"
	.string "能一个人对付水舰队，\n"
	.string "看来你\l"
	.string "相当厉害。\p"
	.string "那我也自我介绍一下，我是\n"
	.string "四天王的源治，你是？\p"
	.string "………………\p"
	.string "原来如此。干得漂亮，{PLAYER}。\n"
	.string "我这就走了，不过我总觉得\l"
	.string "我们还会再见。$"
