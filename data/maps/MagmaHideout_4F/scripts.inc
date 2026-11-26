# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON, 1
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_1, 2
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_2, 3
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCAL_ID_COURTNEY, 4
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_TABITHA, 5
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_MAXIE, 6
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON_SLEEPING, 7
# 9 "data/maps/MagmaHideout_4F/scripts.pory"

# 10 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_4F_OnTransition
# 12 "data/maps/MagmaHideout_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MagmaHideout_4F_OnLoad
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 14 "data/maps/MagmaHideout_4F/scripts.pory"

# 15 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_OnTransition:
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_eq VAR_BEAT_MAGMA_BACK_TO_BACK, 1, SetMagmaAdminsPermLoc
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_eq VAR_FOUGHT_AND_LOST_TO_BOSS, 1, AddSleepingGroudon
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 19 "data/maps/MagmaHideout_4F/scripts.pory"

# 20 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_OnLoad:
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_eq VAR_BEAT_MAGMA_BACK_TO_BACK, 1, SetMagmaAdminsPermLoc
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 23 "data/maps/MagmaHideout_4F/scripts.pory"

# 24 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 1
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterDown
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieMasterBall, MSGBOX_DEFAULT
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieCaputredGroudon, MSGBOX_DEFAULT
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceLeft
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_MAXIE
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HACKY_DOUBLE_BATTLE
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_double TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_NotEvenYou, MagmaHideout_4F_Text_MaxieDefeat, MagmaHideout_4F_Text_MaxieDefeat, MagmaHideout_4F_EventScript_MaxieContinued
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 71 "data/maps/MagmaHideout_4F/scripts.pory"

# 72 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxieContinued::
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HACKY_DOUBLE_BATTLE
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_FOUGHT_AND_LOST_TO_BOSS, 2
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceUp
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FaceLeft
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_BEAT_MAXIE_HIDEOUT, 1
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCAL_ID_COURTNEY
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 123 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 124 "data/maps/MagmaHideout_4F/scripts.pory"

# 125 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 132 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 133 "data/maps/MagmaHideout_4F/scripts.pory"

# 134 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 140 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 142 "data/maps/MagmaHideout_4F/scripts.pory"

# 143 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntScared, MSGBOX_NPC
# 145 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 146 "data/maps/MagmaHideout_4F/scripts.pory"

# 147 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntScared2, MSGBOX_NPC
# 149 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 150 "data/maps/MagmaHideout_4F/scripts.pory"

# 151 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_GruntRightThing, MSGBOX_NPC
# 153 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 154 "data/maps/MagmaHideout_4F/scripts.pory"

# 155 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 156 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_NeverStopMaxie, MSGBOX_NPC
# 157 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 158 "data/maps/MagmaHideout_4F/scripts.pory"

# 159 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntScared:
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "我受够了！我不干了！\n"
# 161 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "我不知道马克西在里面\l"
# 162 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "干什么，可他要把\l"
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "整座山压到我们\l"
# 164 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "头上了！$"
# 165 "data/maps/MagmaHideout_4F/scripts.pory"

# 166 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntScared2:
# 167 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "阿尔宙斯保佑，满心\n"
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "慈悲……$"
# 169 "data/maps/MagmaHideout_4F/scripts.pory"

# 170 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_GruntRightThing:
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "真不敢信我又输给你了……$"
# 172 "data/maps/MagmaHideout_4F/scripts.pory"

# 173 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_NeverStopMaxie:
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "你现在永远阻止不了\n"
# 175 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "马克西了。哈哈哈！$"
# 176 "data/maps/MagmaHideout_4F/scripts.pory"

# 177 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "你还没完呢！\n"
# 179 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "别想轻易过我这一关！$"
# 180 "data/maps/MagmaHideout_4F/scripts.pory"

# 181 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "真不敢信我又输给你了……$"
# 183 "data/maps/MagmaHideout_4F/scripts.pory"

# 184 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "科特妮：{PLAYER}现在\n"
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "弱了，塔比莎，\l"
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "收拾他。$"
# 188 "data/maps/MagmaHideout_4F/scripts.pory"

# 189 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "嘿嘿嘿！\n"
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "你都到这儿了，我就告诉你！\p"
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "没错！\n"
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "前面固拉多正在沉睡！\p"
# 194 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "马克西几秒前刚去\n"
# 195 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "找固拉多了！\p"
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "它马上就会醒！\n"
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "嘿嘿！嘿嘿嘿！$"
# 198 "data/maps/MagmaHideout_4F/scripts.pory"

# 199 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "我可能没能打败你，\n"
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "不过我打赌我还是\l"
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "完成了任务……$"
# 203 "data/maps/MagmaHideout_4F/scripts.pory"

# 204 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "……而且你跟我耗时间\n"
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "的时候，马克西应该\l"
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "已经唤醒固拉多了……$"
# 208 "data/maps/MagmaHideout_4F/scripts.pory"

# 209 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "固拉多……\p"
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "你沉睡在岩浆之中，\n"
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "什么都唤不醒你……\p"
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "可这颗红色宝珠……\n"
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "它能唤醒你的原始力量，\l"
# 215 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "对吧？\p"
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "我把红色宝珠带来了。\n"
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "让它的光辉唤醒你！\p"
# 218 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "终于……\n"
# 219 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "你是我的了！$"
# 220 "data/maps/MagmaHideout_4F/scripts.pory"

# 221 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieMasterBall:
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "大师球，去吧！$"
# 223 "data/maps/MagmaHideout_4F/scripts.pory"

# 224 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieCaputredGroudon:
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "好！固拉多是我的了！\n"
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "有这颗红色宝珠释放\l"
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "它的原始力量，谁也\l"
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "阻止不了我……$"
# 229 "data/maps/MagmaHideout_4F/scripts.pory"

