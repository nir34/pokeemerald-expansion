# 1 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_MapScripts::
# 3 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 5 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Nicolas::
# 6 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_single TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasIntro, MeteorFalls_1F_2R_Text_NicolasDefeat, MeteorFalls_1F_2R_EventScript_RegisterNicolas
# 7 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchNicolas
# 9 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostBattle, MSGBOX_DEFAULT
# 10 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 11 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 12 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 13 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterNicolas::
# 14 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 15 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	waitmovement 0
# 16 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasRegister, MSGBOX_DEFAULT
# 17 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_NICOLAS_1
# 18 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 19 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 20 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 21 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchNicolas::
# 22 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasRematchIntro, MeteorFalls_1F_2R_Text_NicolasRematchDefeat
# 23 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostRematch, MSGBOX_AUTOCLOSE
# 24 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 25 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 26 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_John::
# 27 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnIntro, MeteorFalls_1F_2R_Text_JohnDefeat, MeteorFalls_1F_2R_Text_JohnNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJohn
# 28 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 29 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJohn
# 30 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostBattle, MSGBOX_DEFAULT
# 31 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 32 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 33 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 34 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJohn::
# 35 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
# 36 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 37 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 38 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 39 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 40 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJohn::
# 41 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnRematchIntro, MeteorFalls_1F_2R_Text_JohnRematchDefeat, MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons
# 42 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostRematch, MSGBOX_AUTOCLOSE
# 43 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 44 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 45 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Jay::
# 46 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat, MeteorFalls_1F_2R_Text_JayNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJay
# 47 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 48 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJay
# 49 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostBattle, MSGBOX_DEFAULT
# 50 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 51 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 52 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 53 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJay::
# 54 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT  @ John speaks for both during register
# 55 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 56 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 57 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 58 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 59 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJay::
# 60 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayRematchIntro, MeteorFalls_1F_2R_Text_JayRematchDefeat, MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons
# 61 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostRematch, MSGBOX_AUTOCLOSE
# 62 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 63 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 64 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasIntro:
# 65 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "这里是我们龙属性\n"
# 66 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "训练家训练的地方。\p"
# 67 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "连冠军都会来。\n"
# 68 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "你明白这里有多特别了吧？$"
# 69 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 70 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasDefeat:
# 71 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "唔！\n"
# 72 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "没想到你这么强！$"
# 73 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 74 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostBattle:
# 75 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "前面的路还漫长\n"
# 76 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "而艰辛。\p"
# 77 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "我和我的宝可梦什么时候\n"
# 78 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "才能成为最强？$"
# 79 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 80 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRegister:
# 81 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "我想多了解你的实力。\n"
# 82 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "让我把你登录进导航。$"
# 83 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 84 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchIntro:
# 85 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "自从见面以后，我们\n"
# 86 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "一直在以第一为目标\l"
# 87 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "拼命训练。\p"
# 88 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "帮我们看看我们\n"
# 89 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "变强了多少吧！$"
# 90 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 91 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchDefeat:
# 92 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "唔！\n"
# 93 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "没想到你这么强！$"
# 94 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 95 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostRematch:
# 96 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "你显然一直没停下\n"
# 97 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "对宝可梦的训练。\p"
# 98 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "只要你保持强大，\n"
# 99 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "我也能变得更强！$"
# 100 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 101 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnIntro:
# 102 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "约翰：我们俩一直都是一起\n"
# 103 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "和宝可梦对战的。\l"
# 104 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "我们对自己有信心。$"
# 105 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 106 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnDefeat:
# 107 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "约翰：哎呀。\n"
# 108 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "亲爱的，我们输了。$"
# 109 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 110 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostBattle:
# 111 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "约翰：我们结婚\n"
# 112 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "五十年了。\p"
# 113 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "想想看，我到今天都还没\n"
# 114 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "在对战中赢过我妻子。$"
# 115 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 116 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnNotEnoughMons:
# 117 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "约翰：哎呀呀，多年轻的\n"
# 118 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "训练家！\p"
# 119 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "要和我们打一场吗？那你\n"
# 120 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "得多带些宝可梦再来。$"
# 121 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 122 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRegister:
# 123 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "约翰：年轻训练家，\n"
# 124 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "有机会的话，再和我们打一场吧？$"
# 125 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 126 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayIntro:
# 127 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "珍：我们结婚五十年了。\p"
# 128 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "我们夫妻之间的羁绊\n"
# 129 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "是不会断的。$"
# 130 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 131 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayDefeat:
# 132 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "珍：哎呀。\n"
# 133 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "亲爱的丈夫，我们输了。$"
# 134 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 135 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostBattle:
# 136 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "珍：五十年婚姻……\p"
# 137 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "我们一吵架，就用宝可梦\n"
# 138 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "对战来解决问题……$"
# 139 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 140 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayNotEnoughMons:
# 141 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "珍：哎呀呀，多年轻的\n"
# 142 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "训练家。\p"
# 143 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "要是想和我们打，\n"
# 144 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "得多带些宝可梦再来。$"
# 145 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 146 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchIntro:
# 147 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "约翰：我们俩一直都是一起\n"
# 148 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "和宝可梦对战的。\l"
# 149 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "我们对自己有信心。$"
# 150 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 151 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchDefeat:
# 152 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "约翰：哎呀。\n"
# 153 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "亲爱的，我们输了。$"
# 154 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 155 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostRematch:
# 156 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "约翰：结婚五十年……\p"
# 157 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "回想起来，我和妻子\n"
# 158 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "天天都在对战……$"
# 159 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 160 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons:
# 161 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "约翰：哎呀呀，多年轻的\n"
# 162 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "训练家！\p"
# 163 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "要和我们打一场吗？那你\n"
# 164 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "得多带些宝可梦再来。$"
# 165 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 166 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchIntro:
# 167 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "珍：我们结婚五十年了。\p"
# 168 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "这些年我们互相扶持，\n"
# 169 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "把自己变得更强。$"
# 170 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 171 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchDefeat:
# 172 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "珍：哎呀。\n"
# 173 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "亲爱的丈夫，我们输了。$"
# 174 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 175 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostRematch:
# 176 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "珍：五十年婚姻……\n"
# 177 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "发生了很多事。\p"
# 178 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "希望我们以后继续\n"
# 179 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "一起制造快乐的回忆。$"
# 180 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 181 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons:
# 182 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "珍：哎呀呀，多年轻的\n"
# 183 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "训练家。\p"
# 184 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "要是想和我们打，\n"
# 185 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "得多带些宝可梦再来。$"
