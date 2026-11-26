# 1 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_LeftMoveTutor::
# 6 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock
# 7 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	faceplayer
# 8 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 9 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor
# 10 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro, MSGBOX_DEFAULT
# 11 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
# 12 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
# 13 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 14 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 15 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor::
# 16 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
# 17 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
# 18 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 20 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove::
# 21 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 22 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 23 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 24 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 25 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 26 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
# 27 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 28 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 29 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 30 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
# 32 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
# 33 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
# 34 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
# 35 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
# 36 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
# 37 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide
# 38 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_Counter
# 39 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave
# 40 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance
# 41 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 42 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 43 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 45 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove::
# 46 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 47 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 48 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 49 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 50 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 51 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 52 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 53 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 54 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
# 56 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
# 57 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
# 58 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
# 59 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
# 60 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
# 61 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide
# 62 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_Counter
# 63 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave
# 64 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance
# 65 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 66 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 67 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 69 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Softboiled::
# 70 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 16
# 71 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SOFT_BOILED
# 72 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 73 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 74 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 75 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_SeismicToss::
# 76 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 77 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
# 78 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 79 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 80 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 81 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_DreamEater::
# 82 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 83 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_DREAM_EATER
# 84 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 85 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 87 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MegaPunch::
# 88 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 89 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
# 90 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 91 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 92 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 93 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MegaKick::
# 94 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 95 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
# 96 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 97 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 99 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_BodySlam::
# 100 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 101 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 102 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 103 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 104 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 105 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_RockSlide::
# 106 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 107 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
# 108 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 109 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 110 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 111 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Counter::
# 112 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 113 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_COUNTER
# 114 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 115 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 116 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 117 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ThunderWave::
# 118 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 119 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
# 120 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 121 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 122 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 123 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_SwordsDance::
# 124 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 125 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
# 126 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 127 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 128 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 129 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_RightMoveTutor::
# 130 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock
# 131 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	faceplayer
# 132 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 133 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor
# 134 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorIntro, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
# 136 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
# 137 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 138 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 139 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor::
# 140 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
# 141 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
# 142 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 143 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 144 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove::
# 145 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 146 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 147 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 148 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 149 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 150 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
# 151 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 152 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 153 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 154 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl
# 156 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_Snore
# 157 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap
# 158 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_Swift
# 159 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind
# 160 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_Endure
# 161 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp
# 162 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch
# 163 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch
# 164 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch
# 165 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 166 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 167 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 168 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 169 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove::
# 170 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 171 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 172 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 173 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 174 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 175 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 176 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 177 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 178 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl
# 180 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_Snore
# 181 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap
# 182 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_Swift
# 183 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind
# 184 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_Endure
# 185 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp
# 186 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch
# 187 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch
# 188 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch
# 189 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 190 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 191 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 192 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 193 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_DefenseCurl::
# 194 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 16
# 195 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_DEFENSE_CURL
# 196 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 197 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 198 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 199 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Snore::
# 200 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 201 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SNORE
# 202 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 203 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 204 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 205 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MudSlap::
# 206 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 207 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SLAP
# 208 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 209 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 210 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 211 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Swift::
# 212 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 213 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SWIFT
# 214 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 215 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 216 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 217 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_IcyWind::
# 218 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 219 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 220 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 221 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 222 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 223 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Endure::
# 224 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 225 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ENDURE
# 226 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 227 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 228 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 229 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_PsychUp::
# 230 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 231 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCH_UP
# 232 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 233 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 234 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 235 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_IcePunch::
# 236 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 237 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
# 238 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 239 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 240 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 241 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ThunderPunch::
# 242 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 243 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
# 244 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 245 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 246 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 247 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_FirePunch::
# 248 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 249 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
# 250 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 251 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 252 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 253 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect::
# 254 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 255 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 256 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
# 257 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 258 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 259 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 260 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_CancelChooseMon::
# 261 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
# 262 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 263 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 264 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 265 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_0x8008 is the price
# 266 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_TEMP_C is the scroll multichoice ID
# 267 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_TEMP_FRONTIER_TUTOR_SELECTION is the move selection
# 268 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_TEMP_FRONTIER_TUTOR_ID is which move tutor was spoken to
# 269 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection::
# 270 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 271 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8008
# 272 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
# 273 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge7_EventScript_ChooseNewMove
# 274 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 275 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge7_EventScript_TeachTutorMove
# 276 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
# 277 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
# 278 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 279 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 280 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_TeachTutorMove::
# 281 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
# 282 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 283 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 284 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 285 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ChooseMonForMoveTutor
# 286 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 287 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge7_EventScript_CancelChooseMon
# 288 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
# 289 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 290 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special TakeFrontierBattlePoints
# 291 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 292 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 293 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 294 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewMove::
# 295 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove
# 296 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove
# 297 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 298 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 299 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Sailor::
# 300 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong, MSGBOX_NPC
# 301 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 302 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 303 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Gentleman::
# 304 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful, MSGBOX_NPC
# 305 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 306 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 307 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LeftTutorIntro:
# 308 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "哇哈哈哈！\p"
# 309 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "你现在看不出来，\n"
# 310 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "可我以前也是个强训练家。\p"
# 311 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "我跟你说，我当年被誉为\n"
# 312 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "最强的大姐姐！\p"
# 313 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "… … … … … …\p"
# 314 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "怎么了？\n"
# 315 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "你不信我。\p"
# 316 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "我可不像那边那个吹牛的\n"
# 317 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "女人。我是真有本事的！\p"
# 318 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "让我证明给你看。\n"
# 319 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "我能教你的宝可梦既特别\l"
# 320 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "又可爱的招式。\p"
# 321 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "不过我的课不免费。\n"
# 322 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "我教的招式，用一点点\l"
# 323 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "对战点数来付怎么样？$"
# 324 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 325 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack:
# 326 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "哇哈哈哈！\p"
# 327 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "你又来学既特别又可爱的\n"
# 328 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "宝可梦招式了？$"
# 329 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 330 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_TeachWhichMove:
# 331 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "好，好，看这儿！\n"
# 332 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "该教你哪个招式？$"
# 333 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 334 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints:
# 335 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "招式{STR_VAR_1}，对吗？\n"
# 336 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "那要{STR_VAR_2}点对战点数，行吗？$"
# 337 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 338 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_TeachMoveToWhichMon:
# 339 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "好，好，现在挑一只\n"
# 340 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "要学这个招式的宝可梦。$"
# 341 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 342 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_HaventGotEnoughPoints:
# 343 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "什么……\n"
# 344 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "你的对战点数不够！$"
# 345 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 346 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IllTakeBattlePoints:
# 347 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "现在看出我多厉害了吧？\n"
# 348 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "那你的对战点数我收下了，谢谢！$"
# 349 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 350 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_YouDontWantTo:
# 351 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "什么？\n"
# 352 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "你不愿意……\p"
# 353 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "想见识我的本事，\n"
# 354 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "随时来找我！$"
# 355 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 356 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RightTutorIntro:
# 357 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "嘻嘻嘻！\p"
# 358 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "我知道现在看不出来，\n"
# 359 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "可我以前也是个了不起的训练家。\p"
# 360 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "我跟你说，我当年被誉为\n"
# 361 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "最强的游泳者！\p"
# 362 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "… … … … … …\p"
# 363 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "怎么了？\n"
# 364 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "你不信我。\p"
# 365 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "我可不像那边那个小丑似的\n"
# 366 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "女人。我是真有经验的！\p"
# 367 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "让我证明给你看。\n"
# 368 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "我能教你的宝可梦既强硬\l"
# 369 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "又漂亮的招式。\p"
# 370 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "不过我的课不免费。\n"
# 371 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "我教的招式，用一点点\l"
# 372 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "对战点数来付怎么样？$"
# 373 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 374 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RightTutorWelcomeBack:
# 375 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "嘻嘻嘻！\p"
# 376 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "你是来学既强硬又漂亮的\n"
# 377 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "宝可梦招式的吗？$"
# 378 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 379 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong:
# 380 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "那两位女士互相说坏话的\n"
# 381 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "样子，你大概会以为她们\l"
# 382 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "合不来。\p"
# 383 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "可要是真那样，她们也不会\n"
# 384 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "一起待在外面吧？$"
# 385 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 386 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful:
# 387 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "我还是个小男孩时，\n"
# 388 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "那两位女士又强又美。\p"
# 389 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "她们是我们训练家里的\n"
# 390 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "偶像。\p"
# 391 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "就算现在，岁月也没磨掉\n"
# 392 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "她们的本事。\p"
# 393 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "事实上，她们的宝可梦招式\n"
# 394 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "变得更精湛了。\p"
# 395 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "可是……不知为什么，我\n"
# 396 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "忍不住这样想……\p"
# 397 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "时间真残酷……$"
# 398 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 399 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SoftboiledDesc::
# 400 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "回复使用者最大HP的\n"
# 401 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "一半。$"
# 402 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 403 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SeismicTossDesc::
# 404 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "造成和使用者等级\n"
# 405 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "相同的伤害。$"
# 406 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 407 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_DreamEaterDesc::
# 408 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "对睡眠中的对手造成\n"
# 409 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "伤害，并回复其一半。$"
# 410 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 411 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MegaPunchDesc::
# 412 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "用惊人的力量\n"
# 413 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "打出强力一拳。$"
# 414 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 415 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MegaKickDesc::
# 416 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "蕴含强烈力量、\n"
# 417 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "极其强力的踢击。$"
# 418 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 419 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_BodySlamDesc::
# 420 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "整个身体撞上去，\n"
# 421 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "可能使对手麻痹。$"
# 422 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 423 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RockSlideDesc::
# 424 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "投掷大岩石。\n"
# 425 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "可能使对手畏缩。$"
# 426 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 427 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_CounterDesc::
# 428 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "以双倍威力还击\n"
# 429 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "受到的任何物理攻击。$"
# 430 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 431 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThunderWaveDesc::
# 432 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "微弱的电击，\n"
# 433 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "使对手麻痹。$"
# 434 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 435 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SwordsDanceDesc::
# 436 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "提升攻击的战斗\n"
# 437 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "之舞，效果很强。$"
# 438 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 439 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_DefenseCurlDesc::
# 440 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "蜷起身体藏起弱点，\n"
# 441 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "提高防御。$"
# 442 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 443 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SnoreDesc::
# 444 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "只能在睡眠时使用的\n"
# 445 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "大声攻击。$"
# 446 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 447 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MudSlapDesc::
# 448 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "把泥甩到对手脸上，\n"
# 449 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "降低其命中率。$"
# 450 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 451 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SwiftDesc::
# 452 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "射出星形光线，\n"
# 453 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "绝不会打空。$"
# 454 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 455 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IcyWindDesc::
# 456 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "寒冷刺骨的攻击，\n"
# 457 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "降低对手的速度。$"
# 458 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 459 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_EndureDesc::
# 460 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "忍受任何攻击1回合，\n"
# 461 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "留下1HP。$"
# 462 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 463 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_PsychUpDesc::
# 464 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "复制对手的效果，\n"
# 465 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "加到自己身上。$"
# 466 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 467 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IcePunchDesc::
# 468 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "冰冷的拳头，\n"
# 469 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "可能使对手冰冻。$"
# 470 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 471 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThunderPunchDesc::
# 472 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "带电的拳头，\n"
# 473 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "可能使对手麻痹。$"
# 474 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 475 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_FirePunchDesc::
# 476 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "燃烧的拳头，\n"
# 477 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "可能使对手灼伤。$"
