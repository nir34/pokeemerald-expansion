# 1 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
.set LOCALID_MELTAN_BALL, 2
# 4 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 5 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_MapScripts::
# 6 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_StevensHouse_OnLoad
# 7 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_StevensHouse_OnTransition
# 8 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_StevensHouse_OnFrame
# 9 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.byte 0
# 10 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 11 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnLoad:
# 12 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_StevensHouse_EventScript_HideStevensNote
# 13 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 15 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_HideStevensNote::
# 16 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setmetatile 6, 4, METATILE_GenericBuilding_TableEdge, TRUE
# 17 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 18 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 19 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnTransition:
# 20 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_eq VAR_STEVENS_HOUSE_STATE, 2, MossdeepCity_StevensHouse_EventScript_SetStevenPos
# 21 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 23 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SetStevenPos::
# 24 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 6, 5
# 25 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectmovementtype LOCALID_STEVEN, MOVEMENT_TYPE_FACE_UP
# 26 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 27 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 28 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnFrame:
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script_2 VAR_STEVENS_HOUSE_STATE, 1, MossdeepCity_StevensHouse_EventScript_StevenGivesDive
# 30 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.2byte 0
# 31 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 32 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_StevenGivesDive::
# 33 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 34 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 35 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 36 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playse SE_PIN
# 37 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 39 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_Delay48
# 40 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 41 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_StevensHouse_Movement_StevenApproachPlayer
# 42 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 43 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_YouveEarnedHMDive, MSGBOX_DEFAULT
# 44 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	giveitem ITEM_HM_DIVE
# 45 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 46 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 47 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_ExplainDive, MSGBOX_DEFAULT
# 48 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	closemessage
# 49 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	delay 20
# 50 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_StevensHouse_Movement_StevenReturn
# 51 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 52 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 53 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 54 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 55 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 56 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 57 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenApproachPlayer:
# 58 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 59 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 60 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 61 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 62 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 63 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 64 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_down
# 65 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 66 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 67 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenReturn:
# 68 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_up
# 69 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 70 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 71 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 72 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_up
# 73 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 74 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 75 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_MeltanPokeball::
# 76 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 77 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_TakeBallContainingMeltan, MSGBOX_YESNO
# 78 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_LeaveMeltan
# 79 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_GiveMeltan
# 80 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 81 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 82 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_LeaveMeltan::
# 83 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
# 84 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 85 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 86 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 87 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveMeltan::
# 88 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELTAN
# 89 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	givemonrandom SPECIES_MELTAN, 5
# 90 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_StevensHouse_EventScript_SendMeltanParty
# 91 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_StevensHouse_EventScript_SendMeltanPC
# 92 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 93 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 94 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 95 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendMeltanParty::
# 96 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedMeltanFanfare
# 97 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 98 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_ReceivedMeltan
# 99 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 100 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 101 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedMeltan
# 102 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 103 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 104 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendMeltanPC::
# 105 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedMeltanFanfare
# 106 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 107 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_MeltanTransferredToPC
# 108 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 109 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_MeltanTransferredToPC
# 110 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 111 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 112 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_MeltanTransferredToPC::
# 113 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 114 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedMeltan
# 115 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 116 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 117 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedMeltanFanfare::
# 118 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MELTAN
# 119 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removeobject LOCALID_MELTAN_BALL
# 120 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	message MossdeepCity_StevensHouse_Text_ObtainedMeltan
# 122 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmessage
# 123 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitfanfare
# 124 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MELTAN
# 125 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 126 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 127 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedMeltan::
# 128 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
# 129 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 130 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 131 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 132 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 133 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_RockDisplay::
# 134 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_CollectionOfRareRocks, MSGBOX_SIGN
# 135 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 136 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 137 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Steven::
# 138 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, MossdeepCity_StevensHouse_EventScript_StevenBeatMagma
# 139 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_MagmaHideout, MSGBOX_NPC
# 140 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 141 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 142 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_StevenBeatMagma::
# 143 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis, MSGBOX_NPC
# 144 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 145 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 146 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Letter::
# 147 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 148 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LetterFromSteven, MSGBOX_DEFAULT
# 149 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 150 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 151 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 152 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
@ Unused, leftover from RS
# 153 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_DiveItemBall::
# 154 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	finditem ITEM_HM_DIVE
# 155 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 156 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 157 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 158 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_YouveEarnedHMDive:
# 159 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "大吾：{PLAYER}……\p"
# 160 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "如你所见，这里没什么，\n"
# 161 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "但这是我的家。\p"
# 162 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "谢谢你做的一切。\p"
# 163 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "这是我的谢礼。\n"
# 164 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "是秘传学习器潜水。\p"
# 165 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "别客气——这本来就\n"
# 166 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "是你挣来的。$"
# 167 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 168 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ExplainDive:
# 169 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "大吾：用冲浪的时候，\n"
# 170 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "你该会注意到\l"
# 171 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "水面上深色的区域。\p"
# 172 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "到了那种深水，就用\n"
# 173 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "潜水。你会潜到海底。\p"
# 174 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "想上来的时候，\n"
# 175 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "再用一次潜水。\p"
# 176 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "不过有些地方是\n"
# 177 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "浮不上来的。$"
# 178 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 179 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_MagmaHideout:
# 180 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "带着那块熔岩徽记去\n"
# 181 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "崎岖小径，应该会有反应\p"
# 182 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "我不确定是什么。我建议\n"
# 183 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "先去那里，再帮源治\l"
# 184 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "处理水舰队。$"
# 185 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 186 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis:
# 187 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "据说绿岭和琉璃之间\n"
# 188 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "有一条海底洞窟。\p"
# 189 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "就是史登船长在潜水艇里\n"
# 190 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "发现的那个。$"
# 191 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 192 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_TakeBallContainingMeltan:
# 193 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER}查看了精灵球。\p"
# 194 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "里面是宝可梦\n"
# 195 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "美录坦。\p"
# 196 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "要拿走精灵球吗？$"
# 197 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 198 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ObtainedMeltan:
# 199 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER}得到了美录坦。$"
# 200 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 201 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
@ Unused
# 202 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon:
# 203 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "没有空位再带\n"
# 204 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "一只宝可梦了。$"
# 205 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 206 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas:
# 207 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER}把精灵球\n"
# 208 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "放回了原处。$"
# 209 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 210 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LetterFromSteven:
# 211 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "是一封信。\p"
# 212 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "… … … … … …\p"
# 213 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "致{PLAYER}……\p"
# 214 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "我决定好好想想人生，\n"
# 215 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "在路上修行一阵子。\p"
# 216 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "有一段时间不打算\n"
# 217 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "回家。\p"
# 218 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "有件事想拜托你。\p"
# 219 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "桌上那颗精灵球，\n"
# 220 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "请你拿走。\p"
# 221 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "里面是非常强的宝可梦，\n"
# 222 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "美录坦。\p"
# 223 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "拜托你了。\p"
# 224 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "愿我们有一天\n"
# 225 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "再相遇。\p"
# 226 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "兹伏奇·大吾$"
# 227 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 228 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_CollectionOfRareRocks:
# 229 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "这是大吾收集的\n"
# 230 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "稀有石头和矿石收藏。$"
