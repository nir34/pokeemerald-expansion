MysteryGiftScript_AuroraTicket::
	setvaddress MysteryGiftScript_AuroraTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_AURORA_TICKET, AuroraTicket_Obtained
	vgoto_if_set FLAG_BATTLED_DEOXYS, AuroraTicket_Obtained
	checkitem ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, TRUE, AuroraTicket_Obtained
	vmessage sText_AuroraTicketForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, AuroraTicket_NoBagSpace
	giveitem ITEM_AURORA_TICKET
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
	setflag FLAG_RECEIVED_AURORA_TICKET
	vmessage sText_AuroraTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_NoBagSpace:
	vmessage sText_AuroraTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_Obtained:
	vmessage sText_AuroraTicketThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_AuroraTicketForYou:
	.string "感谢您使用神秘\n"
	.string "礼物系统。\p"
	.string "您就是{PLAYER}吧。\n"
	.string "这里有一张给您的票。$"

sText_AuroraTicketUseAtPort:
	.string "看起来要在琉璃市的\n"
	.string "港口使用。\p"
	.string "何不去试试，\n"
	.string "看看是怎么回事？$"

sText_AuroraTicketThankYou:
	.string "感谢您使用神秘\n"
	.string "礼物系统。$"

sText_AuroraTicketBagFull:
	.string "哦，抱歉，{PLAYER}。\n"
	.string "你包包的重要道具袋满了。\p"
	.string "请先在电脑里存点东西，\n"
	.string "然后再来领取。$"
