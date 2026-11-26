# 1 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_MapScripts::
# 3 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_OnFrame
# 4 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
# 5 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
# 6 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
# 7 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 9 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnTransition:
# 10 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
# 11 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 12 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 13 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnResume:
# 14 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
# 15 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 16 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 17 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnLoad:
# 18 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 19 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
# 20 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 21 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 22 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
# 23 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
# 24 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
# 25 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
# 26 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
# 27 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
# 28 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
# 29 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
# 30 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
# 31 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
# 32 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
# 33 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
# 34 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
# 35 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 36 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 37 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnFrame:
# 38 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
# 39 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
# 40 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
# 41 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
# 42 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.2byte 0
# 43 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 44 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
# 45 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 46 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 47 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 48 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 49 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 50 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 51 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 52 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
# 53 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 54 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 55 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 56 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 57 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 58 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 59 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 60 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
# 61 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 62 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 63 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 64 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 65 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 67 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 68 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_FallThroughIce::
# 69 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 70 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 20
# 71 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 72 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_FALL
# 74 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 60
# 75 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
# 76 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitstate
# 77 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 78 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 79 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Movement_FallThroughIce:
# 80 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	set_invisible
# 81 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	step_end
# 82 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 83 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan::
# 84 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 85 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 86 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SootopolisCity_Gym_1F_EventScript_JuanRematch
# 87 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_MOONBLAST, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
# 88 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
# 89 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 90 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 91 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 92 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 93 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanDefeated::
# 94 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 95 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 96 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 97 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 98 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 99 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 100 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 101 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 102 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 103 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 104 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 105 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 106 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 107 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
# 108 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 109 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 110 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 111 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 112 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 113 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 114 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 115 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 116 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 117 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	specialvar VAR_0x8006, GetLevelCapForText
# 118 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 119 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox LevelCapIncreasedTo, MSGBOX_DEFAULT
# 120 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 121 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 122 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 123 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 124 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 125 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 126 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
# 127 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_GRIMMITE
# 128 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_MOONBLAST
# 129 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_MISTY_EXPLOSION
# 130 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 131 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_MOONBLAST
# 132 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 133 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 134 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
# 135 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_GRIMMITE
# 136 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_MOONBLAST
# 137 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_MISTY_EXPLOSION
# 138 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 139 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_MOONBLAST
# 140 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 141 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 142 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 143 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
# 144 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 145 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 146 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 147 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 148 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanRematch::
# 149 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
# 150 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
# 151 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 152 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 153 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide::
# 154 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 155 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 156 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
# 157 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 158 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 159 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 160 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 161 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
# 162 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 163 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 164 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 165 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 166 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
# 167 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 168 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 169 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 170 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 171 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 172 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue::
# 173 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 174 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 175 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 176 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 177 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 178 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
# 179 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 180 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 181 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 182 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 183 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatue::
# 184 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 185 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 186 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 187 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 188 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_EventScript_Diancie::
# 189 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 190 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 191 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitse
# 192 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 193 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_Diancie, MSGBOX_DEFAULT
# 194 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmoncry
# 195 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 196 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 197 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 198 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuideAdvice:
# 199 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "哟！冠军候补{PLAYER}，\n"
# 200 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "近况如何？\p"
# 201 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "琉璃市的馆主阿丹是\n"
# 202 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "妖精属性宝可梦的高手。\p"
# 203 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "而且，要到阿丹那儿，\n"
# 204 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "还得过一片冰面……\p"
# 205 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "听好，抱歉，我能给的\n"
# 206 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "建议就这些。\p"
# 207 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "剩下的路，你得\n"
# 208 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "自己去闯！$"
# 209 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 210 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
# 211 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "哇！你连号称全丰缘\n"
# 212 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "最强的阿丹都打赢了！\p"
# 213 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "好！看看你的\n"
# 214 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "训练家卡。\p"
# 215 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "要是集齐了所有徽章，\n"
# 216 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "就可以去挑战\l"
# 217 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "宝可梦联盟了！$"
# 218 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 219 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanIntro:
# 220 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "我问你。\n"
# 221 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "你知道吗？\l"
# 222 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "啊，我不该这么绕弯。\p"
# 223 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "正是我教会了亚当关于\n"
# 224 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "宝可梦的一切。\p"
# 225 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "我曾经放弃了道馆\n"
# 226 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "馆主的位子。\p"
# 227 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "我把道馆托付给了\n"
# 228 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "亚当。\p"
# 229 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "可是，有个必须让我\n"
# 230 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "复出的理由。\p"
# 231 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "可我不能以从前那个\n"
# 232 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "身份回来！\p"
# 233 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "我只能重塑自己的\n"
# 234 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "风格！而现在，\l"
# 235 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "带着这些华丽优雅的\l"
# 236 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "妖精属性宝可梦……\p"
# 237 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "啊，话说得够多了。\n"
# 238 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "我们开始对战吧？\p"
# 239 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "请见证我的\n"
# 240 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "新艺术！$"
# 241 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 242 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
# 243 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
# 244 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
# 245 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the existence of that unused array of ints.
# 246 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanDefeat:
# 247 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "啊哈哈哈，太棒了！\n"
# 248 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "很好，你是胜者。\p"
# 249 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "我从你身上看到了能\n"
# 250 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "超越一切的才华之光。\p"
# 251 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "不过，和我，甚至和\n"
# 252 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "亚当相比，你还\l"
# 253 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "缺少优雅。\p"
# 254 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "也许我该把我的\n"
# 255 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "衣服借给你？\p"
# 256 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …\n"
# 257 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …\p"
# 258 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "哈哈哈，我只是开个\n"
# 259 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "玩笑！\p"
# 260 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "比起我的衣服，我更该\n"
# 261 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "给你这个——雨滴徽章！$"
# 262 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 263 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
# 264 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "从阿丹那里\n"
# 265 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "得到了雨滴徽章。$"
# 266 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 267 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
# 268 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "雨滴徽章能让你使用\n"
# 269 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "秘传招式攀瀑，\l"
# 270 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "爬上水流成的墙。\p"
# 271 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "还有，为了让你不忘\n"
# 272 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "我们这一战，收下这个……$"
# 273 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 274 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainWaterPulse:
# 275 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "我给你的那个学习器\n"
# 276 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "里是魔法闪耀。\p"
# 277 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "使用时，有时会降低\n"
# 278 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "目标的特攻。\p"
# 279 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …$"
# 280 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 281 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_RegisteredJuan:
# 282 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "已把馆主阿丹\n"
# 283 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "登记进宝可梦导航。$"
# 284 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 285 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostBattle:
# 286 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "集齐丰缘所有道馆\n"
# 287 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "徽章的训练家，\l"
# 288 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "该前往最终的目的地。\p"
# 289 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "宝可梦联盟。\p"
# 290 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "往丰缘最东边，\n"
# 291 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "到彩幽岛去。\p"
# 292 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "在那里，你会找到\n"
# 293 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "宝可梦联盟。$"
# 294 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 295 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
# 296 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "丰缘只剩一枚徽章\n"
# 297 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "没拿到了。\p"
# 298 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "想挑战宝可梦联盟，\n"
# 299 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "你得去茵郁的道馆\l"
# 300 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "拿到最后一枚徽章。$"
# 301 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 302 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatue:
# 303 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "琉璃市宝可梦道馆$"
# 304 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 305 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatueCertified:
# 306 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "琉璃市宝可梦道馆\p"
# 307 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "阿丹认定的训练家：\n"
# 308 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 309 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 310 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPreRematch:
# 311 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "阿丹：啊，这座道馆又\n"
# 312 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "恢复了往日的宁静……\p"
# 313 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "可我们年轻的台风又\n"
# 314 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "回来考验我们了！\p"
# 315 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "好啊，我的朋友，\n"
# 316 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "当然！\p"
# 317 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "只要你愿意，我很乐意\n"
# 318 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "和你跳舞，多少次都行！$"
# 319 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 320 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchDefeat:
# 321 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "啊哈哈哈，你是胜者！\n"
# 322 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "你又打败了我！$"
# 323 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 324 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostRematch:
# 325 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "阿丹：要是我叫你做我的\n"
# 326 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "徒弟，你一定会拒绝。\p"
# 327 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "我想把我的外套\n"
# 328 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "送给你。\p"
# 329 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "可你也会拒绝。\n"
# 330 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "我想一定是这样。\p"
# 331 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "我的朋友，这正是\n"
# 332 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "高贵的一种证明！$"
# 333 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 334 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons:
# 335 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "阿丹：啊，这座道馆又\n"
# 336 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "恢复了往日的宁静……\p"
# 337 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "可我们年轻的台风又\n"
# 338 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "回来考验我们了！\p"
# 339 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "好啊，我的朋友，\n"
# 340 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "当然！我很乐意\l"
# 341 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "和你跳舞……\p"
# 342 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "啊，不，不不。\n"
# 343 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "你身上只有一只宝可梦。\p"
# 344 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "希望你能带两只，\n"
# 345 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "最好是更多，再来。$"
# 346 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 347 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_Text_Diancie:
# 348 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "蒂安希：呜咿咿咿咿！$"
