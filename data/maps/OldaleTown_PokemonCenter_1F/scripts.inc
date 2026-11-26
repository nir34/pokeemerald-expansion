# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_EggMan::
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_SYS_DEXNAV_GET, OldaleTown_PokemonCenter_1F_EventScript_NotReadyForEggYet
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLDALE_EGG, OldaleTown_PokemonCenter_1F_EventScript_ReceivedEgg
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OldaleTown_PokemonCenter_1F_EventScript_DeclineEgg
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	getpartysize
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, OldaleTown_PokemonCenter_1F_EventScript_NoRoomForEgg
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_OLDALE_EGG
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	message OldaleTown_PokemonCenter_1F_Text_ReceivedTheEgg
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveegg SPECIES_SENTRET
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_NotReadyForEggYet::
# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_NotReadyForEggYet, MSGBOX_DEFAULT
# 63 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 64 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 65 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_ReceivedEgg::
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_DeclineEgg::
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_AsYouWishThen, MSGBOX_DEFAULT
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 76 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_NoRoomForEgg::
# 77 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 81 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_NotReadyForEggYet:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "我这里有个蛋，想找个\n"
# 83 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "够有经验的训练家\l"
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "拿去孵化。\p"
# 85 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "你好像经验还不够；\n"
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "等你拿到宝可梦图鉴\l"
# 87 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "再来吧。$"
# 88 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_EverySoOftenEggFoundAtDayCare:
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "我真不知道那个蛋里\n"
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "面是什么。$"
# 92 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 93 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_HaveEggWillYouTakeIt:
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "我这里有个蛋，可我年纪\n"
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "太大了，没法跑那么久\l"
# 96 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "把它孵出来。\p"
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "我看你有宝可梦图鉴，\n"
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "一定是个值得信任的\l"
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "训练家。\p"
# 100 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "你愿意把这个蛋\n"
# 101 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "拿走吗？$"
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 103 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_AsYouWishThen:
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "那就随你吧……\p"
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "要是你回心转意想孵\n"
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "这个蛋，我一直在这儿。$"
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 108 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_NoRoomForThisEgg:
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "哦？你的宝可梦太多了。\n"
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "没地方放这个蛋……$"
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 112 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg:
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "好！希望你带着那个蛋\n"
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "多走走！$"
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_ReceivedTheEgg:
# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER}得到了蛋。$"
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 119 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 120 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "角落那台电脑，任何\n"
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "宝可梦训练家都能用。\p"
# 122 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "当然，这也意味着\n"
# 123 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "你也随时可以用。$"
# 124 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 126 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "宝可梦中心真棒！\p"
# 127 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "服务想用多少次都行，\n"
# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "而且全都免费。\l"
# 129 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "你完全不用操心！$"
# 130 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 131 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 132 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "二楼新开了个\n"
# 133 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "宝可梦无线俱乐部。\p"
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "不过他们说还在\n"
# 135 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "调整中。$"
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 137 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 138 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "二楼新开了个\n"
# 139 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "宝可梦无线俱乐部。\p"
# 140 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "我马上就交换了宝可梦。$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse::
# 145 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox HelloHowCanIHelp
# 148 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_0, 0
# 149 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_1, 1
# 150 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_2
# 154 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_3, 2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_1:
# 157 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_6
# 161 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_5, 3
OldDaleTown_PokemonCenter_EventScript_SecondNurse_5:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_6, 4
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_7, 5
# 166 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_8, MULTI_B_PRESSED
# 169 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 171 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_10
OldDaleTown_PokemonCenter_EventScript_SecondNurse_9:
# 176 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_13
OldDaleTown_PokemonCenter_EventScript_SecondNurse_12:
# 181 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_16
OldDaleTown_PokemonCenter_EventScript_SecondNurse_15:
# 186 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_19
OldDaleTown_PokemonCenter_EventScript_SecondNurse_18:
# 191 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_22
OldDaleTown_PokemonCenter_EventScript_SecondNurse_21:
# 196 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_25
OldDaleTown_PokemonCenter_EventScript_SecondNurse_24:
# 201 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_27
	return

OldDaleTown_PokemonCenter_EventScript_SecondNurse_2:
# 151 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_2, 2
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_6:
# 158 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_4, 3
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_5

OldDaleTown_PokemonCenter_EventScript_SecondNurse_10:
# 173 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_9

