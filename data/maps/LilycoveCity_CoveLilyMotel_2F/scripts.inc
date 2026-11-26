# 1 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_MapScripts::
# 3 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 5 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner::
# 6 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex
# 9 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call_if_set FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 10 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 11 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare
# 12 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 13 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 15 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex::
# 16 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex, MSGBOX_DEFAULT
# 17 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	return
# 18 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 19 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare::
# 20 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 21 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitfanfare
# 23 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 24 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 25 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 26 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma::
# 27 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	message LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
# 28 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitmessage
# 29 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 30 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	special Special_ShowDiploma
# 31 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitstate
# 32 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 33 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 34 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 35 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Programmer::
# 36 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer, MSGBOX_NPC
# 37 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 38 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 39 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GraphicArtist::
# 40 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist, MSGBOX_NPC
# 41 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 42 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 43 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_FatMan::
# 44 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute, MSGBOX_NPC
# 45 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 46 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 47 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Woman::
# 48 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart, MSGBOX_NPC
# 49 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 50 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 51 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameBoyKid::
# 52 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy, MSGBOX_NPC
# 53 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 54 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 55 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Scott::
# 56 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 57 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 58 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_LILYCOVE, LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott
# 59 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles, MSGBOX_DEFAULT
# 60 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 61 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_LILYCOVE
# 62 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 65 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott::
# 66 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy, MSGBOX_DEFAULT
# 67 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 68 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 69 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 70 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex:
# 71 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "我是游戏设计师。\p"
# 72 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "哦，是吗？你在做\n"
# 73 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "宝可梦图鉴？\p"
# 74 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "凑齐图鉴很辛苦，\n"
# 75 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "可别放弃。\p"
# 76 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "要是真的集齐了，\n"
# 77 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "请来给我看看。$"
# 78 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 79 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis:
# 80 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "哇！太厉害了！\n"
# 81 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "真的，太厉害了！\p"
# 82 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "这本图鉴全填满了！\n"
# 83 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "你一定很爱宝可梦！\p"
# 84 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "我太感动了！\p"
# 85 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "为了纪念你的成就，\n"
# 86 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "让我送你点东西！$"
# 87 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 88 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer:
# 89 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "我？你在跟我说话？\n"
# 90 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "我是程序员。\p"
# 91 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "不知道这里的游戏城\n"
# 92 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "是什么样子。$"
# 93 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 94 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist:
# 95 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "我是美术！丰缘的\n"
# 96 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "宝可梦是不是很有趣？$"
# 97 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 98 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute:
# 99 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "那个叫泳圈女孩的，\n"
# 100 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "很可爱吧？和可爱的\l"
# 101 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "泳圈女孩对战……\p"
# 102 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "呼，太棒了！\p"
# 103 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "还有双子！不可爱吗？\n"
# 104 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "和双子打双打……\p"
# 105 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "呼，好玩得受不了！$"
# 106 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 107 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart:
# 108 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "海风吹得心里痒痒的。\n"
# 109 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "在这里感觉真好！$"
# 110 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 111 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy:
# 112 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "你永远不知道什么时候、\n"
# 113 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "在哪里会有人挑战你。\p"
# 114 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "所以我出门从来不带\n"
# 115 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "少了我的GAME BOY\l"
# 116 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string " ADVANCE。$"
# 117 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 118 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles:
# 119 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "史考特：…… … … …\n"
# 120 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "… … … 呼……\p"
# 121 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "… … … … 嗯？！\n"
# 122 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "哦，抱歉抱歉！我睡着了！\p"
# 123 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "我是来看看这个宝可梦\n"
# 124 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "华丽大赛的。\p"
# 125 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "得承认，看起来确实\n"
# 126 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "挺有意思，不过……\p"
# 127 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "我是个纯粹派——我\n"
# 128 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "更喜欢对战和强训练家。\p"
# 129 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "不过这只是我。\p"
# 130 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "{PLAYER}，希望你能享受\n"
# 131 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "一切，道馆、大赛、\l"
# 132 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "对战帐篷，全都玩个遍！$"
# 133 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 134 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy:
# 135 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "史考特：我觉得大赛\n"
# 136 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "确实需要策略。\p"
# 137 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "制定大赛策略，也是\n"
# 138 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "成为更好训练家的一种\l"
# 139 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "方式，我说。$"
