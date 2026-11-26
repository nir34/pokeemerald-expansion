# 1 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 11 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
# 23 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
# 24 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
# 27 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
# 28 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
# 31 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
# 32 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 33 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
# 35 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "那边那个人，他有好多\n"
# 36 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "换装皮卡丘！$"
# 37 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
# 39 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "我去了记录角以后，\n"
# 40 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "武斗镇的热门数据\l"
# 41 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "就更新了。\p"
# 42 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "现在那点数据和我朋友的\n"
# 43 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "一样了！$"
# 44 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
# 46 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "宝可梦中心楼上开了\n"
# 47 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "一个记录角。\p"
# 48 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "我不知道是干什么的，\n"
# 49 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "不过听起来很有趣。\l"
# 50 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "我去看看！$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive::
# 55 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	lock
# 56 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 57 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox PikachuManIntro
# 59 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_0, SPECIES_PIKACHU_COSPLAY
# 60 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_1, SPECIES_PIKACHU_ROCK_STAR
# 61 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_2, SPECIES_PIKACHU_BELLE
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_3, SPECIES_PIKACHU_POP_STAR
# 63 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_4, SPECIES_PIKACHU_PHD
# 64 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_5, SPECIES_PIKACHU_LIBRE
# 65 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_6, SPECIES_PIKACHU_SURFING
# 66 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_7, SPECIES_PIKACHU_FLYING
# 67 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultipush MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_8, MULTI_B_PRESSED
# 70 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 3, DYN_MULTICHOICE_CB_NONE
# 72 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_2
MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_1:
# 77 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 78 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 79 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ComeBackWithYellowShard
# 80 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	getpartysize
# 81 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForPikachu
# 82 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_9
# 83 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 84 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	message MauvilleCity_PokemonCenter_1F_Text_ReceivedThePikachu
# 85 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 86 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	givemonrandom VAR_0x8005, 25
# 87 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 88 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_10
# 89 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_2:
# 74 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_PikachuManNo
	goto MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_1


MauvilleCity_PokemonCenter_1F_EventScript_PikachuManNo::
# 95 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_EventScript_PikachuManNo_Text_0
# 96 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	end


MauvilleCity_PokemonCenter_1F_EventScript_ComeBackWithYellowShard::
# 101 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ComeBackWithYellowShard, MSGBOX_DEFAULT
# 102 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	end


MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForPikachu::
# 107 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_NoRoomForThisPikachu, MSGBOX_DEFAULT
# 108 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
	end


MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_0:
# 59 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "换装皮卡丘$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_1:
# 60 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "摇滚皮卡丘$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_2:
# 61 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "千金皮卡丘$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_3:
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "偶像皮卡丘$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_4:
# 63 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "博士皮卡丘$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_5:
# 64 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "蒙面皮卡丘$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_6:
# 65 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "冲浪皮卡丘$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_7:
# 66 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "飞行皮卡丘$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_8:
# 67 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "取消$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_9:
# 82 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "那只是我最喜欢的，好眼光！$"

MauvilleCity_PokemonCenter_1F_EventScript_CostumePikachuGive_Text_10:
# 88 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "还想要更多皮卡丘就再来！$"

MauvilleCity_PokemonCenter_1F_EventScript_PikachuManNo_Text_0:
# 95 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "那就都归我了！$"

PikachuManIntro::
# 112 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "嗨嗨！我是一号皮卡丘迷！\n"
	.string "只要一枚黄色碎片，任何换装\l"
	.string "皮卡丘都归你，怎么样，\l"
	.string "想要一只这样的皮卡丘吗？$"

MauvilleCity_PokemonCenter_1F_Text_ComeBackWithYellowShard::
# 119 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "看来你没有\n"
	.string "黄色碎片。有了再来吧。$"

MauvilleCity_PokemonCenter_1F_Text_NoRoomForThisPikachu::
# 124 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "哦？你的宝可梦太多了。\n"
	.string "没地方放这只皮卡丘。$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedThePikachu::
# 129 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER}收到了皮卡丘！$"
