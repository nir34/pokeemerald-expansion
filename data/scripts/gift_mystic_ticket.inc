MysteryGiftScript_MysticTicket::
	setvaddress MysteryGiftScript_MysticTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_MYSTIC_TICKET, MysticTicket_Obtained
	vgoto_if_set FLAG_CAUGHT_ZEKROM, MysticTicket_Obtained
	vgoto_if_set FLAG_CAUGHT_RESHIRAM, MysticTicket_Obtained
	checkitem ITEM_MYSTIC_TICKET
	vgoto_if_eq VAR_RESULT, TRUE, MysticTicket_Obtained
	vmessage sText_MysticTicketForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_MYSTIC_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, MysticTicket_NoBagSpace
	giveitem ITEM_MYSTIC_TICKET
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	setflag FLAG_RECEIVED_MYSTIC_TICKET
	vmessage sText_MysticTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_NoBagSpace:
	vmessage sText_MysticTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_Obtained:
	vmessage sText_MysticTicketThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_MysticTicketForYou:
	.string "感谢您使用神秘\n"
	.string "礼物系统。\p"
	.string "您就是{PLAYER}吧。\n"
	.string "这里有一张给您的票。$"

sText_MysticTicketUseAtPort:
	.string "看起来要在琉璃市的\n"
	.string "港口使用。\p"
	.string "何不去试试，\n"
	.string "看看是怎么回事？$"

sText_MysticTicketThankYou:
	.string "感谢您使用神秘\n"
	.string "礼物系统。$"

sText_MysticTicketBagFull:
	.string "哦，抱歉，{PLAYER}。\n"
	.string "你包包的重要道具袋满了。\p"
	.string "请先在电脑里存点东西，\n"
	.string "然后再来领取。$"
