# 1 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 11 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx
# 12 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
@ SetLilycoveLadyGfx returns TRUE if its the Contest Lady
# 15 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx::
# 16 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	special SetLilycoveLadyGfx
# 17 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonCenter_1F_EventScript_HideContestLadyMon
# 18 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonCenter_1F_EventScript_ShowContestLadyMon
# 19 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_HideContestLadyMon::
# 22 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
# 23 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_ShowContestLadyMon::
# 26 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
# 27 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Nurse::
# 30 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 31 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 32 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 33 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 34 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 35 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Boy::
# 38 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon, MSGBOX_NPC
# 39 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Maniac::
# 42 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	lock
# 43 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 44 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_PokemonCenter_1F_EventScript_ManiacBadTeamGone
# 45 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels, MSGBOX_DEFAULT
# 46 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 47 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 48 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_ManiacBadTeamGone::
# 50 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels, MSGBOX_DEFAULT
# 51 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 52 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon:
# 55 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "不知道这世界上有\n"
# 56 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "多少种宝可梦。\p"
# 57 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "要是能渡海和远方\n"
# 58 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "的人交换宝可梦\l"
# 59 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "就好了。$"
# 60 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels:
# 62 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "我一直听说有些坏\n"
# 63 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "家伙偷宝可梦、骗\l"
# 64 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "陨石。$"
# 65 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels:
# 67 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "那些偷宝可梦、骗\n"
# 68 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "陨石的坏家伙……\p"
# 69 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "最近没在附近\n"
# 70 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "看到了。$"
