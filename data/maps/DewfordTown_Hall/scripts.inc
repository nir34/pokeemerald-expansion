# 1 "data/maps/DewfordTown_Hall/scripts.pory"

# 2 "data/maps/DewfordTown_Hall/scripts.pory"
.set LOCALID_EXPERT_M, 4
# 3 "data/maps/DewfordTown_Hall/scripts.pory"
.set LOCALID_TWIN, 5
# 4 "data/maps/DewfordTown_Hall/scripts.pory"
.set LOCALID_SCHOOL_KID_M, 7
# 5 "data/maps/DewfordTown_Hall/scripts.pory"
.set LOCALID_PSYCHIC_M, 8
# 6 "data/maps/DewfordTown_Hall/scripts.pory"

# 7 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_MapScripts::
# 8 "data/maps/DewfordTown_Hall/scripts.pory"
	.byte 0
# 9 "data/maps/DewfordTown_Hall/scripts.pory"

# 10 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Girl::
# 11 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 12 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 13 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 14 "data/maps/DewfordTown_Hall/scripts.pory"
	special IsTrendyPhraseBoring
# 15 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Hall_EventScript_GirlBoredOfTrend
# 16 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CantImagineLifeWithoutTrend, MSGBOX_DEFAULT
# 17 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 18 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 19 "data/maps/DewfordTown_Hall/scripts.pory"

# 20 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_GirlBoredOfTrend::
# 21 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GettingBoredOfTrend, MSGBOX_DEFAULT
# 22 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 23 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 24 "data/maps/DewfordTown_Hall/scripts.pory"

# 25 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Woman::
# 26 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 27 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 28 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 29 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TeachingMonAboutTrend, MSGBOX_DEFAULT
# 30 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 31 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 32 "data/maps/DewfordTown_Hall/scripts.pory"

# 33 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Man::
# 34 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 35 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 36 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 37 "data/maps/DewfordTown_Hall/scripts.pory"
	special BufferDeepLinkPhrase
# 38 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_DeepLinkBetweenXAndY, MSGBOX_YESNO
# 39 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_Hall_EventScript_ConfirmTrendLink
# 40 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_Hall_EventScript_RejectTrendLink
# 41 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 42 "data/maps/DewfordTown_Hall/scripts.pory"

# 43 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ConfirmTrendLink::
# 44 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_MyHunchWasRight, MSGBOX_DEFAULT
# 45 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 46 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 47 "data/maps/DewfordTown_Hall/scripts.pory"

# 48 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_RejectTrendLink::
# 49 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_NotEasyToKeepUp, MSGBOX_DEFAULT
# 50 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 51 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 52 "data/maps/DewfordTown_Hall/scripts.pory"

# 53 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ExpertM::
# 54 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 55 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 56 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 57 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TVShowAboutTrend, MSGBOX_DEFAULT
# 58 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 59 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_EXPERT_M, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 61 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 62 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 63 "data/maps/DewfordTown_Hall/scripts.pory"

# 64 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Twin::
# 65 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 66 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 67 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 68 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea, MSGBOX_DEFAULT
# 69 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 70 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterUp
# 71 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 72 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 73 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 74 "data/maps/DewfordTown_Hall/scripts.pory"

# 75 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LittleBoy::
# 76 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 77 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 78 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 79 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CollectTrendMerchandise, MSGBOX_DEFAULT
# 80 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 81 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 82 "data/maps/DewfordTown_Hall/scripts.pory"

# 83 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Bookshelf::
# 84 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 85 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 86 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BooksAboutTrend, MSGBOX_DEFAULT
# 87 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 88 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 89 "data/maps/DewfordTown_Hall/scripts.pory"

# 90 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting::
# 91 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 92 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 93 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 94 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_ScreamTitle
# 96 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_ScreamTitle
# 97 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_SmileTitle
# 98 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_ScreamTitle
# 99 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_LastTitle
# 100 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_LastTitle
# 101 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_BirthTitle
# 102 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_LastTitle
# 103 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 104 "data/maps/DewfordTown_Hall/scripts.pory"

# 105 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ScreamTitle::
# 106 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsScream, MSGBOX_DEFAULT
# 107 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 108 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 109 "data/maps/DewfordTown_Hall/scripts.pory"

