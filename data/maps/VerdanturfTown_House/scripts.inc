# 1 "data/maps/VerdanturfTown_House/scripts.pory"

# 2 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_MapScripts::
# 3 "data/maps/VerdanturfTown_House/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_House/scripts.pory"

# 5 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_Man1::
# 6 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_MorePassion, MSGBOX_NPC
# 7 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 8 "data/maps/VerdanturfTown_House/scripts.pory"

# 9 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_Woman1::
# 10 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_ImproveFootwork, MSGBOX_NPC
# 11 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 12 "data/maps/VerdanturfTown_House/scripts.pory"

# 13 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_LittleBoyDancing::
# 14 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_LittleBoyDancing, MSGBOX_NPC
# 15 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 16 "data/maps/VerdanturfTown_House/scripts.pory"

# 17 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_MomDancing::
# 18 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_MomDancing, MSGBOX_NPC
# 19 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 20 "data/maps/VerdanturfTown_House/scripts.pory"

# 21 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_DadDancing::
# 22 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_DadDancing, MSGBOX_NPC
# 23 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 24 "data/maps/VerdanturfTown_House/scripts.pory"

# 25 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_LittleGirlDancing::
# 26 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_LittleGirlDancing, MSGBOX_NPC
# 27 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 28 "data/maps/VerdanturfTown_House/scripts.pory"

# 29 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_EventScript_Oricorio::
# 30 "data/maps/VerdanturfTown_House/scripts.pory"
	lock
# 31 "data/maps/VerdanturfTown_House/scripts.pory"
	faceplayer
# 32 "data/maps/VerdanturfTown_House/scripts.pory"
	waitse
# 33 "data/maps/VerdanturfTown_House/scripts.pory"
	playmoncry SPECIES_ORICORIO, CRY_MODE_NORMAL
# 34 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_Oricorio, MSGBOX_DEFAULT
# 35 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmoncry
# 36 "data/maps/VerdanturfTown_House/scripts.pory"
	release
# 37 "data/maps/VerdanturfTown_House/scripts.pory"
	end
# 38 "data/maps/VerdanturfTown_House/scripts.pory"

# 39 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_Oricorio:
# 40 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "花舞鸟：啾——啾！$"
# 41 "data/maps/VerdanturfTown_House/scripts.pory"

# 42 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_MorePassion:
# 43 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "再热情点！再热情点！\n"
# 44 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "再热情点！再加油！\l"
# 45 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "再加把劲！$"
# 46 "data/maps/VerdanturfTown_House/scripts.pory"

# 47 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_ImproveFootwork:
# 48 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "我得把脚步练得\n"
# 49 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "更好！$"
# 50 "data/maps/VerdanturfTown_House/scripts.pory"

# 51 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_LittleBoyDancing:
# 52 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "呼！我累坏了！$"
# 53 "data/maps/VerdanturfTown_House/scripts.pory"

# 54 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_MomDancing:
# 55 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "他跳得越来越好了，\n"
# 56 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "我真为他骄傲！$"
# 57 "data/maps/VerdanturfTown_House/scripts.pory"

# 58 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_DadDancing:
# 59 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "她哪来这么多\n"
# 60 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "精力？$"
# 61 "data/maps/VerdanturfTown_House/scripts.pory"

# 62 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_Text_LittleGirlDancing:
# 63 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "爸爸看我的转圈！！！$"

VerdanturfTown_House_EventScript_Ursula::
# 68 "data/maps/VerdanturfTown_House/scripts.pory"
	lockall
# 69 "data/maps/VerdanturfTown_House/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 70 "data/maps/VerdanturfTown_House/scripts.pory"
	goto_if_set FLAG_RECEIVED_SETUP_TMS, VerdanturfTown_EventScript_UrsulaDefeated
# 71 "data/maps/VerdanturfTown_House/scripts.pory"
	goto_if_set FLAG_DECLINED_DANCE_BATTLE, VerdanturfTown_EventScript_UrsulaRequestBattleAgain
