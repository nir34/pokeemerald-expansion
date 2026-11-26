# 1 "data/maps/AquaHideout_1F/scripts.pory"

# 2 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_MapScripts::
# 3 "data/maps/AquaHideout_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AquaHideout_1F/scripts.pory"

# 5 "data/maps/AquaHideout_1F/scripts.pory"
@ The below two entrance guards give hints about what to do to progress the story
# 6 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
# 7 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 8 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 9 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_SlateportHint1
# 10 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
# 11 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 12 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 13 "data/maps/AquaHideout_1F/scripts.pory"

# 14 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 15 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 16 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 17 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 18 "data/maps/AquaHideout_1F/scripts.pory"

# 19 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint1::
# 20 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 21 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 22 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 23 "data/maps/AquaHideout_1F/scripts.pory"

# 24 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 25 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 26 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 27 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_SlateportHint2
# 28 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 31 "data/maps/AquaHideout_1F/scripts.pory"

# 32 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 33 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 34 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 36 "data/maps/AquaHideout_1F/scripts.pory"

# 37 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint2::
# 38 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 39 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 40 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 41 "data/maps/AquaHideout_1F/scripts.pory"

# 42 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1::
# 43 "data/maps/AquaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
# 44 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 46 "data/maps/AquaHideout_1F/scripts.pory"

# 47 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1Defeated::
# 48 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 49 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 50 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 51 "data/maps/AquaHideout_1F/scripts.pory"

# 52 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_OurBossIsSnatchingSomething:
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	.string "什么？什么？你找水舰队\n"
# 54 "data/maps/AquaHideout_1F/scripts.pory"
	.string "想干什么？\p"
# 55 "data/maps/AquaHideout_1F/scripts.pory"
	.string "我们老大不在这里！\n"
# 56 "data/maps/AquaHideout_1F/scripts.pory"
	.string "他去抢重要的东西了！\p"
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	.string "……\n"
# 58 "data/maps/AquaHideout_1F/scripts.pory"
	.string "他去哪儿了？\p"
# 59 "data/maps/AquaHideout_1F/scripts.pory"
	.string "哇哈哈！你真以为我会\n"
# 60 "data/maps/AquaHideout_1F/scripts.pory"
	.string "告诉你这么关键的\l"
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	.string "事？$"
# 62 "data/maps/AquaHideout_1F/scripts.pory"

# 63 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
# 64 "data/maps/AquaHideout_1F/scripts.pory"
	.string "什么？什么？\n"
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	.string "你是熔岩队的小兵？\p"
# 66 "data/maps/AquaHideout_1F/scripts.pory"
	.string "我听说熔岩队要在他们\n"
# 67 "data/maps/AquaHideout_1F/scripts.pory"
	.string "基地唤醒一只\l"
# 68 "data/maps/AquaHideout_1F/scripts.pory"
	.string "了不起的宝可梦。\p"
# 69 "data/maps/AquaHideout_1F/scripts.pory"
	.string "可他们的基地\n"
# 70 "data/maps/AquaHideout_1F/scripts.pory"
	.string "在哪儿呢？$"
# 71 "data/maps/AquaHideout_1F/scripts.pory"

# 72 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossWentToJackASubmarine:
# 73 "data/maps/AquaHideout_1F/scripts.pory"
	.string "什么？什么？你找水舰队\n"
# 74 "data/maps/AquaHideout_1F/scripts.pory"
	.string "想干什么？\p"
# 75 "data/maps/AquaHideout_1F/scripts.pory"
	.string "我们老大不在这里！\n"
# 76 "data/maps/AquaHideout_1F/scripts.pory"
	.string "他去劫潜水艇了！\p"
# 77 "data/maps/AquaHideout_1F/scripts.pory"
	.string "……\n"
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	.string "他去哪儿了？\p"
# 79 "data/maps/AquaHideout_1F/scripts.pory"
	.string "哇哈哈！你真以为我会\n"
# 80 "data/maps/AquaHideout_1F/scripts.pory"
	.string "告诉你这么关键的\l"
# 81 "data/maps/AquaHideout_1F/scripts.pory"
	.string "事？$"