# 110 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SmileTitle::
# 111 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsSmile, MSGBOX_DEFAULT
# 112 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 113 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 114 "data/maps/DewfordTown_Hall/scripts.pory"

# 115 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LastTitle::
# 116 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LastTrend, MSGBOX_DEFAULT
# 117 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 118 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 119 "data/maps/DewfordTown_Hall/scripts.pory"

# 120 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_BirthTitle::
# 121 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BirthOfTrend, MSGBOX_DEFAULT
# 122 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 123 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 124 "data/maps/DewfordTown_Hall/scripts.pory"

# 125 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SchoolKidM::
# 126 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 127 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 0
# 128 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
# 129 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 130 "data/maps/DewfordTown_Hall/scripts.pory"

# 131 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PsychicM::
# 132 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 133 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 1
# 134 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
# 135 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 136 "data/maps/DewfordTown_Hall/scripts.pory"

# 137 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate::
# 138 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 139 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 140 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 141 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_TrendDebate1
# 142 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_TrendDebate1
# 143 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_TrendDebate2
# 144 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_TrendDebate2
# 145 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_TrendDebate3
# 146 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_TrendDebate3
# 147 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_TrendDebate4
# 148 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_TrendDebate5
# 149 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 150 "data/maps/DewfordTown_Hall/scripts.pory"

# 151 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate1::
# 152 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 153 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_SawTrendCoolestThing, MSGBOX_DEFAULT
# 154 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 155 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_AllegedTrendNotAuthentic, MSGBOX_DEFAULT
# 156 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 157 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 158 "data/maps/DewfordTown_Hall/scripts.pory"

# 159 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate2::
# 160 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 161 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_ComposedTrendThemeSong, MSGBOX_DEFAULT
# 162 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 163 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WorkOnYourSinging, MSGBOX_DEFAULT
# 164 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 165 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 166 "data/maps/DewfordTown_Hall/scripts.pory"

# 167 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate3::
# 168 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 169 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_OrganizeTrendParty, MSGBOX_DEFAULT
# 170 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 171 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BrilliantIndeed, MSGBOX_DEFAULT
# 172 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 173 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 174 "data/maps/DewfordTown_Hall/scripts.pory"

# 175 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate4::
# 176 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 177 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendHasBecomePartOfLife, MSGBOX_DEFAULT
# 178 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 179 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind, MSGBOX_DEFAULT
# 180 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 181 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 182 "data/maps/DewfordTown_Hall/scripts.pory"

# 183 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate5::
# 184 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 185 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible, MSGBOX_DEFAULT
# 186 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 187 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WellBeTrendDuo, MSGBOX_DEFAULT
# 188 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 189 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 190 "data/maps/DewfordTown_Hall/scripts.pory"

# 191 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DontMovePlayer1::
# 192 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 193 "data/maps/DewfordTown_Hall/scripts.pory"

# 194 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact1::
# 195 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PSYCHIC_M, DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft
# 196 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 197 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactWest
# 198 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_DontMovePlayer2
# 199 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 200 "data/maps/DewfordTown_Hall/scripts.pory"

# 201 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactWest::
# 202 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_FACING, DIR_EAST, DewfordTown_Hall_EventScript_DontMovePlayer1
# 203 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 204 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 205 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 206 "data/maps/DewfordTown_Hall/scripts.pory"

# 207 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DontMovePlayer2::
# 208 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 209 "data/maps/DewfordTown_Hall/scripts.pory"

# 210 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact2::
# 211 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_SCHOOL_KID_M, DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight
# 212 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 213 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactNorthSouth
# 214 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_PlayerReactEast
# 215 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 216 "data/maps/DewfordTown_Hall/scripts.pory"

# 217 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactNorthSouth::
# 218 "data/maps/DewfordTown_Hall/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp
# 219 "data/maps/DewfordTown_Hall/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown
# 220 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 221 "data/maps/DewfordTown_Hall/scripts.pory"

# 222 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp::
# 223 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 224 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 225 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 226 "data/maps/DewfordTown_Hall/scripts.pory"

# 227 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown::
# 228 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 229 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 230 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 231 "data/maps/DewfordTown_Hall/scripts.pory"

