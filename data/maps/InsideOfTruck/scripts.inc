# 1 "data/maps/InsideOfTruck/scripts.pory"

# 2 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_MapScripts::
# 3 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
# 4 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
# 5 "data/maps/InsideOfTruck/scripts.pory"
	.byte 0
# 6 "data/maps/InsideOfTruck/scripts.pory"

# 7 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnLoad:
# 8 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 9 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 10 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
# 11 "data/maps/InsideOfTruck/scripts.pory"
	end
# 12 "data/maps/InsideOfTruck/scripts.pory"

# 13 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnResume:
# 14 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
# 15 "data/maps/InsideOfTruck/scripts.pory"
	end
# 16 "data/maps/InsideOfTruck/scripts.pory"

# 17 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags::
# 18 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 19 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 20 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 21 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
# 22 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
# 23 "data/maps/InsideOfTruck/scripts.pory"
	end
# 24 "data/maps/InsideOfTruck/scripts.pory"

# 25 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsMale::
# 26 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 27 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 28 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 29 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 30 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 31 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 33 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 34 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
# 35 "data/maps/InsideOfTruck/scripts.pory"
	message InsideOfTruck_Text_ReadCarefully
# 36 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 37 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 38 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 39 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_WantToUseDefaultSettings, MSGBOX_YESNO
# 40 "data/maps/InsideOfTruck/scripts.pory"
	call_if_eq VAR_RESULT, YES, InsideOfTruck_EventScript_SetDefaultSettings
# 41 "data/maps/InsideOfTruck/scripts.pory"
	call_if_eq VAR_RESULT, NO, InsideOfTruck_EventScript_StartSettingsMenu
# 42 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 43 "data/maps/InsideOfTruck/scripts.pory"
	end
# 44 "data/maps/InsideOfTruck/scripts.pory"

# 45 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsFemale::
# 46 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 47 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 48 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 49 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 50 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 51 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 52 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 53 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 54 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
# 55 "data/maps/InsideOfTruck/scripts.pory"
	message InsideOfTruck_Text_ReadCarefully
# 56 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 57 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 58 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 59 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_WantToUseDefaultSettings, MSGBOX_YESNO
# 60 "data/maps/InsideOfTruck/scripts.pory"
	call_if_eq VAR_RESULT, YES, InsideOfTruck_EventScript_SetDefaultSettings
# 61 "data/maps/InsideOfTruck/scripts.pory"
	call_if_eq VAR_RESULT, NO, InsideOfTruck_EventScript_StartSettingsMenu
# 62 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 63 "data/maps/InsideOfTruck/scripts.pory"
	end
# 64 "data/maps/InsideOfTruck/scripts.pory"

# 65 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetDefaultSettings:
# 66 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_DefaultSettingsSaved, MSGBOX_DEFAULT
# 67 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_NORMAL_MODE
# 68 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_MIN_GRINDING_MODE
# 69 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 70 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOM_ABILITIES_ENABLED
# 71 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOM_ABILITIES_ENABLED
# 72 "data/maps/InsideOfTruck/scripts.pory"
	special ForceBattleStyleSetPleaseGod
# 73 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, MAX_MON_MODE
# 74 "data/maps/InsideOfTruck/scripts.pory"
	return
# 75 "data/maps/InsideOfTruck/scripts.pory"

# 76 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox::
# 77 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 78 "data/maps/InsideOfTruck/scripts.pory"
	end
# 79 "data/maps/InsideOfTruck/scripts.pory"

# 80 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo:
# 81 "data/maps/InsideOfTruck/scripts.pory"
	.string "箱子上印着宝可梦的标志。\p"
# 82 "data/maps/InsideOfTruck/scripts.pory"
	.string "这是宝可梦品牌的搬家\n"
# 83 "data/maps/InsideOfTruck/scripts.pory"
	.string "和运送服务。$"
# 84 "data/maps/InsideOfTruck/scripts.pory"

# 85 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_ReadCarefully:
# 86 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}请花点时间仔细阅读\n"
# 87 "data/maps/InsideOfTruck/scripts.pory"
	.string "以下内容。$"
# 88 "data/maps/InsideOfTruck/scripts.pory"

# 89 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_WantToUseDefaultSettings:
# 90 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}你想用默认设置游玩\n"
# 91 "data/maps/InsideOfTruck/scripts.pory"
	.string "Pokémon Emerald\l"
# 92 "data/maps/InsideOfTruck/scripts.pory"
	.string "Imperium 吗？\p"
