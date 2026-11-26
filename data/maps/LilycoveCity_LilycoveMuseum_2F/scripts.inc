# 1 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
.set LOCALID_CURATOR, 1
# 3 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 4 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_MapScripts::
# 5 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_LilycoveMuseum_2F_OnLoad
# 6 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_LilycoveMuseum_2F_OnFrame
# 7 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 9 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_OnLoad:
# 10 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetCoolPainting
# 11 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting
# 12 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 13 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 14 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting::
# 15 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetBeautyPainting
# 16 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting
# 17 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 18 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 19 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting::
# 20 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetCutePainting
# 21 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting
# 22 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 23 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 24 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting::
# 25 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetSmartPainting
# 26 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting
# 27 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 28 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 29 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting::
# 30 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetToughPainting
# 31 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 32 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 33 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetCoolPainting::
# 34 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 10, 6, METATILE_LilycoveMuseum_Painting2_Left, TRUE
# 35 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 11, 6, METATILE_LilycoveMuseum_Painting2_Right, TRUE
# 36 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting
# 37 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 38 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 39 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetBeautyPainting::
# 40 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 18, 6, METATILE_LilycoveMuseum_Painting1_Left, TRUE
# 41 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 19, 6, METATILE_LilycoveMuseum_Painting1_Right, TRUE
# 42 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting
# 43 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 44 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 45 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetCutePainting::
# 46 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 14, 10, METATILE_LilycoveMuseum_Painting3_Left, TRUE
# 47 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 15, 10, METATILE_LilycoveMuseum_Painting3_Right, TRUE
# 48 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting
# 49 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 50 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 51 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetSmartPainting::
# 52 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 6, 10, METATILE_LilycoveMuseum_Painting0_Left, TRUE
# 53 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 7, 10, METATILE_LilycoveMuseum_Painting0_Right, TRUE
# 54 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting
# 55 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 56 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 57 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetToughPainting::
# 58 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 2, 6, METATILE_LilycoveMuseum_Painting4_Left, TRUE
# 59 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 3, 6, METATILE_LilycoveMuseum_Painting4_Right, TRUE
# 60 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 61 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 62 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_OnFrame:
# 63 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script_2 VAR_LILYCOVE_MUSEUM_2F_STATE, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall
# 64 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.2byte 0
# 65 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 66 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall::
# 67 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 68 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
# 69 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft
# 70 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 71 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall, MSGBOX_SIGN
# 72 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_CURATOR, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 73 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 75 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall, MSGBOX_SIGN
# 77 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
# 78 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft
# 80 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit, MSGBOX_SIGN
# 82 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
# 83 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 84 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 85 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 86 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft:
# 87 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 88 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	step_end
# 89 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 90 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall:
# 91 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	face_up
# 92 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	delay_16
# 93 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	step_end
# 94 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 95 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator::
# 96 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 97 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_GLASS_ORNAMENT, LilycoveCity_LilycoveMuseum_2F_EventScript_ReceivedGlassOrnament
# 98 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 99 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	switch VAR_0x8004
# 100 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 1, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 101 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 2, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 102 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 3, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 103 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 4, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 104 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 5, LilycoveCity_LilycoveMuseum_2F_EventScript_ThankPlayer
# 105 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit, MSGBOX_NPC
# 106 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 107 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 108 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting::
# 109 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting, MSGBOX_NPC
# 110 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 111 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 112 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ThankPlayer::
# 113 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
# 114 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 115 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer, MSGBOX_DEFAULT
# 116 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_CURATOR, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 117 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests, MSGBOX_DEFAULT
# 118 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament
# 119 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 120 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 121 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament::
# 122 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
# 123 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude, MSGBOX_DEFAULT
# 124 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	givedecoration DECOR_GLASS_ORNAMENT
# 125 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_LilycoveMuseum_2F_EventScript_NoRoomForGlassOrnament
# 126 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setflag FLAG_RECEIVED_GLASS_ORNAMENT
# 127 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	closemessage
# 128 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 129 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 130 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 131 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_NoRoomForGlassOrnament::
# 132 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 133 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou, MSGBOX_DEFAULT
# 134 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	closemessage
# 135 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 136 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 137 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 138 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ReceivedGlassOrnament::
# 139 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit, MSGBOX_NPC
# 140 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 141 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 142 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 143 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting::
# 144 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 145 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCutePainting
# 146 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame, MSGBOX_SIGN
# 147 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 148 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 149 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting::
# 150 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 151 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowToughPainting
# 152 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame, MSGBOX_SIGN
# 153 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 154 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 155 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting::
# 156 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 157 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCoolPainting
# 158 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame, MSGBOX_SIGN
# 159 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 160 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 161 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting::
# 162 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 163 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowBeautyPainting
# 164 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame, MSGBOX_SIGN
# 165 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 166 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 167 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting::
# 168 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 169 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowSmartPainting
# 170 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame, MSGBOX_SIGN
# 171 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 172 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 173 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Girl::
# 174 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe, MSGBOX_NPC
# 175 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 176 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 177 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ExpertM::
# 178 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing, MSGBOX_NPC
# 179 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 180 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 181 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_RichBoy::
# 182 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon, MSGBOX_NPC
# 183 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 184 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 185 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCoolPainting::
# 186 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 187 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 188 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_COOL
# 189 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 190 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 191 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 192 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowBeautyPainting::
# 193 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 194 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 195 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_BEAUTY
# 196 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 197 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 198 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 199 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCutePainting::
# 200 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 201 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 202 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_CUTE
# 203 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 204 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 205 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 206 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowSmartPainting::
# 207 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 208 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 209 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_SMART
# 210 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 211 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 212 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 213 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowToughPainting::
# 214 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 215 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 216 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_TOUGH
# 217 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 218 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 219 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 220 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall:
# 221 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这是我们的特别展厅。$"
# 222 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 223 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall:
# 224 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "正如你所见，这里一幅画\n"
# 225 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "都没展出。\p"
# 226 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "我不希望在这里展出所谓\n"
# 227 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "古典艺术的画作。\p"
# 228 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "那些古典作品，在一楼\n"
# 229 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "就能看到。\p"
# 230 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "我想展出与古典\n"
# 231 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "完全不同的作品。\p"
# 232 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "艺术毕竟不只是老旧\n"
# 233 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "的名作！\p"
# 234 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这个展厅，我想用它\n"
# 235 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "来装满……\p"
# 236 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "现代、充满活力，仿佛\n"
# 237 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "就要活过来的\l"
# 238 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "宝可梦画作！$"
# 239 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 240 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit:
# 241 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "抱歉，我不该一个人\n"
# 242 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "说个不停。\p"
# 243 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "那么，你这么年轻，\n"
# 244 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "却显然走遍了许多地方……\p"
# 245 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "你一定见过许多活泼的\n"
# 246 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "宝可梦，也见过画它们的\l"
# 247 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "作品。\p"
# 248 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "要是你碰上这样的画，\n"
# 249 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "能不能请你取得画家的\l"
# 250 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "许可，让我们在这里展出？$"
# 251 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 252 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit:
# 253 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "我想把这个展厅装满现代\n"
# 254 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "而充满活力的宝可梦画作。$"
# 255 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 256 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting:
# 257 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "多亏你，我们的收藏又\n"
# 258 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "多了一幅新画！\p"
# 259 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "我听说画的是你的宝可梦。\n"
# 260 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "真是了不起！\p"
# 261 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "非常感谢，非常感谢！$"
# 262 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 263 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer:
# 264 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "啊！是你！\n"
# 265 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "{PLAYER}！$"
# 266 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 267 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests:
# 268 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这不是很了不起吗？\n"
# 269 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这一批画！\p"
# 270 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "每一幅都完美！\n"
# 271 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "没有哪幅比哪幅更差！\p"
# 272 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这些画给我们美术馆\n"
# 273 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "吸引来了更多客人。\p"
# 274 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "{PLAYER}，我真心感谢你。\n"
# 275 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "我的梦想成真了！$"
# 276 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 277 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude:
# 278 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这只是一点谢意。$"
# 279 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 280 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou:
# 281 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这个我先替你保管，\n"
# 282 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "等我们再见面。$"
# 283 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 284 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit:
# 285 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "啊，{PLAYER}，见到你真好！\p"
# 286 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "在百忙中还来看我们，\n"
# 287 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "是我的荣幸。\p"
# 288 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "请放松，好好享受\n"
# 289 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这次参观。$"
# 290 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 291 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame:
# 292 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这是一个粉色的画框。$"
# 293 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 294 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame:
# 295 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这是一个黄色的画框。$"
# 296 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 297 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame:
# 298 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这是一个蓝色的画框。$"
# 299 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 300 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame:
# 301 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这是一个红色的画框。$"
# 302 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 303 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame:
# 304 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这是一个绿色的画框。$"
# 305 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 306 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon:
# 307 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这是一幅宝可梦的画。$"
# 308 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 309 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe:
# 310 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "我离开了一阵子，所以\n"
# 311 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "楼上的新画吓了我一跳。\p"
# 312 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "真希望有人能把我的\n"
# 313 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "宝可梦画得这么美。$"
# 314 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 315 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing:
# 316 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "哦……原来值得一提的宝可梦\n"
# 317 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "画在这里展出。\p"
# 318 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "我看，这些新画确实\n"
# 319 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "挺有意思。$"
# 320 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 321 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon:
# 322 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "哇，真的吗？\n"
# 323 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "这些画的是你的宝可梦。\p"
# 324 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "对训练家来说，这不是\n"
# 325 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "最高的喜悦吗？$"
