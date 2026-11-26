# 1 "data/maps/MtPyre_5F/scripts.pory"

# 2 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_5F_MapScripts::
# 3 "data/maps/MtPyre_5F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_5F/scripts.pory"

# 5 "data/maps/MtPyre_5F/scripts.pory"
@ Seems like the scripts for the 4F and 5F were swapped
# 6 "data/maps/MtPyre_5F/scripts.pory"

# 7 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_EventScript_Tasha::
# 8 "data/maps/MtPyre_5F/scripts.pory"
	trainerbattle_single TRAINER_TASHA, MtPyre_4F_Text_TashaIntro, MtPyre_4F_Text_TashaDefeat
# 9 "data/maps/MtPyre_5F/scripts.pory"
	msgbox MtPyre_4F_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
# 10 "data/maps/MtPyre_5F/scripts.pory"
	end
# 11 "data/maps/MtPyre_5F/scripts.pory"

# 12 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_Text_TashaIntro:
# 13 "data/maps/MtPyre_5F/scripts.pory"
	.string "我喜欢一切恐怖的东西……\n"
# 14 "data/maps/MtPyre_5F/scripts.pory"
	.string "就像生病一样……\p"
# 15 "data/maps/MtPyre_5F/scripts.pory"
	.string "我在这里的时候……\n"
# 16 "data/maps/MtPyre_5F/scripts.pory"
	.string "会怕得发抖……$"
# 17 "data/maps/MtPyre_5F/scripts.pory"

# 18 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_Text_TashaDefeat:
# 19 "data/maps/MtPyre_5F/scripts.pory"
	.string "输了，我讨厌……$"
# 20 "data/maps/MtPyre_5F/scripts.pory"

# 21 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_Text_TashaPostBattle:
# 22 "data/maps/MtPyre_5F/scripts.pory"
	.string "我想看可怕的东西……\n"
# 23 "data/maps/MtPyre_5F/scripts.pory"
	.string "走不了……\p"
# 24 "data/maps/MtPyre_5F/scripts.pory"
	.string "留下……\n"
# 25 "data/maps/MtPyre_5F/scripts.pory"
	.string "你愿意陪我吗？$"
