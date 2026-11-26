# 1 "data/maps/VictoryRoad_1F/scripts.pory"

# 2 "data/maps/VictoryRoad_1F/scripts.pory"
.set LOCALID_WALLY_ENTRANCE, 4
# 3 "data/maps/VictoryRoad_1F/scripts.pory"

# 4 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts::
# 5 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 6 "data/maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 7 "data/maps/VictoryRoad_1F/scripts.pory"

# 8 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition:
# 9 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 1, VictoryRoad_1F_EventScript_SetEntranceWallyPos1
# 10 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 2, VictoryRoad_1F_EventScript_SetEntranceWallyPos2
# 11 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 12 "data/maps/VictoryRoad_1F/scripts.pory"

# 13 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos1::
# 14 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 2, 24
# 15 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 17 "data/maps/VictoryRoad_1F/scripts.pory"

# 18 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos2::
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 3, 24
# 20 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 22 "data/maps/VictoryRoad_1F/scripts.pory"

# 23 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger1::
# 24 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 27 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 28 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 30 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 32 "data/maps/VictoryRoad_1F/scripts.pory"

# 33 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 35 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 37 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 38 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 39 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 42 "data/maps/VictoryRoad_1F/scripts.pory"

# 43 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 44 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 47 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
# 48 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyGiftFromDad, MSGBOX_DEFAULT
# 49 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_SLAKITE
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_TYRANITARITE
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_SALAMENCITE
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_GARCHOMPITE
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_METAGROSSITE
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyTicketsFromDad, MSGBOX_DEFAULT
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_EON_TICKET
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
# 58 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_ENABLE_SHIP_SOUTHERN_ISLAND
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_WALLY_ENTRANCE
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 66 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 30
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
	waitfanfare
# 72 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 30
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 76 "data/maps/VictoryRoad_1F/scripts.pory"

# 77 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 78 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 79 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 83 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 84 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 88 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 89 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 90 "data/maps/VictoryRoad_1F/scripts.pory"

# 91 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 92 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 93 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 94 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 95 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 96 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 97 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 98 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 100 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 101 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 102 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 103 "data/maps/VictoryRoad_1F/scripts.pory"

# 104 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 105 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 106 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 107 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 108 "data/maps/VictoryRoad_1F/scripts.pory"

# 109 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 111 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 112 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
# 114 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 116 "data/maps/VictoryRoad_1F/scripts.pory"

# 117 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 121 "data/maps/VictoryRoad_1F/scripts.pory"

# 122 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar::
# 123 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 126 "data/maps/VictoryRoad_1F/scripts.pory"

# 127 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 128 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 129 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 131 "data/maps/VictoryRoad_1F/scripts.pory"

# 132 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 133 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 134 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 136 "data/maps/VictoryRoad_1F/scripts.pory"

# 137 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 138 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 139 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 141 "data/maps/VictoryRoad_1F/scripts.pory"

# 142 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 143 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 144 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 146 "data/maps/VictoryRoad_1F/scripts.pory"

# 147 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}！你来了！我一直\n"
# 149 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "在这儿四处转着多训练，\l"
# 150 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "就知道你早晚\l"
# 151 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "会出现。\p"
# 152 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "在紫堇和110号道路\n"
# 153 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "被你打败后，我才\l"
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "明白自己多弱，\l"
# 155 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "对宝可梦了解\l"
# 156 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "多浅……\p"
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "从那以后，我变得强了\n"
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "好多。\p"
# 159 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我拼命训练，希望有一天\n"
# 160 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "打败你，甚至把丰缘\l"
# 161 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "所有道馆馆主都\l"
# 162 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "打赢了！\p"
# 163 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "可是，去宝可梦联盟\n"
# 164 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "之前，我还有一个\l"
# 165 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "目标……\p"
# 166 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我必须打败你！\n"
# 167 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}！\p"
# 168 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "是你激励我变强的，\n"
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "现在就让你看看\l"
# 170 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我努力的结果！$"
# 171 "data/maps/VictoryRoad_1F/scripts.pory"

# 172 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat:
# 173 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我练了这么久，还是\n"
# 174 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "不够……可我\l"
# 175 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "不会放弃！我会\l"
# 176 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "一直练到能打赢你！$"
# 177 "data/maps/VictoryRoad_1F/scripts.pory"

# 178 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle:
# 179 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "这次我也没能\n"
# 180 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "打赢你……\p"
# 181 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "可总有一天，{PLAYER}，\n"
# 182 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我会追上你。\p"
# 183 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "然后去挑战宝可梦\n"
# 184 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "联盟！$"
# 185 "data/maps/VictoryRoad_1F/scripts.pory"

