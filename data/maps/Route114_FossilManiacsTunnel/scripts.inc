# 1 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 2 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
.set LOCALID_FOSSIL_MANIAC, 1
# 3 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 4 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_MapScripts::
# 5 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
# 6 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_OnLoad
# 7 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.byte 0
# 8 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 9 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnTransition:
# 10 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
# 11 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 12 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 13 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac::
# 14 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
# 15 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 17 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 18 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnLoad:
# 19 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_unset FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL, Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass
# 20 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 21 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 22 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass::
# 23 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
# 24 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
# 25 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 26 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 27 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
# 28 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lockall
# 29 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterUp
# 30 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 31 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
# 33 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 2
# 34 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	releaseall
# 35 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 36 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 37 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac::
# 38 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lock
# 39 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	faceplayer
# 40 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
# 41 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 42 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 43 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 44 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 45 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
# 46 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 47 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 48 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 49 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
# 50 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
# 51 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 52 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 53 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 54 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
# 55 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
# 56 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 57 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 59 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_LookInDesertForFossils:
# 60 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "我是化石狂……\n"
# 61 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "我是个爱化石的好人……\p"
# 62 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "你想要化石吗？\p"
# 63 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "可这一带的化石\n"
# 64 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "都是我的……不能给你……\p"
# 65 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "要是实在想化石想得\n"
# 66 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "受不了，就去有岩石\l"
# 67 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "和沙子、可能藏化石的\l"
# 68 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "沙漠里找吧……$"
# 69 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 70 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils:
# 71 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "你找到化石了吧？\n"
# 72 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "真好……真梦幻……\p"
# 73 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "你打算拿那块\n"
# 74 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "化石怎么办？\p"
# 75 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "听说得文正在研究\n"
# 76 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "用化石让宝可梦复活……\p"
# 77 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "我太爱我的化石了，\n"
# 78 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "绝不会做那种事……$"
# 79 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 80 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_FossilsAreWonderful:
# 81 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "化石真是……太美妙了……\n"
# 82 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "真梦幻……$"
# 83 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 84 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_NotSafeThatWay:
# 85 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "哦……\n"
# 86 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "那边不安全……\p"
# 87 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "你看，我正在挖……\n"
# 88 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "结果整面墙塌了……\p"
# 89 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "现在下面好像有个\n"
# 90 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "巨大的洞窟……\p"
# 91 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "不过我没去管，\n"
# 92 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "因为我觉得那里\l"
# 93 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "没有化石……$"
