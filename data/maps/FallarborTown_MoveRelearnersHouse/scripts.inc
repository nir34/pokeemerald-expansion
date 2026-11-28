# 1 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 2 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
.set LOCALID_MOVE_RELEARNER, 1
# 3 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
.set LOCALID_EGG_MAN, 2
# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_MapScripts::
# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.byte 0
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lock
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, FallarborTown_MoveRelearnersHouse_EventScript_NeedLavaBadge
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TMS_FROM_TUTOR, FallarborTown_MoveRelearnersHouse_EventScript_ReceivedTms
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_DRAGON_CLAW
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_BLIZZARD
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_THUNDER
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_TELEPORT
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_FIRE_BLAST
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_POLTERGEIST
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_THUNDER_WAVE
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_IRON_HEAD
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_LIQUIDATION
# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_HYDRO_PUMP
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_DRILL_RUN
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_BLAZE_KICK
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ZEN_HEADBUTT
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_WEATHER_BALL
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_AIR_SLASH
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_HEX
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_MYSTICAL_FIRE
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_SEED_BOMB
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_LEAF_BLADE
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_KNOCK_OFF
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_POWER_GEM
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ROCK_BLAST
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_PIN_MISSILE
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ICICLE_SPEAR
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_TAIL_SLAP
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_ARM_THRUST
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_FOUL_PLAY
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_IRON_DEFENSE
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_BODY_SLAM
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitemfast ITEM_TM_PLAY_ROUGH
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_RECEIVED_TMS_FROM_TUTOR
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ReceivedSeveralTMs, MSGBOX_DEFAULT
# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ExplainTms, MSGBOX_DEFAULT
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	
# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NeedLavaBadge::
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutorPreLava, MSGBOX_DEFAULT
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ReceivedTms::
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_NowYoureAMoveTutor, MSGBOX_DEFAULT
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ExplainTms:
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "我会教的招式就这些了。\n"
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "我把它们列出来吧，\l"
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "我刚给了你这些学习器：\p"
# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "龙爪、打雷、瞬间移动、\n"
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "大字爆炎、灵骚、电磁波、\l"
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "铁头、水流裂破、水炮、\l"
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "直冲钻、火焰踢、意念头锤、\l"
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "气象球、空气斩、祸不单行、\l"
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "魔法火焰、种子炸弹、\l"
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "叶刃、拍落、力量宝石、\l"
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "岩石爆击、飞弹针、冰锥、\l"
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "摔打、猛推、欺诈、铁壁、\l"
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "泰山压顶、嬉闹、暴风雪。\p"
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "现在你能把这些招式随时\n"
# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "带在身上，在哪里\l"
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "都能教给宝可梦了！$"
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_NowYoureAMoveTutor:
# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "现在你也是招式的\n"
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "教学师父了！哈！$"
# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 86 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ReceivedSeveralTMs::
# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER}收到了\n"
# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "好几个学习器！$"
# 89 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearnerOriginal::
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 93 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 95 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 98 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 100 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 101 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 103 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 105 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 106 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 107 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 108 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 109 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 110 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 111 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 112 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 113 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 115 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 116 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 117 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 119 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 120 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 121 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 122 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 123 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 124 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 125 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 127 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 128 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 129 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 130 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 131 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 132 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 133 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 134 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 135 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 136 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 137 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 138 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 139 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 140 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 141 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutorPreLava:
# 142 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "我是招式教学师父。\n"
# 143 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "至少以前是。我厌倦了\l"
# 144 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "收集心之鳞片、一遍遍\l"
# 145 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "教宝可梦同样的招式，\l"
# 146 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "训练家也厌倦了为了\l"
# 147 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "学招式特地跑这么远。\l"
# 148 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "于是我就做了这些，\l"
# 149 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "把两个问题一起解决了！\p"
# 150 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "嗯，不过想想，你连\n"
# 151 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "四枚徽章都还没有。\p"
# 152 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "我不确定你准备好接受\n"
# 153 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "我做的这些学习器了。\p"
# 154 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "等你拿到四枚徽章\n"
# 155 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "再来，我们再说。$"
# 156 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 157 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 158 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "哦哦，看看你！\n"
# 159 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "我看你已经拿到四枚徽章，\l"
# 160 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "我想你准备好收下这些了。$"
# 161 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 162 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
# 163 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "哦！就是这个！这可是\n"
# 164 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "货真价实的心之鳞片！\p"
# 165 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "让我猜猜，你想让我\n"
# 166 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "教你一个招式？$"
# 167 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 168 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 169 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "要让哪只宝可梦\n"
# 170 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "学习？$"
# 171 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 172 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 173 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "要教哪个招式？$"
# 174 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 175 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 176 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "抱歉……\p"
# 177 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "好像我没有什么招式\n"
# 178 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "能教给那只宝可梦。$"
# 179 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 180 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 181 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER}交出了\n"
# 182 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "一枚心之鳞片。$"
# 183 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 184 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 185 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "你的宝可梦要是想学招式，\n"
# 186 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "就带心之鳞片再来。$"
# 187 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 188 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 189 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "嗯？蛋根本学不会\n"
# 190 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "任何招式。$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive::
# 195 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lock
# 196 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 197 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EggManIntro
# 199 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_0, ITEM_RED_SHARD
# 200 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_1, ITEM_BLUE_SHARD
# 201 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_2, ITEM_GREEN_SHARD
# 202 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultipush FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_3, MULTI_B_PRESSED
# 205 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 207 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_2
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_1:
# 212 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_RED_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_5
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_4:
# 216 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_BLUE_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_8
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_7:
# 221 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, ITEM_GREEN_SHARD
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_11
FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_10:
# 226 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_2:
# 209 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_EggManNo
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_1

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_5:
# 214 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_4

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_8:
# 218 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveWaterEgg
# 219 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_7

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_11:
# 223 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveGrassEgg
# 224 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
	goto FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_10


FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg::
# 232 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_RED_SHARD
# 233 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithRedShard
# 234 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 235 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 236 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 237 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 238 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 239 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 240 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_CHARMANDER
# 241 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_RED_SHARD
# 242 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 243 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_GiveWaterEgg::
# 248 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 249 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithBlueShard
# 250 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 251 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 252 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 253 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 254 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 255 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 256 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_SQUIRTLE
# 257 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 258 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 259 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_GiveGrassEgg::
# 264 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 265 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithGreenShard
# 266 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	getpartysize
# 267 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg
# 268 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0
# 269 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 270 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg
# 271 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 272 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveegg SPECIES_BULBASAUR
# 273 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 274 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4
# 275 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_EggManNo::
# 280 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_EggManNo_Text_0
# 281 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithRedShard::
# 286 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithRedShard, MSGBOX_DEFAULT
# 287 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithBlueShard::
# 292 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithBlueShard, MSGBOX_DEFAULT
# 293 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithGreenShard::
# 298 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithGreenShard, MSGBOX_DEFAULT
# 299 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_NoRoomForEgg::
# 304 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 305 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_0:
# 199 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}火$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_1:
# 200 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}水$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_2:
# 201 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}草$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_3:
# 202 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "取消$"

FallarborTown_MoveRelearnersHouse_EventScript_StarterEggGive_Text_4:
# 219 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "还有碎片的话，请再来！$"

FallarborTown_MoveRelearnersHouse_EventScript_GiveFireEgg_Text_0:
# 236 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "明智的选择。给你。$"

FallarborTown_MoveRelearnersHouse_EventScript_EggManNo_Text_0:
# 280 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "我明白了。想要初始宝可梦\n的蛋时再来吧。$"

EggManIntro::
# 312 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "你好，我是碎片收藏家。\n"
	.string "你给我红色碎片，我就能给你\l"
	.string "一颗火属性初始宝可梦的蛋。\p"
	.string "用蓝色碎片和绿色碎片，\n"
	.string "我也能为其他属性的\l"
	.string "初始宝可梦做同样的事。\p"
	.string "你想要哪种属性的蛋？$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithRedShard::
# 323 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "看来你没有\n"
	.string "绿色碎片。有了再来吧。$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithBlueShard::
# 328 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "看来你没有\n"
	.string "绿色碎片。有了再来吧。$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithGreenShard::
# 333 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "看来你没有\n"
	.string "绿色碎片。有了再来吧。$"

FallarborTown_MoveRelearnersHouse_Text_NoRoomForThisEgg::
# 338 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "哦？你的宝可梦太多了。\n"
	.string "没地方放这颗蛋。$"

FallarborTown_MoveRelearnersHouse_Text_ReceivedTheEgg::
# 343 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER}收到了蛋。$"
