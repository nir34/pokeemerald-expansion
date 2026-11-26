MysteryGiftScript_AlteringCave::
	setvaddress MysteryGiftScript_AlteringCave
	addvar VAR_ALTERING_CAVE_WILD_SET, 1
	vgoto_if_ne VAR_ALTERING_CAVE_WILD_SET, (NUM_ALTERING_CAVE_TABLES + 1), MysteryGiftScript_AlteringCave_
	setvar VAR_ALTERING_CAVE_WILD_SET, 0
MysteryGiftScript_AlteringCave_:
	lock
	faceplayer
	vmessage sText_MysteryGiftAlteringCave
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftAlteringCave:
	.string "感谢使用神秘礼物\n"
	.string "系统。\p"
	.string "似乎有传闻说有人\n"
	.string "目击到稀有宝可梦。\p"
	.string "据说目击地点是\n"
	.string "103号道路的变幻洞窟。\p"
	.string "也许值得你去\n"
	.string "调查这个传闻。$"
