# 1 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 2 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 3 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 4 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 6 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition:
# 7 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 8 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 9 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 10 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 11 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 12 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 13 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 14 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 15 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 16 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 17 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 18 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 19 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 20 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 21 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 22 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 23 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 24 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 25 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 26 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 27 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 28 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 29 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 30 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 31 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 32 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "那个碎石隧道……\p"
# 33 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "一开始我们用最新的\n"
# 34 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "机械和一大队人马\l"
# 35 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "凿穿岩石。可是\l"
# 36 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "我们不得不停下。\p"
# 37 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "因为这样会对这一带的\n"
# 38 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "野生宝可梦造成\l"
# 39 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "不好的影响。\p"
# 40 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "所以我们现在没别的\n"
# 41 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "事，只能在这儿\l"
# 42 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "闲晃。$"
# 43 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 44 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 45 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "有个男人一个人往\n"
# 46 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "秋叶镇挖过去。\l"
# 47 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "他急着打通。\p"
# 48 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "他说要是不用机械、\n"
# 49 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "一点一点挖，就不会\l"
# 50 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "打扰宝可梦，也不会\l"
# 51 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "破坏自然环境。\p"
# 52 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "不知道他挖通了没有。$"
# 53 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 54 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 55 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "要是不走这条隧道去\n"
# 56 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "秋叶镇，你就得渡海去\l"
# 57 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "武斗，坐船到凯那，\l"
# 58 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "再穿过紫堇。$"
# 59 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 60 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 61 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "你听说了吗？通往秋叶\n"
# 62 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "镇的隧道打通了！\p"
# 63 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "有时候，只要你想得\n"
# 64 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "够强烈，梦想真的\l"
# 65 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "会成真。$"
