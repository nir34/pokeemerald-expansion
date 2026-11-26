ALIGNED(4) static const u8 sText_EmptyString[] = _("");
ALIGNED(4) static const u8 sText_Colon[] = _(":");
ALIGNED(4) static const u8 sText_ID[] = _("{ID}");
ALIGNED(4) static const u8 sText_PleaseStartOver[] = _("请从头开始。");
ALIGNED(4) static const u8 sText_WirelessSearchCanceled[] = _("已取消无线通信系统的\n搜索。");
ALIGNED(4) static const u8 sText_AwaitingCommunucation2[] = _("正在等待其他玩家\n通信。"); // Unused
ALIGNED(4) static const u8 sText_AwaitingCommunication[] = _("{STR_VAR_1}！正在等待\n其他玩家通信。");
ALIGNED(4) static const u8 sText_AwaitingLinkPressStart[] = _("{STR_VAR_1}！等待连接！\n大家准备好后请按START。");
ALIGNED(4) static const u8 sJPText_SingleBattle[] = _("举办单打对战");
ALIGNED(4) static const u8 sJPText_DoubleBattle[] = _("举办双打对战");
ALIGNED(4) static const u8 sJPText_MultiBattle[] = _("举办多人对战");
ALIGNED(4) static const u8 sJPText_TradePokemon[] = _("举办宝可梦交换");
ALIGNED(4) static const u8 sJPText_Chat[] = _("举办聊天");
ALIGNED(4) static const u8 sJPText_DistWonderCard[] = _("分发神秘卡片");
ALIGNED(4) static const u8 sJPText_DistWonderNews[] = _("分发神秘新闻");
ALIGNED(4) static const u8 sJPText_DistMysteryEvent[] = _("举办神秘事件"); // Unused
ALIGNED(4) static const u8 sJPText_HoldPokemonJump[] = _("举办跳绳");
ALIGNED(4) static const u8 sJPText_HoldBerryCrush[] = _("举办树果粉碎");
ALIGNED(4) static const u8 sJPText_HoldBerryPicking[] = _("举办摘树果");
ALIGNED(4) static const u8 sJPText_HoldSpinTrade[] = _("举办转转交换");
ALIGNED(4) static const u8 sJPText_HoldSpinShop[] = _("举办转转商店");

// Unused
static const u8 *const sJPLinkGroupActionTexts[] = {
    sJPText_SingleBattle,
    sJPText_DoubleBattle,
    sJPText_MultiBattle,
    sJPText_TradePokemon,
    sJPText_Chat,
    sJPText_DistWonderCard,
    sJPText_DistWonderNews,
    sJPText_DistWonderCard,
    sJPText_HoldPokemonJump,
    sJPText_HoldBerryCrush,
    sJPText_HoldBerryPicking,
    sJPText_HoldBerryPicking,
    sJPText_HoldSpinTrade,
    sJPText_HoldSpinShop
};

static const u8 sText_1PlayerNeeded[] = _("需要1名\n玩家。");
static const u8 sText_2PlayersNeeded[] = _("需要2名\n玩家。");
static const u8 sText_3PlayersNeeded[] = _("需要3名\n玩家。");
static const u8 sText_4PlayersNeeded[] = _("需要4名\n玩家。");
static const u8 sText_2PlayerMode[] = _("2人\n模式");
static const u8 sText_3PlayerMode[] = _("3人\n模式");
static const u8 sText_4PlayerMode[] = _("4人\n模式");
static const u8 sText_5PlayerMode[] = _("5人\n模式");

static const u8 *const sPlayersNeededOrModeTexts[][5] = {
    // 2 players required
    {
        sText_1PlayerNeeded,
        sText_2PlayerMode
    },
    // 4 players required
    {
        sText_3PlayersNeeded,
        sText_2PlayersNeeded,
        sText_1PlayerNeeded,
        sText_4PlayerMode
    },
    // 2-5 players required
    {
        sText_1PlayerNeeded,
        sText_2PlayerMode,
        sText_3PlayerMode,
        sText_4PlayerMode,
        sText_5PlayerMode
    },
    // 3-5 players required
    {
        sText_2PlayersNeeded,
        sText_1PlayerNeeded,
        sText_3PlayerMode,
        sText_4PlayerMode,
        sText_5PlayerMode
    },
    // 2-4 players required
    {
        sText_1PlayerNeeded,
        sText_2PlayerMode,
        sText_3PlayerMode,
        sText_4PlayerMode
    }
};

ALIGNED(4) static const u8 sText_BButtonCancel[] = _("{B_BUTTON}取消");
ALIGNED(4) static const u8 sJPText_SearchingForParticipants[] = _("正在\n招募参加者！"); // Unused, may have been cut off
ALIGNED(4) static const u8 sText_PlayerContactedYouForXAccept[] = _("{STR_VAR_2}为了{STR_VAR_1}\n联系了你。接受吗？");
ALIGNED(4) static const u8 sText_PlayerContactedYouShareX[] = _("{STR_VAR_2}联系了你。\n要分享{STR_VAR_1}吗？");
ALIGNED(4) static const u8 sText_PlayerContactedYouAddToMembers[] = _("{STR_VAR_2}联系了你。\n要加入成员吗？");
ALIGNED(4) static const u8 sText_AreTheseMembersOK[] = _("{STR_VAR_1}！\n这些成员可以吗？");
ALIGNED(4) static const u8 sText_CancelModeWithTheseMembers[] = _("要取消与这些成员的\n{STR_VAR_1}模式吗？");
ALIGNED(4) static const u8 sText_AnOKWasSentToPlayer[] = _("已向{STR_VAR_1}\n发送“OK”。");
ALIGNED(4) static const u8 sText_OtherTrainerUnavailableNow[] = _("对方训练家现在\n似乎不方便……\p");
ALIGNED(4) static const u8 sText_CantTransmitTrainerTooFar[] = _("无法与距离太远的\n训练家通信。\p");
ALIGNED(4) static const u8 sText_TrainersNotReadyYet[] = _("对方训练家还\n没有准备好。\p");

static const u8 *const sCantTransmitToTrainerTexts[] = {
    [UR_TRADE_PLAYER_NOT_READY - 1]  = sText_CantTransmitTrainerTooFar,
    [UR_TRADE_PARTNER_NOT_READY - 1] = sText_TrainersNotReadyYet
};

ALIGNED(4) static const u8 sText_ModeWithTheseMembersWillBeCanceled[] = _("将取消与这些成员的\n{STR_VAR_1}模式。{PAUSE 60}");
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("有成员已经\n无法继续参加了。\p");

static const u8 *const sPlayerUnavailableTexts[] = {
    sText_OtherTrainerUnavailableNow,
    sText_MemberNoLongerAvailable
};

ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("对方训练家似乎\n不方便……\p");
ALIGNED(4) static const u8 sText_PlayerSentBackOK[] = _("{STR_VAR_1}回复了“OK”！");
ALIGNED(4) static const u8 sText_PlayerOKdRegistration[] = _("{STR_VAR_1}同意了你加入成员。");
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1}回复“不行……”\p");
ALIGNED(4) static const u8 sText_AwaitingOtherMembers[] = _("{STR_VAR_1}！\n正在等待其他成员！");
ALIGNED(4) static const u8 sText_QuitBeingMember[] = _("要退出成员吗？");
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("你退出了成员。\p");

