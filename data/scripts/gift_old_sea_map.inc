MysteryGiftScript_OldSeaMap::
	setvaddress MysteryGiftScript_OldSeaMap
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_OLD_SEA_MAP, OldSeaMap_Obtained
	vgoto_if_set FLAG_CAUGHT_MEW, OldSeaMap_Obtained
	checkitem ITEM_OLD_SEA_MAP
	vgoto_if_eq VAR_RESULT, TRUE, OldSeaMap_Obtained
	vmessage sText_MysteryGiftOldSeaMapForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_OLD_SEA_MAP
	vgoto_if_eq VAR_RESULT, FALSE, OldSeaMap_NoBagSpace
	giveitem ITEM_OLD_SEA_MAP
	setflag FLAG_ENABLE_SHIP_FARAWAY_ISLAND
	setflag FLAG_RECEIVED_OLD_SEA_MAP
	vmessage sText_MysteryGiftOldSeaMapUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

OldSeaMap_NoBagSpace:
	vmessage sText_MysteryGiftOldSeaMapBagFull
	waitmessage
	waitbuttonpress
	release
	end

OldSeaMap_Obtained:
	vmessage sText_MysteryGiftOldSeaMapThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftOldSeaMapForYou:
	.string "感谢使用神秘礼物\n"
	.string "系统。\p"
	.string "让我确认一下——\n"
	.string "你是{PLAYER}吗？\p"
	.string "我们收到了寄给你的\n"
	.string "古老海图。$"

sText_MysteryGiftOldSeaMapUseAtPort:
	.string "看起来要在琉璃市的\n"
	.string "港口使用。\p"
	.string "何不去试试，\n"
	.string "看看是怎么回事？$"

sText_MysteryGiftOldSeaMapThankYou:
	.string "感谢您使用神秘\n"
	.string "礼物系统。$"

sText_MysteryGiftOldSeaMapBagFull:
	.string "哦，抱歉，{PLAYER}。\n"
	.string "你包包的重要道具袋满了。\p"
	.string "请先在电脑里存点东西，\n"
	.string "然后再来领取。$"
