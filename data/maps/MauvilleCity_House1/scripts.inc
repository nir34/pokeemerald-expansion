# 1 "data/maps/MauvilleCity_House1/scripts.pory"

# 2 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_MapScripts::
# 3 "data/maps/MauvilleCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House1/scripts.pory"

# 5 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_RockSmashDude::
# 6 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, MauvilleCity_House1_EventScript_ReceivedRockSmash
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 11 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 15 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_House1/scripts.pory"

# 17 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedRockSmash::
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
# 19 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 20 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_House1/scripts.pory"

# 22 "data/maps/MauvilleCity_House1/scripts.pory"

# 23 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_StatEditorDude::
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 25 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 26 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_SYS_STAT_EDITOR_GET, MauvilleCity_House1_EventScript_ReceivedStatEditor
# 27 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ImStatEditorDudeTakeThis, MSGBOX_DEFAULT
# 28 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_SYS_STAT_EDITOR_GET
# 29 "data/maps/MauvilleCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 30 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ObtainedStatEditor, MSGBOX_DEFAULT
# 31 "data/maps/MauvilleCity_House1/scripts.pory"
	waitfanfare
# 32 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainStatEditorStart, MSGBOX_DEFAULT
# 33 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, MauvilleCity_House1_EventScript_ExplainStatEditorInMGM
# 34 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_ExplainStatEditorNotInMGM
# 35 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 36 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 37 "data/maps/MauvilleCity_House1/scripts.pory"

# 38 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ExplainStatEditorInMGM::
# 39 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainStatEditorInMGM, MSGBOX_DEFAULT
# 40 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 41 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 42 "data/maps/MauvilleCity_House1/scripts.pory"

# 43 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ExplainStatEditorNotInMGM::
# 44 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainStatEditorNotInMGM, MSGBOX_DEFAULT
# 45 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 46 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 47 "data/maps/MauvilleCity_House1/scripts.pory"

# 48 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedStatEditor::
# 49 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, MauvilleCity_House1_EventScript_ReceivedStatEditorInMGM
# 50 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_ReceivedStatEditorNotInMGM
# 51 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 52 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 53 "data/maps/MauvilleCity_House1/scripts.pory"

# 54 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedStatEditorInMGM::
# 55 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ReceivedStatEditorInMGM, MSGBOX_DEFAULT
# 56 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 57 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 58 "data/maps/MauvilleCity_House1/scripts.pory"

# 59 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedStatEditorNotInMGM::
# 60 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ReceivedStatEditorNotInMGM, MSGBOX_DEFAULT
# 61 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 62 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 63 "data/maps/MauvilleCity_House1/scripts.pory"

# 64 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
# 65 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "哇呼！\p"
# 66 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "听说大家都叫我碎岩小子，\n"
# 67 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "我觉得这称呼有点掉价。\p"
# 68 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "我该得到更多尊重，\n"
# 69 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "比如碎岩大哥。\p"
# 70 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "哇呼！\p"
# 71 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "总之，你的宝可梦\n"
# 72 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "看起来很强。\p"
# 73 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "我喜欢！\n"
# 74 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "来，这秘传学习器给你！$"
# 75 "data/maps/MauvilleCity_House1/scripts.pory"

# 76 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainRockSmash:
# 77 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "这个学习器里是碎岩。\p"
# 78 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "要是碰到挡住去路的\n"
# 79 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "大岩石……\p"
# 80 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "就用那个秘传招式，\n"
# 81 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "把它们砸开！\p"
# 82 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "对对！砸开石头！\n"
# 83 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "哇呼！$"
# 84 "data/maps/MauvilleCity_House1/scripts.pory"

# 85 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
# 86 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "哦，对了，砸开石头，\n"
# 87 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "可能会有宝可梦\l"
# 88 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "从藏身处飞出来。\p"
# 89 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "哇呼！$"
# 90 "data/maps/MauvilleCity_House1/scripts.pory"

