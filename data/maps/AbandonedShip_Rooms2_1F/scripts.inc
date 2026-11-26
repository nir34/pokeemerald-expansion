# 1 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Dan::
# 6 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterDan
# 7 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_DanRematch
# 9 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
# 10 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 11 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 12 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 13 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
# 14 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT  @ Kira speaks for both when registering KiraAndDan
# 15 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 16 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 17 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 18 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 19 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_DanRematch::
# 20 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
# 21 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
# 22 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 23 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 24 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Kira::
# 25 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKira
# 26 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 27 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_KiraRematch
# 28 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
# 29 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 30 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 31 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 32 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
# 33 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
# 34 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 35 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 36 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 37 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 38 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
# 39 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
# 40 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
# 41 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 42 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 43 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Jani::
# 44 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
# 45 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 47 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 48 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Garrison::
# 49 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
# 50 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 52 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 53 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanIntro:
# 54 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN：我们找宝物的\n"
# 55 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "时候，发现了一个\l"
# 56 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "训练家！$"
# 57 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 58 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanDefeat:
# 59 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN：我们联手还是\n"
# 60 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "打不赢……$"
# 61 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 62 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostBattle:
# 63 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN：我们什么宝物都\n"
# 64 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "没找到……\l"
# 65 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "是不是已经被人\l"
# 66 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "拿走了？$"
# 67 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 68 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
# 69 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN：你连两只宝可梦都\n"
# 70 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "没有。这样可打不\l"
# 71 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "赢我们。$"
# 72 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 73 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraIntro:
# 74 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA：哦？\n"
# 75 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "我们在找宝物，\l"
# 76 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "结果发现了个\l"
# 77 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "训练家！$"
# 78 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 79 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraDefeat:
# 80 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA：哦，好强！$"
# 81 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 82 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
# 83 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA：宝物到底在\n"
# 84 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "哪儿呢？\p"
# 85 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "我都已经想好找到\n"
# 86 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "宝物要买什么了！$"
# 87 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 88 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
# 89 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA：哦，你没有\n"
# 90 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "两只宝可梦？\l"
# 91 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "那我们改天再打！$"
# 92 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 93 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRegister:
# 94 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA：哦，你气死我了！\n"
# 95 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "我要把你登录下来！$"
# 96 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 97 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
# 98 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN：我们一直在找\n"
# 99 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "宝物。\p"
# 100 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "我们的宝可梦也变强了。\n"
# 101 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "让它们给你看看，\l"
# 102 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "好吗？$"
# 103 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 104 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
# 105 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN：你还是一样强！$"
# 106 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 107 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostRematch:
# 108 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN：宝物找不到，\n"
# 109 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "宝可梦对战也输……\p"
# 110 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "我想回家……可我要\n"
# 111 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "这么说，她就\l"
# 112 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "要生我的气了……$"
# 113 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 114 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
# 115 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN：你连两只宝可梦都\n"
# 116 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "没有。这样可打不\l"
# 117 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "赢我们。$"
# 118 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 119 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
# 120 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA：哦？又见面了！\p"
# 121 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "跟我们一样，你还是\n"
# 122 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "没放弃找宝物，对吧？\p"
# 123 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "要不要来一场，输的人\n"
# 124 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "就放弃找宝物？$"
# 125 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 126 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
# 127 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA：哦，我们又输了……$"
# 128 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 129 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
# 130 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA：我们不把宝可梦\n"
# 131 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "练强、不找到这里的\l"
# 132 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "宝物，是绝不会\l"
# 133 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "走的！$"
# 134 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 135 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
# 136 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA：哦，你没有\n"
# 137 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "两只宝可梦？\l"
# 138 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "那我们改天再打！$"
# 139 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 140 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniIntro:
# 141 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "我游泳不行，\n"
# 142 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "但对战很在行！$"
# 143 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 144 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniDefeat:
# 145 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "哎呀。\n"
# 146 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "不太顺利。$"
# 147 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 148 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
# 149 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "在这条船上光脚走\n"
# 150 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "有点恶心。$"
# 151 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 152 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
# 153 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "力量与慈悲……\n"
# 154 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "那才是训练家的宝物！$"
# 155 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 156 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
# 157 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "啊，你身上有什么东西\n"
# 158 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "在闪闪发光。$"
# 159 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 160 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
# 161 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "在船上某个船舱里，\n"
# 162 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "我看见有东西在闪光。$"
