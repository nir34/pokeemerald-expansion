# 1 "data/maps/VerdanturfTown/scripts.pory"

# 2 "data/maps/VerdanturfTown/scripts.pory"
.set LOCALID_TWIN, 2
# 3 "data/maps/VerdanturfTown/scripts.pory"

# 4 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 5 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 6 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 7 "data/maps/VerdanturfTown/scripts.pory"

# 8 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 9 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 10 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 11 "data/maps/VerdanturfTown/scripts.pory"
	end
# 12 "data/maps/VerdanturfTown/scripts.pory"

# 13 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 14 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 15 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 16 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
# 17 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 18 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 19 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 20 "data/maps/VerdanturfTown/scripts.pory"
	release
# 21 "data/maps/VerdanturfTown/scripts.pory"
	end
# 22 "data/maps/VerdanturfTown/scripts.pory"

# 23 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 24 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 25 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 26 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 27 "data/maps/VerdanturfTown/scripts.pory"
	release
# 28 "data/maps/VerdanturfTown/scripts.pory"
	end
# 29 "data/maps/VerdanturfTown/scripts.pory"

# 30 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 31 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 32 "data/maps/VerdanturfTown/scripts.pory"
	end
# 33 "data/maps/VerdanturfTown/scripts.pory"

# 34 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 35 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 36 "data/maps/VerdanturfTown/scripts.pory"
	end
# 37 "data/maps/VerdanturfTown/scripts.pory"

# 38 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 39 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 40 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 41 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
# 42 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 43 "data/maps/VerdanturfTown/scripts.pory"
	release
# 44 "data/maps/VerdanturfTown/scripts.pory"
	end
# 45 "data/maps/VerdanturfTown/scripts.pory"

# 46 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 47 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 48 "data/maps/VerdanturfTown/scripts.pory"
	release
# 49 "data/maps/VerdanturfTown/scripts.pory"
	end
# 50 "data/maps/VerdanturfTown/scripts.pory"

# 51 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TownSign::
# 52 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 53 "data/maps/VerdanturfTown/scripts.pory"
	end
# 54 "data/maps/VerdanturfTown/scripts.pory"

# 55 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 56 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 57 "data/maps/VerdanturfTown/scripts.pory"
	end
# 58 "data/maps/VerdanturfTown/scripts.pory"

# 59 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 60 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 61 "data/maps/VerdanturfTown/scripts.pory"
	end
# 62 "data/maps/VerdanturfTown/scripts.pory"

# 63 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 64 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 65 "data/maps/VerdanturfTown/scripts.pory"
	end
# 66 "data/maps/VerdanturfTown/scripts.pory"

# 67 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManTryingToDigTunnel:
# 68 "data/maps/VerdanturfTown/scripts.pory"
	.string "我爸爸告诉我的。\p"
# 69 "data/maps/VerdanturfTown/scripts.pory"
	.string "他说这个隧道里\n"
# 70 "data/maps/VerdanturfTown/scripts.pory"
	.string "住满了胆小的宝可梦。\p"
# 71 "data/maps/VerdanturfTown/scripts.pory"
	.string "它们一听见大声响就害怕，\n"
# 72 "data/maps/VerdanturfTown/scripts.pory"
	.string "会闹得天翻地覆。\p"
# 73 "data/maps/VerdanturfTown/scripts.pory"
	.string "所以那个大隧道工程\n"
# 74 "data/maps/VerdanturfTown/scripts.pory"
	.string "只好停了下来。\p"
# 75 "data/maps/VerdanturfTown/scripts.pory"
	.string "可是有一个人，他现在\n"
# 76 "data/maps/VerdanturfTown/scripts.pory"
	.string "一个人在挖隧道！$"
# 77 "data/maps/VerdanturfTown/scripts.pory"

# 78 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManDugTunnelForLove:
# 79 "data/maps/VerdanturfTown/scripts.pory"
	.string "有个男人为了他爱的\n"
# 80 "data/maps/VerdanturfTown/scripts.pory"
	.string "女人挖了隧道。\p"
# 81 "data/maps/VerdanturfTown/scripts.pory"
	.string "我不太懂，不过嘿！$"
# 82 "data/maps/VerdanturfTown/scripts.pory"