OldDaleTown_PokemonCenter_EventScript_SecondNurse_13:
# 178 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_12

OldDaleTown_PokemonCenter_EventScript_SecondNurse_16:
# 183 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_15

OldDaleTown_PokemonCenter_EventScript_SecondNurse_19:
# 188 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_18

OldDaleTown_PokemonCenter_EventScript_SecondNurse_22:
# 193 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_21

OldDaleTown_PokemonCenter_EventScript_SecondNurse_25:
# 198 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_24

OldDaleTown_PokemonCenter_EventScript_SecondNurse_27:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo
	return


OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature::
# 208 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_0
# 209 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 210 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 211 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_1:
# 215 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 216 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_5
# 221 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special BufferMonNickname
# 222 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_2
# 223 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_NATURE_ORDER, 1
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_8
# 262 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_NATURE_ORDER, 2
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_9
# 291 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5, NATURE_ADAMANT
# 292 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23, NATURE_BASHFUL
# 293 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7, NATURE_BOLD
# 294 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4, NATURE_BRAVE
# 295 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19, NATURE_CALM
# 296 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22, NATURE_CAREFUL
# 297 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24, NATURE_DOCILE
# 298 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20, NATURE_GENTLE
# 299 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25, NATURE_HARDY
# 300 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12, NATURE_HASTY
# 301 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9, NATURE_IMPISH
# 302 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13, NATURE_JOLLY
# 303 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10, NATURE_LAX
# 304 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_3, NATURE_LONELY
# 305 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16, NATURE_MILD
# 306 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15, NATURE_MODEST
# 307 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14, NATURE_NAIVE
# 308 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6, NATURE_NAUGHTY
# 309 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17, NATURE_QUIET
# 310 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26, NATURE_QUIRKY
# 311 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18, NATURE_RASH
# 312 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8, NATURE_RELAXED
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21, NATURE_SASSY
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27, NATURE_SERIOUS
# 315 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11, NATURE_TIMID
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_7:
# 317 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_8, MULTI_B_PRESSED
# 319 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 25, DYN_MULTICHOICE_CB_NONE
# 321 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_14
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_13:
# 326 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 327 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernaturename STR_VAR_2, VAR_RESULT
# 328 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureNatureChange, MSGBOX_YESNO
# 330 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_17
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_16:
# 335 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 336 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 337 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChangeMonNature
# 338 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 339 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 340 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 341 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 342 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_29
# 343 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_2:
# 213 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_5:
# 217 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_1
# 218 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_8:
# 225 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_3, NATURE_LONELY
# 226 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4, NATURE_BRAVE
# 227 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5, NATURE_ADAMANT
# 228 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6, NATURE_NAUGHTY
# 231 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7, NATURE_BOLD
# 232 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8, NATURE_RELAXED
# 233 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9, NATURE_IMPISH
# 234 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10, NATURE_LAX
# 237 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11, NATURE_TIMID
# 238 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12, NATURE_HASTY
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13, NATURE_JOLLY
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14, NATURE_NAIVE
# 243 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15, NATURE_MODEST
# 244 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16, NATURE_MILD
# 245 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17, NATURE_QUIET
# 246 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18, NATURE_RASH
# 249 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19, NATURE_CALM
# 250 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20, NATURE_GENTLE
# 251 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21, NATURE_SASSY
# 252 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22, NATURE_CAREFUL
# 255 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23, NATURE_BASHFUL
# 256 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24, NATURE_DOCILE
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25, NATURE_HARDY
# 258 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26, NATURE_QUIRKY
# 259 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27, NATURE_SERIOUS
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_7

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_9:
# 264 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5, NATURE_ADAMANT
# 265 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15, NATURE_MODEST
# 266 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11, NATURE_TIMID
# 267 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13, NATURE_JOLLY
# 268 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12, NATURE_HASTY
# 269 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14, NATURE_NAIVE
# 270 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16, NATURE_MILD
# 271 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6, NATURE_NAUGHTY
# 272 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18, NATURE_RASH
# 273 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_3, NATURE_LONELY
# 274 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4, NATURE_BRAVE
# 275 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17, NATURE_QUIET
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19, NATURE_CALM
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9, NATURE_IMPISH
# 278 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21, NATURE_SASSY
# 279 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22, NATURE_CAREFUL
# 280 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8, NATURE_RELAXED
# 281 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7, NATURE_BOLD
# 282 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23, NATURE_BASHFUL
# 283 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10, NATURE_LAX
# 284 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20, NATURE_GENTLE
# 285 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24, NATURE_DOCILE
# 286 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25, NATURE_HARDY
# 287 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26, NATURE_QUIRKY
# 288 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultipush OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27, NATURE_SERIOUS
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_7

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_14:
# 323 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_13

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_17:
# 332 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_16


OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender::
# 349 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GenderSwapInfo
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 352 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_1:
# 356 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 357 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 358 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_SNORUNT, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 359 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_RALTS, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 360 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_KIRLIA, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 361 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_SALANDIT, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 362 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BURMY_PLANT, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 363 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BURMY_SANDY, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 364 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BURMY_TRASH, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 365 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_COMBEE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 366 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_ESPURR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 367 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BASCULIN_RED_STRIPED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 368 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BASCULIN_BLUE_STRIPED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 369 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_BASCULIN_WHITE_STRIPED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 370 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_LECHONK, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6
# 386 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case SPECIES_EGG, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_7
# 390 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_2
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_4:
# 392 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_2:
# 354 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_6:
# 371 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special BufferMonNickname
# 372 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureGenderSwap, MSGBOX_YESNO
# 373 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_10
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_9:
# 377 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 378 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 379 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChangeMonGender
# 380 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 381 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 382 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 383 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 384 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_0
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_4

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_7:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_1
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_4

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_10:
# 375 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_9


OldDaleTown_PokemonCenter_EventScript_SecondNurseNo::
# 397 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurseNo_Text_0
# 398 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap::
# 403 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_2
# 409 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 410 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 411 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox TellLevelCapAndAsk, MSGBOX_YESNO
# 412 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_5
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_4:
# 416 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_0
# 417 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 418 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 419 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_8
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_7:
# 423 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 424 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_11
# 429 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_0x8007, ScriptGetPartyMonLevel
# 430 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8007, VAR_0x8006
# 431 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap
# 432 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special BufferMonNickname
# 433 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureLevelCap, MSGBOX_YESNO
# 434 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_14
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_13:
# 438 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 439 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 440 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special SetMonToLevelCap
# 441 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 442 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 443 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 444 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 445 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox MonHasBeenSetToLevelCap
# 446 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_2:
# 405 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox FeatureAvailableAfterMoveTutor
# 406 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_5:
# 414 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_4

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_8:
# 421 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_7

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_11:
# 425 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_Text_0
# 426 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_14:
# 436 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_13


OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap::
# 451 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_REGULAR_MOVE_TUTOR, OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_2
# 457 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 458 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 459 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox TellLevelCapAndAskBox, MSGBOX_YESNO
# 460 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_5
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_4:
# 464 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox AreYouSureLevelCapBox, MSGBOX_YESNO
# 465 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_8
OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_7:
# 469 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28
# 470 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 471 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special LevelBoxesToCap
# 472 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 473 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 474 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 475 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 476 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox BoxHasBeenSetToLevelCap
# 477 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_2:
# 453 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox FeatureAvailableAfterMoveTutor
# 454 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_5:
# 462 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_4

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_8:
# 467 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurseNo
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetBoxToLevelCap_7


OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap::
# 482 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap_Text_0
# 483 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount::
# 488 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWhiteOutCountForText
# 489 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_2
# 495 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 496 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_1
OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_1:
# 498 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_2:
# 491 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_0
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_1


OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo::
# 503 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox VersionNumber
# 505 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_2
# 518 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_EASY_MODE
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_11
# 524 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox NormalMode
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1:
# 527 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_0
# 528 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RANDOMIZER_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_6
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5:
# 542 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RANDOM_ABILITIES_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_15
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_14:
# 546 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RANDOM_LEARNSETS_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_23
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_22:
# 550 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RANDOMIZER_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_28
OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_25:
# 554 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_2:
# 507 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_EASY_MODE
	goto_if_eq OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_8