# 91 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ImStatEditorDudeTakeThis:
# 92 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "你好。\p"
# 93 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "我没那边那位同事\n"
# 94 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "那么爱嚷嚷，\l"
# 95 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "不过我有样东西\l"
# 96 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "你可能用得上。\p"
# 97 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "来，拿着这个装置。$"
# 98 "data/maps/MauvilleCity_House1/scripts.pory"

# 99 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainStatEditorStart:
# 100 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "我把这个装置叫能力编辑器，\n"
# 101 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}你可以从“L菜单”\l"
# 102 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "打开它。\p"
# 103 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}它能让你编辑宝可梦的\n"
# 104 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "努力值或个体值，\l"
# 105 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "看你现在的游戏模式而定。\p"
# 106 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "嗯，让我看看……$"
# 107 "data/maps/MauvilleCity_House1/scripts.pory"

# 108 "data/maps/MauvilleCity_House1/scripts.pory"

# 109 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainStatEditorInMGM:
# 110 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "因为你开启了\n"
# 111 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "少量练级模式，\l"
# 112 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "所以不能用这个装置\l"
# 113 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "改宝可梦的努力值。\p"
# 114 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "不过个体值可以随便改。$"
# 115 "data/maps/MauvilleCity_House1/scripts.pory"

# 116 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainStatEditorNotInMGM:
# 117 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "因为你没有开启\n"
# 118 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "少量练级模式，\l"
# 119 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "所以可以用这个装置\l"
# 120 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "随意编辑努力值和个体值。$"
# 121 "data/maps/MauvilleCity_House1/scripts.pory"

# 122 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ReceivedStatEditorInMGM:
# 123 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "记住，你可以从\n"
# 124 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "“L菜单”打开能力编辑器。\p"
# 125 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "不过，因为你开启了\n"
# 126 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "少量练级模式，\l"
# 127 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "不能改宝可梦的努力值。\p"
# 128 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "不过个体值可以随便改。$"
# 129 "data/maps/MauvilleCity_House1/scripts.pory"

# 130 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ReceivedStatEditorNotInMGM:
# 131 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "记住，你可以从\n"
# 132 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "“L菜单”打开能力编辑器。\p"
# 133 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "因为你没有开启少量练级\n"
# 134 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "模式，可以随意编辑\l"
# 135 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "宝可梦的努力值和个体值。$"
# 136 "data/maps/MauvilleCity_House1/scripts.pory"

# 137 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ObtainedStatEditor:
# 138 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "获得了能力编辑器！$"

MauvilleCity_House1_EventScript_HPChangerDude::
# 143 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 144 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 145 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox HpChangerHelloCanChange, MSGBOX_YESNO
# 147 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_HPChangerDude_2
MauvilleCity_House1_EventScript_HPChangerDude_1:
# 152 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_0
# 153 "data/maps/MauvilleCity_House1/scripts.pory"
	special ChoosePartyMon
# 154 "data/maps/MauvilleCity_House1/scripts.pory"
	waitstate
# 156 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MauvilleCity_House1_EventScript_HPChangerDude_5
MauvilleCity_House1_EventScript_HPChangerDude_4:
# 161 "data/maps/MauvilleCity_House1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 163 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq MauvilleCity_House1_EventScript_HPChangerDude_8
# 169 "data/maps/MauvilleCity_House1/scripts.pory"
	special BufferMonNickname
