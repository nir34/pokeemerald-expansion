# 1 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
.set LOCALID_CURATOR, 2
# 3 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
.set LOCALID_ARTIST_2, 8
# 4 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 5 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_MapScripts::
# 6 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.byte 0
# 7 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 8 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Greeter::
# 9 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum, MSGBOX_SIGN
# 10 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 11 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 12 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator::
# 13 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 14 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
# 15 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	message LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
# 16 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmessage
# 17 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	multichoice 20, 8, MULTI_VIEWED_PAINTINGS, TRUE
# 18 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings
# 19 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet
# 20 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 21 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 22 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet::
# 23 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime, MSGBOX_NPC
# 24 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 25 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 26 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings::
# 27 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings, MSGBOX_YESNO
# 28 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested
# 29 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings
# 30 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 31 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 32 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested::
# 33 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat, MSGBOX_SIGN
# 34 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	releaseall
# 35 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 36 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 37 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings::
# 38 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe, MSGBOX_SIGN
# 39 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_CURATOR, LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs
# 40 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 41 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	removeobject LOCALID_CURATOR
# 42 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	switch VAR_FACING
# 43 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_NORTH, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth
# 44 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_WEST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest
# 45 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_EAST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast
# 46 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 47 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 48 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth::
# 49 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 50 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth
# 51 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 52 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 53 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 54 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 55 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 56 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest::
# 57 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 58 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest
# 59 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 61 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 62 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 63 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 64 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast::
# 65 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 66 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast
# 67 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 69 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 70 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 71 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 72 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs:
# 73 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 74 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 75 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 76 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest:
# 77 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_left
# 78 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 79 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 80 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 81 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast:
# 82 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_right
# 83 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 84 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 85 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 86 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth:
# 87 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 88 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 89 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 90 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 91 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_OldPainting::
# 92 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting, MSGBOX_SIGN
# 93 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 94 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 95 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FantasyPainting::
# 96 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery, MSGBOX_SIGN
# 97 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 98 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 99 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_WomanPainting::
# 100 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman, MSGBOX_SIGN
# 101 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 102 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 103 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_LegendaryPokemonPainting::
# 104 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon, MSGBOX_SIGN
# 105 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 106 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 107 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_GrassPokemonPainting::
# 108 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon, MSGBOX_SIGN
# 109 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 110 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 111 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_BerryPainting::
# 112 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries, MSGBOX_SIGN
# 113 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 114 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 115 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_EventScript_BirdSculpture::
# 116 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica, MSGBOX_SIGN
# 117 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 118 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 119 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_PokeBallSculpture::
# 120 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone, MSGBOX_SIGN
# 121 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 122 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 123 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_StoneTablet::
# 124 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText, MSGBOX_SIGN
# 125 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 126 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 127 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SchoolKidM::
# 128 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts, MSGBOX_NPC
# 129 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 130 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 131 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Artist1::
# 132 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration, MSGBOX_NPC
# 133 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 134 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 135 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NinjaBoy::
# 136 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty, MSGBOX_SIGN
# 137 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 138 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 139 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Woman1::
# 140 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable, MSGBOX_SIGN
# 141 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 142 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 143 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Woman2::
# 144 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings, MSGBOX_NPC
# 145 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 146 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 147 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_PsychicM::
# 148 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful, MSGBOX_NPC
# 149 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 150 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 151 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Artist2::
# 152 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lock
# 153 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	faceplayer
# 154 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings, MSGBOX_DEFAULT
# 155 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	closemessage
# 156 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_ARTIST_2, Common_Movement_FaceOriginalDirection
# 157 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 158 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	release
# 159 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 160 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 161 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FatMan::
# 162 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination, MSGBOX_NPC
# 163 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 164 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 165 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum:
# 166 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "欢迎来到水静博物馆。\p"
# 167 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "请慢慢欣赏我们以宝可梦\n"
# 168 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "为主题的美术收藏。$"
# 169 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 170 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings:
# 171 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "我是这座美术馆的馆长。\p"
# 172 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "在馆里看到像你这么\n"
# 173 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "年轻的人，真让人欣慰。\p"
# 174 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "你已经看过我们的\n"
# 175 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "画作收藏了吗？$"
# 176 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 177 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime:
# 178 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "啊，那我就不打扰你了。\n"
# 179 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "请慢慢看。$"
# 180 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 181 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings:
# 182 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "哦？我看你好像是\n"
# 183 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "宝可梦训练家。\p"
# 184 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "你对画作也有\n"
# 185 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "兴趣吗？$"
# 186 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 187 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat:
# 188 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "原来如此……\p"
# 189 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "即便如此你还愿意\n"
# 190 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "来参观，我很荣幸。$"
# 191 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 192 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe:
# 193 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "啊，太好了！\n"
# 194 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "你果然喜欢画作！\p"
# 195 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "那么，能请你跟我\n"
# 196 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "来一下吗？$"
# 197 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 198 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting:
# 199 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这是一幅很旧的画。\n"
# 200 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "颜料到处在剥落。$"
# 201 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 202 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery:
# 203 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这是一幅奇怪的风景画，\n"
# 204 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "景色奇异又美妙。$"
# 205 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 206 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman:
# 207 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "画上是一位微笑的美丽\n"
# 208 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "女人，膝上抱着一只宝可梦。$"
# 209 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 210 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon:
# 211 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这是一幅很久以前的\n"
# 212 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "传说宝可梦的画。\p"
# 213 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "画家是凭想象画的。$"
# 214 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 215 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon:
# 216 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这是一幅草属性宝可梦\n"
# 217 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "在微风中摇曳的画。\p"
# 218 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "它们似乎很享受风的\n"
# 219 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "轻柔抚摸。$"
# 220 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 221 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries:
# 222 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这是一幅看起来很好吃\n"
# 223 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "的树果画。\p"
# 224 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这幅画会让人\n"
# 225 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "肚子饿！$"
# 226 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 227 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica:
# 228 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这是一件著名雕塑的\n"
# 229 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "复制品。\p"
# 230 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "它描绘的是一只\n"
# 231 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "古代鸟宝可梦。$"
# 232 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 233 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone:
# 234 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这是一颗用黑石头雕成\n"
# 235 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "的大精灵球。\p"
# 236 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "据说古时候的节庆\n"
# 237 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "上用过它。$"
# 238 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 239 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText:
# 240 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这是一块巨大的石碑，\n"
# 241 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "上面刻着宝可梦和\l"
# 242 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "密密麻麻的古代文字，\l"
# 243 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "已经没人能读懂了。$"
# 244 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 245 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_WorksOfMagnificence:
# 246 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "嗯……\n"
# 247 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "多么宏大的杰作……$"
# 248 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 249 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts:
# 250 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "和宝可梦对战很有趣，\n"
# 251 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这我承认。\p"
# 252 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "可人不能忘记对\n"
# 253 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "美术的热爱。$"
# 254 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 255 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration:
# 256 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这座美术馆……嗯，你能\n"
# 257 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "看到许多美妙的画。\p"
# 258 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "而且馆长是个很好的人。\p"
# 259 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "在我们这些画家里，这座\n"
# 260 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "美术馆就是灵感来源。$"
# 261 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 262 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty:
# 263 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这位女士真美！\n"
# 264 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "就像妈妈一样！$"
# 265 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 266 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable:
# 267 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这只宝可梦真可爱！\n"
# 268 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "就像我们的小儿子！$"
# 269 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 270 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings:
# 271 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "我听说这座美术馆收了\n"
# 272 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "几幅新画。\p"
# 273 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "所以我当然赶紧\n"
# 274 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "跑来了。\p"
# 275 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "新画是在二楼吗？$"
# 276 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 277 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful:
# 278 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "最近馆长心情好得\n"
# 279 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "不寻常。\p"
# 280 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "我打赌他遇到好事了。\n"
# 281 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "一定。$"
# 282 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 283 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings:
# 284 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "我的目标是多看点这里\n"
# 285 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "的名画，向它们学习。\p"
# 286 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "我有个梦想，就是有\n"
# 287 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "一天让我的作品也\l"
# 288 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "在这里展出。$"
# 289 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 290 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination:
# 291 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "美术馆成了很受欢迎的\n"
# 292 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "观光地。\p"
# 293 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "这对水静市……不，对\n"
# 294 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "丰缘地区都是好事！\p"
# 295 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "我听说，楼上的画全是\n"
# 296 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "一个训练家找来的。$"
