# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULLDOZE, RustboroCity_Gym_EventScript_GiveBulldoze
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 7, Common_EventScript_ReadyPetalburgGymForBattle
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveBulldoze
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 28 "data/maps/RustboroCity_Gym/scripts.pory"

# 29 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveBulldoze::
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_BULLDOZE
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLDOZE
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainBulldoze, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 45 "data/maps/RustboroCity_Gym/scripts.pory"

# 46 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 50 "data/maps/RustboroCity_Gym/scripts.pory"

# 51 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 55 "data/maps/RustboroCity_Gym/scripts.pory"

# 56 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 60 "data/maps/RustboroCity_Gym/scripts.pory"

# 61 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Gym/scripts.pory"

# 66 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 73 "data/maps/RustboroCity_Gym/scripts.pory"

# 74 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 78 "data/maps/RustboroCity_Gym/scripts.pory"

# 79 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 84 "data/maps/RustboroCity_Gym/scripts.pory"

# 85 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 90 "data/maps/RustboroCity_Gym/scripts.pory"

# 91 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 95 "data/maps/RustboroCity_Gym/scripts.pory"

# 96 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 100 "data/maps/RustboroCity_Gym/scripts.pory"

# 101 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 115 "data/maps/RustboroCity_Gym/scripts.pory"

# 116 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Nosepass::
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	waitse
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	playmoncry SPECIES_NOSEPASS, CRY_MODE_NORMAL
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Nosepass, MSGBOX_DEFAULT
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmoncry
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 125 "data/maps/RustboroCity_Gym/scripts.pory"

# 126 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "哟，你好啊！\p"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我说你呀！\n"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "想不想成为冠军？\p"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我可不是训练家，\n"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "不过我能给你获胜的建议。\p"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "那就这么定了！\n"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我们一起冲击宝可梦冠军！\p"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "作为训练家，收集道馆徽章\n"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "是你的工作，对吧？\p"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "可是道馆馆主可不是好惹的！\p"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "所以这时候就该我出场了！\n"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我来给你专家的建议！\p"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "馆主杜娟用的是\n"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "岩石属性宝可梦。\p"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "岩石属性很结实，\n"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "但怕水和\l"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "草属性的招式。\p"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "要是打赢了馆主，\n"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "再来找我吧。\p"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "好，去吧！$"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"

# 148 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "哇！真是一场精彩的胜利！\n"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "一定是我加油的功劳！\p"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "太棒了！\n"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "看看你的训练家卡吧。\p"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "你拿到的岩石徽章\n"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "应该已经好好记在上面了。\p"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "也就是说……\p"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "你已经踏上了通往冠军\n"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "之路的第一个台阶！\p"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "这感觉一定超棒！$"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"

# 160 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "别小看我们道馆训练家！\n"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我来让你看看我们强在哪！$"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"

# 164 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "你还真有两下子……$"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"

# 167 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "你还没见识过岩石属性\n"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "那可怕的力量！$"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"

# 171 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "要是连我都打不赢，\n"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "你根本赢不了杜娟！$"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"

# 175 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "哇！你还挺有潜力的！$"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"

# 178 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "杜娟比我强好几倍。\p"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "你最好小心点！$"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"

# 182 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我们是在镇子正中间，\n"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "可那又怎么样？\p"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我的岩石宝可梦需要\n"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "地方大闹一场！$"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"

# 188 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "哎呀呀！\n"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我们的挑战者可真够劲！$"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"

# 192 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我真佩服我们的馆主。\p"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "小小年纪就能选中\n"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "岩石属性，\l"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "真是又聪明又懂行。$"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"

# 198 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "你好，我是卡那兹市\n"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "宝可梦道馆的馆主杜娟。\p"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我当上馆主，是想把在\n"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "宝可梦训练家学校学到的\l"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "东西用在战斗里。\p"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "你能让我看看你的战斗\n"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "方式和宝可梦吗？$"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"

# 207 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "这样啊……\n"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我输了……\p"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "看来我要学的东西\n"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "还多得很……\p"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我明白了。\p"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "按照宝可梦联盟的规定，\n"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "打赢道馆馆主的人\l"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "可以得到这个。\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "请收下宝可梦联盟\n"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "正式的岩石徽章。$"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"

# 219 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}从杜娟那里\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "得到了岩石徽章。$"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"

# 223 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "有了这枚徽章，你的宝可梦\n"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "就能在战斗外使用\l"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "秘传招式居合斩。\p"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "这个也请一起收下。$"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"

# 229 "data/maps/RustboroCity_Gym/scripts.pory"

# 230 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainBulldoze:
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "那个学习器，学习器96号，\n"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "里面是重踏。\p"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "它不仅能造成伤害，\n"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "还能降低速度。\l"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "就像地面属性的岩石封锁。$"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"

# 237 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "你既然这么强，\n"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "就该去挑战别的道馆馆主。\p"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "和许多训练家对战，\n"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "你会学到很多东西。$"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"

# 243 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "卡那兹市宝可梦道馆$"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"

# 246 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "卡那兹市宝可梦道馆\p"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "杜娟认定的训练家：\n"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"

# 251 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … 哔！\p"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "杜娟：哦，你好，{PLAYER}？\n"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我是卡那兹市的杜娟。\p"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我听藤树说，你正以惊人的\n"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "速度在训练家的\l"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "路上不断前进。\p"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "不过，我可不想认为\n"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "自己赢不了你。\p"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我保证会重整道馆，\n"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "让你能再次来挑战。\p"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "希望你也和我一样\n"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "期待那一天！\p"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … 咔嚓！$"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"

# 268 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "在宝可梦导航里登录了\n"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "道馆馆主杜娟。$"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"

# 272 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "杜娟：真高兴又见到你。\n"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我是这里的馆主杜娟。\p"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "自从上次见面，我们一定\n"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "都经历了许多战斗。\p"
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我想看看我们各自\n"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "进步了多少。来对战吧！$"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"

# 280 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "唔……\n"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我又输了……$"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"

# 284 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "杜娟：在宝可梦对战上，\n"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我要学的还有很多。\p"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "明白这一点，反而让我\n"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "更爱对战了！$"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"

# 290 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "杜娟：真高兴又见到你。\n"
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我是这里的馆主杜娟。\p"
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "自从上次见面，我们一定\n"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "都经历了许多战斗。\p"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "我想看看我们各自\n"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "进步了多少……\p"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "哦，不行……\n"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "你身上只有一只宝可梦？\p"
# 299 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "请至少再带一只\n"
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "宝可梦过来。$"
# 301 "data/maps/RustboroCity_Gym/scripts.pory"

# 302 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Nosepass:
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "朝北鼻：哔哩哩！$"
