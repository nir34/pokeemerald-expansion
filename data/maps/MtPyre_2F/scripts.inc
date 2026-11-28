# 1 "data/maps/MtPyre_2F/scripts.pory"

# 2 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_MapScripts::
# 3 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 5 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_2F_SetHoleWarp
# 6 "data/maps/MtPyre_2F/scripts.pory"
	.byte 0
# 7 "data/maps/MtPyre_2F/scripts.pory"

# 8 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_SetHoleWarp:
# 9 "data/maps/MtPyre_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data/maps/MtPyre_2F/scripts.pory"
	setholewarp MAP_MT_PYRE_1F
# 11 "data/maps/MtPyre_2F/scripts.pory"
	end
# 12 "data/maps/MtPyre_2F/scripts.pory"

# 13 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Woman::
# 14 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MemoriesOfSkitty, MSGBOX_NPC
# 15 "data/maps/MtPyre_2F/scripts.pory"
	end
# 16 "data/maps/MtPyre_2F/scripts.pory"

# 17 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_PokefanM::
# 18 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_TumbledFromFloorAbove, MSGBOX_NPC
# 19 "data/maps/MtPyre_2F/scripts.pory"
	end
# 20 "data/maps/MtPyre_2F/scripts.pory"

# 21 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Mark::
# 22 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_MARK, MtPyre_2F_Text_MarkIntro, MtPyre_2F_Text_MarkDefeat
# 23 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/MtPyre_2F/scripts.pory"
	end
# 25 "data/maps/MtPyre_2F/scripts.pory"

# 26 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Luke::
# 27 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_LukeIntro, MtPyre_2F_Text_LukeDefeat, MtPyre_2F_Text_LukeNotEnoughMons
# 28 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LukePostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/MtPyre_2F/scripts.pory"
	end
# 30 "data/maps/MtPyre_2F/scripts.pory"

# 31 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Dez::
# 32 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_DezIntro, MtPyre_2F_Text_DezDefeat, MtPyre_2F_Text_DezNotEnoughMons
# 33 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_DezPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/MtPyre_2F/scripts.pory"
	end
# 35 "data/maps/MtPyre_2F/scripts.pory"

# 36 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Leah::
# 37 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_LEAH, MtPyre_2F_Text_LeahIntro, MtPyre_2F_Text_LeahDefeat
# 38 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/MtPyre_2F/scripts.pory"
	end
# 40 "data/maps/MtPyre_2F/scripts.pory"

# 41 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Zander::
# 42 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, MtPyre_2F_Text_ZanderIntro, MtPyre_2F_Text_ZanderDefeat
# 43 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/MtPyre_2F/scripts.pory"
	end
# 45 "data/maps/MtPyre_2F/scripts.pory"

# 46 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MemoriesOfSkitty:
# 47 "data/maps/MtPyre_2F/scripts.pory"
	.string "我宝贝向尾喵的回忆……\n"
# 48 "data/maps/MtPyre_2F/scripts.pory"
	.string "一想到就泪水盈眶。$"
# 49 "data/maps/MtPyre_2F/scripts.pory"

# 50 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_TumbledFromFloorAbove:
# 51 "data/maps/MtPyre_2F/scripts.pory"
	.string "哎哟哎哟……这里地上\n"
# 52 "data/maps/MtPyre_2F/scripts.pory"
	.string "到处都有洞。\p"
# 53 "data/maps/MtPyre_2F/scripts.pory"
	.string "我没注意，从楼上\n"
# 54 "data/maps/MtPyre_2F/scripts.pory"
	.string "摔下来了。$"
# 55 "data/maps/MtPyre_2F/scripts.pory"

# 56 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkIntro:
# 57 "data/maps/MtPyre_2F/scripts.pory"
	.string "嘿！你在找宝可梦？\n"
# 58 "data/maps/MtPyre_2F/scripts.pory"
	.string "你跟着我来的！真没礼貌！$"
# 59 "data/maps/MtPyre_2F/scripts.pory"

# 60 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkDefeat:
# 61 "data/maps/MtPyre_2F/scripts.pory"
	.string "哇啊啊！\n"
# 62 "data/maps/MtPyre_2F/scripts.pory"
	.string "对不起，请原谅我！$"
# 63 "data/maps/MtPyre_2F/scripts.pory"

# 64 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkPostBattle:
# 65 "data/maps/MtPyre_2F/scripts.pory"
	.string "这里很少有人来，所以我\n"
# 66 "data/maps/MtPyre_2F/scripts.pory"
	.string "以为会有稀有宝可梦。$"
# 67 "data/maps/MtPyre_2F/scripts.pory"

# 68 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeIntro:
# 69 "data/maps/MtPyre_2F/scripts.pory"
	.string "卢克：我们是打赌来的。\p"
# 70 "data/maps/MtPyre_2F/scripts.pory"
	.string "嘿嘿，让她看看我有多帅，\n"
# 71 "data/maps/MtPyre_2F/scripts.pory"
	.string "她一定会爱上我。\l"
# 72 "data/maps/MtPyre_2F/scripts.pory"
	.string "我确定！\p"
# 73 "data/maps/MtPyre_2F/scripts.pory"
	.string "有了！我要打垮你，\n"
# 74 "data/maps/MtPyre_2F/scripts.pory"
	.string "让她看看我多帅！$"
# 75 "data/maps/MtPyre_2F/scripts.pory"

