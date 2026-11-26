# 1 "data/maps/Route118/scripts.pory"

# 2 "data/maps/Route118/scripts.pory"
.set LOCALID_STEVEN, 19
# 3 "data/maps/Route118/scripts.pory"
.set LOCALID_WAKE, 22
# 4 "data/maps/Route118/scripts.pory"

# 5 "data/maps/Route118/scripts.pory"
Route118_MapScripts::
# 6 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
# 7 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
# 8 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
# 9 "data/maps/Route118/scripts.pory"
	.byte 0
# 10 "data/maps/Route118/scripts.pory"

# 11 "data/maps/Route118/scripts.pory"
Route118_OnTransition:
# 12 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 13 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 14 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
# 15 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
# 16 "data/maps/Route118/scripts.pory"
	end
# 17 "data/maps/Route118/scripts.pory"

# 18 "data/maps/Route118/scripts.pory"
Route118_OnLoad:
# 19 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_EventScript_PlaceTilesRoute118East
# 20 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_EventScript_PlaceTilesRoute118West
# 21 "data/maps/Route118/scripts.pory"
	end
# 22 "data/maps/Route118/scripts.pory"

# 23 "data/maps/Route118/scripts.pory"
Route118_OnFrame:
# 24 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 25 "data/maps/Route118/scripts.pory"
	.2byte 0
# 26 "data/maps/Route118/scripts.pory"

# 27 "data/maps/Route118/scripts.pory"
Route118_EventScript_FormerGoodRodFisherman::
# 28 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_FormerGoodRod, MSGBOX_NPC
# 29 "data/maps/Route118/scripts.pory"
	end
# 30 "data/maps/Route118/scripts.pory"

# 31 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 32 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 33 "data/maps/Route118/scripts.pory"
	end
# 34 "data/maps/Route118/scripts.pory"

# 35 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 36 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 37 "data/maps/Route118/scripts.pory"
	end
# 38 "data/maps/Route118/scripts.pory"

# 39 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 40 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 41 "data/maps/Route118/scripts.pory"
	end
# 42 "data/maps/Route118/scripts.pory"

# 43 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0::
# 44 "data/maps/Route118/scripts.pory"
	lockall
# 45 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 46 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 47 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge0
# 49 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 51 "data/maps/Route118/scripts.pory"
	end
# 52 "data/maps/Route118/scripts.pory"

# 53 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1::
# 54 "data/maps/Route118/scripts.pory"
	lockall
# 55 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 56 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 57 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 59 "data/maps/Route118/scripts.pory"
	end
# 60 "data/maps/Route118/scripts.pory"

# 61 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2::
# 62 "data/maps/Route118/scripts.pory"
	lockall
# 63 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 64 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 65 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge2
# 67 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 69 "data/maps/Route118/scripts.pory"
	end
# 70 "data/maps/Route118/scripts.pory"

# 71 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger::
# 72 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 73 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedge
# 74 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route118/scripts.pory"
	delay 30
# 76 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 77 "data/maps/Route118/scripts.pory"
	closemessage
# 78 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route118_EventScript_StevenExit0
# 79 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route118_EventScript_StevenExit1
# 80 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route118_EventScript_StevenExit2
# 81 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 82 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 83 "data/maps/Route118/scripts.pory"
	releaseall
# 84 "data/maps/Route118/scripts.pory"
	end
# 85 "data/maps/Route118/scripts.pory"

# 86 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 87 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 88 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit0
# 89 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route118/scripts.pory"
	return
# 91 "data/maps/Route118/scripts.pory"

# 92 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 93 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 94 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit1
# 95 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route118/scripts.pory"
	return
# 97 "data/maps/Route118/scripts.pory"

# 98 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 99 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 100 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit2
# 101 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route118/scripts.pory"
	return
# 103 "data/maps/Route118/scripts.pory"

# 104 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 105 "data/maps/Route118/scripts.pory"
	delay_16
# 106 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 107 "data/maps/Route118/scripts.pory"
	step_end
# 108 "data/maps/Route118/scripts.pory"

# 109 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge0:
# 110 "data/maps/Route118/scripts.pory"
	walk_left
# 111 "data/maps/Route118/scripts.pory"
	step_end