# 230 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_NotEvenYou:
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "连你也不行，{PLAYER}。\n"
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "准备好成为原始固拉多\l"
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "可怕力量的\l"
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "第一个见证者吧！$"
# 235 "data/maps/MagmaHideout_4F/scripts.pory"

# 236 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 237 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "马克西：固拉多！\n"
# 238 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "怎么了？\p"
# 239 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "不是蓝色宝珠才是\n"
# 240 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "关键吗？\p"
# 241 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "固拉多！\n"
# 242 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "你去哪儿了……$"
# 243 "data/maps/MagmaHideout_4F/scripts.pory"

# 244 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 245 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "马克西：哦，原来是你？\p"
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "我见过你在各处\n"
# 247 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "不请自来地打探……\p"
# 248 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "我明白了！\n"
# 249 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "你一定耍了什么手段！$"
# 250 "data/maps/MagmaHideout_4F/scripts.pory"

# 251 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 252 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "不！不不不不不！$"
# 253 "data/maps/MagmaHideout_4F/scripts.pory"

# 254 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 255 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "什么？！固拉多从我\n"
# 256 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "大师球里跑了？那不可能！\l"
# 257 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "也许它的力量根本\l"
# 258 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "装不住……\p"
# 259 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "………………\p"
# 260 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "这是不是意味着固拉多\n"
# 261 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "会失控暴走？\p"
# 262 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "………………\p"
# 263 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "这不在我的计划里……\p"
# 264 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "我从没想过会变成这样，\n"
# 265 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "我本想完全控制\l"
# 266 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "固拉多，重塑大地，\l"
# 267 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "可现在……\p"
# 268 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "我得走了，我怕我犯了\n"
# 269 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "一个重大的错误。$"

MagmaHideout_EventScript_MaxieTrigger1::
# 273 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 274 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 275 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachMaxie1
# 276 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 277 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_Maxie
	end


MagmaHideout_EventScript_MaxieTrigger2::
# 281 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 282 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 283 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ApproachMaxie2
# 284 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 285 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_Maxie
	end


ApproachMaxie1::
# 290 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 291 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 292 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


ApproachMaxie2::
# 295 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 296 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 298 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_EventScript_BackToBackTrigger::
# 302 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_EventScript_BackToBackScene
	end


MagmaHideout_EventScript_BackToBackScene::
# 307 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 308 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtTabitha
# 310 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 311 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 312 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox DelayForMaxie
# 314 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 315 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 316 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 317 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 318 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCAL_ID_COURTNEY, Common_Movement_ExclamationMark
# 319 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 320 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCAL_ID_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 322 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 323 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 324 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 325 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox GetThem
# 326 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 327 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCAL_ID_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 328 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox YesSir
# 329 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmessage
# 330 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCAL_ID_COURTNEY, MagmaHideout_Movement_BackToBackGruntApproachPlayer
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtGrunt
# 333 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 334 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_COURTNEY, MagmaHideout_4F_Text_Grunt13Defeat
# 335 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_DEFAULT
# 336 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 337 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCAL_ID_COURTNEY, GruntLost
# 338 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 339 "data/maps/MagmaHideout_4F/scripts.pory"
	copyobjectxytoperm LOCAL_ID_COURTNEY
# 340 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 341 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_Movement_BackToBackTabithaApproachPlayer
# 342 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_LookAtTabitha
# 344 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 345 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox DealWithYouMyself, MSGBOX_DEFAULT
# 346 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaDefeat
# 347 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox ThinkWeDidOurJobs, MSGBOX_DEFAULT
# 348 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 349 "data/maps/MagmaHideout_4F/scripts.pory"
	fadenewbgm MUS_AQUA_MAGMA_HIDEOUT
# 350 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, TabithaLost
# 351 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 352 "data/maps/MagmaHideout_4F/scripts.pory"
	copyobjectxytoperm LOCALID_TABITHA
# 353 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_RIGHT
# 354 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_BEAT_MAGMA_BACK_TO_BACK, 1
# 355 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	end


MagmaHideout_Movement_BackToBackGruntApproachPlayer::
# 360 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 361 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 362 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_LookAtGrunt::
# 367 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 368 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_Movement_BackToBackTabithaApproachPlayer::
# 372 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 373 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


MagmaHideout_LookAtTabitha::
# 377 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 378 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


GruntLost::
# 382 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 383 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 384 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 385 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


TabithaLost::
# 389 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 390 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 391 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 392 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
	return


SetMagmaAdminsPermLoc::
# 428 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCAL_ID_COURTNEY, 38, 24
# 429 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 36, 22
# 430 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_RIGHT
	return


AddSleepingGroudon::
# 434 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP
# 435 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON_SLEEPING
	return


DelayForMaxie::
# 395 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "塔比莎：听好了，科特妮！我们\n"
	.string "得想尽办法拖住\l"
	.string "那个小鬼！\p"
	.string "我们知道{PLAYER}正在赶来这里，\n"
	.string "虽然那些胆小的同伴跑了，\l"
	.string "但我们必须为赤焰\l"
	.string "捕获固拉多争取时间！$"

GetThem::
# 405 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "塔比莎：是{PLAYER}！别傻\n"
	.string "站着，上啊！$"

YesSir::
# 410 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "科特妮：塔比莎，你已经不是\n"
	.string "我的上司了。我们是平级。\p"
	.string "不过为了烟囱山之仇，\n"
	.string "我会把这小鬼揍扁！$"

DealWithYouMyself::
# 417 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "塔比莎：看来这次\n"
	.string "由我来给他最后一击！$"

ThinkWeDidOurJobs::
# 422 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "总觉得我们该做的都做了……你\n"
	.string "感觉到空气中那股强大的气息了吗？$"
