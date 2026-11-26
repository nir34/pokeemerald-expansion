# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MAN, 3
# 3 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_0, 25
# 4 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_1, 26
# 5 "data/maps/Route117/scripts.pory"

# 6 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 7 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 8 "data/maps/Route117/scripts.pory"
	.byte 0
# 9 "data/maps/Route117/scripts.pory"

# 10 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 11 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 12 "data/maps/Route117/scripts.pory"
	@ set flags for OW daycare mons
# 13 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 14 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 15 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 16 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/Route117/scripts.pory"
	case 2, Route117_EventScript_ShowDaycareMon1
# 18 "data/maps/Route117/scripts.pory"
	case 1, Route117_EventScript_ShowDaycareMon0
# 19 "data/maps/Route117/scripts.pory"
	end
# 20 "data/maps/Route117/scripts.pory"

# 21 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1:
# 22 "data/maps/Route117/scripts.pory"
	@ set pokemon movement type based on compatibility
# 23 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 24 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
# 25 "data/maps/Route117/scripts.pory"
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
# 26 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
# 27 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
# 28 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 29 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0:
# 30 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 31 "data/maps/Route117/scripts.pory"
	end
# 32 "data/maps/Route117/scripts.pory"

# 33 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
# 34 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 35 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 36 "data/maps/Route117/scripts.pory"
	return
# 37 "data/maps/Route117/scripts.pory"

# 38 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
# 39 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 40 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 41 "data/maps/Route117/scripts.pory"
	return
# 42 "data/maps/Route117/scripts.pory"

# 43 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
# 44 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 45 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 46 "data/maps/Route117/scripts.pory"
	return
# 47 "data/maps/Route117/scripts.pory"

# 48 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 49 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 50 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 51 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 52 "data/maps/Route117/scripts.pory"
	return
# 53 "data/maps/Route117/scripts.pory"

# 54 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 55 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 56 "data/maps/Route117/scripts.pory"
	end
# 57 "data/maps/Route117/scripts.pory"

# 58 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoyDancing::
# 59 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LittleBoyDancing, MSGBOX_NPC
# 60 "data/maps/Route117/scripts.pory"
	end
# 61 "data/maps/Route117/scripts.pory"

# 62 "data/maps/Route117/scripts.pory"
Route117_EventScript_MomDancing::
# 63 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MomDancing, MSGBOX_NPC
# 64 "data/maps/Route117/scripts.pory"
	end
# 65 "data/maps/Route117/scripts.pory"

# 66 "data/maps/Route117/scripts.pory"
Route117_EventScript_DadDancing::
# 67 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DadDancing, MSGBOX_NPC
# 68 "data/maps/Route117/scripts.pory"
	end
# 69 "data/maps/Route117/scripts.pory"

# 70 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleGirlDancing::
# 71 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LittleGirlDancing, MSGBOX_NPC
# 72 "data/maps/Route117/scripts.pory"
	end
# 73 "data/maps/Route117/scripts.pory"

# 74 "data/maps/Route117/scripts.pory"
Route117_EventScript_DanceInstructorDancing::
# 75 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DanceInstructor, MSGBOX_NPC
# 76 "data/maps/Route117/scripts.pory"
	end
# 77 "data/maps/Route117/scripts.pory"

# 78 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 79 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 80 "data/maps/Route117/scripts.pory"
	end
# 81 "data/maps/Route117/scripts.pory"

# 82 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 83 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 84 "data/maps/Route117/scripts.pory"
	end
# 85 "data/maps/Route117/scripts.pory"

# 86 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 87 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 88 "data/maps/Route117/scripts.pory"
	end
# 89 "data/maps/Route117/scripts.pory"

# 90 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 91 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 92 "data/maps/Route117/scripts.pory"
	end
# 93 "data/maps/Route117/scripts.pory"

# 94 "data/maps/Route117/scripts.pory"
Route117_EventScript_Ezekiel::
# 95 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_EZEKIEL_1, Route117_Text_EzekielIntro, Route117_Text_EzekielDefeat, Route117_EventScript_RegisterEzekiel
# 96 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 97 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchEzekiel
# 98 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_EzekielPostBattle, MSGBOX_DEFAULT
# 99 "data/maps/Route117/scripts.pory"
	release