# 112 "data/maps/Route118/scripts.pory"

# 113 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge2:
# 114 "data/maps/Route118/scripts.pory"
	walk_right
# 115 "data/maps/Route118/scripts.pory"
	step_end
# 116 "data/maps/Route118/scripts.pory"

# 117 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge:
# 118 "data/maps/Route118/scripts.pory"
	jump_2_down
# 119 "data/maps/Route118/scripts.pory"
	delay_16
# 120 "data/maps/Route118/scripts.pory"
	walk_down
# 121 "data/maps/Route118/scripts.pory"
	step_end
# 122 "data/maps/Route118/scripts.pory"

# 123 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit0:
# 124 "data/maps/Route118/scripts.pory"
	walk_right
# 125 "data/maps/Route118/scripts.pory"
	walk_right
# 126 "data/maps/Route118/scripts.pory"
	walk_right
# 127 "data/maps/Route118/scripts.pory"
	walk_right
# 128 "data/maps/Route118/scripts.pory"
	walk_right
# 129 "data/maps/Route118/scripts.pory"
	walk_right
# 130 "data/maps/Route118/scripts.pory"
	walk_right
# 131 "data/maps/Route118/scripts.pory"
	walk_right
# 132 "data/maps/Route118/scripts.pory"
	walk_right
# 133 "data/maps/Route118/scripts.pory"
	walk_right
# 134 "data/maps/Route118/scripts.pory"
	step_end
# 135 "data/maps/Route118/scripts.pory"

# 136 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit1:
# 137 "data/maps/Route118/scripts.pory"
	walk_right
# 138 "data/maps/Route118/scripts.pory"
	walk_right
# 139 "data/maps/Route118/scripts.pory"
	walk_right
# 140 "data/maps/Route118/scripts.pory"
	walk_right
# 141 "data/maps/Route118/scripts.pory"
	walk_right
# 142 "data/maps/Route118/scripts.pory"
	walk_right
# 143 "data/maps/Route118/scripts.pory"
	walk_right
# 144 "data/maps/Route118/scripts.pory"
	walk_right
# 145 "data/maps/Route118/scripts.pory"
	walk_right
# 146 "data/maps/Route118/scripts.pory"
	step_end
# 147 "data/maps/Route118/scripts.pory"

# 148 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit2:
# 149 "data/maps/Route118/scripts.pory"
	walk_right
# 150 "data/maps/Route118/scripts.pory"
	walk_right
# 151 "data/maps/Route118/scripts.pory"
	walk_right
# 152 "data/maps/Route118/scripts.pory"
	walk_right
# 153 "data/maps/Route118/scripts.pory"
	walk_right
# 154 "data/maps/Route118/scripts.pory"
	walk_right
# 155 "data/maps/Route118/scripts.pory"
	walk_right
# 156 "data/maps/Route118/scripts.pory"
	walk_right
# 157 "data/maps/Route118/scripts.pory"
	step_end
# 158 "data/maps/Route118/scripts.pory"

# 159 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 160 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 161 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 162 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
# 163 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 164 "data/maps/Route118/scripts.pory"
	release
# 165 "data/maps/Route118/scripts.pory"
	end
# 166 "data/maps/Route118/scripts.pory"

# 167 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 168 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 169 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 171 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 172 "data/maps/Route118/scripts.pory"
	release
# 173 "data/maps/Route118/scripts.pory"
	end
# 174 "data/maps/Route118/scripts.pory"

# 175 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 176 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 177 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route118/scripts.pory"
	end
# 179 "data/maps/Route118/scripts.pory"

# 180 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 181 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 182 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 183 "data/maps/Route118/scripts.pory"
	end
# 184 "data/maps/Route118/scripts.pory"

# 185 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 186 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 187 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route118/scripts.pory"
	end
# 189 "data/maps/Route118/scripts.pory"

# 190 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 191 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 192 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 193 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
# 194 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 195 "data/maps/Route118/scripts.pory"
	release
# 196 "data/maps/Route118/scripts.pory"
	end
# 197 "data/maps/Route118/scripts.pory"

# 198 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 199 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 200 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 202 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 203 "data/maps/Route118/scripts.pory"
	release
# 204 "data/maps/Route118/scripts.pory"
	end
