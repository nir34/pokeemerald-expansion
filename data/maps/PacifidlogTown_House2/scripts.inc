# 1 "data/maps/PacifidlogTown_House2/scripts.pory"

# 2 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_MapScripts::
# 3 "data/maps/PacifidlogTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House2/scripts.pory"

# 5 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother::
# 6 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_LookHowHappy, MSGBOX_DEFAULT
# 9 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 10 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 11 "data/maps/PacifidlogTown_House2/scripts.pory"

# 12 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_HappyAzurill::
# 13 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 14 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 15 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 16 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 17 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
# 18 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 19 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
# 20 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 21 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 22 "data/maps/PacifidlogTown_House2/scripts.pory"

# 23 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UnhappyAzurill::
# 24 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 25 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 26 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 27 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
# 28 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
# 29 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
# 31 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 32 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 33 "data/maps/PacifidlogTown_House2/scripts.pory"

# 34 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rurii:
# 35 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "露力丽：噜哩。$"
# 36 "data/maps/PacifidlogTown_House2/scripts.pory"

# 37 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_VeryFriendlyWithTrainer:
# 38 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "它好像和训练家\n"
# 39 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "非常亲近。$"
# 40 "data/maps/PacifidlogTown_House2/scripts.pory"

# 41 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rururi:
# 42 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "露力丽：噜噜哩！$"
# 43 "data/maps/PacifidlogTown_House2/scripts.pory"

# 44 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch:
# 45 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "它好像不太喜欢\n"
# 46 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "这个训练家。$"
# 47 "data/maps/PacifidlogTown_House2/scripts.pory"

# 48 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_LookHowHappy:
# 49 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "看我的宝可梦多开心！\n"
# 50 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "不，是另一只！$"
