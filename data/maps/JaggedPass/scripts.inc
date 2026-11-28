# 1 "data/maps/JaggedPass/scripts.pory"

# 2 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_HIDEOUT_GUARD, 5
# 3 "data/maps/JaggedPass/scripts.pory"

# 4 "data/maps/JaggedPass/scripts.pory"
JaggedPass_MapScripts::
# 5 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
# 6 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
# 7 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
# 8 "data/maps/JaggedPass/scripts.pory"
	.byte 0
# 9 "data/maps/JaggedPass/scripts.pory"

# 10 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume:
# 11 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 12 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 0, JaggedPass_EventScript_CheckHasMagmaEmblem
# 13 "data/maps/JaggedPass/scripts.pory"
	end
# 14 "data/maps/JaggedPass/scripts.pory"

# 15 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem::
# 16 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM
# 17 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
# 18 "data/maps/JaggedPass/scripts.pory"
	return
# 19 "data/maps/JaggedPass/scripts.pory"

# 20 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetReadyToOpenHideout::
# 21 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 1
# 22 "data/maps/JaggedPass/scripts.pory"
	return
# 23 "data/maps/JaggedPass/scripts.pory"

# 24 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition:
# 25 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
# 26 "data/maps/JaggedPass/scripts.pory"
	end
# 27 "data/maps/JaggedPass/scripts.pory"

# 28 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherAsh::
# 29 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 30 "data/maps/JaggedPass/scripts.pory"
	doweather
# 31 "data/maps/JaggedPass/scripts.pory"
	return
# 32 "data/maps/JaggedPass/scripts.pory"

# 33 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad:
# 34 "data/maps/JaggedPass/scripts.pory"
	goto_if_le VAR_JAGGED_PASS_STATE, 1, JaggedPass_EventScript_ConcealHideoutEntrance
# 35 "data/maps/JaggedPass/scripts.pory"
	end
# 36 "data/maps/JaggedPass/scripts.pory"

# 37 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ConcealHideoutEntrance::
# 38 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
# 39 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
# 40 "data/maps/JaggedPass/scripts.pory"
	end
# 41 "data/maps/JaggedPass/scripts.pory"

# 42 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout::
# 43 "data/maps/JaggedPass/scripts.pory"
	lockall
# 44 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 45 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 46 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 47 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 48 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 49 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 50 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 51 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 52 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 53 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 54 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 55 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3   @ shake delay
# 56 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 57 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 58 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 59 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 60 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 61 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 62 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 63 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 2
# 64 "data/maps/JaggedPass/scripts.pory"
	waitse
# 65 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 66 "data/maps/JaggedPass/scripts.pory"
	end
# 67 "data/maps/JaggedPass/scripts.pory"

# 68 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard::
# 69 "data/maps/JaggedPass/scripts.pory"
	lockall
# 70 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
# 71 "data/maps/JaggedPass/scripts.pory"
	waitse
# 72 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 73 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 74 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 75 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
# 76 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 77 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 78 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 79 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 80 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 81 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
# 82 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 83 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 84 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 85 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 86 "data/maps/JaggedPass/scripts.pory"
	end
# 87 "data/maps/JaggedPass/scripts.pory"

# 88 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated::
# 89 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 90 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 91 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 92 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 93 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 94 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 95 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 96 "data/maps/JaggedPass/scripts.pory"
	end
# 97 "data/maps/JaggedPass/scripts.pory"

# 98 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric::
# 99 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
# 100 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/JaggedPass/scripts.pory"
	end
# 102 "data/maps/JaggedPass/scripts.pory"

# 103 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana::
# 104 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
# 105 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 106 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_DianaRematch
# 107 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 108 "data/maps/JaggedPass/scripts.pory"
	release
# 109 "data/maps/JaggedPass/scripts.pory"
	end
# 110 "data/maps/JaggedPass/scripts.pory"

# 111 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana::
# 112 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 113 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 114 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 115 "data/maps/JaggedPass/scripts.pory"
	release
# 116 "data/maps/JaggedPass/scripts.pory"
	end
# 117 "data/maps/JaggedPass/scripts.pory"

# 118 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch::
# 119 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 120 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 121 "data/maps/JaggedPass/scripts.pory"
	end
# 122 "data/maps/JaggedPass/scripts.pory"

# 123 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan::
# 124 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 125 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 126 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
# 127 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 128 "data/maps/JaggedPass/scripts.pory"
	release
# 129 "data/maps/JaggedPass/scripts.pory"
	end
# 130 "data/maps/JaggedPass/scripts.pory"

# 131 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan::
# 132 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 133 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 134 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 135 "data/maps/JaggedPass/scripts.pory"
	release
