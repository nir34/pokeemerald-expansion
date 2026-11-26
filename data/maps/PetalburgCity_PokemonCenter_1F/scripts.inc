# 1 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 23 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 31 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
# 42 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
# 52 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
# 55 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
# 56 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 57 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
# 59 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "那种用电脑的宝可梦\n"
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "存放系统……\p"
# 61 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "做它的人一定是个\n"
# 62 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "科学奇才！$"
# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
# 65 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "我的宝可梦吃了\n"
# 66 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "橙橙果，回复了HP！$"
# 67 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
# 69 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "宝可梦有很多属性。\p"
# 70 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "所有属性对其他属性\n"
# 71 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "都有长处和短处。\p"
# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "看宝可梦的属性，\n"
# 73 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "对战有时容易有时难。$"
# 74 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 75 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
# 76 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "比如，你的木守宫\n"
# 77 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "是草属性。\p"
# 78 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "它对水和地面属性\n"
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "很强。\p"
# 80 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "但对火属性的\n"
# 81 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "宝可梦很弱。$"
# 82 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 83 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "比如，你的火稚鸡\n"
# 85 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "是火属性。\p"
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "它对草和虫属性\n"
# 87 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "很强。\p"
# 88 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "但对水属性的\n"
# 89 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "宝可梦很弱。$"
# 90 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 91 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
# 92 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "比如，你的水跃鱼\n"
# 93 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "是水属性。\p"
# 94 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "它对火属性很强。\p"
# 95 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "但对草属性和电属性\n"
# 96 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "的宝可梦很弱。$"
