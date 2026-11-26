# 1 "data/maps/MossdeepCity_House3/scripts.pory"

# 2 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_MapScripts::
# 3 "data/maps/MossdeepCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_House3/scripts.pory"

# 5 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperRodFisherman::
# 6 "data/maps/MossdeepCity_House3/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_House3/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, MossdeepCity_House3_EventScript_ReceivedSuperRod
# 9 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_YouWantSuperRod, MSGBOX_YESNO
# 10 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_DeclineSuperRod
# 11 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_SuperRodIsSuper, MSGBOX_DEFAULT
# 12 "data/maps/MossdeepCity_House3/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 13 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 14 "data/maps/MossdeepCity_House3/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 15 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
# 16 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 17 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 18 "data/maps/MossdeepCity_House3/scripts.pory"

# 19 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_ReceivedSuperRod::
# 20 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
# 21 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 22 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_House3/scripts.pory"

# 24 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_DeclineSuperRod::
# 25 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 26 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 27 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 28 "data/maps/MossdeepCity_House3/scripts.pory"

# 29 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_YouWantSuperRod:
# 30 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "嘿，训练家！\n"
# 31 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "厉害钓竿真是厉害！\p"
# 32 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "随你怎么说，这宝贝\n"
# 33 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "能钓到海底的宝可梦！\p"
# 34 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "怎么样？\n"
# 35 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "你想要吧？$"
# 36 "data/maps/MossdeepCity_House3/scripts.pory"

# 37 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_SuperRodIsSuper:
# 38 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "没错没错！\n"
# 39 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "厉害钓竿就是厉害！$"
# 40 "data/maps/MossdeepCity_House3/scripts.pory"

# 41 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_TryDroppingRodInWater:
# 42 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "要是有水，就试试\n"
# 43 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "抛竿，看什么上钩！$"
# 44 "data/maps/MossdeepCity_House3/scripts.pory"

# 45 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_DontYouLikeToFish:
# 46 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "嗯？\n"
# 47 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "你不喜欢钓鱼吗？$"
# 48 "data/maps/MossdeepCity_House3/scripts.pory"

# 49 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_GoAfterSeafloorPokemon:
# 50 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "用厉害钓竿去钓\n"
# 51 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "海底的宝可梦吧。$"