# 82 "data/maps/AquaHideout_1F/scripts.pory"

# 83 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsOnRoute122:
# 84 "data/maps/AquaHideout_1F/scripts.pory"
	.string "什么？什么？你找水舰队\n"
# 85 "data/maps/AquaHideout_1F/scripts.pory"
	.string "想干什么？\p"
# 86 "data/maps/AquaHideout_1F/scripts.pory"
	.string "我们老大不在这里！他正\n"
# 87 "data/maps/AquaHideout_1F/scripts.pory"
	.string "往122号道路的\l"
# 88 "data/maps/AquaHideout_1F/scripts.pory"
	.string "送神火山去！\p"
# 89 "data/maps/AquaHideout_1F/scripts.pory"
	.string "……\n"
# 90 "data/maps/AquaHideout_1F/scripts.pory"
	.string "他为什么去？\p"
# 91 "data/maps/AquaHideout_1F/scripts.pory"
	.string "哇哈哈！你真以为我会\n"
# 92 "data/maps/AquaHideout_1F/scripts.pory"
	.string "告诉你这么关键的\l"
# 93 "data/maps/AquaHideout_1F/scripts.pory"
	.string "事？$"
# 94 "data/maps/AquaHideout_1F/scripts.pory"

# 95 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TeamMagmaAtMtChimney:
# 96 "data/maps/AquaHideout_1F/scripts.pory"
	.string "什么？什么？\n"
# 97 "data/maps/AquaHideout_1F/scripts.pory"
	.string "你是熔岩队的小兵？\p"
# 98 "data/maps/AquaHideout_1F/scripts.pory"
	.string "我听说熔岩队盯上了\n"
# 99 "data/maps/AquaHideout_1F/scripts.pory"
	.string "烟囱山的一只\l"
# 100 "data/maps/AquaHideout_1F/scripts.pory"
	.string "了不起的宝可梦。\p"
# 101 "data/maps/AquaHideout_1F/scripts.pory"
	.string "可那宝可梦\n"
# 102 "data/maps/AquaHideout_1F/scripts.pory"
	.string "是什么样的？$"
# 103 "data/maps/AquaHideout_1F/scripts.pory"

# 104 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsInSlateportCity:
# 105 "data/maps/AquaHideout_1F/scripts.pory"
	.string "什么？什么？你找水舰队\n"
# 106 "data/maps/AquaHideout_1F/scripts.pory"
	.string "想干什么？\p"
# 107 "data/maps/AquaHideout_1F/scripts.pory"
	.string "我们老大不在这里！\n"
# 108 "data/maps/AquaHideout_1F/scripts.pory"
	.string "他往凯那市去了！\p"
# 109 "data/maps/AquaHideout_1F/scripts.pory"
	.string "……\n"
# 110 "data/maps/AquaHideout_1F/scripts.pory"
	.string "他为什么去？\p"
# 111 "data/maps/AquaHideout_1F/scripts.pory"
	.string "哇哈哈！你真以为我会\n"
# 112 "data/maps/AquaHideout_1F/scripts.pory"
	.string "告诉你这么关键的\l"
# 113 "data/maps/AquaHideout_1F/scripts.pory"
	.string "事？$"
# 114 "data/maps/AquaHideout_1F/scripts.pory"

# 115 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Intro:
# 116 "data/maps/AquaHideout_1F/scripts.pory"
	.string "哎呀呀呀！\n"
# 117 "data/maps/AquaHideout_1F/scripts.pory"
	.string "发现可疑人物！$"
# 118 "data/maps/AquaHideout_1F/scripts.pory"

# 119 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Defeat:
# 120 "data/maps/AquaHideout_1F/scripts.pory"
	.string "呃呃呃……\n"
# 121 "data/maps/AquaHideout_1F/scripts.pory"
	.string "我搞砸了！$"
# 122 "data/maps/AquaHideout_1F/scripts.pory"

# 123 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1PostBattle:
# 124 "data/maps/AquaHideout_1F/scripts.pory"
	.string "我为了团队输了，\n"
# 125 "data/maps/AquaHideout_1F/scripts.pory"
	.string "不过我也算尽了职……$"