# 170 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_2
# 171 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_3, TYPE_FIGHTING
# 172 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_4, TYPE_FLYING
# 173 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_5, TYPE_POISON
# 174 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_6, TYPE_GROUND
# 175 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_7, TYPE_ROCK
# 176 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_8, TYPE_BUG
# 177 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_9, TYPE_GHOST
# 178 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_10, TYPE_STEEL
# 179 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_11, TYPE_FIRE
# 180 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_12, TYPE_WATER
# 181 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_13, TYPE_GRASS
# 182 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_14, TYPE_ELECTRIC
# 183 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_15, TYPE_PSYCHIC
# 184 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_16, TYPE_ICE
# 185 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_17, TYPE_DRAGON
# 186 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_18, TYPE_DARK
# 187 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultipush MauvilleCity_House1_EventScript_HPChangerDude_Text_19, MULTI_B_PRESSED
# 189 "data/maps/MauvilleCity_House1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, TYPE_FIGHTING, DYN_MULTICHOICE_CB_NONE
# 191 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq MauvilleCity_House1_EventScript_HPChangerDude_11
MauvilleCity_House1_EventScript_HPChangerDude_10:
# 196 "data/maps/MauvilleCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 197 "data/maps/MauvilleCity_House1/scripts.pory"
	bufferhptypeinfo STR_VAR_2, STR_VAR_3, VAR_RESULT
# 198 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox AreYouSureHPTypeChange, MSGBOX_YESNO
# 200 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_HPChangerDude_14
MauvilleCity_House1_EventScript_HPChangerDude_13:
# 205 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_20
# 206 "data/maps/MauvilleCity_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 207 "data/maps/MauvilleCity_House1/scripts.pory"
	special ChangeMonIVsForHP
# 208 "data/maps/MauvilleCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 209 "data/maps/MauvilleCity_House1/scripts.pory"
	waitfanfare
# 210 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 211 "data/maps/MauvilleCity_House1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 212 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox HPTypeChangedComeBackSoon
# 213 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

MauvilleCity_House1_EventScript_HPChangerDude_2:
# 149 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_HPChangerDude_1

MauvilleCity_House1_EventScript_HPChangerDude_5:
# 158 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_HPChangerDude_4

MauvilleCity_House1_EventScript_HPChangerDude_8:
# 164 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_1
# 165 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

MauvilleCity_House1_EventScript_HPChangerDude_11:
# 193 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_HPChangerDude_10

MauvilleCity_House1_EventScript_HPChangerDude_14:
# 202 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_HPChangerDude_13


MauvilleCity_House1_EventScript_HPChangerNo::
# 218 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerNo_Text_0
# 219 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end


MauvilleCity_House1_EventScript_IVPerfecterDude::
# 225 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 226 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 227 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox IVPerfecterGreeting, MSGBOX_YESNO
# 229 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_IVPerfecterDude_2
MauvilleCity_House1_EventScript_IVPerfecterDude_1:
# 234 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_0
# 235 "data/maps/MauvilleCity_House1/scripts.pory"
	special ChoosePartyMon
# 236 "data/maps/MauvilleCity_House1/scripts.pory"
	waitstate
# 238 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MauvilleCity_House1_EventScript_IVPerfecterDude_5
MauvilleCity_House1_EventScript_IVPerfecterDude_4:
# 243 "data/maps/MauvilleCity_House1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 245 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq MauvilleCity_House1_EventScript_IVPerfecterDude_8
# 251 "data/maps/MauvilleCity_House1/scripts.pory"
	special BufferMonNickname
# 252 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox IVPerfecterAreYouSure, MSGBOX_YESNO
# 254 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_IVPerfecterDude_11
MauvilleCity_House1_EventScript_IVPerfecterDude_10:
# 259 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_HPChangerDude_Text_20
# 260 "data/maps/MauvilleCity_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 261 "data/maps/MauvilleCity_House1/scripts.pory"
	special PerfectMonIVs
# 262 "data/maps/MauvilleCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 263 "data/maps/MauvilleCity_House1/scripts.pory"
	waitfanfare
# 264 "data/maps/MauvilleCity_House1/scripts.pory"
	closemessage
# 265 "data/maps/MauvilleCity_House1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 266 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox IVPerfecterComeBackSoon
# 267 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