# 93 "data/maps/InsideOfTruck/scripts.pory"
	.string "默认设置如下：\p"
# 94 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}普通难度{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} —— 有挑战性的\n"
# 95 "data/maps/InsideOfTruck/scripts.pory"
	.string "BOSS战，并强制\l"
# 96 "data/maps/InsideOfTruck/scripts.pory"
	.string "执行严格的等级上限。\p"
# 97 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}最少刷级模式开启{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} ——\n"
# 98 "data/maps/InsideOfTruck/scripts.pory"
	.string "保证所有宝可梦个体值\l"
# 99 "data/maps/InsideOfTruck/scripts.pory"
	.string "全满，且无法获得\l"
# 100 "data/maps/InsideOfTruck/scripts.pory"
	.string "努力值。BOSS宝可梦\l"
# 101 "data/maps/InsideOfTruck/scripts.pory"
	.string "也不会有努力值。\p"
# 102 "data/maps/InsideOfTruck/scripts.pory"
	.string "随机化 {COLOR RED}{SHADOW LIGHT_RED}关闭{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} ——\n"
# 103 "data/maps/InsideOfTruck/scripts.pory"
	.string "不启用任何额外\l"
# 104 "data/maps/InsideOfTruck/scripts.pory"
	.string "随机化。\p"
# 105 "data/maps/InsideOfTruck/scripts.pory"
	.string "了解了这些之后：\n"
# 106 "data/maps/InsideOfTruck/scripts.pory"
	.string "你想用默认设置游玩\l"
# 107 "data/maps/InsideOfTruck/scripts.pory"
	.string "Pokémon Emerald\l"
# 108 "data/maps/InsideOfTruck/scripts.pory"
	.string "Imperium 吗？$"
# 109 "data/maps/InsideOfTruck/scripts.pory"

# 110 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_DefaultSettingsSaved:
# 111 "data/maps/InsideOfTruck/scripts.pory"
	.string "默认设置已保存。\n"
# 112 "data/maps/InsideOfTruck/scripts.pory"
	.string "祝你好运！$"

InsideOfTruck_EventScript_StartSettingsMenu::
# 116 "data/maps/InsideOfTruck/scripts.pory"
	msgbox WhichOption
# 117 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, InsideOfTruck_EventScript_StartSettingsMenu_2
# 126 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_0, 0
# 127 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_4, 1
# 128 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_2, 2
# 129 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, 3
InsideOfTruck_EventScript_StartSettingsMenu_1:
# 134 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 136 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq InsideOfTruck_EventScript_StartSettingsMenu_6
InsideOfTruck_EventScript_StartSettingsMenu_5:
# 141 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq InsideOfTruck_EventScript_StartSettingsMenu_9
InsideOfTruck_EventScript_StartSettingsMenu_8:
# 146 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq InsideOfTruck_EventScript_StartSettingsMenu_12
InsideOfTruck_EventScript_StartSettingsMenu_11:
# 151 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq InsideOfTruck_EventScript_StartSettingsMenu_14
	return

InsideOfTruck_EventScript_StartSettingsMenu_2:
# 119 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_0, 0
# 120 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_1, 1
# 121 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_2, 2
# 122 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, 3
	goto InsideOfTruck_EventScript_StartSettingsMenu_1

InsideOfTruck_EventScript_StartSettingsMenu_6:
# 138 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_DifficultyOptions
	goto InsideOfTruck_EventScript_StartSettingsMenu_5

InsideOfTruck_EventScript_StartSettingsMenu_9:
# 143 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_MinGrindingMode
	goto InsideOfTruck_EventScript_StartSettingsMenu_8

InsideOfTruck_EventScript_StartSettingsMenu_12:
# 148 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_RandomzierOptions
	goto InsideOfTruck_EventScript_StartSettingsMenu_11

InsideOfTruck_EventScript_StartSettingsMenu_14:
# 153 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_SaveSettingsDone
	return


InsideOfTruck_EventScript_DifficultyOptions::
# 158 "data/maps/InsideOfTruck/scripts.pory"
	msgbox WhichDifficulty
# 159 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_GAME_SETTING_DIFFICULTY_MODE
# 161 "data/maps/InsideOfTruck/scripts.pory"
	case GAME_SETTING_DIFFICULTY_NORMAL_MODE, InsideOfTruck_EventScript_DifficultyOptions_3
# 166 "data/maps/InsideOfTruck/scripts.pory"
	case GAME_SETTING_DIFFICULTY_EASY_MODE, InsideOfTruck_EventScript_DifficultyOptions_4