# 205 "data/maps/Route118/scripts.pory"

# 206 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 207 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 208 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route118/scripts.pory"
	end
# 210 "data/maps/Route118/scripts.pory"

# 211 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 212 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 213 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route118/scripts.pory"
	end
# 215 "data/maps/Route118/scripts.pory"

# 216 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 217 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 218 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/Route118/scripts.pory"
	end
# 220 "data/maps/Route118/scripts.pory"

# 221 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 222 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 223 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/Route118/scripts.pory"
	end
# 225 "data/maps/Route118/scripts.pory"

# 226 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 227 "data/maps/Route118/scripts.pory"
	.string "{PLAYER}，是我，大吾！\n"
# 228 "data/maps/Route118/scripts.pory"
	.string "我们在武斗附近的\l"
# 229 "data/maps/Route118/scripts.pory"
	.string "洞窟见过，希望你\l"
# 230 "data/maps/Route118/scripts.pory"
	.string "那之后一切都好！\p"
# 231 "data/maps/Route118/scripts.pory"
	.string "很高兴在这儿碰见你。\n"
# 232 "data/maps/Route118/scripts.pory"
	.string "我最近和源治聊过，\l"
# 233 "data/maps/Route118/scripts.pory"
	.string "他说水舰队和熔岩队\l"
# 234 "data/maps/Route118/scripts.pory"
	.string "的坏事越来越多了。\p"
# 235 "data/maps/Route118/scripts.pory"
	.string "他还提到他遇到\n"
# 236 "data/maps/Route118/scripts.pory"
	.string "你好几次，\l"
# 237 "data/maps/Route118/scripts.pory"
	.string "对你一个人就能阻止\l"
# 238 "data/maps/Route118/scripts.pory"
	.string "两个组织非常佩服。\p"
# 239 "data/maps/Route118/scripts.pory"
	.string "我提起这个，是因为\n"
# 240 "data/maps/Route118/scripts.pory"
	.string "有报告说这两个组织\l"
# 241 "data/maps/Route118/scripts.pory"
	.string "又在引发更多骚动。\p"
# 242 "data/maps/Route118/scripts.pory"
	.string "其中之一，据说是要\n"
# 243 "data/maps/Route118/scripts.pory"
	.string "袭击119号道路前面的\l"
# 244 "data/maps/Route118/scripts.pory"
	.string "天气研究所。\p"
# 245 "data/maps/Route118/scripts.pory"
	.string "{PLAYER}，你愿意去\n"
# 246 "data/maps/Route118/scripts.pory"
	.string "调查一下吗？\p"
# 247 "data/maps/Route118/scripts.pory"
	.string "………………\p"
# 248 "data/maps/Route118/scripts.pory"
	.string "太好了，非常感谢！\n"
# 249 "data/maps/Route118/scripts.pory"
	.string "祝你好运，小心点！$"
# 250 "data/maps/Route118/scripts.pory"

# 251 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 252 "data/maps/Route118/scripts.pory"
	.string "就算没有船，只要有一只\n"
# 253 "data/maps/Route118/scripts.pory"
	.string "会冲浪的宝可梦，\l"
# 254 "data/maps/Route118/scripts.pory"
	.string "就能渡河过海。\p"
# 255 "data/maps/Route118/scripts.pory"
	.string "宝可梦真是靠得住！$"
# 256 "data/maps/Route118/scripts.pory"

# 257 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 258 "data/maps/Route118/scripts.pory"
	.string "118号道路\n"
# 259 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} 紫堇市$"
# 260 "data/maps/Route118/scripts.pory"

# 261 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 262 "data/maps/Route118/scripts.pory"
	.string "118号道路\n"
# 263 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} 119号道路$"
# 264 "data/maps/Route118/scripts.pory"

# 265 "data/maps/Route118/scripts.pory"
Route118_Text_FormerGoodRod:
# 266 "data/maps/Route118/scripts.pory"
	.string "嘿，我猜你是来找\n"
# 267 "data/maps/Route118/scripts.pory"
	.string "好钓竿的吧。\p"
# 268 "data/maps/Route118/scripts.pory"
	.string "可惜我把它借给103号\n"
# 269 "data/maps/Route118/scripts.pory"
	.string "道路的朋友了，\l"
