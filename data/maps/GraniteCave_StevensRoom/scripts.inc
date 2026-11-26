# 1 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 2 "data/maps/GraniteCave_StevensRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts::
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven::
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_TM_STEEL_WING
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_SITRUS_BERRY, 20
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_HEAL_BALL, 99
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_BERRY_JUICE, 10
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_MOON_STONE, 10
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_THROAT_SPRAY, 10
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_PP_UP, 20
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_IRON_BALL, 10
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_WIDE_LENS, 10
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_HEAT_ROCK, 10
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_DAMP_ROCK, 10
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_SMOOTH_ROCK, 10
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_ICY_ROCK, 10
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitemfast ITEM_LEEK, 10
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ReceivedSeveralItems, MSGBOX_DEFAULT
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "我叫大吾。\p"
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "我对稀有的石头很感兴趣，\n"
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "所以到处旅行。\p"
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "哦？\n"
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "有我的信？$"
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ThankYouTakeThis:
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "大吾：好，谢谢。\n"
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "你特地跑这一趟送来，\l"
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "我得好好谢你。\p"
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "我看看……\n"
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "这个学习器给你。\p"
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "里面是我最喜欢的招式，\n"
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "钢之翼。\p"
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "另外，我还有一些\n"
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "多余的道具，\l"
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "希望它们能派上用场！$"
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "大吾：你的宝可梦看起来\n"
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "相当有实力，希望那些\l"
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "道具能派上用场。\p"
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "我有些多余的文柚果、\n"
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "治愈球、树果汁、月之石、\l"
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "喉咙喷雾、PP提升剂、\l"
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "铁球、广角镜、炽热岩石、\l"
# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "潮湿岩石、平滑岩石、\l"
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "冰冷岩石和粗大葱，\l"
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "都送给你。\p"
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "既然我们认识了，\n"
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "就在彼此的导航里\l"
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "登录一下吧。\p"
# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … … … … …$"
# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven:
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "在宝可梦导航里\n"
# 136 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "登录了大吾。$"
# 137 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "现在，我得赶紧走了。$"
# 140 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_OhBagIsFull:
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "哦，你的背包满了……\n"
# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "那就太遗憾了。$"
