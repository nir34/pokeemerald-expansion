# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_SUBMARINE, 4
# 4 "data/maps/AquaHideout_B2F/scripts.pory"

# 5 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 6 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 8 "data/maps/AquaHideout_B2F/scripts.pory"

# 9 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition:
# 10 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventArchieNoticing
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 12 "data/maps/AquaHideout_B2F/scripts.pory"

# 13 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventArchieNoticing::
# 14 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 16 "data/maps/AquaHideout_B2F/scripts.pory"

# 17 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_ArchieNoticePlayer::
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_ARCHIE
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 21 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 22 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 23 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 26 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 28 "data/maps/AquaHideout_B2F/scripts.pory"

# 29 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Archie::
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_ARCHIE_HIDEOUT, AquaHideout_B2F_Text_ArchieIntro, AquaHideout_B2F_Text_ArchieDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 31 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 33 "data/maps/AquaHideout_B2F/scripts.pory"

# 34 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_ARCHIE
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_SUBMARINE
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, AquaHideout_B2F_Movement_AquaBoardSub
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8008
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 55 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 30
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	waitfanfare
# 61 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 30
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 65 "data/maps/AquaHideout_B2F/scripts.pory"

# 66 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_AquaBoardSub:
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 69 "data/maps/AquaHideout_B2F/scripts.pory"
	jump_left
# 70 "data/maps/AquaHideout_B2F/scripts.pory"
	set_invisible
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 72 "data/maps/AquaHideout_B2F/scripts.pory"

# 73 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 75 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 79 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 80 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 83 "data/maps/AquaHideout_B2F/scripts.pory"

# 84 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 89 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 91 "data/maps/AquaHideout_B2F/scripts.pory"

# 92 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 93 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 96 "data/maps/AquaHideout_B2F/scripts.pory"

# 97 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 98 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 99 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 101 "data/maps/AquaHideout_B2F/scripts.pory"

# 102 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 103 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 104 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 106 "data/maps/AquaHideout_B2F/scripts.pory"

# 107 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 108 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 111 "data/maps/AquaHideout_B2F/scripts.pory"

# 112 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ArchieIntro:
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "{PLAYER}……\p"
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "没想到你这么快\n"
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "就追上来了。\p"
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "没关系，我们最后的\n"
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "准备已经完成，你\l"
# 118 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "阻止不了我上\l"
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "那艘潜水艇。\p"
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "不过在我走之前，\n"
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "{PLAYER}，我得承认，\l"
# 122 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "我很好奇你作为\l"
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "训练家的实力。\p"
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "你让我的小兵，甚至\n"
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "干部们都很头疼，\l"
# 126 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "所以该让我看看\l"
# 127 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "你是什么样的\l"
# 128 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "训练家了！$"
# 129 "data/maps/AquaHideout_B2F/scripts.pory"

# 130 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ArchieDefeat:
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "这一战真痛快！我看\n"
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "出你这一路是怎么\l"
# 133 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "让我们头疼的了。$"
# 134 "data/maps/AquaHideout_B2F/scripts.pory"

# 135 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "好了，{PLAYER}，看来\n"
# 137 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "我该走了。\l"
# 138 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "很高兴能亲眼看看\l"
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "你是什么样的训练家。\p"
# 140 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "我只希望你能重新考虑\n"
# 141 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "加入我们的事业，\l"
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "我们真的很需要\l"
# 143 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "你这样的人才。\p"
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "{PLAYER}，这是我给你的\n"
# 145 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "最后警告，因为我\l"
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "知道你有训练家的\l"
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "潜力。\p"
# 148 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "如果我们必须再次\n"
# 149 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "作为对手相遇，\l"
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "我不会再手下留情。\p"
# 151 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "我真心希望不会\n"
# 152 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "走到那一步。$"
# 153 "data/maps/AquaHideout_B2F/scripts.pory"

# 154 "data/maps/AquaHideout_B2F/scripts.pory"

# 155 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ArchiePostBattle:
# 156 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "嘿嘿嘿！\p"
# 157 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "我们老大已经去海底\n"
# 158 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "某个洞窟了！\p"
# 159 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "你要追的话，最好去\n"
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "水静市外面那片\l"
# 161 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "广阔的大海找找。\p"
# 162 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "可你找得到吗？\n"
# 163 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "嘿嘿嘿！$"
# 164 "data/maps/AquaHideout_B2F/scripts.pory"

# 165 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 166 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "哇哈哈，我等得都腻了！\n"
# 167 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "你也得陪我打一场！$"
# 168 "data/maps/AquaHideout_B2F/scripts.pory"

# 169 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 170 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "等累了……\n"
# 171 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "输得发晕……$"
# 172 "data/maps/AquaHideout_B2F/scripts.pory"

# 173 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 174 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "老大……\n"
# 175 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "这样够了吗？$"
# 176 "data/maps/AquaHideout_B2F/scripts.pory"

# 177 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 178 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "传送板是我们基地的\n"
# 179 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "骄傲！\p"
# 180 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "你根本不知道自己\n"
# 181 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "在哪儿吧？\p"
# 182 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "把敌人弄晕弄累，\n"
# 183 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "然后一网打尽！\l"
# 184 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "这就是我们的计划！$"
# 185 "data/maps/AquaHideout_B2F/scripts.pory"

# 186 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 187 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "你怎么回事？\n"
# 188 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "一点都不累！$"
# 189 "data/maps/AquaHideout_B2F/scripts.pory"

# 190 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 191 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "说起来……我记不得\n"
# 192 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "把大师球放哪儿了。\p"
# 193 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "要是我没看好它，\n"
# 194 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "老大会骂死我……$"
# 195 "data/maps/AquaHideout_B2F/scripts.pory"

# 196 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 197 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "我加入水舰队时，第一\n"
# 198 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "件要学的就是这些\l"
# 199 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "传送板怎么连通。$"
# 200 "data/maps/AquaHideout_B2F/scripts.pory"

# 201 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 202 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "我光顾着想传送板\n"
# 203 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "的事了……$"
# 204 "data/maps/AquaHideout_B2F/scripts.pory"

# 205 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 206 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "我得学学怎么才能\n"
# 207 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "打得更有效率……$"
