# 1 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 2 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_MapScripts::
# 3 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.byte 0
# 4 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 5 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker::
# 6 "data/maps/Route113_GlassWorkshop/scripts.pory"
	lock
# 7 "data/maps/Route113_GlassWorkshop/scripts.pory"
	faceplayer
# 8 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_set FLAG_RECEIVED_SCOPE_LENS, Route113_GlassWorkshop_House2_EventScript_ExplainScopeLens
# 9 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_House2_Text_WantYouToHaveScopeLens, MSGBOX_DEFAULT
# 10 "data/maps/Route113_GlassWorkshop/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 11 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_RECEIVED_SCOPE_LENS
# 12 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 13 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 14 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 15 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_House2_EventScript_ExplainScopeLens::
# 16 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_House2_Text_ExplainScopeLens, MSGBOX_DEFAULT
# 17 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 18 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 19 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 20 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NinjaBoy::
# 21 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_House2_Text_NoMoreSoot, MSGBOX_NPC
# 22 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 23 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 24 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_House2_Text_WantYouToHaveScopeLens:
# 25 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "我很久以前就不做\n"
# 26 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "玻璃吹制了。\p"
# 27 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "周围到处是煤灰的时候，\n"
# 28 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "那还是个有趣的爱好，\l"
# 29 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "不过我觉得该往前走了。\p"
# 30 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "来，这个给你，\n"
# 31 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "代替我那个旧集灰袋。$"
# 32 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 33 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_House2_Text_ExplainScopeLens:
# 34 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "焦点镜能提高击中\n"
# 35 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "要害的几率。\l"
# 36 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "挺厉害的吧！$"
# 37 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 38 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_House2_Text_NoMoreSoot:
# 39 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "再没有煤灰了！\n"
# 40 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "只有要害！$"
