# 1 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHousePuzzle7_OnResume
# 4 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle7_OnTransition
# 5 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle7_OnLoad
# 6 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHousePuzzle7_OnFrame
# 7 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.byte 0
# 8 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 9 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Puzzle Room 7 in RSE uses whatever puzzle Mossdeep Gym uses
# 10 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Because Mossdeep Gym was redesigned for Emerald, theres a good deal of leftover script from the old R/S puzzle
# 11 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 12 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnResume:
# 13 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles
# 14 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles::
# 17 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn
# 18 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn
# 19 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn
# 20 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn
# 21 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn
# 22 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 23 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 24 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Leftover from R/S, none of the below metatile scripts are ever called
# 25 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn::
# 26 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 13, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 27 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 16, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 28 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 29 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 30 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn::
# 31 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 13, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 32 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 11, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 33 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 34 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 35 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn::
# 36 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 12, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 37 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 10, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 38 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 39 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 40 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn::
# 41 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right_Alt, FALSE
# 42 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 43 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 44 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 45 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn::
# 46 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 47 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 48 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 49 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 50 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOff::
# 51 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 13, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 52 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 16, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 53 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 54 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 55 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOff::
# 56 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 13, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 57 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 11, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 58 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 59 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 60 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOff::
# 61 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 12, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 62 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 10, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 63 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 64 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 65 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOff::
# 66 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left_Alt, FALSE
# 67 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 68 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 69 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 70 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOff::
# 71 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right, FALSE
# 72 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 73 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 74 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 75 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnTransition:
# 76 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, Route110_TrickHousePuzzle7_EventScript_TeleportedTransition
# 77 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 78 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 79 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 80 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 81 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 82 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 83 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 84 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_TeleportedTransition::
# 85 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 86 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 87 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnLoad:
# 88 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles
# 89 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 90 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 91 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnFrame:
# 92 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, Route110_TrickHousePuzzle7_EventScript_ClearState2
# 93 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.2byte 0
# 94 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 95 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_ClearState2::
# 96 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 0
# 97 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 98 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 99 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Scroll::
# 100 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 101 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0, Route110_TrickHousePuzzle7_EventScript_FoundScroll
# 102 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 103 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 104 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 105 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_FoundScroll::
# 106 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 1
# 107 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 108 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 109 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 110 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Unused, leftover from R/S
# 111 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_TeleportPad::
# 112 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 113 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1
# 114 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	warpteleport MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 3, 19
# 115 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitstate
# 116 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 117 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 118 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 119 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ All the below switch scripts are unused leftover from R/S
# 120 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1::
# 121 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 122 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 123 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn
# 124 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOff
# 125 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 126 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 127 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1On
# 128 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1Off
# 129 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 130 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 131 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2::
# 132 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 133 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 134 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn
# 135 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOff
# 136 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 137 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 138 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2On
# 139 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2Off
# 140 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 141 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 142 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3::
# 143 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 144 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 145 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn
# 146 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOff
# 147 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 148 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 149 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3On
# 150 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3Off
# 151 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 152 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 153 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4::
# 154 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 155 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 156 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn
# 157 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOff
# 158 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 159 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 160 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4On
# 161 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4Off
# 162 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 163 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 164 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5::
# 165 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 166 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 167 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn
# 168 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOff
# 169 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 170 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 171 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5On
# 172 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5Off
# 173 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 174 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 175 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ All the below switch scripts are unused leftover from R/S
# 176 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1On::
# 177 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 178 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 179 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 180 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 181 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1Off::
# 182 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 183 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 184 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 185 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 186 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2On::
# 187 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 188 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 189 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 190 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 191 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2Off::
# 192 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 193 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 194 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 195 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 196 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3On::
# 197 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 198 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 199 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 200 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 201 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3Off::
# 202 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 203 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 204 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 205 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 206 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4On::
# 207 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 208 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 209 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 210 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 211 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4Off::
# 212 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 213 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 214 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 215 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 216 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5On::
# 217 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 218 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 219 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 220 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 221 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5Off::
# 222 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 223 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 224 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 225 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 226 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ From here is where the new, actually used puzzle scripts begin
# 227 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_YellowButton::
# 228 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 229 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 230 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 231 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 232 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 0
# 233 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 235 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 237 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 238 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 239 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_BlueButton::
# 240 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 241 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 242 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 243 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 244 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 1
# 245 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 246 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 247 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 249 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 250 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 251 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_GreenButton::
# 252 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 253 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 254 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 255 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 256 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 2
# 257 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 258 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 259 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 260 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 261 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 262 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 263 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_PurpleButton::
# 264 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 265 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 266 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 267 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 268 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 3
# 269 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 270 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 271 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 273 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 274 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 275 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Unused
# 276 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_RedButton::
# 277 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 278 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 279 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 280 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 281 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 4
# 282 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 283 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 284 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 286 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 287 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 288 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Joshua::
# 289 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_JOSHUA, Route110_TrickHousePuzzle7_Text_JoshuaIntro, Route110_TrickHousePuzzle7_Text_JoshuaDefeat
# 290 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 292 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 293 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Patricia::
# 294 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_PATRICIA, Route110_TrickHousePuzzle7_Text_PatriciaIntro, Route110_TrickHousePuzzle7_Text_PatriciaDefeat
# 295 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
# 296 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 297 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 298 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Alexis::
# 299 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALEXIS, Route110_TrickHousePuzzle7_Text_AlexisIntro, Route110_TrickHousePuzzle7_Text_AlexisDefeat
# 300 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlexisPostBattle, MSGBOX_AUTOCLOSE
# 301 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 302 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 303 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Mariela::
# 304 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_MARIELA, Route110_TrickHousePuzzle7_Text_MarielaIntro, Route110_TrickHousePuzzle7_Text_MarielaDefeat
# 305 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_MarielaPostBattle, MSGBOX_AUTOCLOSE
# 306 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 307 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 308 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Alvaro::
# 309 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALVARO, Route110_TrickHousePuzzle7_Text_AlvaroIntro, Route110_TrickHousePuzzle7_Text_AlvaroDefeat
# 310 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlvaroPostBattle, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 312 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 313 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Everett::
# 314 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_EVERETT, Route110_TrickHousePuzzle7_Text_EverettIntro, Route110_TrickHousePuzzle7_Text_EverettDefeat
# 315 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_EverettPostBattle, MSGBOX_AUTOCLOSE
# 316 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 317 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 318 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened::
# 319 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "{PLAYER}把密码写在了\n"
# 320 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "门上。\p"
# 321 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "“机关大师真好抱。”\n"
# 322 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "… … … … … … … …\p"
# 323 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "锁咔嗒一声开了！$"
# 324 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 325 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaIntro:
# 326 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "机关大师总是像烟一样\n"
# 327 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "消失。他怎么做到的？$"
# 328 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 329 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaDefeat:
# 330 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "哎呀！你太强了！\n"
# 331 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "你怎么做到的？$"
# 332 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 333 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaPostBattle:
# 334 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "真希望我也能像烟一样\n"
# 335 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "出现又消失。$"
# 336 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 337 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaIntro:
# 338 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "绕着同一个地方转……\n"
# 339 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "会招来厄运……$"
# 340 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 341 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaDefeat:
# 342 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "输了！\n"
# 343 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "这是凶兆……$"
# 344 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 345 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaPostBattle:
# 346 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "我绕同一个地方转了\n"
# 347 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "十多次了……是凶兆……$"
# 348 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 349 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisIntro:
# 350 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "谁赢谁就先过去。\n"
# 351 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "我有这种感觉。$"
# 352 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 353 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisDefeat:
# 354 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "哦！\n"
# 355 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "那，你先请！$"
# 356 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 357 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisPostBattle:
# 358 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "你把机关屋所有谜题都\n"
# 359 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "解开了。我有这种感觉。$"
# 360 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 361 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaIntro:
# 362 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "嗯呵呵呵，终于到了！\n"
# 363 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "那就开始吧！$"
# 364 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 365 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaDefeat:
# 366 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "你赢得好随便！$"
# 367 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 368 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaPostBattle:
# 369 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "哼！我才不生气！\n"
# 370 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "我才不！$"
# 371 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 372 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroIntro:
# 373 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "我一直紧紧盯着你\n"
# 374 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "过来的！$"
# 375 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 376 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroDefeat:
# 377 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "这个结果我可没\n"
# 378 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "料到……$"
# 379 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 380 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroPostBattle:
# 381 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "总之，我们俩都在\n"
# 382 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "奇怪的地方认识了。\p"
# 383 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "同为怪人，让我们\n"
# 384 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "加油吧！$"
# 385 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 386 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettIntro:
# 387 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "这里挤得难受……$"
# 388 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 389 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettDefeat:
# 390 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "哦，是，你很强。$"
# 391 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 392 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettPostBattle:
# 393 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "我本来想打赢你就\n"
# 394 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "换位置的，可……$"