static const u8 *const sPlayerDisconnectedTexts[] = {
    [RFU_STATUS_OK]                  = NULL,
    [RFU_STATUS_FATAL_ERROR]         = sText_MemberNoLongerAvailable,
    [RFU_STATUS_CONNECTION_ERROR]    = sText_TrainerAppearsUnavailable,
    [RFU_STATUS_CHILD_SEND_COMPLETE] = NULL,
    [RFU_STATUS_NEW_CHILD_DETECTED]  = NULL,
    [RFU_STATUS_JOIN_GROUP_OK]       = NULL,
    [RFU_STATUS_JOIN_GROUP_NO]       = sText_PlayerRepliedNo,
    [RFU_STATUS_WAIT_ACK_JOIN_GROUP] = NULL,
    [RFU_STATUS_LEAVE_GROUP_NOTICE]  = NULL,
    [RFU_STATUS_LEAVE_GROUP]         = sText_StoppedBeingMember
};

ALIGNED(4) static const u8 sText_WirelessLinkEstablished[] = _("无线通信系统的\n连接已建立。");
ALIGNED(4) static const u8 sText_WirelessLinkDropped[] = _("无线通信系统的\n连接已断开……");
ALIGNED(4) static const u8 sText_LinkWithFriendDropped[] = _("与朋友的连接\n已断开……");
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1}回复“不行……”");

static const u8 *const sLinkDroppedTexts[] = {
    [RFU_STATUS_OK]                  = NULL,
    [RFU_STATUS_FATAL_ERROR]         = sText_LinkWithFriendDropped,
    [RFU_STATUS_CONNECTION_ERROR]    = sText_LinkWithFriendDropped,
    [RFU_STATUS_CHILD_SEND_COMPLETE] = NULL,
    [RFU_STATUS_NEW_CHILD_DETECTED]  = NULL,
    [RFU_STATUS_JOIN_GROUP_OK]       = NULL,
    [RFU_STATUS_JOIN_GROUP_NO]       = sText_PlayerRepliedNo2,
    [RFU_STATUS_WAIT_ACK_JOIN_GROUP] = NULL,
    [RFU_STATUS_LEAVE_GROUP_NOTICE]  = NULL,
    [RFU_STATUS_LEAVE_GROUP]         = NULL
};

ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("要使用{STR_VAR_2}\n模式吗？");
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("要使用{STR_VAR_2}\n模式吗？");

// Unused
static const u8 *const sDoYouWantModeTexts[] = {
    sText_DoYouWantXMode,
    sText_DoYouWantXMode2
};

ALIGNED(4) static const u8 sText_CommunicatingPleaseWait[] = _("通信中……\n请稍候。"); // Unused
ALIGNED(4) static const u8 sText_AwaitingPlayersResponseAboutTrade[] = _("正在等待{STR_VAR_1}对交换\n的回复……");
ALIGNED(4) static const u8 sText_Communicating[] = _("通讯中{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
                                                     "{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("正在与{STR_VAR_1}通讯{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
                                                               "{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("请稍等一会儿{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
                                                        "{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");

static const u8 *const sCommunicatingWaitTexts[] = {
    sText_Communicating,
    sText_CommunicatingWithPlayer,
    sText_PleaseWaitAWhile
};

ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("你好！有什么\n想做的事吗？");
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("你好！\n要一起做点什么吗？");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}：又见面了！\n这次想做什么？");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}：哦！{PLAYER}你好！\n要一起做点什么吗？");

static const u8 *const sHiDoSomethingTexts[][GENDER_COUNT] = {
    {
        sText_HiDoSomethingMale,
        sText_HiDoSomethingFemale
    }, {
        sText_HiDoSomethingAgainMale,
        sText_HiDoSomethingAgainFemale
    }
};

ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("想做点什么吗？");
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("要一起做点什么吗？");
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}：现在\n想做什么？");
ALIGNED(4) static const u8 sText_DoSomethingAgainFemale[] = _("{STR_VAR_1}：还想做别的吗？"); // Unused

// Unused
static const u8 *const sDoSomethingTexts[][GENDER_COUNT] = {
    {
        sText_DoSomethingMale,
        sText_DoSomethingFemale
    }, {
        sText_DoSomethingAgainMale,
        sText_DoSomethingAgainMale // was probably supposed to be sText_DoSomethingAgainFemale
    }
};

ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("有人联系了你。{PAUSE 60}");
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1}联系了你。{PAUSE 60}");

static const u8 *const sPlayerContactedYouTexts[] = {
    sText_SomebodyHasContactedYou,
    sText_PlayerHasContactedYou
};

ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("正在等待对方\n训练家的回复……");
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("正在等待{STR_VAR_1}\n的回复……");

static const u8 *const sAwaitingResponseTexts[] = {
    sText_AwaitingResponseFromTrainer,
    sText_AwaitingResponseFromPlayer
};

ALIGNED(4) static const u8 sText_ShowTrainerCard[] = _("对方训练家给你看了\n训练家卡片。\p你要出示自己的\n训练家卡片吗？");
ALIGNED(4) static const u8 sText_BattleChallenge[] = _("对方训练家向你\n发起对战。\p要接受\n对战挑战吗？");
ALIGNED(4) static const u8 sText_ChatInvitation[] = _("对方训练家邀请你\n聊天。\p要接受\n聊天邀请吗？");
ALIGNED(4) static const u8 sText_OfferToTradeMon[] = _("有人想用Lv.{DYNAMIC 2}{DYNAMIC 3}\p交换你登记的\nLv.{DYNAMIC 0}{DYNAMIC 1}。\p要接受这个\n交换邀请吗？");
ALIGNED(4) static const u8 sText_OfferToTradeEgg[] = _("有人想交换你登记的\n蛋。\l要接受这个交换邀请吗？");
ALIGNED(4) static const u8 sText_ChatDropped[] = _("聊天已中断。\p");
ALIGNED(4) static const u8 sText_OfferDeclined1[] = _("你拒绝了邀请。\p");
ALIGNED(4) static const u8 sText_OfferDeclined2[] = _("你拒绝了邀请。\p");
ALIGNED(4) static const u8 sText_ChatEnded[] = _("聊天已结束。\p");

// Unused
static const u8 *const sInvitationTexts[] = {
    sText_ShowTrainerCard,
    sText_BattleChallenge,
    sText_ChatInvitation,
    sText_OfferToTradeMon
};

ALIGNED(4) static const u8 sText_JoinChatMale[] = _("喂！我们正在聊天。\n要加入吗？");
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}：嘿，{PLAYER}！\n我们正在聊天。\l要加入吗？");
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("哦，你好！我们正在聊天。\n要加入吗？");
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}：哦，{PLAYER}！\n我们正在聊天。\l要加入吗？");

static const u8 *const sJoinChatTexts[][GENDER_COUNT] = {
    {
        sText_JoinChatMale,
        sText_JoinChatFemale
    }, {
        sText_PlayerJoinChatMale,
        sText_PlayerJoinChatFemale
    }
};