# 100 "data/maps/Route117/scripts.pory"
	end
# 101 "data/maps/Route117/scripts.pory"

# 102 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterEzekiel::
# 103 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 104 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_EzekielRegister, MSGBOX_DEFAULT
# 106 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_EZEKIEL_1
# 107 "data/maps/Route117/scripts.pory"
	release
# 108 "data/maps/Route117/scripts.pory"
	end
# 109 "data/maps/Route117/scripts.pory"

# 110 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchEzekiel::
# 111 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_EZEKIEL_1, Route117_Text_EzekielRematchIntro, Route117_Text_EzekielRematchDefeat
# 112 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_EzekielPostRematch, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route117/scripts.pory"
	end
# 114 "data/maps/Route117/scripts.pory"

# 115 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 116 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 117 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 118 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 119 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 120 "data/maps/Route117/scripts.pory"
	release
# 121 "data/maps/Route117/scripts.pory"
	end
# 122 "data/maps/Route117/scripts.pory"

# 123 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 124 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 125 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 127 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 128 "data/maps/Route117/scripts.pory"
	release
# 129 "data/maps/Route117/scripts.pory"
	end
# 130 "data/maps/Route117/scripts.pory"

# 131 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 132 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 133 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route117/scripts.pory"
	end
# 135 "data/maps/Route117/scripts.pory"

# 136 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 137 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 138 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 139 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 140 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 141 "data/maps/Route117/scripts.pory"
	release
# 142 "data/maps/Route117/scripts.pory"
	end
# 143 "data/maps/Route117/scripts.pory"

# 144 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 145 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 146 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 148 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 149 "data/maps/Route117/scripts.pory"
	release
# 150 "data/maps/Route117/scripts.pory"
	end
# 151 "data/maps/Route117/scripts.pory"

# 152 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 153 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 154 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route117/scripts.pory"
	end
# 156 "data/maps/Route117/scripts.pory"

# 157 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 158 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 159 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 160 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 161 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 162 "data/maps/Route117/scripts.pory"
	release
# 163 "data/maps/Route117/scripts.pory"
	end
# 164 "data/maps/Route117/scripts.pory"

# 165 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 166 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 167 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 169 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 170 "data/maps/Route117/scripts.pory"
	release
# 171 "data/maps/Route117/scripts.pory"
	end
# 172 "data/maps/Route117/scripts.pory"

# 173 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 174 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 175 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route117/scripts.pory"
	end
# 177 "data/maps/Route117/scripts.pory"

# 178 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 179 "data/maps/Route117/scripts.pory"
	lock
# 180 "data/maps/Route117/scripts.pory"
	faceplayer
# 181 "data/maps/Route117/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, Route114_EventScript_ReceivedHP
# 182 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekYouFoundMe, MSGBOX_DEFAULT
# 183 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 184 "data/maps/Route117/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 185 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ExplainHP, MSGBOX_DEFAULT
# 186 "data/maps/Route117/scripts.pory"
	release
# 187 "data/maps/Route117/scripts.pory"
	end
# 188 "data/maps/Route117/scripts.pory"

# 189 "data/maps/Route117/scripts.pory"
Route114_EventScript_ReceivedHP::
# 190 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ExplainHP, MSGBOX_DEFAULT
# 191 "data/maps/Route117/scripts.pory"
	release
# 192 "data/maps/Route117/scripts.pory"
	end
# 193 "data/maps/Route117/scripts.pory"

# 194 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 195 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 196 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 197 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 198 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 199 "data/maps/Route117/scripts.pory"
	release
# 200 "data/maps/Route117/scripts.pory"
	end
# 201 "data/maps/Route117/scripts.pory"

# 202 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 203 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 204 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 205 "data/maps/Route117/scripts.pory"
	release
# 206 "data/maps/Route117/scripts.pory"
	end
# 207 "data/maps/Route117/scripts.pory"

# 208 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 209 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 210 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route117/scripts.pory"
	end
