MysteryGiftScript_BattleCard::
	setvaddress MysteryGiftScript_BattleCard
	vgoto_if_set FLAG_MYSTERY_GIFT_DONE, MysteryGiftScript_BattleCardInfo
	setorcopyvar VAR_RESULT, GET_CARD_BATTLES_WON
	specialvar VAR_0x8008, GetMysteryGiftCardStat
	vgoto_if_ne VAR_0x8008, REQUIRED_CARD_BATTLES, MysteryGiftScript_BattleCardInfo
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard_WonPrize
	waitmessage
	waitbuttonpress
	giveitem ITEM_POTION
	release
	setflag FLAG_MYSTERY_GIFT_DONE
	end

MysteryGiftScript_BattleCardInfo:
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftBattleCountCard:
	.string "感谢使用神秘礼物\n"
	.string "系统。\p"
	.string "你的对战计数卡会记录\n"
	.string "你与持有相同卡片的\l"
	.string "训练家的对战成绩。\p"
	.string "去找持有与你相同卡片的\n"
	.string "训练家对战吧。\p"
	.string "阅读新闻可以查看\n"
	.string "总体排行。\p"
	.string "请务必试试看！$"

sText_MysteryGiftBattleCountCard_WonPrize:
	.string "感谢使用神秘礼物\n"
	.string "系统。\p"
	.string "恭喜！\p"
	.string "你因赢得三场对战\n"
	.string "获得了奖品！\p"
	.string "希望这能鼓励你\n"
	.string "再多对战几场。$"
