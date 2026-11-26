# 1 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 2 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_MapScripts::
# 3 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 5 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SwordMaster::
# 6 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUSTED_SWORD, SootopolisCity_LotadAndSeedotHouse_EventScript_UseThatSword
# 9 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowZacian, MSGBOX_DEFAULT
# 10 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special ChoosePartyMon
# 11 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 12 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 13 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelZacian
# 14 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 15 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_ne VAR_RESULT, SPECIES_ZACIAN, SootopolisCity_LotadAndSeedotHouse_EventScript_NotZacian
# 16 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseTakeThisSword, MSGBOX_DEFAULT
# 17 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_RUSTED_SWORD
# 18 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUSTED_SWORD
# 19 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_UseThatSword, MSGBOX_DEFAULT
# 20 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 21 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 23 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelZacian::
# 24 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontZacian, MSGBOX_DEFAULT
# 25 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 26 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 27 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 28 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotZacian::
# 29 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_NotZacian, MSGBOX_DEFAULT
# 30 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 31 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 32 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 33 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_UseThatSword::
# 34 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_UseThatSword, MSGBOX_DEFAULT
# 35 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 36 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 37 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 38 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_ShieldMaster::
# 39 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 40 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 41 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUSTED_SHIELD, SootopolisCity_LotadAndSeedotHouse_EventScript_UseThatShield
# 42 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowZamazenta, MSGBOX_DEFAULT
# 43 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special ChoosePartyMon
# 44 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 45 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 46 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelZamazenta
# 47 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 48 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_ne VAR_RESULT, SPECIES_ZAMAZENTA, SootopolisCity_LotadAndSeedotHouse_EventScript_NotZamazenta
# 49 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseTakeThisShield, MSGBOX_DEFAULT
# 50 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_RUSTED_SHIELD
# 51 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUSTED_SHIELD
# 52 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_UseThatShield, MSGBOX_DEFAULT
# 53 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 54 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 55 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 56 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelZamazenta::
# 57 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontZamazenta, MSGBOX_DEFAULT
# 58 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 59 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 60 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 61 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotZamazenta::
# 62 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_NotZamazenta, MSGBOX_DEFAULT
# 63 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 64 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 65 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 66 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_UseThatShield::
# 67 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_UseThatShield, MSGBOX_DEFAULT
# 68 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 69 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 70 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 71 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowZacian:
# 72 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "我修习剑之道，\n"
# 73 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "全是攻击。\p"
# 74 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "你要是能给我看符合\n"
# 75 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "这个理念的宝可梦，\l"
# 76 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "我就送你一件好道具。$"
# 77 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 78 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseTakeThisSword:
# 79 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "太好了！那只宝可梦\n"
# 80 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "绝对懂剑之道！\p"
# 81 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "来，请收下这个！$"
# 82 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 83 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 84 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_UseThatSword:
# 85 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "希望你和你的宝可梦用\n"
# 86 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "那把剑打出强力攻击！$"
# 87 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 88 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontZacian:
# 89 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "我明白了，你没有符合\n"
# 90 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "我理念的宝可梦。$"
# 91 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 92 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_NotZacian:
# 93 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "那只宝可梦不符合\n"
# 94 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "我的理念。$"
# 95 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 96 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 97 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 98 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 99 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowZamazenta:
# 100 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "我修习盾之道，\n"
# 101 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "全是防御。\p"
# 102 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "你要是能给我看符合\n"
# 103 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "这个理念的宝可梦，\l"
# 104 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "我就送你一件好道具。$"
# 105 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 106 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseTakeThisShield:
# 107 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "太好了！那只宝可梦\n"
# 108 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "绝对懂盾之道！\p"
# 109 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "来，请收下这个！$"
# 110 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 111 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 112 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_UseThatShield:
# 113 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "希望你和你的宝可梦用\n"
# 114 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "那面盾打出强力防御！$"
# 115 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 116 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontZamazenta:
# 117 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "我明白了，你没有符合\n"
# 118 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "我理念的宝可梦。$"
# 119 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 120 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_NotZamazenta:
# 121 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "那只宝可梦不符合\n"
# 122 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "我的理念。$"
