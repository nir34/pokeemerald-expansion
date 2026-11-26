MysteryGiftScript_VisitingTrainer::
	setvaddress MysteryGiftScript_VisitingTrainer
	special ValidateEReaderTrainer
	vgoto_if_eq VAR_RESULT, 0, MysteryGiftScript_VisitingTrainerArrived
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainerInstructions
	waitmessage
	waitbuttonpress
	release
	end

MysteryGiftScript_VisitingTrainerArrived:
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainerArrived
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftVisitingTrainerInstructions:
	.string "感谢使用神秘礼物\n"
	.string "系统。\p"
	.string "持有这张神秘卡片，就\n"
	.string "可以在宝可梦商店\l"
	.string "参加问卷调查。\p"
	.string "利用问卷调查，可以\n"
	.string "把训练家请到琉璃市。\p"
	.string "……我来给你一个\n"
	.string "问卷用的暗号：\p"
	.string "“给我\n"
	.string "超赞的训练家”\p"
	.string "把这句话写进问卷，\n"
	.string "发送到无线\l"
	.string "通信系统。$"

sText_MysteryGiftVisitingTrainerArrived:
	.string "感谢您使用神秘\n"
	.string "礼物系统。\p"
	.string "有一位训练家来到了\n"
	.string "琉璃市，正在找您。\p"
	.string "希望您和这位来访的\n"
	.string "训练家对战愉快。\p"
	.string "输入其他密码，还可以\n"
	.string "邀请别的训练家。\p"
	.string "试着找找其他\n"
	.string "可能有效的密码吧。$"
