# 1 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_EGG_TUTOR, 6
# 4 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 5 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_MapScripts::
# 6 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PokemonCenter_1F_OnTransition
# 7 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 8 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 9 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_OnTransition:
# 11 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 12 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Gentleman::
# 23 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 24 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 25 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 26 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 27 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge, MSGBOX_DEFAULT
# 28 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 29 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries::
# 32 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn, MSGBOX_DEFAULT
# 33 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 34 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Woman::
# 37 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 38 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 39 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 40 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 41 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends, MSGBOX_DEFAULT
# 42 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 43 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 44 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries::
# 46 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon, MSGBOX_DEFAULT
# 47 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 48 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 49 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 50 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_FormerDoubleEdgeTutor::
# 51 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lockall
# 52 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 53 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_FormerDoubleEdgeTutor, MSGBOX_DEFAULT
# 54 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	releaseall
# 55 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 56 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_FormerDoubleEdgeTutor:
# 58 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "我以前有两个很棒的\n"
# 59 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "刃……唉，怎么了呢？$"
# 60 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn:
# 62 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "传闻亚当是全丰缘最强的\n"
# 63 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "训练家。\p"
# 64 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "这个镇的道馆由教过亚当\n"
# 65 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "的训练家带领。\p"
# 66 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "可四天王……据说比亚当\n"
# 67 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "的师父还强。\p"
# 68 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "他们到底有多强？$"
# 69 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 70 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge:
# 71 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "镇上的人都躲在家里，\n"
# 72 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "不肯出来。\p"
# 73 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "连我都不想出门。$"
# 74 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 75 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon:
# 76 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "不管何时何地发生什么，\n"
# 77 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "我都会一直是宝可梦\l"
# 78 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "的朋友。\p"
# 79 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "因为和宝可梦在一起\n"
# 80 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "很开心！$"
# 81 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 82 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends:
# 83 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "宝可梦不是我们的\n"
# 84 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "朋友吗？\p"
# 85 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "它们为什么这样\n"
# 86 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "狂乱？$"