# 270 "data/maps/Route118/scripts.pory"
	.string "就在机关屋西边，\l"
# 271 "data/maps/Route118/scripts.pory"
	.string "你肯定能找到他！$"

Route118_EventScript_Wake::
# 276 "data/maps/Route118/scripts.pory"
	lockall
# 277 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_WAKE, Common_Movement_FacePlayer
# 278 "data/maps/Route118/scripts.pory"
	goto_if_defeated TRAINER_WAKE, Route118_EventScript_WakeDefeated
# 279 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route118_EventScript_WakeRequestBattleAgain
# 280 "data/maps/Route118/scripts.pory"
	msgbox Wake_Greeting, MSGBOX_YESNO
# 281 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_BattleWakePrompt
	end


Route118_EventScript_WakeRequestBattleAgain::
# 286 "data/maps/Route118/scripts.pory"
	msgbox Wake_ReadyYet, MSGBOX_YESNO
# 287 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_BattleWakePrompt
	end


Route118_EventScript_BattleWakePrompt::
# 292 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route118_EventScript_BattleWake
# 293 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route118_EventScript_DeclineWakeBattle
# 294 "data/maps/Route118/scripts.pory"
	closemessage
	end


Route118_EventScript_DeclineWakeBattle::
# 299 "data/maps/Route118/scripts.pory"
	setflag FLAG_TEMP_1
# 300 "data/maps/Route118/scripts.pory"
	msgbox Wake_ComeBackWhenReady, MSGBOX_DEFAULT
# 301 "data/maps/Route118/scripts.pory"
	release
	end


Route118_EventScript_BattleWake::
# 306 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_BattleWake_Text_0, MSGBOX_DEFAULT
# 307 "data/maps/Route118/scripts.pory"
	trainerbattle_no_intro TRAINER_WAKE, Wake_Outro
# 308 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_WakeGiveItems
	return


Route118_EventScript_WakeGiveItems::
# 313 "data/maps/Route118/scripts.pory"
	giveitem ITEM_LAPRASITE
# 314 "data/maps/Route118/scripts.pory"
	giveitem ITEM_DREDNAWITE
# 315 "data/maps/Route118/scripts.pory"
	giveitem ITEM_GYARADOSITE
# 316 "data/maps/Route118/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 317 "data/maps/Route118/scripts.pory"
	msgbox Wake_ExplainItems
# 318 "data/maps/Route118/scripts.pory"
	release
	end


Route118_EventScript_WakeDefeated::
# 323 "data/maps/Route118/scripts.pory"
	msgbox PostBattle_Wake, MSGBOX_DEFAULT
# 324 "data/maps/Route118/scripts.pory"
	releaseall
	end


Route118_EventScript_BattleWake_Text_0:
# 306 "data/maps/Route118/scripts.pory"
	.string "咕噜咕噜咕噜咕噜！$"

Wake_Greeting::
# 328 "data/maps/Route118/scripts.pory"
	.string "咕噜咕噜 你要是来打断我训练，\n"
	.string "最好有点要紧事。\p"
	.string "………………\p"
	.string "咕噜咕噜 我是谁？\n"
	.string "当然是极限假面，哈哈！\p"
	.string "我来丰缘地区，是因为\n"
	.string "听说这里有足够多的\l"
	.string "水域可以训练，不过老实说，\l"
	.string "我顶多给7分。\p"
	.string "咕噜咕噜 总之，你要不要\n"
	.string "打一场？$"

Wake_ReadyYet::
# 342 "data/maps/Route118/scripts.pory"
	.string "咕噜咕噜 准备好了吗？$"

Wake_ComeBackWhenReady::
# 346 "data/maps/Route118/scripts.pory"
	.string "咕噜咕噜 随你便。$"

Wake_Outro::
# 350 "data/maps/Route118/scripts.pory"
	.string "哇，打得真痛快。我把这些\n"
	.string "道具交给你很放心。$"

Wake_ExplainItems::
# 355 "data/maps/Route118/scripts.pory"
	.string "那是我最好的超级石。\n"
	.string "希望你能用好它们。$"

PostBattle_Wake::
# 360 "data/maps/Route118/scripts.pory"
	.string "咕噜咕噜 又怎么了？！$"
