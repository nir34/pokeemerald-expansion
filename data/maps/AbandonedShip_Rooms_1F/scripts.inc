# 1 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Gentleman::
# 6 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_TakingALookAround, MSGBOX_NPC
# 7 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 8 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Demetrius::
# 10 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_DEMETRIUS, AbandonedShip_Rooms_1F_Text_DemetriusIntro, AbandonedShip_Rooms_1F_Text_DemetriusDefeat
# 11 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_DemetriusPostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 13 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 14 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Thalia::
# 15 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaIntro, AbandonedShip_Rooms_1F_Text_ThaliaDefeat, AbandonedShip_Rooms_1F_EventScript_RegisterThalia
# 16 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 17 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms_1F_EventScript_ThaliaRematch
# 18 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostBattle, MSGBOX_DEFAULT
# 19 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 20 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 21 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 22 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_RegisterThalia::
# 23 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 24 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaRegister, MSGBOX_DEFAULT
# 26 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	register_matchcall TRAINER_THALIA_1
# 27 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 28 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 29 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 30 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_ThaliaRematch::
# 31 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_rematch TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro, AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat
# 32 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostRematch, MSGBOX_AUTOCLOSE
# 33 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 34 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 35 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_TakingALookAround:
# 36 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "这种船很少见，所以我\n"
# 37 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "到处看看。\p"
# 38 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Hmhm……\n"
# 39 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "好像还有别的船舱……$"
# 40 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 41 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaIntro:
# 42 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "到底是什么让你\n"
# 43 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "来这儿？你一定是\l"
# 44 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "好奇得不行！$"
# 45 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 46 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaDefeat:
# 47 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "不只是好奇，还很强……$"
# 48 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 49 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostBattle:
# 50 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "隔壁那个男人……\p"
# 51 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "他说只是观光，\n"
# 52 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "不过我可不这么想。$"
# 53 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 54 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRegister:
# 55 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "你真是个强训练家！\n"
# 56 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "让我把你登录下来\l"
# 57 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "留个纪念！$"
# 58 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 59 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro:
# 60 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "到底是什么让你又\n"
# 61 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "回来？你真是\l"
# 62 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "太好奇了！$"
# 63 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 64 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat:
# 65 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "你是不是太强了？$"
# 66 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 67 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostRematch:
# 68 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "我敢说那个男人在\n"
# 69 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "搞什么名堂！\l"
# 70 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "他一举一动都\l"
# 71 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "太可疑了！$"
# 72 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 73 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusIntro:
# 74 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "哇啊！\n"
# 75 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "我被发现了！……嗯？$"
# 76 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 77 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusDefeat:
# 78 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "哦，你不是我妈。$"
# 79 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 80 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusPostBattle:
# 81 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "我惹妈妈生气了，所以\n"
# 82 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "跑出来了。我在哪儿\l"
# 83 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "要保密哦！$"
