# 1 "data/maps/FortreeCity_Gym/scripts.pory"

# 2 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts::
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
# 5 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity_Gym/scripts.pory"

# 7 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition:
# 8 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 9 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower bc of rotating gates
# 10 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 11 "data/maps/FortreeCity_Gym/scripts.pory"

# 12 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 14 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 15 "data/maps/FortreeCity_Gym/scripts.pory"

# 16 "data/maps/FortreeCity_Gym/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 19 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 20 "data/maps/FortreeCity_Gym/scripts.pory"

# 21 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BRAVE_BIRD, FortreeCity_Gym_EventScript_GiveAerialAce2
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 28 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 29 "data/maps/FortreeCity_Gym/scripts.pory"

# 30 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	special ShakeCamera
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	waitstate
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WhatOnEarth, MSGBOX_DEFAULT
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 70 "data/maps/FortreeCity_Gym/scripts.pory"

# 71 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 82 "data/maps/FortreeCity_Gym/scripts.pory"

# 83 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_BRAVE_BIRD
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_HURRICANE
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRAVE_BIRD
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 93 "data/maps/FortreeCity_Gym/scripts.pory"

# 94 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 98 "data/maps/FortreeCity_Gym/scripts.pory"

# 99 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 103 "data/maps/FortreeCity_Gym/scripts.pory"

# 104 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 108 "data/maps/FortreeCity_Gym/scripts.pory"

# 109 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 113 "data/maps/FortreeCity_Gym/scripts.pory"

# 114 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 118 "data/maps/FortreeCity_Gym/scripts.pory"

# 119 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 123 "data/maps/FortreeCity_Gym/scripts.pory"

# 124 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 128 "data/maps/FortreeCity_Gym/scripts.pory"

# 129 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 136 "data/maps/FortreeCity_Gym/scripts.pory"

# 137 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 140 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 141 "data/maps/FortreeCity_Gym/scripts.pory"

# 142 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 147 "data/maps/FortreeCity_Gym/scripts.pory"

# 148 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 153 "data/maps/FortreeCity_Gym/scripts.pory"

# 154 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 158 "data/maps/FortreeCity_Gym/scripts.pory"

# 159 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 163 "data/maps/FortreeCity_Gym/scripts.pory"

# 164 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Altaria::
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	waitse
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	playmoncry SPECIES_ALTARIA, CRY_MODE_NORMAL
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_Altaria, MSGBOX_DEFAULT
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmoncry
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 173 "data/maps/FortreeCity_Gym/scripts.pory"

# 174 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "哟，冠军候补{PLAYER}，\n"
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "近况如何？\p"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "茵郁道馆的馆主娜琪是\n"
# 178 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "飞行属性宝可梦的高手。\p"
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "她就在道馆最里面，\n"
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "旋转门的后面。\p"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "她在等着想要展翅\n"
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "高飞的新挑战者！\p"
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "好，去吧！$"
# 184 "data/maps/FortreeCity_Gym/scripts.pory"

# 185 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你做到了！\n"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你成功起飞了！$"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"

# 189 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "好好看看鸟宝可梦\n"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "优雅的战斗方式吧！$"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"

# 193 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你……\n"
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你很强……$"
# 196 "data/maps/FortreeCity_Gym/scripts.pory"

# 197 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "训练家必须机灵，才能\n"
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "应对突发的变故。\p"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你有这份头脑走到\n"
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "馆主面前吗？$"
# 202 "data/maps/FortreeCity_Gym/scripts.pory"

# 203 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "热爱鸟宝可梦的人都\n"
# 205 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "以加入这个道馆为荣。\p"
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "身为茵郁道馆的一员，\n"
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我可不能输！$"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"

# 209 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "这份重担\n"
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我实在扛不住……$"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"

# 213 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "世界很大，厉害的\n"
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "训练家数不清。\p"
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我要继续训练，\n"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "让自己更强。$"
# 218 "data/maps/FortreeCity_Gym/scripts.pory"

# 219 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "不用我们的馆主娜琪\n"
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "出手对付你！\p"
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我完全足够\n"
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "当你的对手！$"
# 224 "data/maps/FortreeCity_Gym/scripts.pory"

# 225 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "娜琪，我……\n"
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我输了！$"
# 228 "data/maps/FortreeCity_Gym/scripts.pory"

# 229 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "娜琪又可爱又强。\n"
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "她是完美的馆主！\p"
# 232 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "脸红……$"
# 233 "data/maps/FortreeCity_Gym/scripts.pory"

# 234 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "娜琪亲手教过我！\n"
# 236 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你不会轻易赢我的！$"
# 237 "data/maps/FortreeCity_Gym/scripts.pory"