# 186 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyGiftFromDad:
# 187 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "这一战真棒，不过我还\n"
# 188 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "明显有很多要学……\p"
# 189 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "哦！我刚想起来，你爸爸\n"
# 190 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "托我带了个包裹，\l"
# 191 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "里面有些东西给你，\l"
# 192 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}。\p"
# 193 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "他说很抱歉在你打败他\n"
# 194 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "的时候没准备好那颗\l"
# 195 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "超级石，所以加了\l"
# 196 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "几样东西补偿。\p"
# 197 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "给你，{PLAYER}。$"
# 198 "data/maps/VictoryRoad_1F/scripts.pory"

# 199 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyTicketsFromDad:
# 200 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "哦我差点忘了，他还\n"
# 201 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "让我把这个也给你。\p"
# 202 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我不确定这些票会带你\n"
# 203 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "去哪儿，不过你爸说\l"
# 204 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "你可以去水静市的港口\l"
# 205 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "用这些票。$"
# 206 "data/maps/VictoryRoad_1F/scripts.pory"

# 207 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro:
# 208 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "嗨！{PLAYER}！\p"
# 209 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "上次之后我变强了！\n"
# 210 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我想让你看看，\l"
# 211 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}！\p"
# 212 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "好……我来了！$"
# 213 "data/maps/VictoryRoad_1F/scripts.pory"

# 214 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat:
# 215 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "哇！\n"
# 216 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}，你果然很强！$"
# 217 "data/maps/VictoryRoad_1F/scripts.pory"

# 218 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle:
# 219 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "这次我也没能\n"
# 220 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "打赢你……可总有一天，\l"
# 221 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}，我会追上你……\p"
# 222 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "然后去挑战宝可梦\n"
# 223 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "联盟！$"
# 224 "data/maps/VictoryRoad_1F/scripts.pory"

# 225 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro:
# 226 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我到这里已经两次了，\n"
# 227 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "可最后那段路\l"
# 228 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "太长了……$"
# 229 "data/maps/VictoryRoad_1F/scripts.pory"

# 230 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat:
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我的梦想又在这里\n"
# 232 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "结束了……$"
# 233 "data/maps/VictoryRoad_1F/scripts.pory"

# 234 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle:
# 235 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "你都走到这儿了。保持\n"
# 236 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "这股劲，成为\l"
# 237 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "冠军吧！要是有人\l"
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "行，那就是你！$"
# 239 "data/maps/VictoryRoad_1F/scripts.pory"

# 240 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro:
# 241 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我大老远来，可不是\n"
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "为了现在输。那种\l"
# 243 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "可能不存在！$"
# 244 "data/maps/VictoryRoad_1F/scripts.pory"

# 245 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat:
# 246 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "不可能……\n"
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我输了？$"
# 248 "data/maps/VictoryRoad_1F/scripts.pory"

# 249 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle:
# 250 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我在这里输了……\p"
# 251 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "这说明我缺少成为\n"
# 252 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "冠军的资格……$"
# 253 "data/maps/VictoryRoad_1F/scripts.pory"

# 254 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro:
# 255 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "这条看起来无尽又艰辛\n"
# 256 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "的路，真配得上\l"
# 257 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "“胜利”之名。$"
# 258 "data/maps/VictoryRoad_1F/scripts.pory"

# 259 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat:
# 260 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "你的战斗方式\n"
# 261 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "真了不起……$"
# 262 "data/maps/VictoryRoad_1F/scripts.pory"

# 263 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle:
# 264 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "你好像有成为\n"
# 265 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "冠军的潜力。$"
# 266 "data/maps/VictoryRoad_1F/scripts.pory"

# 267 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro:
# 268 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "冠军之路是什么？\n"
# 269 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "你赢了我就告诉你！$"
# 270 "data/maps/VictoryRoad_1F/scripts.pory"

# 271 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat:
# 272 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "好！\n"
# 273 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "干得好！$"
# 274 "data/maps/VictoryRoad_1F/scripts.pory"

# 275 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle:
# 276 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "平安通过这里——\n"
# 277 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "这就是对所有想成为\l"
# 278 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "宝可梦冠军的训练家\l"
# 279 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "的最后考验。\p"
# 280 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "所以它才叫\n"
# 281 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "冠军之路。$"
# 282 "data/maps/VictoryRoad_1F/scripts.pory"

# 283 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro:
# 284 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "对走到这里的人，\n"
# 285 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我没什么好说的。\l"
# 286 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "来吧！$"
# 287 "data/maps/VictoryRoad_1F/scripts.pory"