# 212 "data/maps/Route117/scripts.pory"

# 213 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 214 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 215 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 216 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 217 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 218 "data/maps/Route117/scripts.pory"
	release
# 219 "data/maps/Route117/scripts.pory"
	end
# 220 "data/maps/Route117/scripts.pory"

# 221 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 222 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 223 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 224 "data/maps/Route117/scripts.pory"
	release
# 225 "data/maps/Route117/scripts.pory"
	end
# 226 "data/maps/Route117/scripts.pory"

# 227 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 228 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 229 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route117/scripts.pory"
	end
# 231 "data/maps/Route117/scripts.pory"

# 232 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 233 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaDaycare, MSGBOX_NPC
# 234 "data/maps/Route117/scripts.pory"
	end
# 235 "data/maps/Route117/scripts.pory"

# 236 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 237 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 238 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route117/scripts.pory"
	end
# 240 "data/maps/Route117/scripts.pory"

# 241 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 242 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 243 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/Route117/scripts.pory"
	end
# 245 "data/maps/Route117/scripts.pory"

# 246 "data/maps/Route117/scripts.pory"
Route117_Text_MelinaDaycare:
# 247 "data/maps/Route117/scripts.pory"
	.string "哟，其实我也不知道\n"
# 248 "data/maps/Route117/scripts.pory"
	.string "培育屋的蛋会不会有\l"
# 249 "data/maps/Route117/scripts.pory"
	.string "满个体值，不过\l"
# 250 "data/maps/Route117/scripts.pory"
	.string "你可以试试看。$"
# 251 "data/maps/Route117/scripts.pory"

# 252 "data/maps/Route117/scripts.pory"
Route117_Text_DerekYouFoundMe:
# 253 "data/maps/Route117/scripts.pory"
	.string "哇，你找到我了！我\n"
# 254 "data/maps/Route117/scripts.pory"
	.string "还以为没人会来！\l"
# 255 "data/maps/Route117/scripts.pory"
	.string "看来我已经没有觉醒力量了，\l"
# 256 "data/maps/Route117/scripts.pory"
	.string "那就给你吧！$"
# 257 "data/maps/Route117/scripts.pory"

# 258 "data/maps/Route117/scripts.pory"
Route117_Text_ExplainHP:
# 259 "data/maps/Route117/scripts.pory"
	.string "学习器10号里是觉醒力量。\n"
# 260 "data/maps/Route117/scripts.pory"
	.string "这个招式的属性会随\l"
# 261 "data/maps/Route117/scripts.pory"
	.string "你的个体值变化。\l"
# 262 "data/maps/Route117/scripts.pory"
	.string "我听说前面有个家伙\l"
# 263 "data/maps/Route117/scripts.pory"
	.string "能帮你改个体值，\l"
# 264 "data/maps/Route117/scripts.pory"
	.string "不过他还在更前面。$"
# 265 "data/maps/Route117/scripts.pory"

# 266 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 267 "data/maps/Route117/scripts.pory"
	.string "我把宝可梦寄放在培育屋。\p"
# 268 "data/maps/Route117/scripts.pory"
	.string "取回来的时候，它多了\n"
# 269 "data/maps/Route117/scripts.pory"
	.string "一个我没教过的招式。\l"
# 270 "data/maps/Route117/scripts.pory"
	.string "我真是吓了一跳。$"
# 271 "data/maps/Route117/scripts.pory"

# 272 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 273 "data/maps/Route117/scripts.pory"
	.string "你觉得怎么样？\n"
# 274 "data/maps/Route117/scripts.pory"
	.string "这些花很漂亮吧？\p"
# 275 "data/maps/Route117/scripts.pory"
	.string "全是我种的！$"
# 276 "data/maps/Route117/scripts.pory"

# 277 "data/maps/Route117/scripts.pory"
Route117_Text_LittleBoyDancing:
# 278 "data/maps/Route117/scripts.pory"
	.string "哇——！这个舞\n"
# 279 "data/maps/Route117/scripts.pory"
	.string "真好玩！$"
# 280 "data/maps/Route117/scripts.pory"