# 136 "data/maps/JaggedPass/scripts.pory"
	end
# 137 "data/maps/JaggedPass/scripts.pory"

# 138 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch::
# 139 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 140 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 141 "data/maps/JaggedPass/scripts.pory"
	end
# 142 "data/maps/JaggedPass/scripts.pory"

# 143 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn::
# 144 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
# 145 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/JaggedPass/scripts.pory"
	end
# 147 "data/maps/JaggedPass/scripts.pory"

# 148 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro:
# 149 "data/maps/JaggedPass/scripts.pory"
	.string "烟囱山的崎岖小径……\p"
# 150 "data/maps/JaggedPass/scripts.pory"
	.string "这才是我一直想要的山。\p"
# 151 "data/maps/JaggedPass/scripts.pory"
	.string "这种崎岖不平……\n"
# 152 "data/maps/JaggedPass/scripts.pory"
	.string "震撼我的灵魂！$"
# 153 "data/maps/JaggedPass/scripts.pory"

# 154 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat:
# 155 "data/maps/JaggedPass/scripts.pory"
	.string "输了真让我不甘心！$"
# 156 "data/maps/JaggedPass/scripts.pory"

# 157 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle:
# 158 "data/maps/JaggedPass/scripts.pory"
	.string "在宝可梦上，我确实\n"
# 159 "data/maps/JaggedPass/scripts.pory"
	.string "输了……\p"
# 160 "data/maps/JaggedPass/scripts.pory"
	.string "可要说到对山的热爱，\n"
# 161 "data/maps/JaggedPass/scripts.pory"
	.string "我可赢过你！$"
# 162 "data/maps/JaggedPass/scripts.pory"

# 163 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro:
# 164 "data/maps/JaggedPass/scripts.pory"
	.string "这地方可不是随便\n"
# 165 "data/maps/JaggedPass/scripts.pory"
	.string "散散步的。\l"
# 166 "data/maps/JaggedPass/scripts.pory"
	.string "也不适合野餐。$"
# 167 "data/maps/JaggedPass/scripts.pory"

# 168 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat:
# 169 "data/maps/JaggedPass/scripts.pory"
	.string "哦哦，不行！\n"
# 170 "data/maps/JaggedPass/scripts.pory"
	.string "地面太颠簸了……$"
# 171 "data/maps/JaggedPass/scripts.pory"

# 172 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle:
# 173 "data/maps/JaggedPass/scripts.pory"
	.string "你知道吗？\p"
# 174 "data/maps/JaggedPass/scripts.pory"
	.string "有些人很厉害，会骑着\n"
# 175 "data/maps/JaggedPass/scripts.pory"
	.string "自行车爬上这条\l"
# 176 "data/maps/JaggedPass/scripts.pory"
	.string "颠得可怕的坡道。$"
# 177 "data/maps/JaggedPass/scripts.pory"

# 178 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister:
# 179 "data/maps/JaggedPass/scripts.pory"
	.string "你还会再来这一带吗？\n"
# 180 "data/maps/JaggedPass/scripts.pory"
	.string "要是再来，我想再打一场。$"
# 181 "data/maps/JaggedPass/scripts.pory"

# 182 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro:
# 183 "data/maps/JaggedPass/scripts.pory"
	.string "不管去哪儿，野餐\n"
# 184 "data/maps/JaggedPass/scripts.pory"
	.string "都很好玩。就像宝可梦！$"
# 185 "data/maps/JaggedPass/scripts.pory"

# 186 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat:
# 187 "data/maps/JaggedPass/scripts.pory"
	.string "我会输只是因为地面\n"
# 188 "data/maps/JaggedPass/scripts.pory"
	.string "太颠簸了！$"
# 189 "data/maps/JaggedPass/scripts.pory"

# 190 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch:
# 191 "data/maps/JaggedPass/scripts.pory"
	.string "我不去想输的事，\n"
# 192 "data/maps/JaggedPass/scripts.pory"
	.string "就享受这趟颠簸的徒步。$"
# 193 "data/maps/JaggedPass/scripts.pory"

# 194 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro:
# 195 "data/maps/JaggedPass/scripts.pory"
	.string "崎岖小径很难走。\n"
# 196 "data/maps/JaggedPass/scripts.pory"
	.string "这里很适合训练。$"
# 197 "data/maps/JaggedPass/scripts.pory"

# 198 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat:
# 199 "data/maps/JaggedPass/scripts.pory"
	.string "我们还在找落脚点，\n"
# 200 "data/maps/JaggedPass/scripts.pory"
	.string "胜负就已经分出来了……$"
