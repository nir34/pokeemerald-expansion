# 1 "data/maps/PacifidlogTown_House4/scripts.pory"

# 2 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_MapScripts::
# 3 "data/maps/PacifidlogTown_House4/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House4/scripts.pory"

# 5 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_LittleGirl::
# 6 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_SkyPokemon, MSGBOX_NPC
# 7 "data/maps/PacifidlogTown_House4/scripts.pory"
	end
# 8 "data/maps/PacifidlogTown_House4/scripts.pory"

# 9 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_Woman::
# 10 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon, MSGBOX_NPC
# 11 "data/maps/PacifidlogTown_House4/scripts.pory"
	end
# 12 "data/maps/PacifidlogTown_House4/scripts.pory"

# 13 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_Boy::
# 14 "data/maps/PacifidlogTown_House4/scripts.pory"
	lock
# 15 "data/maps/PacifidlogTown_House4/scripts.pory"
	faceplayer
# 16 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_WhereDidYouComeFrom, MSGBOX_YESNO
# 17 "data/maps/PacifidlogTown_House4/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PacifidlogTown_House4_EventScript_Yes
# 18 "data/maps/PacifidlogTown_House4/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PacifidlogTown_House4_EventScript_No
# 19 "data/maps/PacifidlogTown_House4/scripts.pory"
	end
# 20 "data/maps/PacifidlogTown_House4/scripts.pory"

# 21 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_Yes::
# 22 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_YesTown, MSGBOX_DEFAULT
# 23 "data/maps/PacifidlogTown_House4/scripts.pory"
	release
# 24 "data/maps/PacifidlogTown_House4/scripts.pory"
	end
# 25 "data/maps/PacifidlogTown_House4/scripts.pory"

# 26 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_No::
# 27 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere, MSGBOX_DEFAULT
# 28 "data/maps/PacifidlogTown_House4/scripts.pory"
	release
# 29 "data/maps/PacifidlogTown_House4/scripts.pory"
	end
# 30 "data/maps/PacifidlogTown_House4/scripts.pory"

# 31 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon:
# 32 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "大家都说看见过一只\n"
# 33 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "宝可梦在丰缘高空飞。\p"
# 34 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "它是不是一直飞来飞去？\n"
# 35 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "不用找地方休息吗？$"
# 36 "data/maps/PacifidlogTown_House4/scripts.pory"

# 37 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_Text_SkyPokemon:
# 38 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "天空的宝可梦！\n"
# 39 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "天空的宝可梦！$"
# 40 "data/maps/PacifidlogTown_House4/scripts.pory"

# 41 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_Text_WhereDidYouComeFrom:
# 42 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "你是从哪儿来的？$"
# 43 "data/maps/PacifidlogTown_House4/scripts.pory"

# 44 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_Text_YesTown:
# 45 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "是？\n"
# 46 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "YES TOWN？\p"
# 47 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "我从没听说过\n"
# 48 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "这种地方。$"
# 49 "data/maps/PacifidlogTown_House4/scripts.pory"

# 50 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere:
# 51 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "不是？这说不通啊。\n"
# 52 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "你总得从哪儿来吧。\p"
# 53 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "哦！等等！你该不会\n"
# 54 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "说你生在海底吧？$"
