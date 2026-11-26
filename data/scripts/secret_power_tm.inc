Route111_Text_MakingRoomUseTMToMakeYourOwn:
	.string "什么？\n"
	.string "我在做什么？\p"
	.string "我在想用宝可梦的招式\n"
	.string "在这里造一个自己的房间。\p"
	.string "至少以前是这样。现在嘛，\n"
	.string "我只是在清除巢穴里的雾。\l"
	.string "想要同样的能力吗？$"

Route111_Text_ExplainSecretPower:
	.string "换作从前，我这时会给你\n"
	.string "秘密之力这个招式。不过，\l"
	.string "秘密基地已从游戏中移除，\l"
	.string "所以我给了你那个东西。\p"
	.string "至少可以在对战中用它\n"
	.string "清除场地，那也挺酷的。\p"
	.string "好了，再见！$"

Route111_Text_DontWantThis:
	.string "哦，你不要这个？\n"
	.string "要是改主意，就告诉我，好吗？$"

Route111_Text_DontHaveAnyRoom:
	.string "哦，你没地方放这个。\p"
	.string "我先替你保管，\n"
	.string "以后再来拿，好吗？$"

Route111_EventScript_SecretPowerMan::
	lock
	faceplayer
	msgbox Route111_Text_MakingRoomUseTMToMakeYourOwn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_GiveSecretPower
	msgbox Route111_Text_DontWantThis, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_GiveSecretPower::
	giveitem ITEM_TM_DEFOG
	msgbox Route111_Text_ExplainSecretPower, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_WEST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_EAST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_NORTH, Route111_EventScript_SecretPowerManExitNorth
	removeobject VAR_LAST_TALKED
	release
	end

Route111_EventScript_SecretPowerManExit::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExit
	waitmovement 0
	return

Route111_EventScript_SecretPowerManExitNorth::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExitNorth
	waitmovement 0
	return

Route111_EventScript_NoRoomForSecretPower::
	msgbox Route111_Text_DontHaveAnyRoom, MSGBOX_DEFAULT
	release
	end

Route111_Movement_SecretPowerManExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

Route111_Movement_SecretPowerManExitNorth:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end
