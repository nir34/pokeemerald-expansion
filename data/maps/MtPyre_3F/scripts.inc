# 1 "data/maps/MtPyre_3F/scripts.pory"

# 2 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_MapScripts::
# 3 "data/maps/MtPyre_3F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_3F/scripts.pory"

# 5 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_William::
# 6 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
# 7 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MtPyre_3F/scripts.pory"
	end
# 9 "data/maps/MtPyre_3F/scripts.pory"

# 10 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Kayla::
# 11 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
# 12 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/MtPyre_3F/scripts.pory"
	end
# 14 "data/maps/MtPyre_3F/scripts.pory"

# 15 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Gabrielle::
# 16 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleIntro, MtPyre_3F_Text_GabrielleDefeat, MtPyre_3F_EventScript_RegisterGabrielle
# 17 "data/maps/MtPyre_3F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 18 "data/maps/MtPyre_3F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtPyre_3F_EventScript_RematchGabrielle
# 19 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostBattle, MSGBOX_DEFAULT
# 20 "data/maps/MtPyre_3F/scripts.pory"
	release
# 21 "data/maps/MtPyre_3F/scripts.pory"
	end
# 22 "data/maps/MtPyre_3F/scripts.pory"

# 23 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RegisterGabrielle::
# 24 "data/maps/MtPyre_3F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 25 "data/maps/MtPyre_3F/scripts.pory"
	waitmovement 0
# 26 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
# 27 "data/maps/MtPyre_3F/scripts.pory"
	register_matchcall TRAINER_GABRIELLE_1
# 28 "data/maps/MtPyre_3F/scripts.pory"
	release
# 29 "data/maps/MtPyre_3F/scripts.pory"
	end
# 30 "data/maps/MtPyre_3F/scripts.pory"

# 31 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RematchGabrielle::
# 32 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_rematch TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
# 33 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
# 34 "data/maps/MtPyre_3F/scripts.pory"
	end
# 35 "data/maps/MtPyre_3F/scripts.pory"

# 36 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamIntro:
# 37 "data/maps/MtPyre_3F/scripts.pory"
	.string "这座山浓郁的气息\n"
# 38 "data/maps/MtPyre_3F/scripts.pory"
	.string "提升了我的超能力！\p"
# 39 "data/maps/MtPyre_3F/scripts.pory"
	.string "像你这样的小孩子……\n"
# 40 "data/maps/MtPyre_3F/scripts.pory"
	.string "还想赢？$"
# 41 "data/maps/MtPyre_3F/scripts.pory"

# 42 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamDefeat:
# 43 "data/maps/MtPyre_3F/scripts.pory"
	.string "我要沉浸在\n"
# 44 "data/maps/MtPyre_3F/scripts.pory"
	.string "自怜里了……$"
# 45 "data/maps/MtPyre_3F/scripts.pory"

# 46 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamPostBattle:
# 47 "data/maps/MtPyre_3F/scripts.pory"
	.string "我的超能力肯定\n"
# 48 "data/maps/MtPyre_3F/scripts.pory"
	.string "增长了好几倍，可是……$"
# 49 "data/maps/MtPyre_3F/scripts.pory"

# 50 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaIntro:
# 51 "data/maps/MtPyre_3F/scripts.pory"
	.string "啊哈哈哈哈！\p"
# 52 "data/maps/MtPyre_3F/scripts.pory"
	.string "这里可不是小孩来的\n"
# 53 "data/maps/MtPyre_3F/scripts.pory"
	.string "地方，更别说你了！$"
# 54 "data/maps/MtPyre_3F/scripts.pory"

# 55 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaDefeat:
# 56 "data/maps/MtPyre_3F/scripts.pory"
	.string "我输得干干净净……$"
# 57 "data/maps/MtPyre_3F/scripts.pory"

# 58 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaPostBattle:
# 59 "data/maps/MtPyre_3F/scripts.pory"
	.string "这说明我的修行\n"
# 60 "data/maps/MtPyre_3F/scripts.pory"
	.string "还不够……\p"
# 61 "data/maps/MtPyre_3F/scripts.pory"
	.string "我得继续向山顶\n"
# 62 "data/maps/MtPyre_3F/scripts.pory"
	.string "前进……\p"
# 63 "data/maps/MtPyre_3F/scripts.pory"
	.string "加油，我！$"
# 64 "data/maps/MtPyre_3F/scripts.pory"

# 65 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleIntro:
# 66 "data/maps/MtPyre_3F/scripts.pory"
	.string "你为什么来这里？$"
# 67 "data/maps/MtPyre_3F/scripts.pory"

# 68 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleDefeat:
# 69 "data/maps/MtPyre_3F/scripts.pory"
	.string "太厉害了！\n"
# 70 "data/maps/MtPyre_3F/scripts.pory"
	.string "你是个很特别的训练家。$"
# 71 "data/maps/MtPyre_3F/scripts.pory"

# 72 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabriellePostBattle:
# 73 "data/maps/MtPyre_3F/scripts.pory"
	.string "已不在这个世界的宝可梦。\n"
# 74 "data/maps/MtPyre_3F/scripts.pory"
	.string "现在陪着你的宝可梦。\p"
# 75 "data/maps/MtPyre_3F/scripts.pory"
	.string "还有你将来会遇到的\n"
# 76 "data/maps/MtPyre_3F/scripts.pory"
	.string "宝可梦……\p"
# 77 "data/maps/MtPyre_3F/scripts.pory"
	.string "它们都该被同样珍爱。\n"
# 78 "data/maps/MtPyre_3F/scripts.pory"
	.string "请记住这一点。$"
# 79 "data/maps/MtPyre_3F/scripts.pory"

# 80 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRegister:
# 81 "data/maps/MtPyre_3F/scripts.pory"
	.string "我想在以后再看看\n"
# 82 "data/maps/MtPyre_3F/scripts.pory"
	.string "长大一些的你的宝可梦……\p"
# 83 "data/maps/MtPyre_3F/scripts.pory"
	.string "请让我看看\n"
# 84 "data/maps/MtPyre_3F/scripts.pory"
	.string "你的宝可梦导航。$"
# 85 "data/maps/MtPyre_3F/scripts.pory"

# 86 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchIntro:
# 87 "data/maps/MtPyre_3F/scripts.pory"
	.string "哦，是你……\p"
# 88 "data/maps/MtPyre_3F/scripts.pory"
	.string "你是来给我看\n"
# 89 "data/maps/MtPyre_3F/scripts.pory"
	.string "长大的宝可梦吗？$"
# 90 "data/maps/MtPyre_3F/scripts.pory"

# 91 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchDefeat:
# 92 "data/maps/MtPyre_3F/scripts.pory"
	.string "多么了不起！\n"
# 93 "data/maps/MtPyre_3F/scripts.pory"
	.string "你是个特别的人。$"
# 94 "data/maps/MtPyre_3F/scripts.pory"

# 95 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabriellePostRematch:
# 96 "data/maps/MtPyre_3F/scripts.pory"
	.string "已不在这个世界的宝可梦。\n"
# 97 "data/maps/MtPyre_3F/scripts.pory"
	.string "现在陪着你的宝可梦。\p"
# 98 "data/maps/MtPyre_3F/scripts.pory"
	.string "还有你将来会遇到的\n"
# 99 "data/maps/MtPyre_3F/scripts.pory"
	.string "宝可梦……\p"
# 100 "data/maps/MtPyre_3F/scripts.pory"
	.string "它们都该被同样珍爱。\n"
# 101 "data/maps/MtPyre_3F/scripts.pory"
	.string "看来你记住了。$"