# 513 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox NormalModeWithMgm
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_6:
# 530 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RANDOMIZER_MODE
# 532 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case MON_RANDOM, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_18
# 534 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case MON_RANDOM_BST, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_19
# 536 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case MON_RANDOM_LEGEND_AWARE, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_20
# 539 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_4
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_8:
# 509 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox EasyModeWithMgm
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_11:
# 520 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox EasyMode
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_1

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_15:
# 544 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_5
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_14

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_18:
# 533 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_1
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_19:
# 535 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_2
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_20:
# 537 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_3
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_5

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_23:
# 548 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_6
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_22

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_26:
# 552 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_7
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_25

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_27:
# 550 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RANDOM_LEARNSETS_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_26
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_25

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_28:
# 550 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_RANDOM_ABILITIES_ENABLED, OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_27
	goto OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_25


OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_0:
# 148 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "性格更改$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_1:
# 149 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "性别互换$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_2:
# 151 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}把宝可梦设为上限等级{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_3:
# 154 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "把宝可梦设为上限等级$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_4:
# 158 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR WHITE}{SHADOW LIGHT_GRAY}把盒子设为上限等级{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_5:
# 161 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "把盒子设为上限等级$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_6:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "全员倒下计数$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_7:
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "模式信息$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_Text_8:
# 166 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "取消$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_0:
# 208 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "哪只宝可梦？$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_1:
# 217 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "蛋的性格\n我改不了。$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_2:
# 222 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1}适合哪种\n性格？$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_3:
# 225 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "孤僻         {COLOR RED}{SHADOW LIGHT_RED}+攻击{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-防御     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_4:
# 226 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "勇敢           {COLOR RED}{SHADOW LIGHT_RED}+攻击{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-速度     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_5:
# 227 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "固执       {COLOR RED}{SHADOW LIGHT_RED}+攻击{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-特攻$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_6:
# 228 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "调皮      {COLOR RED}{SHADOW LIGHT_RED}+攻击{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-特防   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_7:
# 231 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "大胆             {COLOR RED}{SHADOW LIGHT_RED}+防御{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-攻击       $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_8:
# 232 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "悠闲       {COLOR RED}{SHADOW LIGHT_RED}+防御{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-速度   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_9:
# 233 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "顽皮         {COLOR RED}{SHADOW LIGHT_RED}+防御{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-特攻   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_10:
# 234 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "乐天              {COLOR RED}{SHADOW LIGHT_RED}+防御{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-特防   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_11:
# 237 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "胆小           {COLOR RED}{SHADOW LIGHT_RED}+速度{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-攻击   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_12:
# 238 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "急躁          {COLOR RED}{SHADOW LIGHT_RED}+速度{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-防御     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_13:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "爽朗           {COLOR RED}{SHADOW LIGHT_RED}+速度{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-特攻   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_14:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "天真          {COLOR RED}{SHADOW LIGHT_RED}+速度{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-特防 $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_15:
# 243 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "内敛        {COLOR RED}{SHADOW LIGHT_RED}+特攻{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-攻击   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_16:
# 244 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "慢吞吞             {COLOR RED}{SHADOW LIGHT_RED}+特攻{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-防御   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_17:
# 245 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "冷静          {COLOR RED}{SHADOW LIGHT_RED}+特攻{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-速度 $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_18:
# 246 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "马虎            {COLOR RED}{SHADOW LIGHT_RED}+特攻{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-特防 $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_19:
# 249 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "温和             {COLOR RED}{SHADOW LIGHT_RED}+特防{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-攻击     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_20:
# 250 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "温柔         {COLOR RED}{SHADOW LIGHT_RED}+特防{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-防御     $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_21:
# 251 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "狂妄          {COLOR RED}{SHADOW LIGHT_RED}+特防{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-速度 $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_22:
# 252 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "慎重       {COLOR RED}{SHADOW LIGHT_RED}+特防{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/{COLOR BLUE}{SHADOW LIGHT_BLUE}-特攻   $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_23:
# 255 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "害羞            中性            $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_24:
# 256 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "坦率            中性            $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_25:
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "勤奋            中性            $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_26:
# 258 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "浮躁            中性            $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_27:
# 259 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "认真            中性            $"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_28:
# 335 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "很好。我这就开始！$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ChangeNature_Text_29:
# 342 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1}的性格\n已经改变。若还需要别的，\l请再来。$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_0:
# 384 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1}的性别\n已经互换。若还需要别的，\l请再来。$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_1:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "蛋的性别\n我换不了。$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SwapGender_Text_2:
# 390 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "抱歉，那只宝可梦的\n性别我换不了。$"

