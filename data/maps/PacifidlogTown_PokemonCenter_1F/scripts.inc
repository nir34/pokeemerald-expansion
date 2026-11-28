# 1 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
# 11 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Girl::
# 22 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
# 23 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Woman::
# 26 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
# 27 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_FormerExplosionTutor::
# 30 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	lockall
# 31 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 32 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_FormerExplosionTutor, MSGBOX_DEFAULT
# 33 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	releaseall
# 34 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_FormerExplosionTutor:
# 37 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "我以前能炸出好大的\n"
# 38 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "爆炸……唉，怎么了呢？$"
# 39 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard:
# 41 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "你的训练家卡\n"
# 42 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "是什么颜色？\l"
# 43 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "我的是铜色！$"
# 44 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola:
# 46 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "水静市浮在一大群\n"
# 47 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "太阳珊瑚上面。\p"
# 48 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "我这么说，\n"
# 49 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "你信吗？$"

PacifidlogTown_PokemonCenter_1F_EventScript_EggMan::
# 53 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	lock
# 54 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 55 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_PseudoManIntro, MSGBOX_YESNO
# 57 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_EggMan_2
PacifidlogTown_PokemonCenter_1F_EventScript_EggMan_1:
# 62 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 63 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PacifidlogTown_PokemonCenter_1F_EventScript_ComeBackWithYellowShard
# 64 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	getpartysize
# 65 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, PacifidlogTown_PokemonCenter_1F_EventScript_NoRoomForEgg
# 66 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 67 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 68 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	message PacifidlogTown_PokemonCenter_1F_Text_ReceivedTheEgg
# 69 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 70 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	giveegg SPECIES_DRATINI
# 71 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 72 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_ComeBackWithMore, MSGBOX_DEFAULT
# 73 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_EggMan_2:
# 59 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	goto PacifidlogTown_PokemonCenter_1F_EventScript_PseudoEggManManNo
	goto PacifidlogTown_PokemonCenter_1F_EventScript_EggMan_1


PacifidlogTown_PokemonCenter_1F_EventScript_PseudoEggManManNo::
# 79 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_PseudoEggManDeclined, MSGBOX_DEFAULT
# 80 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
	end


PacifidlogTown_PokemonCenter_1F_EventScript_ComeBackWithYellowShard::
# 85 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_ComeBackWithYellowShard, MSGBOX_DEFAULT
# 86 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
	end


PacifidlogTown_PokemonCenter_1F_EventScript_NoRoomForEgg::
# 91 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 92 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
	end


PacifidlogTown_PokemonCenter_1F_PseudoManIntro::
# 96 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "你好，训练家。我手上有几颗\n"
	.string "稀有的蛋。\p"
	.string "我现在正需要黄色碎片，\n"
	.string "你愿意用一枚黄色碎片\l"
	.string "来换其中\l"
	.string "一颗蛋吗？$"

PacifidlogTown_PokemonCenter_1F_PseudoEggManDeclined::
# 105 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "我明白了。若你改变主意，\n"
	.string "请再来。$"

PacifidlogTown_PokemonCenter_1F_Text_ComeBackWithYellowShard::
# 111 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "看来你没有\n"
	.string "黄色碎片。有了再来吧。$"

PacifidlogTown_PokemonCenter_1F_Text_NoRoomForThisEgg::
# 116 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "哦？你的宝可梦太多了。\n"
	.string "没地方放这颗蛋……$"

PacifidlogTown_PokemonCenter_1F_Text_HopeYoullWalkPlentyWithEgg::
# 121 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "好！希望你能带着\n"
	.string "这颗蛋多走走！$"

PacifidlogTown_PokemonCenter_1F_Text_ReceivedTheEgg::
# 126 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER}收到了蛋。$"

PacifidlogTown_PokemonCenter_1F_ComeBackWithMore::
# 130 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "若还有更多想交换的\n"
	.string "黄色碎片，请再来。$"
