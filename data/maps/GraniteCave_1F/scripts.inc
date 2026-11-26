# 1 "data/maps/GraniteCave_1F/scripts.pory"

# 2 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 3 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0
# 4 "data/maps/GraniteCave_1F/scripts.pory"

# 5 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 8 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 11 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 13 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 15 "data/maps/GraniteCave_1F/scripts.pory"

# 16 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 17 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 20 "data/maps/GraniteCave_1F/scripts.pory"

# 21 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 22 "data/maps/GraniteCave_1F/scripts.pory"
	.string "喂，你。\n"
# 23 "data/maps/GraniteCave_1F/scripts.pory"
	.string "前面变得好黑。\l"
# 24 "data/maps/GraniteCave_1F/scripts.pory"
	.string "要探索可不容易。\p"
# 25 "data/maps/GraniteCave_1F/scripts.pory"
	.string "刚才走过的那个人……\n"
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	.string "我想他叫大吾。\p"
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	.string "他懂得用闪光，\n"
# 28 "data/maps/GraniteCave_1F/scripts.pory"
	.string "所以应该没事，可是……\p"
# 29 "data/maps/GraniteCave_1F/scripts.pory"
	.string "对我们登山者来说，\n"
# 30 "data/maps/GraniteCave_1F/scripts.pory"
	.string "帮助遇到的人就是信条。\p"
# 31 "data/maps/GraniteCave_1F/scripts.pory"
	.string "来，这个给你。$"
# 32 "data/maps/GraniteCave_1F/scripts.pory"

# 33 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 34 "data/maps/GraniteCave_1F/scripts.pory"
	.string "把秘传招式闪光教给\n"
# 35 "data/maps/GraniteCave_1F/scripts.pory"
	.string "一只宝可梦并使用吧。\p"
# 36 "data/maps/GraniteCave_1F/scripts.pory"
	.string "它连洞窟里墨一样的\n"
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	.string "黑暗都能照亮。\p"
# 38 "data/maps/GraniteCave_1F/scripts.pory"
	.string "不过要使用它，你得先拿到\n"
# 39 "data/maps/GraniteCave_1F/scripts.pory"
	.string "武斗宝可梦道馆的徽章。$"
