# 1 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
.set LOCALID_STAIR_GUARD, 2
# 3 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.byte 0
# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition:
# 9 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	call_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_BlockStairs
# 10 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 11 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 12 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_BlockStairs::
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GUARD, 14, 2
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectmovementtype LOCALID_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	return
# 16 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 17 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee::
# 18 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 23 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 25 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 26 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
# 27 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 29 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 30 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 35 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 36 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard::
# 37 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 38 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 41 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 42 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 43 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 49 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
# 52 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 55 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 58 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 59 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
# 60 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 61 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 64 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 65 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 66 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
# 67 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 71 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
# 72 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 73 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 78 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 81 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 84 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "你好，欢迎来到\n"
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "得文公司。\p"
# 87 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "我们自豪地生产能丰富\n"
# 88 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "生活的产品与药品。$"
# 89 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 90 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed:
# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "我们有个研究员太笨了，\n"
# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "重要的包裹被人抢走了。$"
# 93 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 94 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
# 95 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "嘿，那双跑步鞋！\n"
# 96 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "那是我们的产品！\p"
# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "看到有人用我们做的东西，\n"
# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "我真的很高兴。$"
# 99 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 100 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright:
# 101 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "被偷的那个包裹……\p"
# 102 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "当然，它很重要，不过那\n"
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "可不是谁都能用的东西。\p"
# 104 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "我看哪，那抢匪脑子\n"
# 105 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "一定不太灵光。$"
# 106 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 107 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "听起来被抢的得文货物\n"
# 109 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "已经找回来了。$"
# 110 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 111 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "抱歉，这里只允许\n"
# 113 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "相关人员进入。$"
# 114 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 115 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
# 116 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "真是蠢得离谱。\n"
# 117 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "怎么会被抢呢？$"
# 118 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
# 120 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "你好！\n"
# 121 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "这里随时欢迎你！$"
# 122 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 123 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay:
# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "玻璃柜里陈列着岩石\n"
# 125 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "和金属的样品。\p"
# 126 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "旁边有块写着说明的\n"
# 127 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "牌子……\p"
# 128 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“得文公司最初是\n"
# 129 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "开采岩石出售的商家。\p"
# 130 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“公司还从沙子里\n"
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "提炼出铁。\p"
# 132 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“从原料生意这样\n"
# 133 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "卑微的起点开始，\l"
# 134 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "得文公司发展了起来。\p"
# 135 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“如今得文已能制造\n"
# 136 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "各种工业产品。”$"
# 137 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 138 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay:
# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "玻璃柜里摆满了试制品\n"
# 140 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "和测试产品。\p"
# 141 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "旁边有块写着说明的\n"
# 142 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "牌子……\p"
# 143 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“除了工业产品，得文现在\n"
# 144 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "还销售日用品和药品，\l"
# 145 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "让人们生活得更好。\p"
# 146 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“最近，得文开始销售\n"
# 147 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "面向宝可梦训练家的用品，\l"
# 148 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "包括精灵球和宝可梦导航。”$"
