# 1 "data/maps/MirageTower_4F/scripts.pory"

# 2 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_ROOT_FOSSIL, 1
# 3 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_CLAW_FOSSIL, 2
# 4 "data/maps/MirageTower_4F/scripts.pory"

# 5 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_MapScripts::
# 6 "data/maps/MirageTower_4F/scripts.pory"
	.byte 0
# 7 "data/maps/MirageTower_4F/scripts.pory"

# 8 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_RootFossil::
# 9 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 10 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 11 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeRootFossil, MSGBOX_YESNO
# 12 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveRootFossil
# 13 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 14 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 15 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 16 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 17 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 18 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_ROOT_FOSSIL
# 19 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 20 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_ROOT_FOSSIL
# 21 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 1
# 22 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 23 "data/maps/MirageTower_4F/scripts.pory"
	end
# 24 "data/maps/MirageTower_4F/scripts.pory"

# 25 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveRootFossil::
# 26 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftRootFossilAlone, MSGBOX_DEFAULT
# 27 "data/maps/MirageTower_4F/scripts.pory"
	release
# 28 "data/maps/MirageTower_4F/scripts.pory"
	end
# 29 "data/maps/MirageTower_4F/scripts.pory"

# 30 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_ClawFossil::
# 31 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 32 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 33 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeClawFossil, MSGBOX_YESNO
# 34 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveClawFossil
# 35 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 36 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 37 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 38 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 39 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 40 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_CLAW_FOSSIL
# 41 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 42 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_CLAW_FOSSIL
# 43 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 1
# 44 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 45 "data/maps/MirageTower_4F/scripts.pory"
	end
# 46 "data/maps/MirageTower_4F/scripts.pory"

# 47 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveClawFossil::
# 48 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveClawFossilAlone, MSGBOX_DEFAULT
# 49 "data/maps/MirageTower_4F/scripts.pory"
	release
# 50 "data/maps/MirageTower_4F/scripts.pory"
	end
# 51 "data/maps/MirageTower_4F/scripts.pory"

# 52 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_CollapseMirageTower::
# 53 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 54 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 55 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 32  @ num shakes
# 56 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2   @ shake delay
# 57 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 58 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 59 "data/maps/MirageTower_4F/scripts.pory"
	special DoMirageTowerCeilingCrumble
# 60 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 61 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 1
# 62 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
# 63 "data/maps/MirageTower_4F/scripts.pory"
	warp MAP_ROUTE111, 19, 59
# 64 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 65 "data/maps/MirageTower_4F/scripts.pory"
	release
# 66 "data/maps/MirageTower_4F/scripts.pory"
	end
# 67 "data/maps/MirageTower_4F/scripts.pory"

# 68 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeRootFossil:
# 69 "data/maps/MirageTower_4F/scripts.pory"
	.string "你找到了根状化石。\p"
# 70 "data/maps/MirageTower_4F/scripts.pory"
	.string "要是拿走这块化石，\n"
# 71 "data/maps/MirageTower_4F/scripts.pory"
	.string "周围的地面大概会\l"
# 72 "data/maps/MirageTower_4F/scripts.pory"
	.string "塌下去……\p"
# 73 "data/maps/MirageTower_4F/scripts.pory"
	.string "还是要拿走\n"
# 74 "data/maps/MirageTower_4F/scripts.pory"
	.string "根状化石吗？$"
# 75 "data/maps/MirageTower_4F/scripts.pory"

# 76 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeftRootFossilAlone:
# 77 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER}没动根状化石。$"
# 78 "data/maps/MirageTower_4F/scripts.pory"

# 79 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeClawFossil:
# 80 "data/maps/MirageTower_4F/scripts.pory"
	.string "你找到了爪状化石。\p"
# 81 "data/maps/MirageTower_4F/scripts.pory"
	.string "要是拿走这块化石，\n"
# 82 "data/maps/MirageTower_4F/scripts.pory"
	.string "周围的地面大概会\l"
# 83 "data/maps/MirageTower_4F/scripts.pory"
	.string "塌下去……\p"
# 84 "data/maps/MirageTower_4F/scripts.pory"
	.string "还是要拿走\n"
# 85 "data/maps/MirageTower_4F/scripts.pory"
	.string "爪状化石吗？$"
# 86 "data/maps/MirageTower_4F/scripts.pory"

# 87 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveClawFossilAlone:
# 88 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER}没动爪状化石。$"
