# 1 "data/maps/BattleFrontier_Mart/scripts.pory"

# 2 "data/maps/BattleFrontier_Mart/scripts.pory"
.set LOCALID_OLD_WOMAN, 2
# 3 "data/maps/BattleFrontier_Mart/scripts.pory"

# 4 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_MapScripts::
# 5 "data/maps/BattleFrontier_Mart/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_Mart/scripts.pory"

# 7 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Clerk::
# 8 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/BattleFrontier_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/BattleFrontier_Mart/scripts.pory"
	tmshop BattleFrontier_Mart_Pokemart
# 13 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 14 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 15 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 16 "data/maps/BattleFrontier_Mart/scripts.pory"

# 17 "data/maps/BattleFrontier_Mart/scripts.pory"
	.align 2
# 18 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Pokemart:
# 19 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_STEEL_BEAM
# 20 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_DRACO_BARRAGE
# 21 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TM_MISTY_EXPLOSION
# 22 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NONE
# 23 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 24 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_Mart/scripts.pory"

# 26 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldMan::
# 27 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ChaperonGrandson, MSGBOX_NPC
# 28 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_Mart/scripts.pory"

# 30 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldWoman::
# 31 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 32 "data/maps/BattleFrontier_Mart/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, Common_Movement_FaceDown
# 33 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmovement 0
# 34 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ProteinMakeNiceGift, MSGBOX_DEFAULT
# 35 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 36 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 37 "data/maps/BattleFrontier_Mart/scripts.pory"

# 38 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Boy::
# 39 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_FacilitiesDontAllowItems, MSGBOX_NPC
# 40 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 41 "data/maps/BattleFrontier_Mart/scripts.pory"

# 42 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ChaperonGrandson:
# 43 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "我们是来陪孙子\n"
# 44 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "的。\p"
# 45 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "不过既然来了，就想\n"
# 46 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "买点纪念品。$"
# 47 "data/maps/BattleFrontier_Mart/scripts.pory"

# 48 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ProteinMakeNiceGift:
# 49 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "亲爱的，你看这个怎么样？\n"
# 50 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "拿来当礼物不错吧？\p"
# 51 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "那是……嗯……\n"
# 52 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "蛋白质？\p"
# 53 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "听起来很好吃，对吧？$"
# 54 "data/maps/BattleFrontier_Mart/scripts.pory"

# 55 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_FacilitiesDontAllowItems:
# 56 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "对战开拓区很多设施都\n"
# 57 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "不允许在对战中\l"
# 58 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "使用道具。\p"
# 59 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "这规矩让本来就难的\n"
# 60 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "变得更难了！$"