# 201 "data/maps/JaggedPass/scripts.pory"

# 202 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle:
# 203 "data/maps/JaggedPass/scripts.pory"
	.string "要是我有技巧自行车，\n"
# 204 "data/maps/JaggedPass/scripts.pory"
	.string "就能跳上台阶了。$"
# 205 "data/maps/JaggedPass/scripts.pory"

# 206 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister:
# 207 "data/maps/JaggedPass/scripts.pory"
	.string "等我更习惯这种颠簸，\n"
# 208 "data/maps/JaggedPass/scripts.pory"
	.string "一定会赢！\p"
# 209 "data/maps/JaggedPass/scripts.pory"
	.string "能把我登录到你的\n"
# 210 "data/maps/JaggedPass/scripts.pory"
	.string "导航里吗？$"
# 211 "data/maps/JaggedPass/scripts.pory"

# 212 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro:
# 213 "data/maps/JaggedPass/scripts.pory"
	.string "我已经习惯这颠簸了。\n"
# 214 "data/maps/JaggedPass/scripts.pory"
	.string "现在爬山时还会唱歌。$"
# 215 "data/maps/JaggedPass/scripts.pory"

# 216 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat:
# 217 "data/maps/JaggedPass/scripts.pory"
	.string "在这颠簸的地面上\n"
# 218 "data/maps/JaggedPass/scripts.pory"
	.string "对战还是不容易……$"
# 219 "data/maps/JaggedPass/scripts.pory"

# 220 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch:
# 221 "data/maps/JaggedPass/scripts.pory"
	.string "我该去紫堇市找莱德尔\n"
# 222 "data/maps/JaggedPass/scripts.pory"
	.string "买辆技巧自行车……$"
# 223 "data/maps/JaggedPass/scripts.pory"

# 224 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro:
# 225 "data/maps/JaggedPass/scripts.pory"
	.string "哇！\n"
# 226 "data/maps/JaggedPass/scripts.pory"
	.string "你在这儿干什么？\p"
# 227 "data/maps/JaggedPass/scripts.pory"
	.string "我在这种地方\n"
# 228 "data/maps/JaggedPass/scripts.pory"
	.string "做什么？\p"
# 229 "data/maps/JaggedPass/scripts.pory"
	.string "关你什么事？$"
# 230 "data/maps/JaggedPass/scripts.pory"

# 231 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat:
# 232 "data/maps/JaggedPass/scripts.pory"
	.string "呃啊……\p"
# 233 "data/maps/JaggedPass/scripts.pory"
	.string "我该马上钻进\n"
# 234 "data/maps/JaggedPass/scripts.pory"
	.string "我们的基地的……$"
# 235 "data/maps/JaggedPass/scripts.pory"

# 236 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant:
# 237 "data/maps/JaggedPass/scripts.pory"
	.string "好好，知道了！\n"
# 238 "data/maps/JaggedPass/scripts.pory"
	.string "我承认——你很强！\p"
# 239 "data/maps/JaggedPass/scripts.pory"
	.string "别管我了。\n"
# 240 "data/maps/JaggedPass/scripts.pory"
	.string "你想去哪儿就去哪儿！$"
# 241 "data/maps/JaggedPass/scripts.pory"

# 242 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem:
# 243 "data/maps/JaggedPass/scripts.pory"
	.string "哦！这块岩石在呼应\n"
# 244 "data/maps/JaggedPass/scripts.pory"
	.string "熔岩徽章而颤动！$"
# 245 "data/maps/JaggedPass/scripts.pory"

# 246 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro:
# 247 "data/maps/JaggedPass/scripts.pory"
	.string "我每天都爬这座山。\n"
# 248 "data/maps/JaggedPass/scripts.pory"
	.string "我对自己的力气有信心！$"
# 249 "data/maps/JaggedPass/scripts.pory"

# 250 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat:
# 251 "data/maps/JaggedPass/scripts.pory"
	.string "嗯……\n"
# 252 "data/maps/JaggedPass/scripts.pory"
	.string "哪里出错了？$"
# 253 "data/maps/JaggedPass/scripts.pory"

# 254 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle:
# 255 "data/maps/JaggedPass/scripts.pory"
	.string "山坡上去一点那奇怪的\n"
# 256 "data/maps/JaggedPass/scripts.pory"
	.string "岩石突起，是什么呢？$"

JaggedPass_EventScript_Maylene::
# 261 "data/maps/JaggedPass/scripts.pory"
	lockall
# 262 "data/maps/JaggedPass/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 263 "data/maps/JaggedPass/scripts.pory"
	goto_if_defeated TRAINER_MAYLENE, JaggedPass_EventScript_MayleneDefeated