ALIGNED(4) static const u8 sText_TrainerAppearsBusy[] = _("……\n那位训练家好像很忙……\p");
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("对战吗？\n好啊，给我点时间。");
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("想聊天吗？\n行，稍等一下。");
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("当然！作为“问候”，\n这是我的训练家卡片。");
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("对战？当然，但我需要\n一点时间准备。");
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("想聊天吗？\n好，请稍等一下。");
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("作为自我介绍，给你看看\n我的训练家卡片。");

static const u8 *const sText_WaitOrShowCardTexts[GENDER_COUNT][4] = {
    {
        sText_WaitForBattleMale,
        sText_WaitForChatMale,
        NULL,
        sText_ShowTrainerCardMale
    }, {
        sText_WaitForBattleFemale,
        sText_WaitForChatFemale,
        NULL,
        sText_ShowTrainerCardFemale
    }
};

ALIGNED(4) static const u8 sText_WaitForChatMale2[] = _("想聊天吗？\n行，稍等一下。"); // Unused
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("谢谢等待！\n开始对战吧！{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("好！\n来聊天吧！{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("抱歉让你久等了！\n开始吧！{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("抱歉让你久等了！\n来聊天吧。{PAUSE 60}");
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("交换即将开始。{PAUSE 60}");
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("对战即将开始。{PAUSE 60}");
ALIGNED(4) static const u8 sText_EnteringChat[] = _("正在进入聊天……{PAUSE 60}");

static const u8 *const sStartActivityTexts[][GENDER_COUNT][3] = {
    {
        {
            sText_BattleWillBeStarted,
            sText_EnteringChat,
            sText_TradeWillBeStarted
        }, {
            sText_BattleWillBeStarted,
            sText_EnteringChat,
            sText_TradeWillBeStarted
        }
    }, {
        {
            sText_DoneWaitingBattleMale,
            sText_DoneWaitingChatMale,
            sText_TradeWillBeStarted
        }, {
            sText_DoneWaitingBattleFemale,
            sText_DoneWaitingChatFemale,
            sText_TradeWillBeStarted
        }
    }
};

ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("抱歉！我的宝可梦现在\n好像不太舒服。\l下次再对战吧。\p");
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("非常抱歉，我的宝可梦\n有点不舒服……\p下次再对战吧。\p");

static const u8 *const sBattleDeclinedTexts[GENDER_COUNT] = {
    sText_BattleDeclinedMale,
    sText_BattleDeclinedFemale
};

ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("咦？我的训练家卡片……\n放哪儿去了？\l抱歉！下次再给你看！\p");
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("哦？我的训练家卡片\n放哪里了……\l抱歉！回头再给你看！\p");

static const u8 *const sShowTrainerCardDeclinedTexts[GENDER_COUNT] = {
    sText_ShowTrainerCardDeclinedMale,
    sText_ShowTrainerCardDeclinedFemale
};

ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("想和我一起做什么的话，\n就叫一声吧！\p");
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("想和我一起做什么的话，\n别客气。\p");

static const u8 *const sIfYouWantToDoSomethingTexts[GENDER_COUNT] = {
    sText_IfYouWantToDoSomethingMale,
    sText_IfYouWantToDoSomethingFemale
};

ALIGNED(4) static const u8 sText_TrainerBattleBusy[] = _("哎呀！抱歉，我还有别的\n事要办。\l下次吧，好吗？\p");
ALIGNED(4) static const u8 sText_NeedTwoMonsOfLevel30OrLower1[] = _("想要对战，需要两只\n30级以下的\l宝可梦。\p");
ALIGNED(4) static const u8 sText_NeedTwoMonsOfLevel30OrLower2[] = _("要对战需要两只\n30级以下的宝可梦。\p");

ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("哦，好吧。\n随时来找我，好吗？\p");
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("哦……\n随时来找我吧。\p");

// Response from partner when player declines chat
static const u8 *const sDeclineChatTexts[GENDER_COUNT] = {
    sText_DeclineChatMale,
    stext_DeclineChatFemale
};

ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("哦，抱歉！\n我现在实在不行。\l下次再聊吧。\p");
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("哦，抱歉。\n我现在事情太多。\l下次再聊吧。\p");

// Response from partner when they decline chat
static const u8 *const sChatDeclinedTexts[GENDER_COUNT] = {
    sText_ChatDeclinedMale,
    sText_ChatDeclinedFemale
};

ALIGNED(4) static const u8 sText_YoureToughMale[] = _("哇！\n看得出来你很厉害！\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("你用了那招？\n真是好策略！\p");
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("干得好！\n真让人大开眼界！\p");
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("哦！那种情况下你怎么\n会用那只宝可梦？\p");
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("那只宝可梦……\n养得真好啊！\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("就是这样！\n现在就该用这招！\p");
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("太厉害了！\n还能这样对战？\p");
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("你替换宝可梦的时机\n真是绝妙！\p");

static const u8 *const sBattleReactionTexts[GENDER_COUNT][4] = {
    {
        sText_YoureToughMale,
        sText_UsedGoodMoveMale,
        sText_BattleSurpriseMale,
        sText_SwitchedMonsMale
    },
    {
        sText_YoureToughFemale,
        sText_UsedGoodMoveFemale,
        sText_BattleSurpriseFemale,
        sText_SwitchedMonsFemale
    }
};

ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("哦，原来如此！\n真长知识！\p");
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("别再说好笑的事了！\n我笑得肚子疼！\p");
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("哦？\n还发生过这种事。\p");
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("嗯嗯……什么？\n你是这个意思吗？\p");
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("是吗？\n我还不知道呢。\p");
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("啊哈哈！\n那是什么？\p");
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("对，就是这样！\n我就是这个意思。\p");
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("也就是说……\n对！没错！\p");

static const u8 *const sChatReactionTexts[GENDER_COUNT][4] = {
    {
        sText_LearnedSomethingMale,
        sText_ThatsFunnyMale,
        sText_RandomChatMale1,
        sText_RandomChatMale2
    },
    {
        sText_LearnedSomethingFemale,
        sText_ThatsFunnyFemale,
        sText_RandomChatFemale1,
        sText_RandomChatFemale2
    }
};

ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("我只是出示训练家卡片\n当作问候。\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("希望我们能更熟悉！\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("我们互相出示训练家卡片\n来认识一下。\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("很高兴认识你。\n以后常来往！\p");

static const u8 *const sTrainerCardReactionTexts[GENDER_COUNT][2] = {
    {
        sText_ShowedTrainerCardMale1,
        sText_ShowedTrainerCardMale2
    },
    {
        sText_ShowedTrainerCardFemale1,
        sText_ShowedTrainerCardFemale2
    }
};

ALIGNED(4) static const u8 sText_MaleTraded1[] = _("太好了！\n我一直想要这只宝可梦！\p");
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("终于通过交换得到了\n我一直想要的宝可梦。\p");
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("我现在正在交换宝可梦。\p");
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("我终于通过交换得到了\n想要的宝可梦！\p");

static const u8 *const sTradeReactionTexts[GENDER_COUNT][4] = {
    {
        sText_MaleTraded1,
        sText_MaleTraded2
    },
    {
        sText_FemaleTraded1,
        sText_FemaleTraded2
    }
};

ALIGNED(4) static const u8 sText_XCheckedTradingBoard[] = _("{STR_VAR_1}查看了\n交换公告板。\p");
ALIGNED(4) static const u8 sText_RegisterMonAtTradingBoard[] = _("欢迎使用交换公告板。\p你可以登记宝可梦\n用来交换。\p要登记一只\n你的宝可梦吗？");
ALIGNED(4) static const u8 sText_TradingBoardInfo[] = _("这个交换公告板用来\n提供宝可梦进行交换。\p你只需登记一只\n要交换的宝可梦。\p其他训练家可能会用队伍中的\n宝可梦来交换。\p希望你能登记宝可梦，\n和许许多多\l训练家交换。\p要登记一只\n你的宝可梦吗？");
ALIGNED(4) static const u8 sText_ThankYouForRegistering[] = _("已把你的宝可梦登记到\n交换公告板。\p感谢使用本服务！\p"); // unused
ALIGNED(4) static const u8 sText_NobodyHasRegistered[] = _("还没有人在交换公告板上\n登记宝可梦。\p\n"); // unused
ALIGNED(4) static const u8 sText_ChooseRequestedMonType[] = _("请选择你希望在交换中\n得到的宝可梦属性。\n");
ALIGNED(4) static const u8 sText_WhichMonWillYouOffer[] = _("你要用队伍中的哪只\n宝可梦来交换？\p");
ALIGNED(4) static const u8 sText_RegistrationCanceled[] = _("已取消登记。\p");
ALIGNED(4) static const u8 sText_RegistraionCompleted[] = _("登记已完成。\p");
ALIGNED(4) static const u8 sText_TradeCanceled[] = _("交换已取消。\p");
ALIGNED(4) static const u8 sText_CancelRegistrationOfMon[] = _("要取消登记的\nLv.{STR_VAR_2}{STR_VAR_1}吗？");
ALIGNED(4) static const u8 sText_CancelRegistrationOfEgg[] = _("要取消登记的蛋吗？");
ALIGNED(4) static const u8 sText_RegistrationCanceled2[] = _("登记已取消。\p");
ALIGNED(4) static const u8 sText_TradeTrainersWillBeListed[] = _("希望交换的训练家\n将会列出。"); // unused
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith2[] = _("请选择你想与之\n交换宝可梦的训练家。"); // unused
ALIGNED(4) static const u8 sText_AskTrainerToMakeTrade[] = _("要向{STR_VAR_1}提出\n交换请求吗？");
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer2[] = _("正在等待对方\n训练家的回复……"); // unused
ALIGNED(4) static const u8 sText_NotRegisteredAMonForTrade[] = _("你还没有登记\n要交换的宝可梦。\p"); // unused
ALIGNED(4) static const u8 sText_DontHaveTypeTrainerWants[] = _("你没有{STR_VAR_1}想要的\n{STR_VAR_2}属性宝可梦。\p");
ALIGNED(4) static const u8 sText_DontHaveEggTrainerWants[] = _("{STR_VAR_1}想要的蛋\n你手上没有。\p");
ALIGNED(4) static const u8 sText_PlayerCantTradeForYourMon[] = _("{STR_VAR_1}现在无法\n交换你的宝可梦。\p");
ALIGNED(4) static const u8 sText_CantTradeForPartnersMon[] = _("你现在无法交换\n{STR_VAR_1}的宝可梦。\p");

// Unused
static const u8 *const sCantTradeMonTexts[] = {
    sText_PlayerCantTradeForYourMon,
    sText_CantTradeForPartnersMon
};

ALIGNED(4) static const u8 sText_TradeOfferRejected[] = _("你的交换请求被拒绝了。\p");
ALIGNED(4) static const u8 sText_EggTrade[] = _("蛋交换");
ALIGNED(4) static const u8 sText_ChooseJoinCancel[] = _("{DPAD_UPDOWN}选择  {A_BUTTON}加入  {B_BUTTON}取消");
ALIGNED(4) static const u8 sText_ChooseTrainer[] = _("请选择训练家。");
ALIGNED(4) static const u8 sText_ChooseTrainerSingleBattle[] = _("请选择进行单打对战的\n训练家。");
ALIGNED(4) static const u8 sText_ChooseTrainerDoubleBattle[] = _("请选择进行双打对战的\n训练家。");
ALIGNED(4) static const u8 sText_ChooseLeaderMultiBattle[] = _("请选择多人对战的\n领队。");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith[] = _("请选择要交换的\n训练家。");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderCards[] = _("请选择正在分享\n神秘卡片的训练家。");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderNews[] = _("请选择正在分享\n神秘新闻的训练家。");
ALIGNED(4) static const u8 sText_ChooseLeaderPokemonJump[] = _("用迷你宝可梦跳跃！\n请选择领队。");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryCrush[] = _("树果粉碎！\n请选择领队。");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryPicking[] = _("嘟嘟利摘树果！\n请选择领队。");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryBlender[] = _("树果混合！\n请选择领队。");
ALIGNED(4) static const u8 sText_ChooseLeaderRecordCorner[] = _("记录角！\n请选择领队。");
ALIGNED(4) static const u8 sText_ChooseLeaderCoolContest[] = _("帅气大赛！\n请选择领队。");
ALIGNED(4) static const u8 sText_ChooseLeaderBeautyContest[] = _("美丽大赛！\n请选择领队。");
ALIGNED(4) static const u8 sText_ChooseLeaderCuteContest[] = _("可爱大赛！\n请选择领队。");
ALIGNED(4) static const u8 sText_ChooseLeaderSmartContest[] = _("聪明大赛！\n请选择领队。");
ALIGNED(4) static const u8 sText_ChooseLeaderToughContest[] = _("强壮大赛！\n请选择领队。");
ALIGNED(4) static const u8 sText_ChooseLeaderBattleTowerLv50[] = _("对战塔50级！\n请选择领队。");
ALIGNED(4) static const u8 sText_ChooseLeaderBattleTowerOpenLv[] = _("对战塔开放等级！\n请选择领队。");

static const u8 *const sChooseTrainerTexts[NUM_LINK_GROUP_TYPES] =
{
    [LINK_GROUP_SINGLE_BATTLE]     = sText_ChooseTrainerSingleBattle,
    [LINK_GROUP_DOUBLE_BATTLE]     = sText_ChooseTrainerDoubleBattle,
    [LINK_GROUP_MULTI_BATTLE]      = sText_ChooseLeaderMultiBattle,
    [LINK_GROUP_TRADE]             = sText_ChooseTrainerToTradeWith,
    [LINK_GROUP_POKEMON_JUMP]      = sText_ChooseLeaderPokemonJump,
    [LINK_GROUP_BERRY_CRUSH]       = sText_ChooseLeaderBerryCrush,
    [LINK_GROUP_BERRY_PICKING]     = sText_ChooseLeaderBerryPicking,
    [LINK_GROUP_WONDER_CARD]       = sText_ChooseTrainerToShareWonderCards,
    [LINK_GROUP_WONDER_NEWS]       = sText_ChooseTrainerToShareWonderNews,
    [LINK_GROUP_UNION_ROOM_RESUME] = NULL,
    [LINK_GROUP_UNION_ROOM_INIT]   = NULL,
    [LINK_GROUP_UNK_11]            = NULL,
    [LINK_GROUP_RECORD_CORNER]     = sText_ChooseLeaderRecordCorner,
    [LINK_GROUP_BERRY_BLENDER]     = sText_ChooseLeaderBerryBlender,
    [LINK_GROUP_UNK_14]            = NULL,
    [LINK_GROUP_COOL_CONTEST]      = sText_ChooseLeaderCoolContest,
    [LINK_GROUP_BEAUTY_CONTEST]    = sText_ChooseLeaderBeautyContest,
    [LINK_GROUP_CUTE_CONTEST]      = sText_ChooseLeaderCuteContest,
    [LINK_GROUP_SMART_CONTEST]     = sText_ChooseLeaderSmartContest,
    [LINK_GROUP_TOUGH_CONTEST]     = sText_ChooseLeaderToughContest,
    [LINK_GROUP_BATTLE_TOWER]      = sText_ChooseLeaderBattleTowerLv50,
    [LINK_GROUP_BATTLE_TOWER_OPEN] = sText_ChooseLeaderBattleTowerOpenLv
};

ALIGNED(4) static const u8 sText_SearchingForWirelessSystemWait[] = _("正在搜索无线通信\n系统。请稍候……");
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("进行双打对战，至少需要\n两只宝可梦。\p"); // Unused
ALIGNED(4) static const u8 sText_AwaitingPlayersResponse[] = _("正在等待{STR_VAR_1}的回复……");
ALIGNED(4) static const u8 sText_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("已请求{STR_VAR_1}把你\n登记为成员。请稍候。");
ALIGNED(4) static const u8 sText_AwaitingResponseFromWirelessSystem[] = _("正在等待无线通信\n系统的回复。");
ALIGNED(4) static const u8 sText_PleaseWaitForOtherTrainersToGather[] = _("请等待其他训练家\n集合准备。"); // Unused
ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("现在似乎没有\n正在分享的卡片。");
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("现在似乎没有\n正在分享的新闻。");

static const u8 *const sNoWonderSharedTexts[] = {
    sText_NoCardsSharedRightNow,
    sText_NoNewsSharedRightNow
};

ALIGNED(4) static const u8 sText_Battle[] = _("对战");
ALIGNED(4) static const u8 sText_Chat2[] = _("聊天");
ALIGNED(4) static const u8 sText_Greetings[] = _("问候");
ALIGNED(4) static const u8 sText_Exit[] = _("退出");
ALIGNED(4) static const u8 sText_Exit2[] = _("退出");
ALIGNED(4) static const u8 sText_Info[] = _("信息");
ALIGNED(4) static const u8 sText_NameWantedOfferLv[] = _("名字{CLEAR_TO 60}想要{CLEAR_TO 110}提供{CLEAR_TO 198}等级");
ALIGNED(4) static const u8 sText_SingleBattle[] = _("单打对战");
ALIGNED(4) static const u8 sText_DoubleBattle[] = _("双打对战");
ALIGNED(4) static const u8 sText_MultiBattle[] = _("多人对战");
ALIGNED(4) static const u8 sText_PokemonTrades[] = _("宝可梦交换");
ALIGNED(4) static const u8 sText_Chat[] = _("聊天");
ALIGNED(4) static const u8 sText_Cards[] = _("卡片");
ALIGNED(4) static const u8 sText_WonderCards[] = _("神秘卡片");
ALIGNED(4) static const u8 sText_WonderNews[] = _("神秘新闻");
ALIGNED(4) static const u8 sText_PokemonJump[] = _("宝可梦跳跃");
ALIGNED(4) static const u8 sText_BerryCrush[] = _("树果粉碎");
ALIGNED(4) static const u8 sText_BerryPicking[] = _("摘树果");
ALIGNED(4) static const u8 sText_Search[] = _("搜索");
ALIGNED(4) static const u8 sText_BerryBlender[] = _("树果混合");
ALIGNED(4) static const u8 sText_RecordCorner[] = _("记录角");
ALIGNED(4) static const u8 sText_CoolContest[] = _("帅气大赛");
ALIGNED(4) static const u8 sText_BeautyContest[] = _("美丽大赛");
ALIGNED(4) static const u8 sText_CuteContest[] = _("可爱大赛");
ALIGNED(4) static const u8 sText_SmartContest[] = _("聪明大赛");
ALIGNED(4) static const u8 sText_ToughContest[] = _("强壮大赛");
ALIGNED(4) static const u8 sText_BattleTowerLv50[] = _("对战塔50级");
ALIGNED(4) static const u8 sText_BattleTowerOpenLv[] = _("对战塔开放等级");
ALIGNED(4) static const u8 sText_ItsNormalCard[] = _("这是普通卡片。");
ALIGNED(4) static const u8 sText_ItsBronzeCard[] = _("这是青铜卡片！");
ALIGNED(4) static const u8 sText_ItsCopperCard[] = _("这是红铜卡片！");
ALIGNED(4) static const u8 sText_ItsSilverCard[] = _("这是白银卡片！");
ALIGNED(4) static const u8 sText_ItsGoldCard[] = _("这是黄金卡片！");

static const u8 *const sCardColorTexts[] = {
    sText_ItsNormalCard,
    sText_ItsBronzeCard,
    sText_ItsCopperCard,
    sText_ItsSilverCard,
    sText_ItsGoldCard
};

ALIGNED(4) static const u8 sText_TrainerCardInfoPage1[] = _("这是{DYNAMIC 0}{DYNAMIC 1}的\n训练家卡片……\l{DYNAMIC 2}\p宝可梦图鉴：{DYNAMIC 3}\n时间：    {DYNAMIC 4}:{DYNAMIC 5}\p");
ALIGNED(4) static const u8 sText_TrainerCardInfoPage2[] = _("对战：胜{DYNAMIC 0}  负{DYNAMIC 2}\n交换：{DYNAMIC 3}\p“{DYNAMIC 4}{DYNAMIC 5}\n{DYNAMIC 6}{DYNAMIC 7}”\p");
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 1}：很高兴见到你！{PAUSE 60}");
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 1}：很高兴认识你！{PAUSE 60}");

static const u8 *const sGladToMeetYouTexts[GENDER_COUNT] = {
    sText_GladToMeetYouMale,
    sText_GladToMeetYouFemale
};

ALIGNED(4) static const u8 sText_FinishedCheckingPlayersTrainerCard[] = _("已查看完{DYNAMIC 1}的\n训练家卡片。{PAUSE 60}");

static const u8 *const sLinkGroupActivityNameTexts[] = {
    [ACTIVITY_NONE]              = sText_EmptyString,
    [ACTIVITY_BATTLE_SINGLE]     = sText_SingleBattle,
    [ACTIVITY_BATTLE_DOUBLE]     = sText_DoubleBattle,
    [ACTIVITY_BATTLE_MULTI]      = sText_MultiBattle,
    [ACTIVITY_TRADE]             = sText_PokemonTrades,
    [ACTIVITY_CHAT]              = sText_Chat,
    [ACTIVITY_WONDER_CARD_DUP]   = sText_WonderCards,
    [ACTIVITY_WONDER_NEWS_DUP]   = sText_WonderNews,
    [ACTIVITY_CARD]              = sText_Cards,
    [ACTIVITY_POKEMON_JUMP]      = sText_PokemonJump,
    [ACTIVITY_BERRY_CRUSH]       = sText_BerryCrush,
    [ACTIVITY_BERRY_PICK]        = sText_BerryPicking,
    [ACTIVITY_SEARCH]            = sText_Search,
    [ACTIVITY_SPIN_TRADE]        = sText_EmptyString,
    [ACTIVITY_BATTLE_TOWER_OPEN] = sText_BattleTowerOpenLv,
    [ACTIVITY_RECORD_CORNER]     = sText_RecordCorner,
    [ACTIVITY_BERRY_BLENDER]     = sText_BerryBlender,
    [ACTIVITY_ACCEPT]            = sText_EmptyString,
    [ACTIVITY_DECLINE]           = sText_EmptyString,
    [ACTIVITY_NPCTALK]           = sText_EmptyString,
    [ACTIVITY_PLYRTALK]          = sText_EmptyString,
    [ACTIVITY_WONDER_CARD]       = sText_WonderCards,
    [ACTIVITY_WONDER_NEWS]       = sText_WonderNews,
    [ACTIVITY_CONTEST_COOL]      = sText_CoolContest,
    [ACTIVITY_CONTEST_BEAUTY]    = sText_BeautyContest,
    [ACTIVITY_CONTEST_CUTE]      = sText_CuteContest,
    [ACTIVITY_CONTEST_SMART]     = sText_SmartContest,
    [ACTIVITY_CONTEST_TOUGH]     = sText_ToughContest,
    [ACTIVITY_BATTLE_TOWER]      = sText_BattleTowerLv50
};

static const struct WindowTemplate sWindowTemplate_BButtonCancel = {
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 0,
    .width = 30,
    .height = 2,
    .paletteNum = 15,
    .baseBlock = 0x0008
};

// Minimum and maximum number of players for a link group
// A minimum of 0 means the min and max are equal
#define LINK_GROUP_CAPACITY(min, max) (((min) << 12) | ((max) << 8))
#define GROUP_MAX(capacity) (capacity & 0x0F)
#define GROUP_MIN(capacity) (capacity >> 4)
#define GROUP_MIN2(capacity) (capacity & 0xF0) // Unnecessary to have both, but needed to match

static const u32 sLinkGroupToActivityAndCapacity[NUM_LINK_GROUP_TYPES] = {
    [LINK_GROUP_SINGLE_BATTLE]     = ACTIVITY_BATTLE_SINGLE     | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_DOUBLE_BATTLE]     = ACTIVITY_BATTLE_DOUBLE     | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_MULTI_BATTLE]      = ACTIVITY_BATTLE_MULTI      | LINK_GROUP_CAPACITY(0, 4),
    [LINK_GROUP_TRADE]             = ACTIVITY_TRADE             | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_POKEMON_JUMP]      = ACTIVITY_POKEMON_JUMP      | LINK_GROUP_CAPACITY(2, 5),
    [LINK_GROUP_BERRY_CRUSH]       = ACTIVITY_BERRY_CRUSH       | LINK_GROUP_CAPACITY(2, 5),
    [LINK_GROUP_BERRY_PICKING]     = ACTIVITY_BERRY_PICK        | LINK_GROUP_CAPACITY(3, 5),
    [LINK_GROUP_WONDER_CARD]       = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_WONDER_NEWS]       = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_UNION_ROOM_RESUME] = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_UNION_ROOM_INIT]   = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_UNK_11]            = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_RECORD_CORNER]     = ACTIVITY_RECORD_CORNER     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_BERRY_BLENDER]     = ACTIVITY_BERRY_BLENDER     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_UNK_14]            = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_COOL_CONTEST]      = ACTIVITY_CONTEST_COOL      | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_BEAUTY_CONTEST]    = ACTIVITY_CONTEST_BEAUTY    | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_CUTE_CONTEST]      = ACTIVITY_CONTEST_CUTE      | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_SMART_CONTEST]     = ACTIVITY_CONTEST_SMART     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_TOUGH_CONTEST]     = ACTIVITY_CONTEST_TOUGH     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_BATTLE_TOWER]      = ACTIVITY_BATTLE_TOWER      | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_BATTLE_TOWER_OPEN] = ACTIVITY_BATTLE_TOWER_OPEN | LINK_GROUP_CAPACITY(0, 2)
};