# 83 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_AirCleanHere:
# 84 "data/maps/VerdanturfTown/scripts.pory"
	.string "风是这么吹的，火山灰\n"
# 85 "data/maps/VerdanturfTown/scripts.pory"
	.string "从来不会吹到这个方向。\p"
# 86 "data/maps/VerdanturfTown/scripts.pory"
	.string "这里的空气又干净又香甜。\n"
# 87 "data/maps/VerdanturfTown/scripts.pory"
	.string "住在这里，就算是虚弱\l"
# 88 "data/maps/VerdanturfTown/scripts.pory"
	.string "多病的人也会好起来。$"
# 89 "data/maps/VerdanturfTown/scripts.pory"

# 90 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_MakeBattleTentDebut:
# 91 "data/maps/VerdanturfTown/scripts.pory"
	.string "我和我的宝可梦一直\n"
# 92 "data/maps/VerdanturfTown/scripts.pory"
	.string "连胜不停。\p"
# 93 "data/maps/VerdanturfTown/scripts.pory"
	.string "所以我决定在这个镇子的\n"
# 94 "data/maps/VerdanturfTown/scripts.pory"
	.string "对战帐篷出道。$"
# 95 "data/maps/VerdanturfTown/scripts.pory"

# 96 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_GuyTryingToBustThroughCave:
# 97 "data/maps/VerdanturfTown/scripts.pory"
	.string "你看见宝可梦商店旁边\n"
# 98 "data/maps/VerdanturfTown/scripts.pory"
	.string "那个洞窟了吗？\p"
# 99 "data/maps/VerdanturfTown/scripts.pory"
	.string "里面有个家伙正在砸\n"
# 100 "data/maps/VerdanturfTown/scripts.pory"
	.string "岩石，想打通\l"
# 101 "data/maps/VerdanturfTown/scripts.pory"
	.string "到另一边去。\p"
# 102 "data/maps/VerdanturfTown/scripts.pory"
	.string "要是能过去就太好了……\n"
# 103 "data/maps/VerdanturfTown/scripts.pory"
	.string "去卡那兹市会方便很多。$"
# 104 "data/maps/VerdanturfTown/scripts.pory"

# 105 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_EasyToGetToRustboroNow:
# 106 "data/maps/VerdanturfTown/scripts.pory"
	.string "宝可梦商店旁边的洞窟\n"
# 107 "data/maps/VerdanturfTown/scripts.pory"
	.string "现在已经通到对面了。\p"
# 108 "data/maps/VerdanturfTown/scripts.pory"
	.string "太好了——现在去卡那兹\n"
# 109 "data/maps/VerdanturfTown/scripts.pory"
	.string "买得文的新产品很方便。$"
# 110 "data/maps/VerdanturfTown/scripts.pory"

# 111 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_TownSign:
# 112 "data/maps/VerdanturfTown/scripts.pory"
	.string "绿荫镇\p"
# 113 "data/maps/VerdanturfTown/scripts.pory"
	.string "“风儿吹拂的高地，\n"
# 114 "data/maps/VerdanturfTown/scripts.pory"
	.string "带着青草的甜香。”$"
# 115 "data/maps/VerdanturfTown/scripts.pory"

# 116 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WandasHouse:
# 117 "data/maps/VerdanturfTown/scripts.pory"
	.string "瓦达的家$"
# 118 "data/maps/VerdanturfTown/scripts.pory"

# 119 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_BattleTentSign:
# 120 "data/maps/VerdanturfTown/scripts.pory"
	.string "对战帐篷 绿荫会场\n"
# 121 "data/maps/VerdanturfTown/scripts.pory"
	.string "“尽情欣赏对战吧！”$"
# 122 "data/maps/VerdanturfTown/scripts.pory"

# 123 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_RusturfTunnelSign:
# 124 "data/maps/VerdanturfTown/scripts.pory"
	.string "碎石隧道\n"
# 125 "data/maps/VerdanturfTown/scripts.pory"
	.string "“连接卡那兹与绿荫\p"
# 126 "data/maps/VerdanturfTown/scripts.pory"
	.string "“隧道工程已经\n"
# 127 "data/maps/VerdanturfTown/scripts.pory"
	.string "取消了。”$"