# 288 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat:
# 289 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "真丢脸……$"
# 290 "data/maps/VictoryRoad_1F/scripts.pory"

# 291 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle:
# 292 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "哼，你尽管往前走吧。\n"
# 293 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我才不在乎。$"

VictoryRoad_1F_EventScript_PowerfulMonSummoner::
# 298 "data/maps/VictoryRoad_1F/scripts.pory"
	lock
# 299 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 300 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, VictoryRoad_1F_EventScript_PowerfulMonSummoner_2
# 306 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_SummonerIntro, MSGBOX_YESNO
VictoryRoad_1F_EventScript_PowerfulMonSummoner_1:
# 309 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 311 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq VictoryRoad_1F_EventScript_PowerfulMonSummoner_6
VictoryRoad_1F_EventScript_PowerfulMonSummoner_5:
# 316 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_ChooseRoom
# 317 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end

VictoryRoad_1F_EventScript_PowerfulMonSummoner_2:
# 302 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_SummonerIntroQuick, MSGBOX_YESNO
	goto VictoryRoad_1F_EventScript_PowerfulMonSummoner_1

VictoryRoad_1F_EventScript_PowerfulMonSummoner_6:
# 313 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_SummonWomanManNo
	goto VictoryRoad_1F_EventScript_PowerfulMonSummoner_5


VictoryRoad_1F_EventScript_ChooseRoom::
# 322 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WhichRoom, MSGBOX_DEFAULT
# 324 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseRoom_Text_0, 0
# 325 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseRoom_Text_1, 1
# 326 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseRoom_Text_2, 2
# 327 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_ChooseRoom_Text_3, MULTI_B_PRESSED
# 331 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 333 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq VictoryRoad_1F_EventScript_ChooseRoom_2
VictoryRoad_1F_EventScript_ChooseRoom_1:
# 338 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VictoryRoad_1F_EventScript_ChooseRoom_5
VictoryRoad_1F_EventScript_ChooseRoom_4:
# 342 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VictoryRoad_1F_EventScript_ChooseRoom_8
VictoryRoad_1F_EventScript_ChooseRoom_7:
# 346 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq VictoryRoad_1F_EventScript_ChooseRoom_11
VictoryRoad_1F_EventScript_ChooseRoom_10:
# 351 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end

VictoryRoad_1F_EventScript_ChooseRoom_2:
# 335 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_SummonWomanManNo
	goto VictoryRoad_1F_EventScript_ChooseRoom_1

VictoryRoad_1F_EventScript_ChooseRoom_5:
# 340 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_EntranceRoom
	goto VictoryRoad_1F_EventScript_ChooseRoom_4

VictoryRoad_1F_EventScript_ChooseRoom_8:
# 344 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_InnerRoom
	goto VictoryRoad_1F_EventScript_ChooseRoom_7

VictoryRoad_1F_EventScript_ChooseRoom_11:
# 348 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_StairsRoom
	goto VictoryRoad_1F_EventScript_ChooseRoom_10


VictoryRoad_1F_EventScript_EntranceRoom::
# 356 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WhichPokemon, MSGBOX_DEFAULT
# 358 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_0, SPECIES_GREAT_TUSK
# 359 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_1, SPECIES_SCREAM_TAIL
# 360 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_2, SPECIES_BRUTE_BONNET
# 361 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_3, SPECIES_FLUTTER_MANE
# 362 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_4, SPECIES_SLITHER_WING
# 363 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_5, SPECIES_SANDY_SHOCKS
# 364 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_6, SPECIES_ROARING_MOON
# 365 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_7, SPECIES_WALKING_WAKE
# 366 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_8, SPECIES_GOUGING_FIRE
# 367 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_9, SPECIES_RAGING_BOLT
# 368 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_10, MULTI_B_PRESSED
# 372 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_GREAT_TUSK, DYN_MULTICHOICE_CB_NONE
# 374 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq VictoryRoad_1F_EventScript_EntranceRoom_2
VictoryRoad_1F_EventScript_EntranceRoom_1:
# 379 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_ConfirmAndUseSummon
# 381 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end

VictoryRoad_1F_EventScript_EntranceRoom_2:
# 376 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_ChooseRoom
	goto VictoryRoad_1F_EventScript_EntranceRoom_1