static const struct WindowTemplate sWindowTemplate_PlayerList = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 3,
    .width = 13,
    .height = 8,
    .paletteNum = 15,
    .baseBlock = 0x0044
};

static const struct WindowTemplate sWindowTemplate_5PlayerList = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 3,
    .width = 13,
    .height = 10,
    .paletteNum = 15,
    .baseBlock = 0x0044
};

static const struct WindowTemplate sWindowTemplate_NumPlayerMode = {
    .bg = 0,
    .tilemapLeft = 16,
    .tilemapTop = 3,
    .width = 7,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x00c6
};

static const struct ListMenuItem sPossibleGroupMembersListMenuItems[] = {
    { sText_EmptyString, 0 },
    { sText_EmptyString, 1 },
    { sText_EmptyString, 2 },
    { sText_EmptyString, 3 },
    { sText_EmptyString, 4 }
};

static const struct ListMenuTemplate sListMenuTemplate_PossibleGroupMembers = {
    .items = sPossibleGroupMembersListMenuItems,
    .moveCursorFunc = NULL,
    .itemPrintFunc = ItemPrintFunc_PossibleGroupMembers,
    .totalItems = ARRAY_COUNT(sPossibleGroupMembersListMenuItems),
    .maxShowed = 5,
    .windowId = 0,
    .header_X = 0,
    .item_X = 0,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_INVISIBLE
};