# 172 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_0, GAME_SETTING_DIFFICULTY_NORMAL_MODE
# 173 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_1, GAME_SETTING_DIFFICULTY_EASY_MODE
# 174 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
InsideOfTruck_EventScript_DifficultyOptions_1:
# 179 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 181 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_7
InsideOfTruck_EventScript_DifficultyOptions_6:
# 186 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, GAME_SETTING_DIFFICULTY_NORMAL_MODE
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_10
InsideOfTruck_EventScript_DifficultyOptions_9:
# 206 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, GAME_SETTING_DIFFICULTY_EASY_MODE
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_12
	return

InsideOfTruck_EventScript_DifficultyOptions_3:
# 162 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_0, GAME_SETTING_DIFFICULTY_NORMAL_MODE
# 163 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_1, GAME_SETTING_DIFFICULTY_EASY_MODE
# 164 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
	goto InsideOfTruck_EventScript_DifficultyOptions_1

InsideOfTruck_EventScript_DifficultyOptions_4:
# 167 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_2, GAME_SETTING_DIFFICULTY_NORMAL_MODE
# 168 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_DifficultyOptions_Text_3, GAME_SETTING_DIFFICULTY_EASY_MODE
# 169 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
	goto InsideOfTruck_EventScript_DifficultyOptions_1

InsideOfTruck_EventScript_DifficultyOptions_7:
# 183 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_StartSettingsMenu
	goto InsideOfTruck_EventScript_DifficultyOptions_6

InsideOfTruck_EventScript_DifficultyOptions_10:
# 188 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_NORMAL_MODE
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_14
# 195 "data/maps/InsideOfTruck/scripts.pory"
	msgbox NormalDifficultyYesNo, MSGBOX_YESNO
# 196 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_21
InsideOfTruck_EventScript_DifficultyOptions_20:
# 201 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_DifficultyOptions
	goto InsideOfTruck_EventScript_DifficultyOptions_9

InsideOfTruck_EventScript_DifficultyOptions_12:
# 208 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_EASY_MODE
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_17
# 215 "data/maps/InsideOfTruck/scripts.pory"
	msgbox EasyDifficultyYesNo, MSGBOX_YESNO
# 216 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_DifficultyOptions_24
InsideOfTruck_EventScript_DifficultyOptions_23:
# 221 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_DifficultyOptions
	return

InsideOfTruck_EventScript_DifficultyOptions_14:
# 190 "data/maps/InsideOfTruck/scripts.pory"
	msgbox NormalDifficultyCurrentlySelected
# 191 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_DifficultyOptions
	goto InsideOfTruck_EventScript_DifficultyOptions_9

InsideOfTruck_EventScript_DifficultyOptions_17:
# 210 "data/maps/InsideOfTruck/scripts.pory"
	msgbox EasyDifficultyCurrentlySelected
# 211 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_DifficultyOptions
	return

InsideOfTruck_EventScript_DifficultyOptions_21:
# 198 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_NORMAL_MODE
# 199 "data/maps/InsideOfTruck/scripts.pory"
	msgbox NormalDifficultyEnabled
	goto InsideOfTruck_EventScript_DifficultyOptions_20

InsideOfTruck_EventScript_DifficultyOptions_24:
# 218 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_GAME_SETTING_DIFFICULTY_MODE, GAME_SETTING_DIFFICULTY_EASY_MODE
# 219 "data/maps/InsideOfTruck/scripts.pory"
	msgbox EasyDifficultyEnabled
	goto InsideOfTruck_EventScript_DifficultyOptions_23


InsideOfTruck_EventScript_MinGrindingMode::
# 227 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_MIN_GRINDING_MODE, InsideOfTruck_EventScript_MinGrindingMode_2
# 238 "data/maps/InsideOfTruck/scripts.pory"
	msgbox MinGrindingAlreadyOffYesNo, MSGBOX_YESNO
# 239 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_MinGrindingMode_7
InsideOfTruck_EventScript_MinGrindingMode_1:
# 245 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_StartSettingsMenu
	return

InsideOfTruck_EventScript_MinGrindingMode_2:
# 229 "data/maps/InsideOfTruck/scripts.pory"
	msgbox MinGrindingAlreadyOnYesNo, MSGBOX_YESNO
# 230 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_MinGrindingMode_5
	goto InsideOfTruck_EventScript_MinGrindingMode_1

InsideOfTruck_EventScript_MinGrindingMode_5:
# 232 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_MIN_GRINDING_MODE
# 233 "data/maps/InsideOfTruck/scripts.pory"
	msgbox MinGrindingDisabled
	goto InsideOfTruck_EventScript_MinGrindingMode_1