# 281 "data/maps/Route117/scripts.pory"
Route117_Text_MomDancing:
# 282 "data/maps/Route117/scripts.pory"
	.string "希望我们能多上几次\n"
# 283 "data/maps/Route117/scripts.pory"
	.string "户外课！$"
# 284 "data/maps/Route117/scripts.pory"

# 285 "data/maps/Route117/scripts.pory"
Route117_Text_DadDancing:
# 286 "data/maps/Route117/scripts.pory"
	.string "我完全不知道自己在\n"
# 287 "data/maps/Route117/scripts.pory"
	.string "做什么，不过\l"
# 288 "data/maps/Route117/scripts.pory"
	.string "女儿玩得开心就好。$"
# 289 "data/maps/Route117/scripts.pory"

# 290 "data/maps/Route117/scripts.pory"
Route117_Text_LittleGirlDancing:
# 291 "data/maps/Route117/scripts.pory"
	.string "我最喜欢转圈了！！\n"
# 292 "data/maps/Route117/scripts.pory"
	.string "谢谢爸爸带我来跳舞！$"
# 293 "data/maps/Route117/scripts.pory"

# 294 "data/maps/Route117/scripts.pory"
Route117_Text_DanceInstructor:
# 295 "data/maps/Route117/scripts.pory"
	.string "今天天气这么好，\n"
# 296 "data/maps/Route117/scripts.pory"
	.string "我想就在外面上课吧！\p"
# 297 "data/maps/Route117/scripts.pory"
	.string "哦，你一定在想，\n"
# 298 "data/maps/Route117/scripts.pory"
	.string "四天王的芙蓉\l"
# 299 "data/maps/Route117/scripts.pory"
	.string "怎么会跑到这种地方来……\p"
# 300 "data/maps/Route117/scripts.pory"
	.string "……\p"
# 301 "data/maps/Route117/scripts.pory"
	.string "惊喜！我是她的双胞胎\n"
# 302 "data/maps/Route117/scripts.pory"
	.string "姐姐，宇苏拉！\l"
# 303 "data/maps/Route117/scripts.pory"
	.string "我可能没芙蓉那么会对战，\l"
# 304 "data/maps/Route117/scripts.pory"
	.string "但跳舞可比她强多了！\p"
# 305 "data/maps/Route117/scripts.pory"
	.string "这样吧，你要是能打赢\n"
# 306 "data/maps/Route117/scripts.pory"
	.string "铁旋，就来绿荫镇找我，\l"
# 307 "data/maps/Route117/scripts.pory"
	.string "我教你一课！$"
# 308 "data/maps/Route117/scripts.pory"

# 309 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 310 "data/maps/Route117/scripts.pory"
	.string "117号道路\n"
# 311 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} 绿荫镇$"
# 312 "data/maps/Route117/scripts.pory"

# 313 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 314 "data/maps/Route117/scripts.pory"
	.string "117号道路\n"
# 315 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} 紫堇市$"
# 316 "data/maps/Route117/scripts.pory"

# 317 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 318 "data/maps/Route117/scripts.pory"
	.string "宝可梦培育屋\n"
# 319 "data/maps/Route117/scripts.pory"
	.string "“让我们来培育你的\l"
# 320 "data/maps/Route117/scripts.pory"
	.string "宝可梦。”$"

Route117_EventScript_Fantina::
# 325 "data/maps/Route117/scripts.pory"
	lockall
# 326 "data/maps/Route117/scripts.pory"
	applymovement 29, Common_Movement_FacePlayer
# 327 "data/maps/Route117/scripts.pory"
	goto_if_defeated TRAINER_FANTINA, Route117_EventScript_FantinaDefeated
# 328 "data/maps/Route117/scripts.pory"
	goto_if_set FLAG_TEMP_3, Route117_EventScript_FantinaRequestBattleAgain
# 329 "data/maps/Route117/scripts.pory"
	msgbox Fantina_Greeting, MSGBOX_YESNO
# 330 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_BattleFantinaPrompt
	end


