//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSDate, NSDictionary, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITextField, UIView, WBLotteryRichListView, WBSwapLoadingView;

@interface WBLotteryViewController : WBViewController <UITextFieldDelegate>
{
    _Bool selectedShare;
    _Bool isResult;
    _Bool needUpdate;
    _Bool needBindPhone;
    _Bool needRefreshBindPhone;
    _Bool isFake;
    _Bool _irregularAccount;
    float topContentHeight;
    float delay;
    NSDictionary *layoutInfo;
    NSString *containerID;
    UIView *promptBGView;
    UIView *backgroundView;
    long long themeType;
    UIImageView *customImageView;
    UIImageView *resultCustomImageView;
    UIScrollView *scrollView;
    UIImageView *defaultShadowImageView;
    UIImageView *defaultBottomImageView;
    UIImageView *defaultTopImageView;
    UIView *defaultBottomColorView;
    UIView *defaultTopColorView;
    UIImageView *defaultAvaterView;
    UIView *statusView;
    UIView *headerView;
    UITextField *passwordField;
    UIButton *fetchButton;
    UILabel *promptLabel;
    UIButton *shareButton;
    UIView *bottomView;
    UIImageView *logoView;
    UIButton *bottomButton;
    UIImageView *separaterLine;
    WBSwapLoadingView *activityView;
    UIView *resultView;
    UIView *unfollowView;
    WBLotteryRichListView *leaderboardView;
    NSString *pageID;
    NSString *groupID;
    NSString *ouid;
    NSDate *startDate;
    NSDate *endDate;
    UIView *_tagView;
    UILabel *_passwordLabel;
    UIImageView *_aimageView;
    UIButton *_awardBtn;
    NSDictionary *_irregularAccountMsg;
    NSString *_shareUrl;
}