InsideOfTruck_EventScript_MinGrindingMode_7:
# 241 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_MIN_GRINDING_MODE
# 242 "data/maps/InsideOfTruck/scripts.pory"
	msgbox MinGrindingEnabled
	goto InsideOfTruck_EventScript_MinGrindingMode_1


InsideOfTruck_EventScript_RandomzierOptions::
# 251 "data/maps/InsideOfTruck/scripts.pory"
	msgbox WhichRandomizerOption
# 252 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOMIZER_ENABLED, InsideOfTruck_EventScript_RandomzierOptions_2
# 259 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_RandomzierOptions_Text_1, 0
InsideOfTruck_EventScript_RandomzierOptions_1:
# 263 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOM_ABILITIES_ENABLED, InsideOfTruck_EventScript_RandomzierOptions_6
# 270 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_RandomzierOptions_Text_3, 1
InsideOfTruck_EventScript_RandomzierOptions_5:
# 284 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
# 288 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 290 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq InsideOfTruck_EventScript_RandomzierOptions_10
InsideOfTruck_EventScript_RandomzierOptions_9:
# 296 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq InsideOfTruck_EventScript_RandomzierOptions_13
InsideOfTruck_EventScript_RandomzierOptions_12:
# 302 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq InsideOfTruck_EventScript_RandomzierOptions_15
	return

InsideOfTruck_EventScript_RandomzierOptions_2:
# 254 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_RandomzierOptions_Text_0, 0
	goto InsideOfTruck_EventScript_RandomzierOptions_1

InsideOfTruck_EventScript_RandomzierOptions_6:
# 265 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_RandomzierOptions_Text_2, 1
	goto InsideOfTruck_EventScript_RandomzierOptions_5

InsideOfTruck_EventScript_RandomzierOptions_10:
# 292 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_StartSettingsMenu
	goto InsideOfTruck_EventScript_RandomzierOptions_9

InsideOfTruck_EventScript_RandomzierOptions_13:
# 298 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions
	goto InsideOfTruck_EventScript_RandomzierOptions_12

InsideOfTruck_EventScript_RandomzierOptions_15:
# 304 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOM_ABILITIES_ENABLED, InsideOfTruck_EventScript_RandomzierOptions_18
# 315 "data/maps/InsideOfTruck/scripts.pory"
	msgbox RandomAbilitiesAlreadyOffYesNo, MSGBOX_YESNO
# 316 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_RandomzierOptions_23
InsideOfTruck_EventScript_RandomzierOptions_17:
# 322 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_RandomzierOptions
	return

InsideOfTruck_EventScript_RandomzierOptions_18:
# 306 "data/maps/InsideOfTruck/scripts.pory"
	msgbox RandomAbilitiesAlreadyOnYesNo, MSGBOX_YESNO
# 307 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_RandomzierOptions_21
	goto InsideOfTruck_EventScript_RandomzierOptions_17

InsideOfTruck_EventScript_RandomzierOptions_21:
# 309 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOM_ABILITIES_ENABLED
# 310 "data/maps/InsideOfTruck/scripts.pory"
	msgbox RandomAbilitiesDisabled
	goto InsideOfTruck_EventScript_RandomzierOptions_17

InsideOfTruck_EventScript_RandomzierOptions_23:
# 318 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOM_ABILITIES_ENABLED
# 319 "data/maps/InsideOfTruck/scripts.pory"
	msgbox RandomAbilitiesEnabled
	goto InsideOfTruck_EventScript_RandomzierOptions_17


InsideOfTruck_EventScript_SpeciesRandomizerOptions::
# 351 "data/maps/InsideOfTruck/scripts.pory"
	msgbox WhichSpeciesRandomizerOption
# 352 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_RANDOMIZER_ENABLED, InsideOfTruck_EventScript_SpeciesRandomizerOptions_2
# 361 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RANDOMIZER_MODE
# 363 "data/maps/InsideOfTruck/scripts.pory"
	case MON_RANDOM, InsideOfTruck_EventScript_SpeciesRandomizerOptions_9
# 369 "data/maps/InsideOfTruck/scripts.pory"
	case MON_RANDOM_BST, InsideOfTruck_EventScript_SpeciesRandomizerOptions_10
# 375 "data/maps/InsideOfTruck/scripts.pory"
	case MON_RANDOM_LEGEND_AWARE, InsideOfTruck_EventScript_SpeciesRandomizerOptions_11
