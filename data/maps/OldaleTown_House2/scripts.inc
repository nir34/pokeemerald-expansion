# 1 "data/maps/OldaleTown_House2/scripts.pory"

# 2 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_MapScripts::
# 3 "data/maps/OldaleTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_House2/scripts.pory"

# 5 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Woman::
# 6 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
# 7 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 8 "data/maps/OldaleTown_House2/scripts.pory"

# 9 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Man::
# 10 "data/maps/OldaleTown_House2/scripts.pory"
	lock
# 11 "data/maps/OldaleTown_House2/scripts.pory"
	faceplayer
# 12 "data/maps/OldaleTown_House2/scripts.pory"
	checkitem ITEM_SHINY_CHARM
# 13 "data/maps/OldaleTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, OldaleTown_House2_EventScript_ManNormal
# 14 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_IfYoureSeeingThis, MSGBOX_DEFAULT
# 15 "data/maps/OldaleTown_House2/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 16 "data/maps/OldaleTown_House2/scripts.pory"
	release
# 17 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 18 "data/maps/OldaleTown_House2/scripts.pory"

# 19 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_ManNormal::
# 20 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_DEFAULT
# 21 "data/maps/OldaleTown_House2/scripts.pory"
	release
# 22 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 23 "data/maps/OldaleTown_House2/scripts.pory"

# 24 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_PokemonLevelUp:
# 25 "data/maps/OldaleTown_House2/scripts.pory"
	.string "宝可梦对战后会渐渐\n"
# 26 "data/maps/OldaleTown_House2/scripts.pory"
	.string "升级变强。$"
# 27 "data/maps/OldaleTown_House2/scripts.pory"

# 28 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_IfYoureSeeingThis:
# 29 "data/maps/OldaleTown_House2/scripts.pory"
	.string "如果你看到这段话，\n"
# 30 "data/maps/OldaleTown_House2/scripts.pory"
	.string "说明你是真正的老玩家。\l"
# 31 "data/maps/OldaleTown_House2/scripts.pory"
	.string "来，这个给你。$"
# 32 "data/maps/OldaleTown_House2/scripts.pory"

# 33 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
# 34 "data/maps/OldaleTown_House2/scripts.pory"
	.string "带着的宝可梦变强了，\n"
# 35 "data/maps/OldaleTown_House2/scripts.pory"
	.string "你就能走得更远。$"
