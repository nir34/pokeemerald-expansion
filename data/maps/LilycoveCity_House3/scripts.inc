# 1 "data/maps/LilycoveCity_House3/scripts.pory"

# 2 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_MapScripts::
# 3 "data/maps/LilycoveCity_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_House3_OnTransition
# 4 "data/maps/LilycoveCity_House3/scripts.pory"
	.byte 0
# 5 "data/maps/LilycoveCity_House3/scripts.pory"

# 6 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_OnTransition:
# 7 "data/maps/LilycoveCity_House3/scripts.pory"
	random 4
# 8 "data/maps/LilycoveCity_House3/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 9 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_House3/scripts.pory"

# 11 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_PokefanF::
# 12 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 13 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 14 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks, MSGBOX_YESNO
# 15 "data/maps/LilycoveCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_House3_EventScript_DeclinePokeblockLearn
# 16 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_ExplainPokeblocks, MSGBOX_DEFAULT
# 17 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 18 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 19 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 20 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 21 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_House3/scripts.pory"

# 23 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_DeclinePokeblockLearn::
# 24 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_OhAreYouSure, MSGBOX_DEFAULT
# 25 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 26 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 27 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 28 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 29 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 30 "data/maps/LilycoveCity_House3/scripts.pory"

# 31 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_Man::
# 32 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 33 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 34 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_HappyToHaveQuadruplets, MSGBOX_DEFAULT
# 35 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 36 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 37 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 38 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 39 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 40 "data/maps/LilycoveCity_House3/scripts.pory"

# 41 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid1::
# 42 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 43 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 44 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 45 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 46 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 47 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 48 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 49 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 50 "data/maps/LilycoveCity_House3/scripts.pory"

# 51 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid2::
# 52 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 53 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 54 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 55 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 56 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 57 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 58 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 59 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 60 "data/maps/LilycoveCity_House3/scripts.pory"

# 61 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid3::
# 62 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 63 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 64 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 65 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 66 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 67 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 68 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 69 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 70 "data/maps/LilycoveCity_House3/scripts.pory"

# 71 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid4::
# 72 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 73 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 74 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 75 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 76 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 77 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 78 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 79 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 80 "data/maps/LilycoveCity_House3/scripts.pory"

# 81 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereDoingMultiBattle::
# 82 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToWinMultiBattles, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 84 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 85 "data/maps/LilycoveCity_House3/scripts.pory"

# 86 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereMixingRecords::
# 87 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LikeMixingAtRecordCorner, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 89 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 90 "data/maps/LilycoveCity_House3/scripts.pory"

# 91 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereBlendingBerries::
# 92 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender, MSGBOX_DEFAULT
# 93 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 94 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 95 "data/maps/LilycoveCity_House3/scripts.pory"

# 96 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereDoingContest::
# 97 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToEnterContest, MSGBOX_DEFAULT
# 98 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 99 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_House3/scripts.pory"

# 101 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks:
# 102 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "哎呀哎呀！你一个人\n"
# 103 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "旅行？可你还这么小！\l"
# 104 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "真了不起！\p"
# 105 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "我的孩子们肯定能\n"
# 106 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "从你身上学到东西！\p"
# 107 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "我？我可是宝可方块\n"
# 108 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "大师。\p"
# 109 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "只要我稍微认真一点，\n"
# 110 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "就能做出很棒的宝可方块。\p"
# 111 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "你想跟宝可方块大师\n"
# 112 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "学一学吗？$"
# 113 "data/maps/LilycoveCity_House3/scripts.pory"

# 114 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_OhAreYouSure:
# 115 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "哦？你确定吗？\p"
# 116 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "亲爱的，什么事都别\n"
# 117 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "总想一个人扛着！$"
# 118 "data/maps/LilycoveCity_House3/scripts.pory"

# 119 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_ExplainPokeblocks:
# 120 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "哦，好！你是个聪明人！\n"
# 121 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "这个有点长，听好了！\p"
# 122 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "准备好了吗？\p"
# 123 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "你看宝可方块，会看到\n"
# 124 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "它们按口感打分。\p"
# 125 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "口感评分越低越好。\n"
# 126 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "别忘了！\p"
# 127 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "好的宝可方块口感低、\n"
# 128 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "等级高。\p"
# 129 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "宝可梦能比普通宝可\n"
# 130 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "方块吃得下更多好的。\p"
# 131 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "还有，这很重要。\p"
# 132 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "想做顺滑的宝可方块，\n"
# 133 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "要用不同种类的树果。\p"
# 134 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "别小气——树果的种类\n"
# 135 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "会影响宝可方块的顺滑度。\p"
# 136 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "还有一件事。\p"
# 137 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "一起搅拌的人越多，\n"
# 138 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "宝可方块就越顺滑。\p"
# 139 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "所以你该多和别人\n"
# 140 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "一起做宝可方块。\p"
# 141 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "做好宝可方块要知道\n"
# 142 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "的大概就这些。\p"
# 143 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "要是大家都有心爱的\n"
# 144 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "宝可梦、顺滑的宝可方块\l"
# 145 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "和温馨的家，\l"
# 146 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "世界会更幸福。\p"
# 147 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "别放弃，亲爱的！$"
# 148 "data/maps/LilycoveCity_House3/scripts.pory"

# 149 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_HappyToHaveQuadruplets:
# 150 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "我妻子生下四胞胎的\n"
# 151 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "时候，我可真吓到了。\p"
# 152 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "可现在看他们一起玩，\n"
# 153 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "我很幸福。$"
# 154 "data/maps/LilycoveCity_House3/scripts.pory"

# 155 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_GoingToWinMultiBattles:
# 156 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "我们要打多人对战，\n"
# 157 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "可我知道我会赢。$"
# 158 "data/maps/LilycoveCity_House3/scripts.pory"

# 159 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_LikeMixingAtRecordCorner:
# 160 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "我们喜欢在记录角落\n"
# 161 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "混搭东西。\p"
# 162 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "可混搭的到底是什么呢？$"
# 163 "data/maps/LilycoveCity_House3/scripts.pory"

# 164 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender:
# 165 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "我们要用宝可方块\n"
# 166 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "混合器做超棒的宝可方块！$"
# 167 "data/maps/LilycoveCity_House3/scripts.pory"

# 168 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_GoingToEnterContest:
# 169 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "我想炫耀我的宝可梦\n"
# 170 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "有多强，所以我们\l"
# 171 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "要一起参加大赛。$"