@property _Bool irregularAccount; // @synthesize irregularAccount=_irregularAccount;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSDictionary *irregularAccountMsg; // @synthesize irregularAccountMsg=_irregularAccountMsg;
@property(retain, nonatomic) UIButton *awardBtn; // @synthesize awardBtn=_awardBtn;
@property(retain, nonatomic) UIImageView *aimageView; // @synthesize aimageView=_aimageView;
@property(retain, nonatomic) UILabel *passwordLabel; // @synthesize passwordLabel=_passwordLabel;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate;
@property float delay; // @synthesize delay;
@property float topContentHeight; // @synthesize topContentHeight;
@property _Bool isFake; // @synthesize isFake;
@property _Bool needRefreshBindPhone; // @synthesize needRefreshBindPhone;
@property _Bool needBindPhone; // @synthesize needBindPhone;
@property _Bool needUpdate; // @synthesize needUpdate;
@property(retain, nonatomic) NSString *ouid; // @synthesize ouid;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID;
@property(retain, nonatomic) WBLotteryRichListView *leaderboardView; // @synthesize leaderboardView;
@property(retain, nonatomic) UIView *unfollowView; // @synthesize unfollowView;
@property(retain, nonatomic) UIView *resultView; // @synthesize resultView;
@property _Bool isResult; // @synthesize isResult;
@property _Bool selectedShare; // @synthesize selectedShare;
@property(retain, nonatomic) WBSwapLoadingView *activityView; // @synthesize activityView;
@property(retain, nonatomic) UIImageView *separaterLine; // @synthesize separaterLine;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel;
@property(retain, nonatomic) UIButton *fetchButton; // @synthesize fetchButton;
@property(retain, nonatomic) UITextField *passwordField; // @synthesize passwordField;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView;
@property(retain, nonatomic) UIImageView *defaultAvaterView; // @synthesize defaultAvaterView;
@property(retain, nonatomic) UIView *defaultTopColorView; // @synthesize defaultTopColorView;
@property(retain, nonatomic) UIView *defaultBottomColorView; // @synthesize defaultBottomColorView;
@property(retain, nonatomic) UIImageView *defaultTopImageView; // @synthesize defaultTopImageView;
@property(retain, nonatomic) UIImageView *defaultBottomImageView; // @synthesize defaultBottomImageView;
@property(retain, nonatomic) UIImageView *defaultShadowImageView; // @synthesize defaultShadowImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
@property(retain, nonatomic) UIImageView *resultCustomImageView; // @synthesize resultCustomImageView;
@property(retain, nonatomic) UIImageView *customImageView; // @synthesize customImageView;
@property long long themeType; // @synthesize themeType;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView;
@property(retain, nonatomic) UIView *promptBGView; // @synthesize promptBGView;
@property(retain, nonatomic) NSString *containerID; // @synthesize containerID;
@property(retain, nonatomic) NSDictionary *layoutInfo; // @synthesize layoutInfo;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)moreButtonPressed:(id)arg1;
- (void)saveFetchTime;
- (void)logWithCode:(id)arg1;
- (id)logExtraParameters;
- (id)extraParameters;
- (float)sizeOfType:(id)arg1;
- (void)showAccountToast;
- (void)showLogin;
- (void)showBindingPhone;
- (void)showUpdate;
- (void)handleLuckyMoney:(id)arg1 error:(id)arg2;
- (void)showEditPassword;
- (void)showFakeResult;
- (id)joinParams:(id)arg1;
- (void)requestLuckyMoney;
- (id)signatureStr:(id)arg1 containerID:(id)arg2;
- (void)showUnawardState:(id)arg1;
- (void)resetFetchState;
- (void)fetchLuckyMoney;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)addLoadingView;
- (void)resetLeaderboardFrame;
- (void)showLeaderboard:(id)arg1;
- (void)unfollow:(id)arg1;
- (void)showResultBackground:(id)arg1 info:(id)arg2;
- (void)downloadResultBackground:(id)arg1;
- (void)showResult:(id)arg1;
- (id)shortName:(id)arg1 max:(long long)arg2;
- (void)showLucky:(id)arg1;
- (void)_resetShareUrl:(id)arg1;
- (_Bool)isLucky:(id)arg1;
- (void)resetDefautBackgroudFrame;
- (void)resetDefautCustomFrame;
- (void)updateTopContentHegiht;
- (void)resetAvatarViewFrame;
- (void)resetAvatarView:(id)arg1;
- (void)shareAward:(id)arg1;
- (void)openAwardUrl:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)passwordChange:(id)arg1;
- (id)attributesOfButtonTitle:(id)arg1 image:(id)arg2 color:(id)arg3 size:(float)arg4 titleLeft:(_Bool)arg5;
- (void)showStatusView:(id)arg1;
- (_Bool)hasShowStatus;
- (_Bool)isInvalid:(id)arg1;
- (_Bool)isCustomState:(id)arg1;
- (_Bool)canPay:(id)arg1;
- (_Bool)isCurrentUser:(id)arg1;
- (long long)luckyMoneyType:(id)arg1;
- (_Bool)canFetch:(id)arg1;
- (long long)themeType:(id)arg1;
- (void)addDefaultTheme:(id)arg1;
- (void)removeDefaultBackground;
- (void)addDefaultBackground;
- (void)changeToDefaultTheme:(id)arg1;
- (void)showLuckyMoneyInfo:(id)arg1;
- (void)addGesture;
- (void)userTap:(id)arg1;
- (void)updateOUID:(id)arg1;
- (void)handleLuckyMoneyInfo:(id)arg1 error:(id)arg2;
- (_Bool)needFake:(id)arg1 error:(id)arg2;
- (_Bool)needShowToast:(id)arg1;
- (void)showTips:(id)arg1 duration:(double)arg2;
- (void)showNetworkDisableState;
- (void)requestLuckyMoneyInfo;
- (void)loadMoneyInfo;
- (void)refreshBindPhone:(id)arg1 error:(id)arg2;
- (void)showLoadingInfo:(_Bool)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)configSubviewsFrame;
- (float)contentOffset;
- (void)initViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)resetNavgationBar;
- (void)viewDidLoad;
- (void)close;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