# 381 "data/maps/InsideOfTruck/scripts.pory"
	case MAX_MON_MODE, InsideOfTruck_EventScript_SpeciesRandomizerOptions_12
# 388 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_0, MON_RANDOM
# 389 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_1, MON_RANDOM_BST
# 390 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_2, MON_RANDOM_LEGEND_AWARE
# 391 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
InsideOfTruck_EventScript_SpeciesRandomizerOptions_1:
# 399 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 401 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_6
InsideOfTruck_EventScript_SpeciesRandomizerOptions_5:
# 406 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MON_RANDOM
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_15
InsideOfTruck_EventScript_SpeciesRandomizerOptions_14:
# 431 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MON_RANDOM_BST
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_18
InsideOfTruck_EventScript_SpeciesRandomizerOptions_17:
# 456 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MON_RANDOM_LEGEND_AWARE
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_24
	return

InsideOfTruck_EventScript_SpeciesRandomizerOptions_2:
# 354 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_0, MON_RANDOM
# 355 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_1, MON_RANDOM_BST
# 356 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_2, MON_RANDOM_LEGEND_AWARE
# 357 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_1

InsideOfTruck_EventScript_SpeciesRandomizerOptions_6:
# 403 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_RandomzierOptions
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_5

InsideOfTruck_EventScript_SpeciesRandomizerOptions_9:
# 364 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_3, MON_RANDOM
# 365 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_1, MON_RANDOM_BST
# 366 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_2, MON_RANDOM_LEGEND_AWARE
# 367 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_1

InsideOfTruck_EventScript_SpeciesRandomizerOptions_10:
# 370 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_0, MON_RANDOM
# 371 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_4, MON_RANDOM_BST
# 372 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_2, MON_RANDOM_LEGEND_AWARE
# 373 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_1

InsideOfTruck_EventScript_SpeciesRandomizerOptions_11:
# 376 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_0, MON_RANDOM
# 377 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_1, MON_RANDOM_BST
# 378 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_5, MON_RANDOM_LEGEND_AWARE
# 379 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_1

InsideOfTruck_EventScript_SpeciesRandomizerOptions_12:
# 382 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_0, MON_RANDOM
# 383 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_1, MON_RANDOM_BST
# 384 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_2, MON_RANDOM_LEGEND_AWARE
# 385 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush InsideOfTruck_EventScript_StartSettingsMenu_Text_3, MULTI_B_PRESSED
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_1

InsideOfTruck_EventScript_SpeciesRandomizerOptions_15:
# 408 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, MON_RANDOM
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_21
# 420 "data/maps/InsideOfTruck/scripts.pory"
	msgbox NormalSpeciesRandomizerAlreadyOffYesNo, MSGBOX_YESNO
# 421 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_32
InsideOfTruck_EventScript_SpeciesRandomizerOptions_20:
# 428 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_14

InsideOfTruck_EventScript_SpeciesRandomizerOptions_18:
# 433 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, MON_RANDOM_BST
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_27
# 445 "data/maps/InsideOfTruck/scripts.pory"
	msgbox ScaledSpeciesRandomizerAlreadyOffYesNo, MSGBOX_YESNO
# 446 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_40
InsideOfTruck_EventScript_SpeciesRandomizerOptions_26:
# 453 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_17

InsideOfTruck_EventScript_SpeciesRandomizerOptions_21:
# 410 "data/maps/InsideOfTruck/scripts.pory"
	msgbox NormalSpeciesRandomizerAlreadyOnYesNo, MSGBOX_YESNO
# 411 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_30
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_20

InsideOfTruck_EventScript_SpeciesRandomizerOptions_24:
# 458 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, MON_RANDOM_LEGEND_AWARE
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_35
# 470 "data/maps/InsideOfTruck/scripts.pory"
	msgbox LegendsAwareRandomizerAlreadyOffYesNo, MSGBOX_YESNO
# 471 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_44
InsideOfTruck_EventScript_SpeciesRandomizerOptions_34:
# 478 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions
	return

InsideOfTruck_EventScript_SpeciesRandomizerOptions_27:
# 435 "data/maps/InsideOfTruck/scripts.pory"
	msgbox ScaledSpeciesRandomizerAlreadyOnYesNo, MSGBOX_YESNO
# 436 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_38
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_26

InsideOfTruck_EventScript_SpeciesRandomizerOptions_30:
# 413 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 414 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, MAX_MON_MODE
# 415 "data/maps/InsideOfTruck/scripts.pory"
	msgbox NormalSpeciesRandomizerDisabled
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_20