MauvilleCity_House1_EventScript_IVPerfecterDude_2:
# 231 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_IVPerfecterDude_1

MauvilleCity_House1_EventScript_IVPerfecterDude_5:
# 240 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_IVPerfecterDude_4

MauvilleCity_House1_EventScript_IVPerfecterDude_8:
# 246 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_EventScript_IVPerfecterDude_Text_0
# 247 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

MauvilleCity_House1_EventScript_IVPerfecterDude_11:
# 256 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_HPChangerNo
	goto MauvilleCity_House1_EventScript_IVPerfecterDude_10


MauvilleCity_House1_EventScript_HPChangerDude_Text_0:
# 152 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "哪只宝可梦？$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_1:
# 164 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "蛋的觉醒力量\n我改不了。$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_2:
# 170 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "你想让{STR_VAR_1}的觉醒力量\n变成哪种属性？$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_3:
# 171 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "格斗$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_4:
# 172 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "飞行$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_5:
# 173 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "毒$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_6:
# 174 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "地面$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_7:
# 175 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "岩石$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_8:
# 176 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "虫$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_9:
# 177 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "幽灵$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_10:
# 178 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "钢$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_11:
# 179 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "火$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_12:
# 180 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "水$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_13:
# 181 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "草$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_14:
# 182 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "电$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_15:
# 183 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "超能力$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_16:
# 184 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "冰$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_17:
# 185 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "龙$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_18:
# 186 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "恶$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_19:
# 187 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "取消$"

MauvilleCity_House1_EventScript_HPChangerDude_Text_20:
# 205 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "我这就开始。$"

MauvilleCity_House1_EventScript_HPChangerNo_Text_0:
# 218 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "我明白了。若改主意，\n请再回来。$"

MauvilleCity_House1_EventScript_IVPerfecterDude_Text_0:
# 246 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "蛋的个体值\n我无法完善。$"

HpChangerHelloCanChange::
# 272 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "你好，我是觉醒力量属性\n"
	.string "转换师。\p"
	.string "你可以选一只宝可梦，\n"
	.string "我能迅速调整它的个体值，\l"
	.string "以改变它觉醒力量的属性。\p"
	.string "要我改变你某只宝可梦\n"
	.string "觉醒力量的属性吗？$"

HpChangerNotInMgm::
# 283 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "哦，看来你不在\n"
	.string "最少练级模式。\p"
	.string "我只能改变个体值已被\n"
	.string "完善过的宝可梦的觉醒\l"
	.string "已经完善。\p"
	.string "在你集齐8枚徽章之前，\n"
	.string "这个限制会一直有效。$"

AreYouSureHPTypeChange::
# 295 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "那么，你想把\n"
	.string "{STR_VAR_1}的觉醒力量\l"
	.string "改成{STR_VAR_2}？\p"
	.string "这将把{STR_VAR_1}的\n"
	.string "个体值调整为：\p"
	.string "HP  攻击  防御  特攻  特防  速度\n"
	.string "{STR_VAR_3}$"

HPTypeChangedComeBackSoon::
# 306 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "{STR_VAR_1}的觉醒力量\n"
	.string "已改为{STR_VAR_2}。\p"
	.string "若还需要我改变其他宝可梦\n"
	.string "的觉醒力量属性，\l"
	.string "请再来。$"

IVPerfecterGreeting::
# 315 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "你好，我是个体值完善师，\n"
	.string "我可以完善你一只\l"
	.string "宝可梦的个体值。\p"
	.string "要我完善你某只宝可梦\n"
	.string "的个体值吗？$"

IVPerfecterAreYouSure::
# 324 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "那么，你要完善\n"
	.string "{STR_VAR_1}的个体值吗？$"

IVPerfecterComeBackSoon::
# 330 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "{STR_VAR_1}的个体值\n"
	.string "已经完善。\p"
	.string "若还需要我完善其他宝可梦\n"
	.string "的个体值，请再来。$"