OldDaleTown_PokemonCenter_EventScript_SecondNurseNo_Text_0:
# 397 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "我明白了。若还需要别的，\n请再来。$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_SetToLevelCap_Text_0:
# 425 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "蛋不能升级。$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_MonAlreadyAtCap_Text_0:
# 482 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "那只宝可梦已经是{STR_VAR_3}级了。$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_0:
# 491 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "当前全员倒下次数：0$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_GetWhiteOutCount_Text_1:
# 496 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "当前全员倒下次数：{STR_VAR_1}$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_0:
# 527 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "随机化选项：$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_1:
# 533 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}普通种族$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_2:
# 535 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}强度缩放种族$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_3:
# 537 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}考虑传说的种族$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_4:
# 539 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "种族未随机化$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_5:
# 544 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}特性$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_6:
# 548 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}招式表$"

OldDaleTown_PokemonCenter_EventScript_SecondNurse_ModeInfo_Text_7:
# 552 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}无$"

HelloHowCanIHelp::
# 558 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "你好，今天有\n"
	.string "什么能帮你的？$"

AreYouSureNatureChange::
# 564 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "我现在更改\n"
	.string "{STR_VAR_1}的性格改为{STR_VAR_2}。\p"
	.string "这样可以吗？$"

GenderSwapInfo::
# 572 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "我可以互换\n"
	.string "以下宝可梦的性别：\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}雪童子、拉鲁拉丝、奇鲁莉安、\n"
	.string "夜盗火蜥、结草儿、三蜜蜂、\l妙喵、野蛮鲈鱼、爱吃豚。\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}因为这些宝可梦具有\n"
	.string "依性别而异的进化。\p"
	.string "要互换哪只宝可梦的性别？$"

AreYouSureGenderSwap::
# 583 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "我现在互换\n"
	.string "{STR_VAR_1}的性别。\p"
	.string "这样可以吗？$"

TellLevelCapAndAsk::
# 590 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "当前等级上限：{STR_VAR_3}。\p"
	.string "要把一只宝可梦\n"
	.string "设为{STR_VAR_3}级吗？$"

AreYouSureLevelCap::
# 597 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "我现在把{STR_VAR_1}\n"
	.string "设为{STR_VAR_3}级。\p"
	.string "这样可以吗？$"

MonHasBeenSetToLevelCap::
# 604 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{STR_VAR_1}已\n"
	.string "设为{STR_VAR_3}级。\p"
	.string "若还需要别的，请再来。$"

TellLevelCapAndAskBox::
# 611 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "当前等级上限：{STR_VAR_3}。\p"
	.string "我可以把电脑和队伍里所有\n"
	.string "未标记的宝可梦设为{STR_VAR_3}级。\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}你可以在电脑里用“标记”\n"
	.string "让宝可梦不被升级。\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}要把所有未标记的宝可梦\n"
	.string "设为{STR_VAR_3}级吗？$"

AreYouSureLevelCapBox::
# 622 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "我现在把电脑和队伍里所有\n"
	.string "未标记的宝可梦设为{STR_VAR_3}级。\p"
	.string "这样可以吗？$"

BoxHasBeenSetToLevelCap::
# 629 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "电脑和队伍里所有未标记的\n"
	.string "宝可梦已设为{STR_VAR_3}级。\p"
	.string "若还需要别的，请再来。$"

FeatureAvailableAfterMoveTutor::
# 636 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "等你见到武斗镇的\n"
	.string "招式教学师父后，\l"
	.string "这项功能就会开放。$"

VersionNumber::
# 643 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "版本：1.3.1$"

EasyMode::
# 648 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "难度：{COLOR GREEN}{SHADOW LIGHT_GREEN}简单模式$"

EasyModeWithMgm::
# 653 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "难度：{COLOR GREEN}{SHADOW LIGHT_GREEN}简单模式\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}搭配{COLOR GREEN}{SHADOW LIGHT_GREEN}最少练级模式$"

NormalMode::
# 659 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "难度：{COLOR GREEN}{SHADOW LIGHT_GREEN}普通模式$"

NormalModeWithMgm::
# 664 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "难度：{COLOR GREEN}{SHADOW LIGHT_GREEN}普通模式\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}搭配{COLOR GREEN}{SHADOW LIGHT_GREEN}最少练级模式$"

LevelCapIncreasedTo::
# 670 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}等级上限提升至：{STR_VAR_3}。$"