# 72 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox UrsulaGreeting, MSGBOX_DEFAULT
# 73 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmessage
# 74 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox WillYouDance, MSGBOX_YESNO
# 75 "data/maps/VerdanturfTown_House/scripts.pory"
	goto VerdanturfTown_EventScript_BattleUrsulaPrompt
	end


VerdanturfTown_EventScript_UrsulaRequestBattleAgain::
# 80 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox Ready_Dance_Yet, MSGBOX_YESNO
# 81 "data/maps/VerdanturfTown_House/scripts.pory"
	goto VerdanturfTown_EventScript_BattleUrsulaPrompt
	end


VerdanturfTown_EventScript_BattleUrsulaPrompt::
# 86 "data/maps/VerdanturfTown_House/scripts.pory"
	call_if_eq VAR_RESULT, YES, VerdanturfTown_EventScript_BattleUrsula
# 87 "data/maps/VerdanturfTown_House/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VerdanturfTown_EventScript_DeclineUrsulaBattle
# 88 "data/maps/VerdanturfTown_House/scripts.pory"
	closemessage
	end


VerdanturfTown_EventScript_DeclineUrsulaBattle::
# 93 "data/maps/VerdanturfTown_House/scripts.pory"
	setflag FLAG_DECLINED_DANCE_BATTLE
# 94 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox Come_Back_When_Ready, MSGBOX_DEFAULT
# 95 "data/maps/VerdanturfTown_House/scripts.pory"
	release
	end


VerdanturfTown_EventScript_BattleUrsula::
# 100 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_EventScript_BattleUrsula_Text_0, MSGBOX_DEFAULT
# 101 "data/maps/VerdanturfTown_House/scripts.pory"
	trainerbattle_no_intro TRAINER_URSULA, UrsulaDefeat
# 102 "data/maps/VerdanturfTown_House/scripts.pory"
	goto VerdanturfTown_EventScript_UrsulaGiveItems
	return


VerdanturfTown_EventScript_UrsulaDefeated::
# 108 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_UrsulaPostBattle, MSGBOX_DEFAULT
# 109 "data/maps/VerdanturfTown_House/scripts.pory"
	releaseall
	end


VerdanturfTown_EventScript_UrsulaGiveItems::
# 114 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 115 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 116 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_POWER_UP_PUNCH
# 117 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 118 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_ROCK_POLISH
# 119 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_FLAME_CHARGE
# 120 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_TRAILBLAZE
# 121 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_TM_WORK_UP
# 122 "data/maps/VerdanturfTown_House/scripts.pory"
	setflag FLAG_RECEIVED_SETUP_TMS
# 123 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_ExplainTms
# 124 "data/maps/VerdanturfTown_House/scripts.pory"
	release
	end


VerdanturfTown_EventScript_BattleUrsula_Text_0:
# 100 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "起舞吧！$"

UrsulaGreeting::
# 128 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "欢迎来到我的舞蹈教室！看来你\n"
	.string "已经拿到电力徽章了，\l"
	.string "还不错嘛！\p"
	.string "你也许擅长宝可梦\n"
	.string "对战，但看看你在\l"
	.string "舞蹈对决里表现如何！\p"
	.string "顺便说，这是一场\n"
	.string "双打对战，所以我建议\l"
	.string "带一只以上的宝可梦\l"
	.string "来共舞！$"

UrsulaDefeat::
# 142 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "舞步不错！现在我有些不错的\n"
	.string "招式要送给你！$"

VerdanturfTown_House_Text_ExplainTms::
# 147 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "这才叫好招式！你要是能走到\n"
	.string "那一步遇到我姐姐，\l"
	.string "祝你好运！$"

VerdanturfTown_House_Text_UrsulaPostBattle::
# 154 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "我回去跳舞了！$"

WillYouDance::
# 158 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "怎么样，想不想\n"
	.string "跳一曲？$"

Ready_Dance_Yet::
# 163 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "准备好跳舞了吗？$"