# 264 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_TEMP_1, JaggedPass_EventScript_MayleneRequestBattleAgain
# 265 "data/maps/JaggedPass/scripts.pory"
	msgbox Maylene_Greeting, MSGBOX_YESNO
# 266 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_BattleMaylenePrompt
	end


JaggedPass_EventScript_MayleneRequestBattleAgain::
# 271 "data/maps/JaggedPass/scripts.pory"
	msgbox Maylene_ReadyYet, MSGBOX_YESNO
# 272 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_BattleMaylenePrompt
	end


JaggedPass_EventScript_BattleMaylenePrompt::
# 277 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_RESULT, YES, JaggedPass_EventScript_BattleMaylene
# 278 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, NO, JaggedPass_EventScript_DeclineMayleneBattle
# 279 "data/maps/JaggedPass/scripts.pory"
	closemessage
	end


JaggedPass_EventScript_DeclineMayleneBattle::
# 284 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_TEMP_1
# 285 "data/maps/JaggedPass/scripts.pory"
	msgbox Maylene_ComeBackWhenReady, MSGBOX_DEFAULT
# 286 "data/maps/JaggedPass/scripts.pory"
	release
	end


JaggedPass_EventScript_BattleMaylene::
# 291 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_EventScript_BattleMaylene_Text_0, MSGBOX_DEFAULT
# 292 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_no_intro TRAINER_MAYLENE, Maylene_Outro
# 293 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_MayleneGiveItems
	return


JaggedPass_EventScript_MayleneDefeated::
# 299 "data/maps/JaggedPass/scripts.pory"
	msgbox PostBattle_Maylene, MSGBOX_DEFAULT
# 300 "data/maps/JaggedPass/scripts.pory"
	releaseall
	end


JaggedPass_EventScript_MayleneGiveItems::
# 305 "data/maps/JaggedPass/scripts.pory"
	giveitem ITEM_TM_FOCUS_PUNCH
# 306 "data/maps/JaggedPass/scripts.pory"
	giveitem ITEM_TM_FOCUS_BLAST
# 307 "data/maps/JaggedPass/scripts.pory"
	giveitem ITEM_TM_DRAIN_PUNCH
# 308 "data/maps/JaggedPass/scripts.pory"
	giveitem ITEM_TM_BODY_PRESS
# 309 "data/maps/JaggedPass/scripts.pory"
	giveitem ITEM_TM_AURA_SPHERE
# 310 "data/maps/JaggedPass/scripts.pory"
	giveitem ITEM_LUCARIONITE
# 311 "data/maps/JaggedPass/scripts.pory"
	giveitem ITEM_MACHAMPITE
# 312 "data/maps/JaggedPass/scripts.pory"
	giveitem ITEM_EXPERT_BELT
# 313 "data/maps/JaggedPass/scripts.pory"
	msgbox Maylene_ExplainItems
# 314 "data/maps/JaggedPass/scripts.pory"
	release
	end


JaggedPass_EventScript_BattleMaylene_Text_0:
# 291 "data/maps/JaggedPass/scripts.pory"
	.string "来吧！$"

Maylene_Greeting::
# 318 "data/maps/JaggedPass/scripts.pory"
	.string "哎呀呀！终于来了个\n"
	.string "像样的对手？看得出你\l"
	.string "挺强的。\p"
	.string "我叫阿李，从神奥地区\n"
	.string "过来，因为需要\l"
	.string "重新振作训练。\p"
	.string "家乡那边太无趣了，\n"
	.string "所以我来这儿找强手。\p"
	.string "现在，看看我对你的\n"
	.string "直觉准不准！\p"
	.string "怎么样，要不要和\n"
	.string "我打一场？$"

Maylene_ReadyYet::
# 333 "data/maps/JaggedPass/scripts.pory"
	.string "准备好训练了吗？$"

Maylene_ComeBackWhenReady::
# 337 "data/maps/JaggedPass/scripts.pory"
	.string "没关系，我就在这儿训练。$"

Maylene_ExplainItems::
# 341 "data/maps/JaggedPass/scripts.pory"
	.string "那些都是相当强力的\n"
	.string "格斗属性学习器，\l"
	.string "你一定能用得上。\p"
	.string "我还加了几颗我最喜欢的\n"
	.string "超级石。\p"
	.string "最后，达人带能增强\n"
	.string "效果绝佳的\l"
	.string "招式。祝你好运，训练家！$"

Maylene_Outro::
# 352 "data/maps/JaggedPass/scripts.pory"
	.string "我的直觉没错！$"

PostBattle_Maylene::
# 356 "data/maps/JaggedPass/scripts.pory"
	.string "我。要。变强。$"
