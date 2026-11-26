# 1 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 11 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
# 23 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
# 24 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
# 27 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
# 28 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
# 31 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
# 32 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 33 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
# 35 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "我觉得宝可梦多和训练家\n"
# 36 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "相处，就会更亲近。\p"
# 37 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "越久越好。\n"
# 38 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "我是这么想的。$"
# 39 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
# 41 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "只是坐在温泉里就能\n"
# 42 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "精神百倍，真有点神奇。\p"
# 43 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "真希望也能让我的\n"
# 44 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "宝可梦泡一泡。$"
# 45 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
# 47 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "呵呵！喂，小子，从这里\n"
# 48 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "能到温泉去。\p"
# 49 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "宝可梦都在休息，\n"
# 50 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "训练家当然也该休息。$"