InsideOfTruck_EventScript_SpeciesRandomizerOptions_32:
# 423 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZER_ENABLED
# 424 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, MON_RANDOM
# 425 "data/maps/InsideOfTruck/scripts.pory"
	msgbox NormalSpeciesRandomizerEnabled
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_20

InsideOfTruck_EventScript_SpeciesRandomizerOptions_35:
# 460 "data/maps/InsideOfTruck/scripts.pory"
	msgbox LegendsAwareRandomizerAlreadyOnYesNo, MSGBOX_YESNO
# 461 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsideOfTruck_EventScript_SpeciesRandomizerOptions_42
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_34

InsideOfTruck_EventScript_SpeciesRandomizerOptions_38:
# 438 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 439 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, MAX_MON_MODE
# 440 "data/maps/InsideOfTruck/scripts.pory"
	msgbox ScaledSpeciesRandomizerDisabled
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_26

InsideOfTruck_EventScript_SpeciesRandomizerOptions_40:
# 448 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZER_ENABLED
# 449 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, MON_RANDOM_BST
# 450 "data/maps/InsideOfTruck/scripts.pory"
	msgbox ScaledSpeciesRandomizerEnabled
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_26

InsideOfTruck_EventScript_SpeciesRandomizerOptions_42:
# 463 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 464 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, MAX_MON_MODE
# 465 "data/maps/InsideOfTruck/scripts.pory"
	msgbox LegendsAwareRandomizerDisabled
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_34

InsideOfTruck_EventScript_SpeciesRandomizerOptions_44:
# 473 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZER_ENABLED
# 474 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, MON_RANDOM_LEGEND_AWARE
# 475 "data/maps/InsideOfTruck/scripts.pory"
	msgbox LegendsAwareRandomizerEnabled
	goto InsideOfTruck_EventScript_SpeciesRandomizerOptions_34


InsideOfTruck_EventScript_SaveSettingsDone::
# 485 "data/maps/InsideOfTruck/scripts.pory"
	special ForceBattleStyleSetPleaseGod
# 486 "data/maps/InsideOfTruck/scripts.pory"
	msgbox CustomSettingsSaved
# 487 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
	end


InsideOfTruck_EventScript_StartSettingsMenu_Text_0:
# 119 "data/maps/InsideOfTruck/scripts.pory"
	.string "难度选项$"

InsideOfTruck_EventScript_StartSettingsMenu_Text_1:
# 120 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}最少练级模式$"

InsideOfTruck_EventScript_StartSettingsMenu_Text_2:
# 121 "data/maps/InsideOfTruck/scripts.pory"
	.string "随机化选项$"

InsideOfTruck_EventScript_StartSettingsMenu_Text_3:
# 122 "data/maps/InsideOfTruck/scripts.pory"
	.string "完成$"

InsideOfTruck_EventScript_StartSettingsMenu_Text_4:
# 127 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}最少练级模式$"

InsideOfTruck_EventScript_DifficultyOptions_Text_0:
# 162 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}普通$"

InsideOfTruck_EventScript_DifficultyOptions_Text_1:
# 163 "data/maps/InsideOfTruck/scripts.pory"
	.string "简单$"

InsideOfTruck_EventScript_DifficultyOptions_Text_2:
# 167 "data/maps/InsideOfTruck/scripts.pory"
	.string "普通$"

InsideOfTruck_EventScript_DifficultyOptions_Text_3:
# 168 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}简单$"

InsideOfTruck_EventScript_RandomzierOptions_Text_0:
# 254 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}种族$"

InsideOfTruck_EventScript_RandomzierOptions_Text_1:
# 259 "data/maps/InsideOfTruck/scripts.pory"
	.string "种族$"

InsideOfTruck_EventScript_RandomzierOptions_Text_2:
# 265 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}特性$"

InsideOfTruck_EventScript_RandomzierOptions_Text_3:
# 270 "data/maps/InsideOfTruck/scripts.pory"
	.string "特性$"

InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_0:
# 354 "data/maps/InsideOfTruck/scripts.pory"
	.string "普通种族$"

InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_1:
# 355 "data/maps/InsideOfTruck/scripts.pory"
	.string "强度缩放种族$"

InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_2:
# 356 "data/maps/InsideOfTruck/scripts.pory"
	.string "考虑传说的种族$"

InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_3:
# 364 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}普通种族$"

InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_4:
# 371 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}强度缩放种族$"

InsideOfTruck_EventScript_SpeciesRandomizerOptions_Text_5:
# 378 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}考虑传说的种族$"

