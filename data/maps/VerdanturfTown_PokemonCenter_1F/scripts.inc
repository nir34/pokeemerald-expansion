# 1 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
# 11 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
# 23 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
# 24 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
# 27 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
# 28 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_FormerFuryCutterTutor::
# 31 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	lockall
# 32 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 33 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_Text_FormerFuryCutterTutor, MSGBOX_DEFAULT
# 34 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	releaseall
# 35 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon:
# 38 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "要是不相信自己的宝可梦，\n"
# 39 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "就不算真正的训练家。\p"
# 40 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "只有那些能信任自己\n"
# 41 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "对战宝可梦的人，\l"
# 42 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "才能一直赢到最后。$"
# 43 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
# 45 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "要说人们为什么会来\n"
# 46 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "绿荫镇……\p"
# 47 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "当然是对战帐篷。\n"
# 48 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "这还用说。\p"
# 49 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "还是说，这里有你想\n"
# 50 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "见的人？$"
# 51 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
MauvilleCity_Text_FormerFuryCutterTutor:
# 53 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "我以前能愤怒地斩击……\n"
# 54 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "唉，到底怎么了呢？$"
