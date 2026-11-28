# 1 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_MapScripts::
# 3 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Blackboard::
# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 7 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 8 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 9 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 10 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Poison::
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 29 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 30 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Paralysis::
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Sleep::
# 36 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 37 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 39 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Burn::
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 44 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Freeze::
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 55 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
# 56 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 58 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 61 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_RichBoy::
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Lass::
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 77 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher::
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 80 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
# 82 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 127 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 129 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 132 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 142 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott::
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
# 168 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 196 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "黑板上写着战斗中会\n"
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "影响宝可梦的状态变化。$"
# 206 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "你想读哪一项？$"
# 209 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison:
# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦中毒后，\n"
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "会不断损失体力。\p"
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "中毒的效果在战斗结束后\n"
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "仍会持续。\p"
# 215 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "中毒的宝可梦在走路时\n"
# 216 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "体力也会减少。\p"
# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "用解毒药来解毒吧。$"
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦麻痹后，\n"
# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "速度会下降。\p"
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "战斗中有时还会\n"
# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "无法动弹。\p"
# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "麻痹在战斗后仍会持续。\n"
# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "用麻痹药来治好吧。$"
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep:
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦睡着后，\n"
# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "就无法攻击了。\p"
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "它有时会自己醒来，\n"
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "但如果在睡眠中\l"
# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "结束战斗，它会继续睡。\p"
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "用醒睡药叫醒它吧。$"
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn:
# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "灼伤会降低攻击，\n"
# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "还会不断损失体力。\p"
# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "灼伤在战斗后仍会持续。\n"
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "用灼伤药来治好吧。$"
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦被冰冻后，\n"
# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "就完全无法行动了。\p"
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "战斗结束后它仍会\n"
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "保持冰冻。\p"
# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "用解冻药把它解冻吧。$"
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "不用功的学生，\n"
# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "就尝尝我的先制之爪。\p"
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "你是不是好学生，\n"
# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "从你使用这个道具的\l"
# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "方式就能看出来。$"
# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦带着先制之爪，\n"
# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "有时就能加速，\l"
# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "比对手先行动。\p"
# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "还有很多道具是\n"
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "给宝可梦携带的。\p"
# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "光这些就够你\n"
# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "研究好一阵子了！$"
# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_TradingRightNow:
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "我正在和朋友\n"
# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "交换宝可梦。$"
# 267 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 268 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
# 269 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "我一直想要一只橡实果，\n"
# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "终于要得到了！$"
# 271 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 272 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 273 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦能携带道具，\n"
# 274 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "但像伤药、解毒药这种\l"
# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "人造的东西，它不会用。$"
# 276 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 277 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 278 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "你知道有些招式会让\n"
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦混乱吧？\p"
# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "混乱的宝可梦有时会\n"
# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "不由自主地攻击自己。\p"
# 282 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "但只要离开战斗，\n"
# 283 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "它就会恢复正常。$"
# 284 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 285 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
# 286 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦带着树果，\n"
# 287 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "就会自己回复……\p"
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦能带的道具\n"
# 289 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "有很多种……\p"
# 290 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "唉，做笔记真是\n"
# 291 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "太辛苦了……$"
# 292 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 293 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes:
# 294 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "这是这个学生的笔记本……\p"
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦要用精灵球\n"
# 296 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "来捕捉。\p"
# 297 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "训练家最多可以带\n"
# 298 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "六只宝可梦。\p"
# 299 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "训练家就是捕捉、培养\n"
# 300 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦并与它们\l"
# 301 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "对战的人。\p"
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "训练家的使命，就是打倒\n"
# 303 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "在宝可梦道馆里\l"
# 304 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "等待挑战者的强大训练家。$"
# 305 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 306 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
# 307 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "你好？我们以前见过吧？\n"
# 308 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "我想是在橙华市。\p"
# 309 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "让我自我介绍一下。\n"
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "我叫史考特。\p"
# 311 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "我一直在各地旅行，\n"
# 312 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "寻找优秀的训练家。\p"
# 313 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "更准确地说，我在找\n"
# 314 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦对战的高手。\p"
# 315 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "那么，你来这所学校\n"
# 316 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "做什么？你也是训练家吗？\p"
# 317 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "你首先该做的，是让一只\n"
# 318 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦学会居合斩。\p"
# 319 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "如果我没记错，这个镇子上\n"
# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "有人会居合斩。$"
# 321 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 322 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
# 323 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "史考特：嗯……\p"
# 324 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "这里学生的才能水平\n"
# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "还不清楚。不过有潜力。$"
# 326 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 327 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottStoneBadge:
# 328 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "史考特：哦，那是什么？\p"
# 329 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "是岩石徽章吧？\n"
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "这可真了不起。\p"
# 331 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "不过，我倒是很想\n"
# 332 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "看看你的对战。\p"
# 333 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "光看联盟徽章，很难判断\n"
# 334 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "你是什么样的训练家。$"
# 335 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
# 337 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "你好？我们以前见过吧？\n"
# 338 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "我想是在橙华市。\p"
# 339 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "让我自我介绍一下。\n"
# 340 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "我叫史考特。\p"
# 341 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "我一直在各地旅行，\n"
# 342 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "寻找优秀的训练家。\p"
# 343 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "更准确地说，我在找\n"
# 344 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "宝可梦对战的高手。\p"
# 345 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "哦，那是什么？\n"
# 346 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "是岩石徽章吧？\p"
# 347 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "对刚起步的训练家来说，\n"
# 348 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "这可真了不起。\p"
# 349 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "不过，我倒是很想\n"
# 350 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "看看你的对战。\p"
# 351 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "光看联盟徽章，很难判断\n"
# 352 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "你是什么样的训练家。$"
