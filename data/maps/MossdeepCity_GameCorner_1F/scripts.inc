# 1 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepCity_GameCorner_1F_MapScripts::
# 3 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_GameCorner_1F_OnFrame
# 4 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MossdeepCity_GameCorner_1F_OnWarp
# 5 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.byte 0
# 7 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 8 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepCity_GameCorner_1F_OnWarp:
# 9 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_CheckTurnAttendant
# 10 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.2byte 0
# 11 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 12 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepCity_GameCorner_1F_OnFrame:
# 13 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
# 14 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.2byte 0
# 15 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 16 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ Script is redundant, the label in the goto also does lock and faceplayer
# 17 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepCity_GameCorner_1F_EventScript_InfoMan::
# 18 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 19 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	faceplayer
# 20 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_InfoMan2
# 21 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
# 22 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 24 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ Script is redundant, the label in the goto also does lock and faceplayer
# 25 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
MossdeepCity_GameCorner_1F_EventScript_OldMan::
# 26 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock
# 27 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	faceplayer
# 28 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_OldMan2
# 29 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	release
# 30 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	end
# 31 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 32 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 33 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ Everything below is leftover from RS
# 34 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ The house that was here in RS was moved to Sootopolis and replaced by the Game Corner
# 35 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ The text below is unused and duplicated in its replacement in Sootopolis City
# 36 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
@ And the BG Door event was moved inaccessibly into a wall
# 37 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 38 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_EventScript_Door::
# 39 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox RS_MysteryEventsHouse_Text_DoorIsLocked, MSGBOX_SIGN
# 40 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	end
# 41 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 42 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_OldManGreeting:
# 43 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "我年轻时作为宝可梦训练家\n"
# 44 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "走遍了世界。\p"
# 45 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "现在我成了个老头子，\n"
# 46 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "唯一的乐趣就是\l"
# 47 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "看年轻训练家对战。$"
# 48 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 49 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_DoorIsLocked:
# 50 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "门好像锁着。$"
# 51 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 52 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_ChallengeVisitingTrainer:
# 53 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "一个叫{STR_VAR_1}的训练家\n"
# 54 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "正在我家做客。\p"
# 55 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "你想挑战{STR_VAR_1}吗？$"
# 56 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 57 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_YouWontBattle:
# 58 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "你不打吗？看不到你对战，\n"
# 59 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "我真失望……$"
# 60 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 61 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_KeepItToA3On3:
# 62 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "哦，好，好！\p"
# 63 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "不过我的房子不太结实。\p"
# 64 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "能不能请你以三对三\n"
# 65 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "来打？$"
# 66 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 67 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_SaveYourProgress:
# 68 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "你们两个对战之前，\n"
# 69 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "该先保存进度。$"
# 70 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 71 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_HopeToSeeAGoodMatch:
# 72 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "希望能看到一场\n"
# 73 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "精彩的对战！$"
# 74 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 75 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_BattleTie:
# 76 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "于是，打成了平手。\p"
# 77 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "这是一场双方都不肯\n"
# 78 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "退让一步的精彩对战！$"
# 79 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 80 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_BattleWon:
# 81 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "太精彩了！\p"
# 82 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "简直就像看到了\n"
# 83 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "年轻时的自己！$"
# 84 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"

# 85 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
RS_MysteryEventsHouse_Text_BattleLost:
# 86 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "啊，真可惜！\p"
# 87 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "不过这是一场好对战。\n"
# 88 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "希望下次你能赢。$"