WhichOption::
# 492 "data/maps/InsideOfTruck/scripts.pory"
	.string "要自定义\n哪个选项？$"

WhichDifficulty::
# 497 "data/maps/InsideOfTruck/scripts.pory"
	.string "要以哪种难度\n模式游玩？$"

WhichRandomizerOption::
# 502 "data/maps/InsideOfTruck/scripts.pory"
	.string "要自定义哪个\n随机化选项？$"

WhichSpeciesRandomizerOption::
# 507 "data/maps/InsideOfTruck/scripts.pory"
	.string "要自定义哪个种族\n随机化选项？$"

NormalDifficultyCurrentlySelected::
# 512 "data/maps/InsideOfTruck/scripts.pory"
	.string "这是推荐的难度模式，\n本游戏的平衡主要\l围绕它设计。\p{COLOR GREEN}{SHADOW LIGHT_GREEN}普通模式{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}有充满挑战的BOSS战，\n并强制严格的等级上限。\p在训练家对战中无法打开包包，\n且对战方式被强制为\l“替换”。\p你目前已启用{COLOR GREEN}{SHADOW LIGHT_GREEN}普通模式{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}。\n如果要更改，\l请选择其他难度模式。$"

EasyDifficultyCurrentlySelected::
# 517 "data/maps/InsideOfTruck/scripts.pory"
	.string "在{COLOR GREEN}{SHADOW LIGHT_GREEN}简单模式{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}中仍有等级上限，\n但BOSS宝可梦会比普通模式\l低2级。\lBOSS队伍其他方面不变。\p玩家可以在任何对战中\n打开包包。\p此外，玩家可以把对战方式\n从“替换”改为“切换”。\p不过，这仍会比原版\n宝可梦游戏更难。\p你目前已启用{COLOR GREEN}{SHADOW LIGHT_GREEN}简单模式{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}。\n如果要更改，\l请选择其他难度模式。$"

NormalDifficultyYesNo::
# 522 "data/maps/InsideOfTruck/scripts.pory"
	.string "这是推荐的难度模式，\n本游戏的平衡主要\l围绕它设计。\p{COLOR GREEN}{SHADOW LIGHT_GREEN}普通模式{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}有充满挑战的BOSS战，\n并强制严格的等级上限。\p在训练家对战中无法打开包包，\n且对战方式被强制为\l“替换”。\p要开启\n{COLOR GREEN}{SHADOW LIGHT_GREEN}普通模式吗？$"

EasyDifficultyYesNo::
# 527 "data/maps/InsideOfTruck/scripts.pory"
	.string "在{COLOR GREEN}{SHADOW LIGHT_GREEN}简单模式{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}中仍有等级上限，\n但BOSS宝可梦会比普通模式\l低2级。\lBOSS队伍其他方面不变。\p玩家可以在任何对战中\n打开包包。\p此外，玩家可以把对战方式\n从“替换”改为“切换”。\p不过，这仍会比原版\n宝可梦游戏更难。\p要开启\n{COLOR GREEN}{SHADOW LIGHT_GREEN}简单模式吗？$"

NormalDifficultyEnabled::
# 532 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}普通模式{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}已启用。$"

EasyDifficultyEnabled::
# 537 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}简单模式{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}已启用。$"

MinGrindingAlreadyOnYesNo::
# 542 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}最少练级模式{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}保证所有\n宝可梦拥有完美的个体值，\l且无法获得努力值。\lBOSS宝可梦也没有努力值。\p如果关闭此模式，可获得的\n宝可梦将拥有随机的个体值，\l并可锻炼努力值。\pBOSS宝可梦仍拥有完美\n个体值并获得努力值。\p要关闭\n{COLOR RED}{SHADOW LIGHT_RED}最少练级模式吗？$"

MinGrindingAlreadyOffYesNo::
# 547 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}最少练级模式{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}保证所有\n宝可梦拥有完美的个体值，\l且无法获得努力值。\lBOSS宝可梦也没有努力值。\p如果关闭此模式，可获得的\n宝可梦将拥有随机的个体值，\l并可锻炼努力值。\pBOSS宝可梦仍拥有完美\n个体值并获得努力值。\p要开启\n{COLOR GREEN}{SHADOW LIGHT_GREEN}最少练级模式吗？$"

MinGrindingEnabled::
# 552 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}最少练级模式已启用。$"

MinGrindingDisabled::
# 557 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}最少练级模式已关闭。$"