Route117_EventScript_FantinaRequestBattleAgain::
# 335 "data/maps/Route117/scripts.pory"
	msgbox Fantina_ReadyYet, MSGBOX_YESNO
# 336 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_BattleFantinaPrompt
	end


Route117_EventScript_BattleFantinaPrompt::
# 341 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route117_EventScript_BattleFantina
# 342 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route117_EventScript_DeclineFantinaBattle
# 343 "data/maps/Route117/scripts.pory"
	closemessage
	end


Route117_EventScript_DeclineFantinaBattle::
# 348 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_3
# 349 "data/maps/Route117/scripts.pory"
	msgbox Fantina_ComeBackWhenReady, MSGBOX_DEFAULT
# 350 "data/maps/Route117/scripts.pory"
	release
	end


Route117_EventScript_BattleFantina::
# 355 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_BattleFantina_Text_0, MSGBOX_DEFAULT
# 356 "data/maps/Route117/scripts.pory"
	trainerbattle_no_intro TRAINER_FANTINA, Fantina_Outro
# 357 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_FantinaGiveItems
	return


Route117_EventScript_FantinaDefeated::
# 363 "data/maps/Route117/scripts.pory"
	msgbox PostBattle_Fantina, MSGBOX_DEFAULT
# 364 "data/maps/Route117/scripts.pory"
	releaseall
	end


Route117_EventScript_FantinaGiveItems::
# 369 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_PSYCHIC
# 370 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_SHADOW_BALL
# 371 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK
# 372 "data/maps/Route117/scripts.pory"
	giveitem ITEM_BANETTITE
# 373 "data/maps/Route117/scripts.pory"
	giveitem ITEM_SABLENITE
# 374 "data/maps/Route117/scripts.pory"
	giveitem ITEM_GENGARITE
# 375 "data/maps/Route117/scripts.pory"
	giveitem ITEM_DUSKNOIRITE
# 376 "data/maps/Route117/scripts.pory"
	giveitem ITEM_METRONOME
# 377 "data/maps/Route117/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 378 "data/maps/Route117/scripts.pory"
	msgbox Fantina_ExplainItems
# 379 "data/maps/Route117/scripts.pory"
	release
	end


Route117_EventScript_BattleFantina_Text_0:
# 355 "data/maps/Route117/scripts.pory"
	.string "那就开始吧！$"

Fantina_Greeting::
# 383 "data/maps/Route117/scripts.pory"
	.string "哦，你好，我叫梅丽。\n"
	.string "你也是来欣赏\l"
	.string "这些花的吗？\p"
	.string "我听说丰缘地区这里\n"
	.string "有很美的花田，\l"
	.string "所以特意\l"
	.string "来看看！\p"
	.string "哦，你不是来赏花的？\n"
	.string "没关系，我来这儿\l"
	.string "也是为了和新训练家对战。\p"
	.string "你是为此而来的吗？$"

Fantina_ReadyYet::
# 397 "data/maps/Route117/scripts.pory"
	.string "嗯？到我们对战的时候了吗？$"

Fantina_ComeBackWhenReady::
# 401 "data/maps/Route117/scripts.pory"
	.string "那我就赏赏花，\n"
	.string "等你准备好。$"

Fantina_ExplainItems::
# 406 "data/maps/Route117/scripts.pory"
	.string "那三个招式都\n"
	.string "非常强力。另外，我还有几颗\l"
	.string "备用的超级石，适合一些\l"
	.string "幽灵属性宝可梦，不过要用\l"
	.string "还得有超级环。\p"
	.string "最后，节拍器能增强\n"
	.string "连续多次使用的\l"
	.string "招式。\p"
	.string "我相信你能\n"
	.string "好好运用。祝你好运！$"

Fantina_Outro::
# 419 "data/maps/Route117/scripts.pory"
	.string "哎呀呀！没想到丰缘地区\n"
	.string "有这么强的训练家。\l"
	.string "我看这些你能用得好。$"

PostBattle_Fantina::
# 426 "data/maps/Route117/scripts.pory"
	.string "这之后我也许会去彩幽市，\n"
	.string "听说那里的花\l"
	.string "美得非凡。$"