# 238 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我被打败了……$"
# 240 "data/maps/FortreeCity_Gym/scripts.pory"

# 241 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "多亏了娜琪，茵郁的\n"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "人们才能安心生活。$"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"

# 245 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "娜琪战斗时，脸上会\n"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "闪着美丽的认真……\p"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我才不让你看到\n"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "那么美的样子！$"
# 250 "data/maps/FortreeCity_Gym/scripts.pory"

# 251 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "呜！\n"
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我拦不住你。$"
# 254 "data/maps/FortreeCity_Gym/scripts.pory"

# 255 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你最好小心点！\n"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "别盯着娜琪看走神，\l"
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "否则会栽个大跟头！$"
# 259 "data/maps/FortreeCity_Gym/scripts.pory"

# 260 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你最好知道，飞行属性\n"
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "宝可梦有各种各样的。\p"
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你知道的吧？$"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"

# 265 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "看来你挺懂行！$"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"

# 268 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "行吧，你确实赢了我。\n"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "不过你最好小心点！\l"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我们的馆主娜琪的\l"
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "宝可梦可不好惹。$"
# 273 "data/maps/FortreeCity_Gym/scripts.pory"

# 274 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我是娜琪。我是茵郁\n"
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "宝可梦道馆的馆主。\p"
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我已与鸟宝可梦\n"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "合而为一，翱翔天际……\p"
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "可是，我被岩石、冰、\n"
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "电属性的招式打倒过\l"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "太多次了。\p"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我只好把自己优雅的\n"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "战法调整得\l"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "更加优美！\p"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "请欣赏我和宝可梦的\n"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "优美舞步！$"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"

# 288 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我还从未见过比\n"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我更优雅地指挥\l"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "宝可梦的训练家……\p"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "为了认可你的实力，\n"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我把这枚徽章送给你。$"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"

# 295 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "从娜琪那里\n"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "得到了羽翼徽章。$"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"

# 299 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "还有这些……\n"
# 301 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "这是送你的礼物。$"
# 302 "data/maps/FortreeCity_Gym/scripts.pory"

# 303 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "这些是我所知最强的\n"
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "飞行属性招式之一，\l"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "还有我最喜欢的超级石。\p"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "请善用它们，\n"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "威力非常惊人。\p"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"

# 311 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "已把馆主娜琪\n"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "登记进宝可梦导航。$"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"

# 315 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WhatOnEarth:
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "刚、刚才那是什么？\p"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}，回去的时候\n"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "要小心点。\p"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我不确定那场地震是\n"
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "怎么回事，不过\l"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "也许有人会打电话\l"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "告诉你发生了什么。$"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"

# 325 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 326 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "虽然我输给了你，\n"
# 327 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我还是会忠于我的宝可梦。$"
# 328 "data/maps/FortreeCity_Gym/scripts.pory"

# 329 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "茵郁市宝可梦道馆$"
# 331 "data/maps/FortreeCity_Gym/scripts.pory"

# 332 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "茵郁市宝可梦道馆\p"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "娜琪认定的训练家：\n"
# 335 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 336 "data/maps/FortreeCity_Gym/scripts.pory"

# 337 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "娜琪：我们人类永远\n"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "逃不过地面的引力。\p"
# 340 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "但只要追求卓越，\n"
# 341 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我们就有力量高飞！\p"
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你已登顶，成为\n"
# 343 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "现任冠军。\p"
# 344 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "请让我看看你\n"
# 345 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "完全展开的实力！$"
# 346 "data/maps/FortreeCity_Gym/scripts.pory"

# 347 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 348 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我又一次没能达到\n"
# 349 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你的高度……$"
# 350 "data/maps/FortreeCity_Gym/scripts.pory"

# 351 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 352 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "娜琪：虽然我输了，\n"
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我心中的翅膀不会折断。\p"
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我还能一次次\n"
# 355 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "重新起飞。\p"
# 356 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我确信！$"
# 357 "data/maps/FortreeCity_Gym/scripts.pory"

# 358 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "娜琪：我们人类永远\n"
# 360 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "逃不过地面的引力。\p"
# 361 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "但只要追求卓越，\n"
# 362 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "我们就有力量高飞！\p"
# 363 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "你已登顶，成为\n"
# 364 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "现任冠军。\p"
# 365 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "请让我看看你\n"
# 366 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "完全展开的实力！\p"
# 367 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "哦，不对……你身上\n"
# 368 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "只有一只宝可梦？\p"
# 369 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "请至少带两只\n"
# 370 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "宝可梦再来。$"
# 371 "data/maps/FortreeCity_Gym/scripts.pory"

# 372 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_Altaria:
# 373 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "七夕青鸟：咿咿咿呀！$"