# 76 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeDefeat:
# 77 "data/maps/MtPyre_2F/scripts.pory"
	.string "卢克：哎哟！$"
# 78 "data/maps/MtPyre_2F/scripts.pory"

# 79 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukePostBattle:
# 80 "data/maps/MtPyre_2F/scripts.pory"
	.string "卢克：输了也没关系！\n"
# 81 "data/maps/MtPyre_2F/scripts.pory"
	.string "我就在你身边。\l"
# 82 "data/maps/MtPyre_2F/scripts.pory"
	.string "这个赌我们撑得过去！$"
# 83 "data/maps/MtPyre_2F/scripts.pory"

# 84 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeNotEnoughMons:
# 85 "data/maps/MtPyre_2F/scripts.pory"
	.string "卢克：想跟我打，\n"
# 86 "data/maps/MtPyre_2F/scripts.pory"
	.string "就多带几只宝可梦来。\p"
# 87 "data/maps/MtPyre_2F/scripts.pory"
	.string "不然我没法在女朋友\n"
# 88 "data/maps/MtPyre_2F/scripts.pory"
	.string "面前耍帅！$"
# 89 "data/maps/MtPyre_2F/scripts.pory"

# 90 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezIntro:
# 91 "data/maps/MtPyre_2F/scripts.pory"
	.string "黛兹：我和男朋友\n"
# 92 "data/maps/MtPyre_2F/scripts.pory"
	.string "打赌来这里的。\p"
# 93 "data/maps/MtPyre_2F/scripts.pory"
	.string "真的很可怕，不过有\n"
# 94 "data/maps/MtPyre_2F/scripts.pory"
	.string "男朋友在，没事的。\p"
# 95 "data/maps/MtPyre_2F/scripts.pory"
	.string "有了！我要打败你，\n"
# 96 "data/maps/MtPyre_2F/scripts.pory"
	.string "让男朋友显得很帅！$"
# 97 "data/maps/MtPyre_2F/scripts.pory"

# 98 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezDefeat:
# 99 "data/maps/MtPyre_2F/scripts.pory"
	.string "黛兹：哇啊啊！好可怕！$"
# 100 "data/maps/MtPyre_2F/scripts.pory"

# 101 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezPostBattle:
# 102 "data/maps/MtPyre_2F/scripts.pory"
	.string "黛兹：我们甜甜蜜蜜，\n"
# 103 "data/maps/MtPyre_2F/scripts.pory"
	.string "输了也不在乎！$"
# 104 "data/maps/MtPyre_2F/scripts.pory"

# 105 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezNotEnoughMons:
# 106 "data/maps/MtPyre_2F/scripts.pory"
	.string "黛兹：想挑战我们，\n"
# 107 "data/maps/MtPyre_2F/scripts.pory"
	.string "至少带两只宝可梦来。\p"
# 108 "data/maps/MtPyre_2F/scripts.pory"
	.string "我男朋友很强。\n"
# 109 "data/maps/MtPyre_2F/scripts.pory"
	.string "只有一只绝对不行。$"
# 110 "data/maps/MtPyre_2F/scripts.pory"

# 111 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahIntro:
# 112 "data/maps/MtPyre_2F/scripts.pory"
	.string "看你这张陌生面孔……\n"
# 113 "data/maps/MtPyre_2F/scripts.pory"
	.string "在灾祸临头前离开吧！$"
# 114 "data/maps/MtPyre_2F/scripts.pory"

# 115 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahDefeat:
# 116 "data/maps/MtPyre_2F/scripts.pory"
	.string "嗯……\n"
# 117 "data/maps/MtPyre_2F/scripts.pory"
	.string "你还挺耐打。$"
# 118 "data/maps/MtPyre_2F/scripts.pory"

# 119 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahPostBattle:
# 120 "data/maps/MtPyre_2F/scripts.pory"
	.string "从我曾祖母那辈起，我们\n"
# 121 "data/maps/MtPyre_2F/scripts.pory"
	.string "家就在这儿当训练家……\p"
# 122 "data/maps/MtPyre_2F/scripts.pory"
	.string "守护这座山是\n"
# 123 "data/maps/MtPyre_2F/scripts.pory"
	.string "我的职责……$"
# 124 "data/maps/MtPyre_2F/scripts.pory"

# 125 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderIntro:
# 126 "data/maps/MtPyre_2F/scripts.pory"
	.string "呀啊啊啊！\n"
# 127 "data/maps/MtPyre_2F/scripts.pory"
	.string "我好害怕！$"
# 128 "data/maps/MtPyre_2F/scripts.pory"

# 129 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderDefeat:
# 130 "data/maps/MtPyre_2F/scripts.pory"
	.string "不要啊啊！\n"
# 131 "data/maps/MtPyre_2F/scripts.pory"
	.string "我吓傻了！$"
# 132 "data/maps/MtPyre_2F/scripts.pory"

# 133 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderPostBattle:
# 134 "data/maps/MtPyre_2F/scripts.pory"
	.string "我一看到有东西动\n"
# 135 "data/maps/MtPyre_2F/scripts.pory"
	.string "就吓得不行……\p"
# 136 "data/maps/MtPyre_2F/scripts.pory"
	.string "我不该来这里\n"
# 137 "data/maps/MtPyre_2F/scripts.pory"
	.string "训练的……$"
