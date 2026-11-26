# 1 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FORTREE_CITY
# 11 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Gentleman::
# 22 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
# 23 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Man::
# 26 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
# 27 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Boy::
# 30 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
# 31 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_GoToSafariZone:
# 34 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "听着，孩子，你在做\n"
# 35 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "宝可梦图鉴吗？\p"
# 36 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Hmm……去狩猎地带吧。\n"
# 37 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "这是我的建议。$"
# 38 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat:
# 40 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "你在记录角落\n"
# 41 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "玩过吗？\p"
# 42 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "挺有意思的。它会把\n"
# 43 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "训练家的记录\l"
# 44 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "混合搭配起来。\p"
# 45 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "我不太懂原理，\n"
# 46 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "但很酷，还很刺激！$"
# 47 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
# 49 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "哦，哇，你有宝可梦\n"
# 50 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "导航！和我的一样！\p"
# 51 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "你知道导航里的\n"
# 52 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "联系呼叫系统吗？\p"
# 53 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "打开它，就能随时和\n"
# 54 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "登记过的训练家聊天。\p"
# 55 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "它还会告诉你有哪个\n"
# 56 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "训练家想再战。\p"
# 57 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "真好用！得文的人\n"
# 58 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "真懂行！$"