VictoryRoad_1F_EventScript_InnerRoom::
# 387 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WhichPokemon, MSGBOX_DEFAULT
# 389 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_InnerRoom_Text_0, SPECIES_IRON_TREADS
# 390 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_InnerRoom_Text_1, SPECIES_IRON_BUNDLE
# 391 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_InnerRoom_Text_2, SPECIES_IRON_HANDS
# 392 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_InnerRoom_Text_3, SPECIES_IRON_JUGULIS
# 393 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_InnerRoom_Text_4, SPECIES_IRON_MOTH
# 394 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_InnerRoom_Text_5, SPECIES_IRON_THORNS
# 395 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_InnerRoom_Text_6, SPECIES_IRON_VALIANT
# 396 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_InnerRoom_Text_7, SPECIES_IRON_LEAVES
# 397 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_InnerRoom_Text_8, SPECIES_IRON_BOULDER
# 398 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_InnerRoom_Text_9, SPECIES_IRON_CROWN
# 399 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_10, MULTI_B_PRESSED
# 403 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_IRON_TREADS, DYN_MULTICHOICE_CB_NONE
# 405 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq VictoryRoad_1F_EventScript_InnerRoom_2
VictoryRoad_1F_EventScript_InnerRoom_1:
# 410 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_ConfirmAndUseSummon
# 412 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end

VictoryRoad_1F_EventScript_InnerRoom_2:
# 407 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_ChooseRoom
	goto VictoryRoad_1F_EventScript_InnerRoom_1


VictoryRoad_1F_EventScript_StairsRoom::
# 418 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WhichPokemon, MSGBOX_DEFAULT
# 420 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_StairsRoom_Text_0, SPECIES_NIHILEGO
# 421 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_StairsRoom_Text_1, SPECIES_GUZZLORD
# 422 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_StairsRoom_Text_2, SPECIES_XURKITREE
# 423 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_StairsRoom_Text_3, SPECIES_BUZZWOLE
# 424 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_StairsRoom_Text_4, SPECIES_BLACEPHALON
# 425 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_StairsRoom_Text_5, SPECIES_STAKATAKA
# 426 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_StairsRoom_Text_6, SPECIES_POIPOLE
# 427 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_StairsRoom_Text_7, SPECIES_PHEROMOSA
# 428 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_StairsRoom_Text_8, SPECIES_CELESTEELA
# 429 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_StairsRoom_Text_9, SPECIES_KARTANA
# 430 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultipush VictoryRoad_1F_EventScript_EntranceRoom_Text_10, MULTI_B_PRESSED
# 434 "data/maps/VictoryRoad_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_NIHILEGO, DYN_MULTICHOICE_CB_NONE
# 436 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq VictoryRoad_1F_EventScript_StairsRoom_2
VictoryRoad_1F_EventScript_StairsRoom_1:
# 441 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_ConfirmAndUseSummon
# 443 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end

VictoryRoad_1F_EventScript_StairsRoom_2:
# 438 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_ChooseRoom
	goto VictoryRoad_1F_EventScript_StairsRoom_1


VictoryRoad_1F_EventScript_ConfirmAndUseSummon::
# 450 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 451 "data/maps/VictoryRoad_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8005
# 452 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_ConfirmSummon, MSGBOX_YESNO
# 454 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq VictoryRoad_1F_EventScript_ConfirmAndUseSummon_2
VictoryRoad_1F_EventScript_ConfirmAndUseSummon_1:
# 459 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_VeryWell, MSGBOX_DEFAULT
# 460 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 30
# 462 "data/maps/VictoryRoad_1F/scripts.pory"
	setwildbattle VAR_0x8005, 50
# 463 "data/maps/VictoryRoad_1F/scripts.pory"
	waitse
# 464 "data/maps/VictoryRoad_1F/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_ENCOUNTER
# 465 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 40
# 466 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmoncry
# 467 "data/maps/VictoryRoad_1F/scripts.pory"
	dowildbattle
# 468 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end

VictoryRoad_1F_EventScript_ConfirmAndUseSummon_2:
# 456 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_SummonWomanManNo
	goto VictoryRoad_1F_EventScript_ConfirmAndUseSummon_1


VictoryRoad_1F_EventScript_SummonWomanManNo::
# 474 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_SummonWomanDeclined, MSGBOX_DEFAULT
# 475 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end


VictoryRoad_1F_EventScript_ChooseRoom_Text_0:
# 324 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "入口房间$"

VictoryRoad_1F_EventScript_ChooseRoom_Text_1:
# 325 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "内部房间$"

VictoryRoad_1F_EventScript_ChooseRoom_Text_2:
# 326 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "楼梯房间$"

VictoryRoad_1F_EventScript_ChooseRoom_Text_3:
# 327 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "取消$"

VictoryRoad_1F_EventScript_EntranceRoom_Text_0:
# 358 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "雄伟牙$"

