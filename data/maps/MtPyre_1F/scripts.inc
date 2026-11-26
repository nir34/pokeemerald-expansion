# 1 "data/maps/MtPyre_1F/scripts.pory"

# 2 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_MapScripts::
# 3 "data/maps/MtPyre_1F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_1F/scripts.pory"

# 5 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman::
# 6 "data/maps/MtPyre_1F/scripts.pory"
	lock
# 7 "data/maps/MtPyre_1F/scripts.pory"
	faceplayer
# 8 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
# 9 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
# 10 "data/maps/MtPyre_1F/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 11 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 12 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_RECEIVED_CLEANSE_TAG
# 13 "data/maps/MtPyre_1F/scripts.pory"
	release
# 14 "data/maps/MtPyre_1F/scripts.pory"
	end
# 15 "data/maps/MtPyre_1F/scripts.pory"

# 16 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_ReceivedCleanseTag::
# 17 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
# 18 "data/maps/MtPyre_1F/scripts.pory"
	release
# 19 "data/maps/MtPyre_1F/scripts.pory"
	end
# 20 "data/maps/MtPyre_1F/scripts.pory"

# 21 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_PokefanF::
# 22 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
# 23 "data/maps/MtPyre_1F/scripts.pory"
	end
# 24 "data/maps/MtPyre_1F/scripts.pory"

# 25 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Man::
# 26 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
# 27 "data/maps/MtPyre_1F/scripts.pory"
	end
# 28 "data/maps/MtPyre_1F/scripts.pory"

# 29 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_TakeThisForYourOwnGood:
# 30 "data/maps/MtPyre_1F/scripts.pory"
	.string "送神火山的山坡上，什么\n"
# 31 "data/maps/MtPyre_1F/scripts.pory"
	.string "样的家伙都会游荡……\p"
# 32 "data/maps/MtPyre_1F/scripts.pory"
	.string "不知道会碰上什么。\n"
# 33 "data/maps/MtPyre_1F/scripts.pory"
	.string "这个给你，为你好。$"
# 34 "data/maps/MtPyre_1F/scripts.pory"

# 35 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ExplainCleanseTag:
# 36 "data/maps/MtPyre_1F/scripts.pory"
	.string "让宝可梦拿着这枚\n"
# 37 "data/maps/MtPyre_1F/scripts.pory"
	.string "洁净符吧。\p"
# 38 "data/maps/MtPyre_1F/scripts.pory"
	.string "它能帮忙赶走野生\n"
# 39 "data/maps/MtPyre_1F/scripts.pory"
	.string "宝可梦。$"
# 40 "data/maps/MtPyre_1F/scripts.pory"

# 41 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ComeToPayRespects:
# 42 "data/maps/MtPyre_1F/scripts.pory"
	.string "你是来向逝去的宝可梦\n"
# 43 "data/maps/MtPyre_1F/scripts.pory"
	.string "灵魂致敬的吗？\p"
# 44 "data/maps/MtPyre_1F/scripts.pory"
	.string "你一定很爱护\n"
# 45 "data/maps/MtPyre_1F/scripts.pory"
	.string "你的宝可梦。$"
# 46 "data/maps/MtPyre_1F/scripts.pory"

# 47 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_RestingPlaceOfZigzagoon:
# 48 "data/maps/MtPyre_1F/scripts.pory"
	.string "这里是我的宝可梦蛇纹熊\n"
# 49 "data/maps/MtPyre_1F/scripts.pory"
	.string "长眠的地方。我很爱它……$"