static const struct WindowTemplate sWindowTemplate_GroupList = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 3,
    .width = 17,
    .height = 10,
    .paletteNum = 15,
    .baseBlock = 0x0044
};

static const struct WindowTemplate sWindowTemplate_PlayerNameAndId = {
    .bg = 0,
    .tilemapLeft = 20,
    .tilemapTop = 3,
    .width = 7,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x00ee
};

static const struct ListMenuItem sUnionRoomGroupsMenuItems[] = {
    { sText_EmptyString,  0 },
    { sText_EmptyString,  1 },
    { sText_EmptyString,  2 },
    { sText_EmptyString,  3 },
    { sText_EmptyString,  4 },
    { sText_EmptyString,  5 },
    { sText_EmptyString,  6 },
    { sText_EmptyString,  7 },
    { sText_EmptyString,  8 },
    { sText_EmptyString,  9 },
    { sText_EmptyString, 10 },
    { sText_EmptyString, 11 },
    { sText_EmptyString, 12 },
    { sText_EmptyString, 13 },
    { sText_EmptyString, 14 },
    { sText_EmptyString, 15 }
};

static const struct ListMenuTemplate sListMenuTemplate_UnionRoomGroups = {
    .items = sUnionRoomGroupsMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = ListMenuItemPrintFunc_UnionRoomGroups,
    .totalItems = ARRAY_COUNT(sUnionRoomGroupsMenuItems),
    .maxShowed = 5,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_MULTIPLE_SCROLL_DPAD,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_InviteToActivity = {
    .bg = 0,
    .tilemapLeft = 20,
    .tilemapTop = 5,
    .width = 16,
    .height = 8,
    .paletteNum = 15,
    .baseBlock = 0x0001
};

static const struct ListMenuItem sInviteToActivityMenuItems[] = {
    { sText_Greetings, ACTIVITY_CARD | LINK_GROUP_CAPACITY(0, 2)},
    { sText_Battle,    ACTIVITY_BATTLE_SINGLE | IN_UNION_ROOM | LINK_GROUP_CAPACITY(0, 2)},
    { sText_Chat2,     ACTIVITY_CHAT | IN_UNION_ROOM | LINK_GROUP_CAPACITY(0, 2)},
    { sText_Exit,      ACTIVITY_NONE | IN_UNION_ROOM }
};

static const struct ListMenuTemplate sListMenuTemplate_InviteToActivity = {
    .items = sInviteToActivityMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = ARRAY_COUNT(sInviteToActivityMenuItems),
    .maxShowed = 4,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_RegisterForTrade = {
    .bg = 0,
    .tilemapLeft = 18,
    .tilemapTop = 7,
    .width = 16,
    .height = 6,
    .paletteNum = 15,
    .baseBlock = 0x0001
};

static const struct ListMenuItem sRegisterForTradeListMenuItems[] = {
    { gText_Register, 1 },
    { sText_Info, 2 },
    { sText_Exit, 3 }
};

static const struct ListMenuTemplate sListMenuTemplate_RegisterForTrade = {
    .items = sRegisterForTradeListMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = ARRAY_COUNT(sRegisterForTradeListMenuItems),
    .maxShowed = 3,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_TradingBoardRequestType = {
    .bg = 0,
    .tilemapLeft = 20,
    .tilemapTop = 1,
    .width = 16,
    .height = 12,
    .paletteNum = 15,
    .baseBlock = 0x0001
};

static const struct ListMenuItem sTradingBoardTypes[NUMBER_OF_MON_TYPES] = {
    { gTypesInfo[TYPE_NORMAL].name,   TYPE_NORMAL         },
    { gTypesInfo[TYPE_FIRE].name,     TYPE_FIRE           },
    { gTypesInfo[TYPE_WATER].name,    TYPE_WATER          },
    { gTypesInfo[TYPE_ELECTRIC].name, TYPE_ELECTRIC       },
    { gTypesInfo[TYPE_GRASS].name,    TYPE_GRASS          },
    { gTypesInfo[TYPE_ICE].name,      TYPE_ICE            },
    { gTypesInfo[TYPE_GROUND].name,   TYPE_GROUND         },
    { gTypesInfo[TYPE_ROCK].name,     TYPE_ROCK           },
    { gTypesInfo[TYPE_FLYING].name,   TYPE_FLYING         },
    { gTypesInfo[TYPE_PSYCHIC].name,  TYPE_PSYCHIC        },
    { gTypesInfo[TYPE_FIGHTING].name, TYPE_FIGHTING       },
    { gTypesInfo[TYPE_POISON].name,   TYPE_POISON         },
    { gTypesInfo[TYPE_BUG].name,      TYPE_BUG            },
    { gTypesInfo[TYPE_GHOST].name,    TYPE_GHOST          },
    { gTypesInfo[TYPE_DRAGON].name,   TYPE_DRAGON         },
    { gTypesInfo[TYPE_STEEL].name,    TYPE_STEEL          },
    { gTypesInfo[TYPE_DARK].name,     TYPE_DARK           },
    { gTypesInfo[TYPE_FAIRY].name,    TYPE_FAIRY          },
    { sText_Exit,                NUMBER_OF_MON_TYPES }
};

static const struct ListMenuTemplate sMenuTemplate_TradingBoardRequestType = {
    .items = sTradingBoardTypes,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = ARRAY_COUNT(sTradingBoardTypes),
    .maxShowed = 6,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_TradingBoardHeader = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = 28,
    .height = 2,
    .paletteNum = 13,
    .baseBlock = 0x0001
};

static const struct WindowTemplate sWindowTemplate_TradingBoardMain = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 5,
    .width = 28,
    .height = 12,
    .paletteNum = 13,
    .baseBlock = 0x0039
};

static const struct ListMenuItem sTradeBoardListMenuItems[] = {
    { sText_EmptyString, LIST_HEADER },
    { sText_EmptyString,  0 },
    { sText_EmptyString,  1 },
    { sText_EmptyString,  2 },
    { sText_EmptyString,  3 },
    { sText_EmptyString,  4 },
    { sText_EmptyString,  5 },
    { sText_EmptyString,  6 },
    { sText_EmptyString,  7 },
    { sText_Exit2,  8 }
};

static const struct ListMenuTemplate sTradeBoardListMenuTemplate = {
    .items = sTradeBoardListMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = TradeBoardListMenuItemPrintFunc,
    .totalItems = ARRAY_COUNT(sTradeBoardListMenuItems),
    .maxShowed = 6,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 14,
    .fillValue = 15,
    .cursorShadowPal = 13,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

// Unused
static const struct WindowTemplate sWindowTemplate_Unused = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 5,
    .width = 28,
    .height = 12,
    .paletteNum = 13,
    .baseBlock = 0x0039
};

static const struct ListMenuItem sEmptyListMenuItems[] = {
    { sText_EmptyString,  0 },
    { sText_EmptyString,  1 },
    { sText_EmptyString,  2 },
    { sText_EmptyString,  3 },
    { sText_EmptyString,  4 },
    { sText_EmptyString,  5 },
    { sText_EmptyString,  6 },
    { sText_EmptyString,  7 },
    { sText_EmptyString,  8 },
    { sText_EmptyString,  9 },
    { sText_EmptyString, 10 },
    { sText_EmptyString, 11 },
    { sText_EmptyString, 12 },
    { sText_EmptyString, 13 },
    { sText_EmptyString, 14 },
    { sText_EmptyString, 15 }
};

// Unused
static const struct ListMenuTemplate sEmptyListMenuTemplate = {
    .items = sEmptyListMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = ItemPrintFunc_EmptyList,
    .totalItems = ARRAY_COUNT(sEmptyListMenuItems),
    .maxShowed = 4,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_MULTIPLE_SCROLL_DPAD,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct RfuPlayerData sUnionRoomPlayer_DummyRfu = {0};

ALIGNED(4) static const u8 sAcceptedActivityIds_SingleBattle[]    = {ACTIVITY_BATTLE_SINGLE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_DoubleBattle[]    = {ACTIVITY_BATTLE_DOUBLE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_MultiBattle[]     = {ACTIVITY_BATTLE_MULTI, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_Trade[]           = {ACTIVITY_TRADE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_PokemonJump[]     = {ACTIVITY_POKEMON_JUMP, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BerryCrush[]      = {ACTIVITY_BERRY_CRUSH, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BerryPicking[]    = {ACTIVITY_BERRY_PICK, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_WonderCard[]      = {ACTIVITY_WONDER_CARD, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_WonderNews[]      = {ACTIVITY_WONDER_NEWS, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_Resume[]          = {
    IN_UNION_ROOM | ACTIVITY_NONE,
    IN_UNION_ROOM | ACTIVITY_BATTLE_SINGLE,
    IN_UNION_ROOM | ACTIVITY_TRADE,
    IN_UNION_ROOM | ACTIVITY_CHAT,
    IN_UNION_ROOM | ACTIVITY_CARD,
    IN_UNION_ROOM | ACTIVITY_ACCEPT,
    IN_UNION_ROOM | ACTIVITY_DECLINE,
    IN_UNION_ROOM | ACTIVITY_NPCTALK,
    IN_UNION_ROOM | ACTIVITY_PLYRTALK,
    0xff
};
ALIGNED(4) static const u8 sAcceptedActivityIds_Init[]            = {ACTIVITY_SEARCH, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_Unk11[]           = {
    ACTIVITY_BATTLE_SINGLE,
    ACTIVITY_BATTLE_DOUBLE,
    ACTIVITY_BATTLE_MULTI,
    ACTIVITY_TRADE,
    ACTIVITY_POKEMON_JUMP,
    ACTIVITY_BERRY_CRUSH,
    ACTIVITY_BERRY_PICK,
    ACTIVITY_WONDER_CARD,
    ACTIVITY_WONDER_NEWS,
    ACTIVITY_SPIN_TRADE,
    0xff
};
ALIGNED(4) static const u8 sAcceptedActivityIds_RecordCorner[]    = {ACTIVITY_RECORD_CORNER, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BerryBlender[]    = {ACTIVITY_BERRY_BLENDER, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_CoolContest[]     = {ACTIVITY_CONTEST_COOL, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BeautyContest[]   = {ACTIVITY_CONTEST_BEAUTY, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_CuteContest[]     = {ACTIVITY_CONTEST_CUTE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_SmartContest[]    = {ACTIVITY_CONTEST_SMART, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_ToughContest[]    = {ACTIVITY_CONTEST_TOUGH, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BattleTower[]     = {ACTIVITY_BATTLE_TOWER, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BattleTowerOpen[] = {ACTIVITY_BATTLE_TOWER_OPEN, 0xff};

static const u8 *const sAcceptedActivityIds[NUM_LINK_GROUP_TYPES] = {
    [LINK_GROUP_SINGLE_BATTLE]     = sAcceptedActivityIds_SingleBattle,
    [LINK_GROUP_DOUBLE_BATTLE]     = sAcceptedActivityIds_DoubleBattle,
    [LINK_GROUP_MULTI_BATTLE]      = sAcceptedActivityIds_MultiBattle,
    [LINK_GROUP_TRADE]             = sAcceptedActivityIds_Trade,
    [LINK_GROUP_POKEMON_JUMP]      = sAcceptedActivityIds_PokemonJump,
    [LINK_GROUP_BERRY_CRUSH]       = sAcceptedActivityIds_BerryCrush,
    [LINK_GROUP_BERRY_PICKING]     = sAcceptedActivityIds_BerryPicking,
    [LINK_GROUP_WONDER_CARD]       = sAcceptedActivityIds_WonderCard,
    [LINK_GROUP_WONDER_NEWS]       = sAcceptedActivityIds_WonderNews,
    [LINK_GROUP_UNION_ROOM_RESUME] = sAcceptedActivityIds_Resume,
    [LINK_GROUP_UNION_ROOM_INIT]   = sAcceptedActivityIds_Init,
    [LINK_GROUP_UNK_11]            = sAcceptedActivityIds_Unk11,
    [LINK_GROUP_RECORD_CORNER]     = sAcceptedActivityIds_RecordCorner,
    [LINK_GROUP_BERRY_BLENDER]     = sAcceptedActivityIds_BerryBlender,
    [LINK_GROUP_UNK_14]            = NULL,
    [LINK_GROUP_COOL_CONTEST]      = sAcceptedActivityIds_CoolContest,
    [LINK_GROUP_BEAUTY_CONTEST]    = sAcceptedActivityIds_BeautyContest,
    [LINK_GROUP_CUTE_CONTEST]      = sAcceptedActivityIds_CuteContest,
    [LINK_GROUP_SMART_CONTEST]     = sAcceptedActivityIds_SmartContest,
    [LINK_GROUP_TOUGH_CONTEST]     = sAcceptedActivityIds_ToughContest,
    [LINK_GROUP_BATTLE_TOWER]      = sAcceptedActivityIds_BattleTower,
    [LINK_GROUP_BATTLE_TOWER_OPEN] = sAcceptedActivityIds_BattleTowerOpen
};

static const u8 sLinkGroupToURoomActivity[NUM_LINK_GROUP_TYPES + 2] =
{
    [LINK_GROUP_SINGLE_BATTLE]     = ACTIVITY_BATTLE_SINGLE,
    [LINK_GROUP_DOUBLE_BATTLE]     = ACTIVITY_BATTLE_DOUBLE,
    [LINK_GROUP_MULTI_BATTLE]      = ACTIVITY_BATTLE_MULTI,
    [LINK_GROUP_TRADE]             = ACTIVITY_TRADE,
    [LINK_GROUP_POKEMON_JUMP]      = ACTIVITY_POKEMON_JUMP,
    [LINK_GROUP_BERRY_CRUSH]       = ACTIVITY_BERRY_CRUSH,
    [LINK_GROUP_BERRY_PICKING]     = ACTIVITY_BERRY_PICK,
    [LINK_GROUP_WONDER_CARD]       = ACTIVITY_WONDER_CARD,
    [LINK_GROUP_WONDER_NEWS]       = ACTIVITY_WONDER_NEWS,
    [LINK_GROUP_UNION_ROOM_RESUME] = ACTIVITY_NONE,
    [LINK_GROUP_UNION_ROOM_INIT]   = ACTIVITY_NONE,
    [LINK_GROUP_UNK_11]            = ACTIVITY_NONE,
    [LINK_GROUP_RECORD_CORNER]     = ACTIVITY_RECORD_CORNER,
    [LINK_GROUP_BERRY_BLENDER]     = ACTIVITY_BERRY_BLENDER,
    [LINK_GROUP_UNK_14]            = ACTIVITY_NONE,
    [LINK_GROUP_COOL_CONTEST]      = ACTIVITY_CONTEST_COOL,
    [LINK_GROUP_BEAUTY_CONTEST]    = ACTIVITY_CONTEST_BEAUTY,
    [LINK_GROUP_CUTE_CONTEST]      = ACTIVITY_CONTEST_CUTE,
    [LINK_GROUP_SMART_CONTEST]     = ACTIVITY_CONTEST_SMART,
    [LINK_GROUP_TOUGH_CONTEST]     = ACTIVITY_CONTEST_TOUGH,
    [LINK_GROUP_BATTLE_TOWER]      = ACTIVITY_BATTLE_TOWER,
    [LINK_GROUP_BATTLE_TOWER_OPEN] = ACTIVITY_BATTLE_TOWER_OPEN
};