VictoryRoad_1F_EventScript_EntranceRoom_Text_1:
# 359 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "吼叫尾$"

VictoryRoad_1F_EventScript_EntranceRoom_Text_2:
# 360 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "猛恶菇$"

VictoryRoad_1F_EventScript_EntranceRoom_Text_3:
# 361 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "振翼发$"

VictoryRoad_1F_EventScript_EntranceRoom_Text_4:
# 362 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "爬地翅$"

VictoryRoad_1F_EventScript_EntranceRoom_Text_5:
# 363 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "沙铁皮$"

VictoryRoad_1F_EventScript_EntranceRoom_Text_6:
# 364 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "轰鸣月$"

VictoryRoad_1F_EventScript_EntranceRoom_Text_7:
# 365 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "波荡水$"

VictoryRoad_1F_EventScript_EntranceRoom_Text_8:
# 366 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "破空焰$"

VictoryRoad_1F_EventScript_EntranceRoom_Text_9:
# 367 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "猛雷鼓$"

VictoryRoad_1F_EventScript_EntranceRoom_Text_10:
# 368 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "返回$"

VictoryRoad_1F_EventScript_InnerRoom_Text_0:
# 389 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "铁辙迹$"

VictoryRoad_1F_EventScript_InnerRoom_Text_1:
# 390 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "铁包袱$"

VictoryRoad_1F_EventScript_InnerRoom_Text_2:
# 391 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "铁臂膀$"

VictoryRoad_1F_EventScript_InnerRoom_Text_3:
# 392 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "铁脖颈$"

VictoryRoad_1F_EventScript_InnerRoom_Text_4:
# 393 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "铁毒蛾$"

VictoryRoad_1F_EventScript_InnerRoom_Text_5:
# 394 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "铁荆棘$"

VictoryRoad_1F_EventScript_InnerRoom_Text_6:
# 395 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "铁武者$"

VictoryRoad_1F_EventScript_InnerRoom_Text_7:
# 396 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "铁叶$"

VictoryRoad_1F_EventScript_InnerRoom_Text_8:
# 397 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "铁磐岩$"

VictoryRoad_1F_EventScript_InnerRoom_Text_9:
# 398 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "铁头壳$"

VictoryRoad_1F_EventScript_StairsRoom_Text_0:
# 420 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "虚吾伊德$"

VictoryRoad_1F_EventScript_StairsRoom_Text_1:
# 421 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "恶食大王$"

VictoryRoad_1F_EventScript_StairsRoom_Text_2:
# 422 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "电束木$"

VictoryRoad_1F_EventScript_StairsRoom_Text_3:
# 423 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "爆肌蚊$"

VictoryRoad_1F_EventScript_StairsRoom_Text_4:
# 424 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "砰头小丑$"

VictoryRoad_1F_EventScript_StairsRoom_Text_5:
# 425 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "垒磊石$"

VictoryRoad_1F_EventScript_StairsRoom_Text_6:
# 426 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "毒贝比$"

VictoryRoad_1F_EventScript_StairsRoom_Text_7:
# 427 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "费洛美螂$"

VictoryRoad_1F_EventScript_StairsRoom_Text_8:
# 428 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "铁火辉夜$"

VictoryRoad_1F_EventScript_StairsRoom_Text_9:
# 429 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "纸御剑$"

VictoryRoad_1F_Text_SummonerIntro::
# 480 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "你好，年轻的训练家。\p"
	.string "我来到这个偏僻的地方，\n"
	.string "是因为学会了一门强力的\l"
	.string "技艺，能从这洞穴里几乎\l"
	.string "遥远之处的宝可梦。\p"
	.string "要我把一只宝可梦召唤\n"
	.string "到这儿来和你对战吗？$"

VictoryRoad_1F_Text_SummonerIntroQuick::
# 490 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "要我把一只宝可梦召唤\n"
	.string "到这儿来和你对战吗？$"

VictoryRoad_1F_Text_WhichRoom::
# 495 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "你想让我从哪个房间\n"
	.string "召唤宝可梦？$"

VictoryRoad_1F_Text_WhichPokemon::
# 500 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "你想让我召唤哪只\n"
	.string "宝可梦和你对战？$"

VictoryRoad_1F_Text_ConfirmSummon::
# 505 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "那么，你想让我召唤一只\n"
	.string "{STR_VAR_1}来和你对战吗？$"

VictoryRoad_1F_Text_VeryWell::
# 510 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "很好，做好对战的准备吧。$"

VictoryRoad_1F_SummonWomanDeclined::
# 514 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "我明白了。若你改变主意，\n"
	.string "就告诉我。$"
