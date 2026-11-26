# 1 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ This NPC gives hints about a random facility or battle mode.
# 6 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ For battle modes he gives generic advice
# 7 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ For facilities, depending on how far the player has progressed he will say either
# 8 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@    The name of the Frontier Brain there
# 9 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@    The type and description of the 3 pokemon they use in their silver battle
# 10 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@    The type and description of the 3 pokemon they use in their gold battle
# 11 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_FrontierManiac::
# 12 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 13 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	faceplayer
# 14 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_AlreadyMetManiac
# 15 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
# 16 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_FrontierManiacIntro, MSGBOX_DEFAULT
# 17 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
# 18 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 20 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_AlreadyMetManiac::
# 21 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_SwingByForTheLatestWord, MSGBOX_DEFAULT
# 22 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
# 23 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 24 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 25 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice::
# 26 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_SINGLES, BattleFrontier_Lounge2_EventScript_BufferSingle
# 27 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_DOUBLES, BattleFrontier_Lounge2_EventScript_BufferDouble
# 28 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_MULTIS, BattleFrontier_Lounge2_EventScript_BufferMulti
# 29 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BufferMultiLink
# 30 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_BufferBattleDome
# 31 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_FACTORY, BattleFrontier_Lounge2_EventScript_BufferBattleFactory
# 32 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PALACE, BattleFrontier_Lounge2_EventScript_BufferBattlePalace
# 33 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_ARENA, BattleFrontier_Lounge2_EventScript_BufferBattleArena
# 34 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PIKE, BattleFrontier_Lounge2_EventScript_BufferBattlePike
# 35 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PYRAMID, BattleFrontier_Lounge2_EventScript_BufferBattlePyramid
# 36 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ <= FRONTIER_MANIAC_TOWER_LINK is any Battle Tower mode
# 37 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_le VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BattleTowerNews
# 38 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ >= FRONTIER_MANIAC_DOME is any facility other than Battle Tower
# 39 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_ge VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_FacilityNews
# 40 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	special ShowFrontierManiacMessage
# 41 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	waitmessage
# 42 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	waitbuttonpress
# 43 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 44 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 46 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BattleTowerNews::
# 47 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_BattleTowerIsHottest, MSGBOX_DEFAULT
# 48 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 49 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 50 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_FacilityNews::
# 51 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_FacilityIsHottest, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 53 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 54 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferSingle::
# 55 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
# 56 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 57 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 58 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferDouble::
# 59 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
# 60 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 61 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 62 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferMulti::
# 63 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
# 64 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 65 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 66 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferMultiLink::
# 67 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
# 68 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 69 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 70 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleDome::
# 71 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_DOME
# 72 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 73 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 74 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleFactory::
# 75 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_FACTORY
# 76 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 77 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 78 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePalace::
# 79 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PALACE
# 80 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 81 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 82 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleArena::
# 83 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_ARENA
# 84 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 85 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 86 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePike::
# 87 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PIKE
# 88 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 89 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 90 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePyramid::
# 91 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PYRAMID
# 92 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 93 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 94 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac1::
# 95 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 96 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_NewsGatheringPower, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 98 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 99 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 100 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac2::
# 101 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 102 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_AmazingPowersOfObservation, MSGBOX_DEFAULT
# 103 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 104 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 105 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 106 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac3::
# 107 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 108 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 110 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 111 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 112 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_TriathleteF::
# 113 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe, MSGBOX_NPC
# 114 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 116 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FrontierManiacIntro::
# 117 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你好！说到对战开拓区\n"
# 118 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "的消息，我是头号。\p"
# 119 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你可以把我当成\n"
# 120 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "开拓区狂热者。\p"
# 121 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "先确认一下，你是训练家\n"
# 122 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "吧？\p"
# 123 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "我很乐意分享我收集到的\n"
# 124 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "对战开拓区最新消息。$"
# 125 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 126 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SwingByForTheLatestWord::
# 127 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你好！你是来问我\n"
# 128 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "最新消息的吧？哦，好吧！$"
# 129 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 130 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ Unused
# 131 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight::
# 132 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "怎么样？怎么样？怎么样？\p"
# 133 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "我的情报对你一定\n"
# 134 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "很有用吧？$"
# 135 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 136 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FacilityIsHottest::
# 137 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "让我看看……\p"
# 138 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "听说{STR_VAR_1}是\n"
# 139 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "现在最热门的地方。$"
# 140 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 141 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_BattleTowerIsHottest::
# 142 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "让我看看……\p"
# 143 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "听说对战塔{STR_VAR_1}\n"
# 144 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "是最热门的。$"
# 145 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 146 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenIsThere::
# 147 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "这个你一定不知道！\p"
# 148 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "史考特称为开拓区大脑的\n"
# 149 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "顶尖训练家之一就在那儿。\p"
# 150 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "就是那位管理那里的、\n"
# 151 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "叫沙龙大姐姐的神秘训练家。$"
# 152 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 153 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenSilverMons::
# 154 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和沙龙大姐姐对战过吗？\p"
# 155 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "她试探对手实力时，\n"
# 156 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "好像会用这些宝可梦：\p"
# 157 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "超能力属性的念力宝可梦、\n"
# 158 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "火属性的火山宝可梦，\l"
# 159 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有一般属性的贪睡宝可梦。$"
# 160 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 161 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenGoldMons::
# 162 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和她认真时对战过吗？\p"
# 163 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "她全力出战时，\n"
# 164 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "好像会用这些宝可梦：\p"
# 165 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "龙与超能力属性的无限宝可梦、\n"
# 166 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "电属性的天雷宝可梦，\l"
# 167 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有一般属性的贪睡宝可梦。$"
# 168 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 169 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceIsThere::
# 170 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "这个你一定不知道！\p"
# 171 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "史考特称为开拓区大脑的\n"
# 172 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "顶尖训练家之一就在那儿。\p"
# 173 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "就是那位管理那里的、\n"
# 174 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "华丽张扬的巨蛋之星。$"
# 175 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 176 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceSilverMons::
# 177 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和巨蛋之星对战过吗？\p"
# 178 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "他没太把对手当回事时，\n"
# 179 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "会用这三只宝可梦：\p"
# 180 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "龙与飞行属性的龙宝可梦、\n"
# 181 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "水与地面属性的泥鱼宝可梦，\l"
# 182 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有火与飞行属性的火焰宝可梦。$"
# 183 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 184 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceGoldMons::
# 185 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和认真时的巨蛋之星\n"
# 186 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "对战过吗？\p"
# 187 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "他展示自己战略时，\n"
# 188 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "会用这三只宝可梦：\p"
# 189 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "龙与飞行属性的无限宝可梦、\n"
# 190 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "水与地面属性的泥鱼宝可梦，\l"
# 191 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有钢与超能力属性的\l"
# 192 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "铁足宝可梦。$"
# 193 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 194 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadIsThere::
# 195 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "这个你一定不知道！\p"
# 196 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "史考特称为开拓区大脑的\n"
# 197 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "顶尖训练家之一就在那儿。\p"
# 198 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "就是那位管理那里的、\n"
# 199 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "怪得出奇的工厂头目。$"
# 200 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 201 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadSilverMons::
# 202 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你对战工厂头目对战过了吗？\p"
# 203 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "我想想……他对战时，\n"
# 204 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "只拿三只租借宝可梦。\p"
# 205 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "他几乎和你处于同样的\n"
# 206 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "条件在对战。$"
# 207 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 208 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadGoldMons::
# 209 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和认真时的对战工厂头目\n"
# 210 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "对战过了吗？\p"
# 211 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "他认真去对战时，\n"
# 212 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还是拿三只租借宝可梦。\p"
# 213 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "他几乎和你处于同样的\n"
# 214 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "条件在对战。$"
# 215 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 216 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenIsThere::
# 217 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "这个你一定不知道！\p"
# 218 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "史考特称为开拓区大脑的\n"
# 219 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "顶尖训练家之一就在那儿。\p"
# 220 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "就是那位管理那里的、\n"
# 221 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "吓人的管道女王。$"
# 222 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 223 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenSilverMons::
# 224 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和管道女王对战过吗？\p"
# 225 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "听说她心情好时，\n"
# 226 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "会用这三只宝可梦：\p"
# 227 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "毒属性的牙蛇宝可梦、\n"
# 228 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "虫与岩石属性的霉菌宝可梦，\l"
# 229 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有水属性的温柔宝可梦。$"
# 230 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 231 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenGoldMons::
# 232 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和认真时的管道女王\n"
# 233 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "对战过吗？\p"
# 234 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "听说她真被惹恼时，\n"
# 235 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "会用这三只宝可梦：\p"
# 236 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "毒属性的牙蛇宝可梦、\n"
# 237 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "钢与地面属性的铁蛇宝可梦，\l"
# 238 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有水与飞行属性的\l"
# 239 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "凶恶宝可梦。$"
# 240 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 241 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonIsThere::
# 242 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "这个你一定不知道！\p"
# 243 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "史考特称为开拓区大脑的\n"
# 244 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "顶尖训练家之一就在那儿。\p"
# 245 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "就是那位管理那里的、\n"
# 246 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "可爱的竞技场大君。$"
# 247 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 248 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons::
# 249 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和竞技场大君对战过吗？\p"
# 250 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "她试探对手实力时，\n"
# 251 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "据说会用这些宝可梦：\p"
# 252 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "虫与格斗属性的独角宝可梦、\n"
# 253 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "恶属性的月光宝可梦，\l"
# 254 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有虫与幽灵属性的脱壳宝可梦。$"
# 255 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 256 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons::
# 257 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和认真时的竞技场大君\n"
# 258 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "对战过吗？\p"
# 259 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "她认真对战时，\n"
# 260 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "据说会用这些宝可梦：\p"
# 261 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "恶属性的月光宝可梦、\n"
# 262 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "幽灵与毒属性的影子宝可梦，\l"
# 263 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有草与格斗属性的\l"
# 264 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "蘑菇宝可梦。$"
# 265 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 266 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenIsThere::
# 267 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "这个你一定不知道！\p"
# 268 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "史考特称为开拓区大脑的\n"
# 269 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "顶尖训练家之一就在那儿。\p"
# 270 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "就是那位管理那里的、\n"
# 271 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "阴森的宫殿大君。$"
# 272 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 273 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenSilverMons::
# 274 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和宫殿大君对战过吗？\p"
# 275 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "他试探对手心志时，\n"
# 276 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "据说会用这些宝可梦：\p"
# 277 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "毒与飞行属性的蝙蝠宝可梦、\n"
# 278 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "一般属性的懒惰宝可梦，\l"
# 279 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有水与冰属性的运输宝可梦。$"
# 280 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 281 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenGoldMons::
# 282 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和认真时的宫殿大君\n"
# 283 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "对战过吗？\p"
# 284 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "他把全部力量投入对战时，\n"
# 285 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "据说会用这些宝可梦：\p"
# 286 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "火属性的传说宝可梦、\n"
# 287 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "一般属性的懒惰宝可梦，\l"
# 288 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有水属性的极光宝可梦。$"
# 289 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 290 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingIsThere::
# 291 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "这个你一定不知道！\p"
# 292 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "史考特称为开拓区大脑的\n"
# 293 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "顶尖训练家之一就在那儿。\p"
# 294 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "就是那位管理那里的、\n"
# 295 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "火热无比的金字塔之王。$"
# 296 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 297 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingSilverMons::
# 298 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和金字塔之王对战过吗？\p"
# 299 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "他试探对手力量时，\n"
# 300 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "好像会用这些宝可梦：\p"
# 301 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "岩石属性的岩峰宝可梦、\n"
# 302 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "冰属性的冰山宝可梦，\l"
# 303 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有钢属性的铁宝可梦。$"
# 304 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 305 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingGoldMons::
# 306 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你和认真时的金字塔之王\n"
# 307 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "对战过吗？\p"
# 308 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "他热血沸腾时，\n"
# 309 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "好像会用这些宝可梦：\p"
# 310 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "冰与飞行属性的冰冻宝可梦、\n"
# 311 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "电与飞行属性的电气宝可梦，\l"
# 312 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "还有火与飞行属性的\l"
# 313 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "火焰宝可梦。$"
# 314 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 315 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice1::
# 316 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "当然，有好几个地方\n"
# 317 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "可以参加双打对战。\p"
# 318 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "但对战塔的双打对战房间\n"
# 319 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "算是基础！\p"
# 320 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你该在那里学习对战开拓区\n"
# 321 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "的双打对战怎么打。$"
# 322 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 323 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice2::
# 324 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "在这儿对战时小心点。\p"
# 325 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "我听说有些训练家的战略\n"
# 326 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "是专门为双打对战\l"
# 327 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "开发的。$"
# 328 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 329 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice3::
# 330 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "等你对这里的双打对战\n"
# 331 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "有自信、也习惯了，\l"
# 332 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "就该考虑去挑战其他\l"
# 333 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "有双打对战的地方。$"
# 334 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 335 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_MultiBattleAdvice::
# 336 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "各种训练家都会聚集在\n"
# 337 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "对战沙龙。\p"
# 338 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "想想看——你可能会碰上\n"
# 339 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你的朋友或追随者！\l"
# 340 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "你该仔细看看！$"
# 341 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 342 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice::
# 343 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "要是你和朋友一起，\n"
# 344 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "就去联机多人对战房间。\p"
# 345 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "要是你和强朋友一起玩，\n"
# 346 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "可以想见会碰到强对手！$"
# 347 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 348 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_NewsGatheringPower::
# 349 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "多么惊人的情报收集能力！\n"
# 350 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "我的师父无人能比！$"
# 351 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 352 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_AmazingPowersOfObservation::
# 353 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "多么惊人的观察力！\n"
# 354 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "我的师父无人能比！$"
# 355 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 356 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion::
# 357 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "多么惊人的说服力！\n"
# 358 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "我的师父无人能比！$"
# 359 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 360 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe::
# 361 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "……这是什么地方？\n"
# 362 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "让我好害怕……$"