# 232 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactEast::
# 233 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, DewfordTown_Hall_EventScript_DontMovePlayer1
# 234 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 235 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 236 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 237 "data/maps/DewfordTown_Hall/scripts.pory"

# 238 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft:
# 239 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_left
# 240 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end
# 241 "data/maps/DewfordTown_Hall/scripts.pory"

# 242 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight:
# 243 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_right
# 244 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end
# 245 "data/maps/DewfordTown_Hall/scripts.pory"

# 246 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_CantImagineLifeWithoutTrend:
# 247 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "现在流行什么？当然是\n"
# 248 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”！\p"
# 249 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "没有“{STR_VAR_1}”，\n"
# 250 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我真不知道日子怎么过！$"
# 251 "data/maps/DewfordTown_Hall/scripts.pory"

# 252 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_GettingBoredOfTrend:
# 253 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "现在流行什么？当然是\n"
# 254 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”！\p"
# 255 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "不过我有点看腻了。\p"
# 256 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "该去找下一个大热门了。$"
# 257 "data/maps/DewfordTown_Hall/scripts.pory"

# 258 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TeachingMonAboutTrend:
# 259 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我正在教宝可梦关于\n"
# 260 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”的事，\l"
# 261 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "可是不太顺利。\p"
# 262 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我觉得有点太难了。$"
# 263 "data/maps/DewfordTown_Hall/scripts.pory"

# 264 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_DeepLinkBetweenXAndY:
# 265 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我现在正在研究时髦的\n"
# 266 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”。\p"
# 267 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”和\l"
# 268 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_2}”之间\l"
# 269 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "真的有关联吗？$"
# 270 "data/maps/DewfordTown_Hall/scripts.pory"

# 271 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_MyHunchWasRight:
# 272 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "哦！\n"
# 273 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "看来我的直觉没错！\p"
# 274 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我离时髦达人\n"
# 275 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "又近了一步，呀呼！$"
# 276 "data/maps/DewfordTown_Hall/scripts.pory"

# 277 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_NotEasyToKeepUp:
# 278 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "什么？！\n"
# 279 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "是这样吗？！\p"
# 280 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "对我这样的老头子来说，\n"
# 281 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "跟上流行可不容易！$"
# 282 "data/maps/DewfordTown_Hall/scripts.pory"

# 283 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TVShowAboutTrend:
# 284 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "关于“{STR_VAR_1}”\n"
# 285 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "的这些事……\l"
# 286 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "是不是有电视节目在讲？$"
# 287 "data/maps/DewfordTown_Hall/scripts.pory"

# 288 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea:
# 289 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "大海的另一边……\p"
# 290 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\n"
# 291 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "是不是更流行？$"
# 292 "data/maps/DewfordTown_Hall/scripts.pory"

# 293 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_CollectTrendMerchandise:
# 294 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我收集“{STR_VAR_1}”的\n"
# 295 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "官方授权商品。\p"
# 296 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我有官方的\n"
# 297 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”人偶……\p"
# 298 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "官方授权的\n"
# 299 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”品牌衣服……\p"
# 300 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "还有官方授权的\n"
# 301 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 302 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "图画书。\p"
# 303 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "嘿嘿，都是我的！\n"
# 304 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我才不分给你！$"
# 305 "data/maps/DewfordTown_Hall/scripts.pory"

# 306 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BooksAboutTrend:
# 307 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "书架上整整齐齐塞满了\n"
# 308 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "关于“{STR_VAR_1}”的书……\p"
# 309 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "《如何分辨好的\n"
# 310 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”和坏的\l"
# 311 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”》……\p"
# 312 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "《“{STR_VAR_1}”与\n"
# 313 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "宝可梦的关联》……\p"
# 314 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "《有用的\n"
# 315 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”》……$"
# 316 "data/maps/DewfordTown_Hall/scripts.pory"

# 317 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendsScream:
# 318 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "书名是\n"
# 319 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "《{STR_VAR_1}的\l"
# 320 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "尖叫》。$"
# 321 "data/maps/DewfordTown_Hall/scripts.pory"

# 322 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendsSmile:
# 323 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "书名是\n"
# 324 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "《{STR_VAR_1}的\l"
# 325 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "微笑》。$"
# 326 "data/maps/DewfordTown_Hall/scripts.pory"

