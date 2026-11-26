ProfileMan_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_SYS_CHAT_USED, ProfileMan_EventScript_GivenProfileBefore
	msgbox ProfileMan_Text_CollectTrainerProfiles, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeProfile
	end

ProfileMan_EventScript_AskToSeeProfile::
	msgbox ProfileMan_Text_MayISeeYourProfile, MSGBOX_DEFAULT
	multichoice 17, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, ProfileMan_EventScript_CreateProfile
	case 1, ProfileMan_EventScript_DeclineShowProfile
	case 2, ProfileMan_EventScript_Info
	case MULTI_B_PRESSED, ProfileMan_EventScript_DeclineShowProfile
	end

ProfileMan_EventScript_Info::
	msgbox ProfileMan_Text_EasyChatExplanation, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeProfile
	end

ProfileMan_EventScript_CreateProfile::
	msgbox ProfileMan_Text_LetsSeeItThen, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, ProfileMan_EventScript_CancelShowProfile
	goto_if_eq VAR_RESULT, 1, ProfileMan_EventScript_ShowProfile
	end

ProfileMan_EventScript_CancelShowProfile::
	msgbox ProfileMan_Text_NotIntoItRightNow, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_ShowProfile::
	setvar VAR_0x8004, 0
	special ShowEasyChatProfile
	waitmessage
	delay 80
	msgbox ProfileMan_Text_FantasticProfile, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_DeclineShowProfile::
	msgbox ProfileMan_Text_ImagineYouWouldHaveWonderfulProfile, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_GivenProfileBefore::
	msgbox ProfileMan_Text_YouHaveWonderfulSmile, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeNewProfile
	end

ProfileMan_EventScript_AskToSeeNewProfile::
	msgbox ProfileMan_Text_MayISeeYourNewProfile, MSGBOX_DEFAULT
	multichoice 17, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, ProfileMan_EventScript_CreateNewProfile
	case 1, ProfileMan_EventScript_DeclineNewProfile
	case 2, ProfileMan_EventScript_InfoNewProfile
	case MULTI_B_PRESSED, ProfileMan_EventScript_DeclineNewProfile
	end

ProfileMan_EventScript_InfoNewProfile::
	msgbox ProfileMan_Text_EasyChatExplanation, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeNewProfile
	end

ProfileMan_EventScript_CreateNewProfile::
	msgbox ProfileMan_Text_EvenBetterThanLastProfile, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, ProfileMan_EventScript_CancelShowProfile
	goto_if_eq VAR_RESULT, 1, ProfileMan_EventScript_ShowProfile
	end

ProfileMan_EventScript_DeclineNewProfile::
	msgbox ProfileMan_Text_LikeProfileWayItIs, MSGBOX_DEFAULT
	release
	end

@ Unused
ProfileMan_EventScript_Ret::
	return

ProfileMan_Text_CollectTrainerProfiles:
	.string "你好，训练家！\n"
	.string "你的笑容真好看。\p"
	.string "我有个爱好——收集\n"
	.string "宝可梦训练家的简介。$"

ProfileMan_Text_MayISeeYourProfile:
	.string "那么，怎么样？\n"
	.string "能看看你的简介吗？$"

ProfileMan_Text_EasyChatExplanation:
	.string "把四个词或短语组合起来，\n"
	.string "就能做出你自己的简介。\p"
	.string "我来示范一个用四段文字\n"
	.string "组成的简介。\p"
	.string "你可以随意把这四段换成\n"
	.string "别的文字，\l"
	.string "做成你自己的简介。\p"
	.string "可用的文字段\n"
	.string "非常多。\p"
	.string "它们按宝可梦、生活方式、\n"
	.string "兴趣等分组，\l"
	.string "方便查找。\p"
	.string "首先，选择分组，\n"
	.string "显示选项列表。\p"
	.string "然后，挑出你想要的选项。\p"
	.string "其余的文字也照此选择，\n"
	.string "你的专属简介就完成了。$"

ProfileMan_Text_LetsSeeItThen:
	.string "好！谢谢你！\n"
	.string "那么，让我看看吧。$"

ProfileMan_Text_ImagineYouWouldHaveWonderfulProfile:
	.string "哦，不行吗？\p"
	.string "我想你这样的人，\n"
	.string "一定会有很棒的简介……$"

ProfileMan_Text_NotIntoItRightNow:
	.string "哦？你现在没兴趣？\p"
	.string "不过，我什么时候都行！$"

ProfileMan_Text_YouHaveWonderfulSmile:
	.string "你好，训练家！\n"
	.string "你的笑容真好看。$"

ProfileMan_Text_MayISeeYourNewProfile:
	.string "能看看你的新简介吗？$"

ProfileMan_Text_EvenBetterThanLastProfile:
	.string "好！谢谢你！\p"
	.string "希望它比你之前给我看的\n"
	.string "简介还要好。$"

ProfileMan_Text_LikeProfileWayItIs:
	.string "哦，你喜欢现在这个简介。\p"
	.string "我不怪你——现在这个\n"
	.string "简介就很棒。$"

ProfileMan_Text_FantasticProfile:
	.string "太——太棒了！\p"
	.string "你的简介真好！\n"
	.string "完全说出了你的为人。\p"
	.string "听了这个简介的人，\n"
	.string "一定会被你迷住！\p"
	.string "谢谢你！$"

@ Unused
ProfileMan_Text_YouKnowSecretSaying:
	.string "哦？\n"
	.string "你知道那句暗语！\p"
	.string "也就是说，你现在是\n"
	.string "神秘事件俱乐部的成员了！$"
