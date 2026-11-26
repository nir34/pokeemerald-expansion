# 1 "data/maps/MtPyre_6F/scripts.pory"

# 2 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_MapScripts::
# 3 "data/maps/MtPyre_6F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_6F/scripts.pory"

# 5 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Valerie::
# 6 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
# 7 "data/maps/MtPyre_6F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/MtPyre_6F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtPyre_6F_EventScript_RematchValerie
# 9 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
# 10 "data/maps/MtPyre_6F/scripts.pory"
	release
# 11 "data/maps/MtPyre_6F/scripts.pory"
	end
# 12 "data/maps/MtPyre_6F/scripts.pory"

# 13 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RegisterValerie::
# 14 "data/maps/MtPyre_6F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 15 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
# 16 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
# 17 "data/maps/MtPyre_6F/scripts.pory"
	register_matchcall TRAINER_VALERIE_1
# 18 "data/maps/MtPyre_6F/scripts.pory"
	release
# 19 "data/maps/MtPyre_6F/scripts.pory"
	end
# 20 "data/maps/MtPyre_6F/scripts.pory"

# 21 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RematchValerie::
# 22 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
# 23 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
# 24 "data/maps/MtPyre_6F/scripts.pory"
	end
# 25 "data/maps/MtPyre_6F/scripts.pory"

# 26 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Cedric::
# 27 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
# 28 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/MtPyre_6F/scripts.pory"
	end
# 30 "data/maps/MtPyre_6F/scripts.pory"

# 31 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieIntro:
# 32 "data/maps/MtPyre_6F/scripts.pory"
	.string "我在这里的时候……\n"
# 33 "data/maps/MtPyre_6F/scripts.pory"
	.string "有一股奇妙的力量\l"
# 34 "data/maps/MtPyre_6F/scripts.pory"
	.string "流进身体……$"
# 35 "data/maps/MtPyre_6F/scripts.pory"

# 36 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieDefeat:
# 37 "data/maps/MtPyre_6F/scripts.pory"
	.string "力量正在退去……$"
# 38 "data/maps/MtPyre_6F/scripts.pory"

# 39 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostBattle:
# 40 "data/maps/MtPyre_6F/scripts.pory"
	.string "也许这股力量来自在这里\n"
# 41 "data/maps/MtPyre_6F/scripts.pory"
	.string "不安沉睡的宝可梦灵魂……$"
# 42 "data/maps/MtPyre_6F/scripts.pory"

# 43 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRegister:
# 44 "data/maps/MtPyre_6F/scripts.pory"
	.string "呵呵呵……我输了对战，\n"
# 45 "data/maps/MtPyre_6F/scripts.pory"
	.string "不过我有点小本事……\p"
# 46 "data/maps/MtPyre_6F/scripts.pory"
	.string "我的手完全没碰到\n"
# 47 "data/maps/MtPyre_6F/scripts.pory"
	.string "你的导航……\l"
# 48 "data/maps/MtPyre_6F/scripts.pory"
	.string "嘿呀！$"
# 49 "data/maps/MtPyre_6F/scripts.pory"

# 50 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchIntro:
# 51 "data/maps/MtPyre_6F/scripts.pory"
	.string "你身后……\n"
# 52 "data/maps/MtPyre_6F/scripts.pory"
	.string "有东西……$"
# 53 "data/maps/MtPyre_6F/scripts.pory"

# 54 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchDefeat:
# 55 "data/maps/MtPyre_6F/scripts.pory"
	.string "有什么东西\n"
# 56 "data/maps/MtPyre_6F/scripts.pory"
	.string "消失了……$"
# 57 "data/maps/MtPyre_6F/scripts.pory"

# 58 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostRematch:
# 59 "data/maps/MtPyre_6F/scripts.pory"
	.string "在这里安息的宝可梦……\n"
# 60 "data/maps/MtPyre_6F/scripts.pory"
	.string "有时候，它们会玩耍……$"
# 61 "data/maps/MtPyre_6F/scripts.pory"

# 62 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricIntro:
# 63 "data/maps/MtPyre_6F/scripts.pory"
	.string "你迷路了吗？\n"
# 64 "data/maps/MtPyre_6F/scripts.pory"
	.string "别怕，有我在！$"
# 65 "data/maps/MtPyre_6F/scripts.pory"

# 66 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricDefeat:
# 67 "data/maps/MtPyre_6F/scripts.pory"
	.string "你不是迷路了吗？$"
# 68 "data/maps/MtPyre_6F/scripts.pory"

# 69 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricPostBattle:
# 70 "data/maps/MtPyre_6F/scripts.pory"
	.string "我感觉迷路的训练家\n"
# 71 "data/maps/MtPyre_6F/scripts.pory"
	.string "会慌慌张张，很好对付。\p"
# 72 "data/maps/MtPyre_6F/scripts.pory"
	.string "这招不光彩，\n"
# 73 "data/maps/MtPyre_6F/scripts.pory"
	.string "我不会再用了……$"