# 327 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_LastTrend:
# 328 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "书名是\n"
# 329 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "《最后的\l"
# 330 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}》。$"
# 331 "data/maps/DewfordTown_Hall/scripts.pory"

# 332 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BirthOfTrend:
# 333 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "书名是\n"
# 334 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "《{STR_VAR_1}的\l"
# 335 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "诞生》。$"
# 336 "data/maps/DewfordTown_Hall/scripts.pory"

# 337 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_SawTrendCoolestThing:
# 338 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我见到“{STR_VAR_1}”了！\n"
# 339 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "酷吧？\p"
# 340 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "那可是现在最酷的\n"
# 341 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "东西！\p"
# 342 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "太棒了！\n"
# 343 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "那才是真货，哦耶！$"
# 344 "data/maps/DewfordTown_Hall/scripts.pory"

# 345 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_AllegedTrendNotAuthentic:
# 346 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "哦，不不不。\p"
# 347 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "你说你见到的那个\n"
# 348 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”？\l"
# 349 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "那不是真的。\p"
# 350 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "真正的货色要更……\n"
# 351 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "怎么说呢？\l"
# 352 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "更锐利，又更醇厚！\p"
# 353 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "啊，算了。真是惊人！$"
# 354 "data/maps/DewfordTown_Hall/scripts.pory"

# 355 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_ComposedTrendThemeSong:
# 356 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "嘿，听我说，我为\n"
# 357 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 358 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "作了首主题曲。\p"
# 359 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\n"
# 360 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "现在可火了。\p"
# 361 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "好，你听听！\n"
# 362 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "……\p"
# 363 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "哦！\n"
# 364 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}！\p"
# 365 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "美妙的\n"
# 366 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}！$"
# 367 "data/maps/DewfordTown_Hall/scripts.pory"

# 368 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_WorkOnYourSinging:
# 369 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "……\p"
# 370 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我说，老兄，你还不如\n"
# 371 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "先练练唱歌，再来\l"
# 372 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "玩“{STR_VAR_1}”。$"
# 373 "data/maps/DewfordTown_Hall/scripts.pory"

# 374 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_OrganizeTrendParty:
# 375 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "总之，就像我刚才说的，\n"
# 376 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我们该聚在一起，\l"
# 377 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "在岛上办一场\l"
# 378 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”派对。$"
# 379 "data/maps/DewfordTown_Hall/scripts.pory"

# 380 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BrilliantIndeed:
# 381 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "哦，这主意妙极了！\p"
# 382 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "这样就能一决高下，\n"
# 383 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "看谁最擅长\l"
# 384 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”。\l"
# 385 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "真是好极了！\p"
# 386 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "从今天起，我们的生活\n"
# 387 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "就围着“{STR_VAR_1}”\l"
# 388 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "转了！$"
# 389 "data/maps/DewfordTown_Hall/scripts.pory"

# 390 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendHasBecomePartOfLife:
# 391 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "不过我在想……\p"
# 392 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "你不觉得“{STR_VAR_1}”\n"
# 393 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "已经从流行\l"
# 394 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "变成了我们生活中的\l"
# 395 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "一部分了吗？$"
# 396 "data/maps/DewfordTown_Hall/scripts.pory"

# 397 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind:
# 398 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "什么？\n"
# 399 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "那么多，什么？\p"
# 400 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "不过，不管睡着醒着，\n"
# 401 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”确实\l"
# 402 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "都沉甸甸地压在心头。\p"
# 403 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "没错，你就是\n"
# 404 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”的\l"
# 405 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "教授，老兄！$"
# 406 "data/maps/DewfordTown_Hall/scripts.pory"

# 407 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible:
# 408 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "你要是和我组队，\n"
# 409 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "在“{STR_VAR_1}”上\l"
# 410 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我们就是无敌的！$"
# 411 "data/maps/DewfordTown_Hall/scripts.pory"

# 412 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_WellBeTrendDuo:
# 413 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "说得太对了，朋友！\p"
# 414 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "我们就是\n"
# 415 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”二人组！\p"
# 416 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "这画面不错吧？\n"
# 417 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "哈哈哈！$"
