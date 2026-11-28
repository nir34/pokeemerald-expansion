EventScript_StartDexNavBattle::
	lock
	playse 0x15
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	dowildbattle    
	release
	end


EventScript_NotFoundNearby::
    msgbox sText_NotFoundNearby, MSGBOX_SIGN
    end
sText_NotFoundNearby:
    .string "附近没有找到。\n"
    .string "换个区域找找看吧！$"


EventScript_MovedTooFast::
    msgbox sText_TryMovingSlower, MSGBOX_SIGN
    end
sText_TryMovingSlower:
    .string "宝可梦逃走了！\n"
    .string "试着放慢脚步吧。$"


EventScript_PokemonGotAway::
    msgbox sText_PokemonGotAway, MSGBOX_SIGN
    end
sText_PokemonGotAway:
    .string "宝可梦逃走了！$"


EventScript_LostSignal::
    msgbox sText_LostSignal, MSGBOX_SIGN
    end
sText_LostSignal:
    .string "没有任何反应。\n"
    .string "信号中断了！$"


EventScript_TooDark::
    msgbox sText_TooDark, MSGBOX_SIGN
    end
sText_TooDark:
    .string "太黑了，无法\n寻找宝可梦！$"