RandomAbilitiesAlreadyOnYesNo::
# 563 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}特性随机化{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}会随机化\n玩家的特性，但不会影响\lBOSS宝可梦的特性。\p要关闭\n{COLOR RED}{SHADOW LIGHT_RED}特性随机化吗？$"

RandomAbilitiesAlreadyOffYesNo::
# 568 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}特性随机化{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}会随机化\n玩家的特性，但不会影响\lBOSS宝可梦的特性。\p要开启\n{COLOR GREEN}{SHADOW LIGHT_GREEN}特性随机化吗？$"

RandomAbilitiesEnabled::
# 574 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}特性随机化已启用。$"

RandomAbilitiesDisabled::
# 579 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}特性随机化已关闭。$"

RandomLearnsetsAlreadyOnYesNo::
# 585 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}招式随机化{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}会随机化\n宝可梦的招式学习表。\p它不会随机化招式学习器\n或招式教学。\pBOSS宝可梦也会保留\n通常的招式组合。\p要关闭\n{COLOR RED}{SHADOW LIGHT_RED}招式随机化吗？$"

RandomLearnsetsAlreadyOffYesNo::
# 590 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}招式随机化{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}会随机化\n宝可梦的招式学习表。\p它不会随机化招式学习器\n或招式教学。\pBOSS宝可梦也会保留\n通常的招式组合。\p要开启\n{COLOR GREEN}{SHADOW LIGHT_GREEN}招式随机化吗？$"

RandomLearnsetsEnabled::
# 596 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}招式随机化已启用。$"

RandomLearnsetsDisabled::
# 601 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}招式随机化已关闭。$"

NormalSpeciesRandomizerAlreadyOnYesNo::
# 607 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}种族随机化{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}会随机化\n野外遇敌、训练家和赠礼。\l它不会随机化BOSS战。\p许多传说的宝可梦\n将无法遇到。\p要关闭\n{COLOR RED}{SHADOW LIGHT_RED}种族随机化吗？$"

NormalSpeciesRandomizerAlreadyOffYesNo::
# 612 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}种族随机化{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}会随机化\n野外遇敌、训练家和赠礼。\l它不会随机化BOSS战。\p许多传说的宝可梦\n将无法遇到。\p要开启\n{COLOR GREEN}{SHADOW LIGHT_GREEN}种族随机化吗？$"

NormalSpeciesRandomizerEnabled::
# 618 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}种族随机化已启用。$"

NormalSpeciesRandomizerDisabled::
# 623 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}种族随机化已关闭。$"

ScaledSpeciesRandomizerAlreadyOnYesNo::
# 629 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}强度缩放随机化{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}只会给出\n符合你所在地点的宝可梦。\p这种随机化基于原本遇敌的\n种族值总和。\l它不会随机化BOSS战。\p要关闭\n{COLOR RED}{SHADOW LIGHT_RED}强度缩放随机化吗？$"

ScaledSpeciesRandomizerAlreadyOffYesNo::
# 634 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}强度缩放随机化{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}只会给出\n符合你所在地点的宝可梦。\p这种随机化基于原本遇敌的\n种族值总和。\l它不会随机化BOSS战。\p要开启\n{COLOR GREEN}{SHADOW LIGHT_GREEN}强度缩放随机化吗？$"

ScaledSpeciesRandomizerEnabled::
# 640 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}强度缩放随机化已启用。$"

ScaledSpeciesRandomizerDisabled::
# 645 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}强度缩放随机化已关闭。$"

LegendsAwareRandomizerAlreadyOnYesNo::
# 650 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}考虑传说的种族随机化{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}与\n种族随机化基本相同，\l唯一区别是传说的宝可梦\l必定会被随机化成\l传说的宝可梦。\p要关闭\n{COLOR RED}{SHADOW LIGHT_RED}考虑传说的种族随机化吗？$"

LegendsAwareRandomizerAlreadyOffYesNo::
# 655 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}考虑传说的种族随机化{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}与\n种族随机化基本相同，\l唯一区别是传说的宝可梦\l必定会被随机化成\l传说的宝可梦。\p要开启\n{COLOR GREEN}{SHADOW LIGHT_GREEN}考虑传说的种族随机化吗？$"

LegendsAwareRandomizerEnabled::
# 661 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}考虑传说的种族随机化\n已启用。$"

LegendsAwareRandomizerDisabled::
# 666 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}考虑传说的种族随机化\n已关闭。$"

CustomSettingsSaved::
# 672 "data/maps/InsideOfTruck/scripts.pory"
	.string "自定义设置已保存。\n祝你好运！$"
