//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBLittleVideoSTVSOverlayBaseView.h"

#import "WBLittleVideoStoryAttributedExpandableTextViewDelegate-Protocol.h"
#import "WBLittleVideoStoryVideoControlsProgressViewDelegate-Protocol.h"
#import "WBRetweetToChatComposeViewDelegate-Protocol.h"
#import "WBStoryBulletinCommentViewControllerDelegate-Protocol.h"
#import "WBStoryClickNodesContentViewDelegate-Protocol.h"
#import "WBVideoPlaybackEventListener-Protocol.h"
#import "WBVideoPlaybackUserEventListener-Protocol.h"

@class LOTAnimationView, NSMutableArray, NSString, NSTimer, UIButton, UILabel, UINavigationController, WBContactAvatarView, WBLittleVideoContextView, WBLittleVideoSTVSADCardView, WBLittleVideoStoryAdvertView, WBLittleVideoStoryAttributedExpandableTextView, WBLittleVideoStoryMusicDiversionControl, WBLittleVideoStoryNewFullOverlayButton, WBLittleVideoStoryNewFullScreenOverlayMusicLabel, WBLittleVideoStoryNewFullScreenOverlayNicknameLabel, WBLittleVideoStoryVideoProgressView, WBLittleVideoStoryWechatControl, WBOperatingLocationView, WBSTLikeAnimationView, WBShortVideoBizView, WBShortVideoSharedContext, WBStoryClickNodesContentView, WBVideoPlayerController, WBViewController;

@interface WBLittleVideoSTVSStoryNewOverlayView : WBLittleVideoSTVSOverlayBaseView <WBLittleVideoStoryAttributedExpandableTextViewDelegate, WBStoryClickNodesContentViewDelegate, WBStoryBulletinCommentViewControllerDelegate, WBRetweetToChatComposeViewDelegate, WBLittleVideoStoryVideoControlsProgressViewDelegate, WBVideoPlaybackEventListener, WBVideoPlaybackUserEventListener>
{
    _Bool _privateMessage;
    _Bool _highLightedBtn;
    _Bool _isAdCardEnable;
    _Bool _isDisplayAdCard;
    _Bool _isAdClosed;
    _Bool _haveOperatingLocation;
    _Bool _haveMusicBanner;
    _Bool _seeking;
    _Bool _manualSuspendedBeforeEnterBackGround;
    _Bool _adActive;
    _Bool _ignoreMusicGuideView;
    _Bool _needCheckMusicGuideViewWhenConfigureStatus;
    int _picChangeStartTime;
    int _picChangeDuration;
    WBLittleVideoStoryVideoProgressView *_progressView;
    WBShortVideoSharedContext *_shareContext;
    WBVideoPlayerController *_videoController;
    WBShortVideoBizView *_bizview;
    WBContactAvatarView *_avatarView;
    LOTAnimationView *_followButton;
    WBLittleVideoStoryNewFullOverlayButton *_likeButton;
    WBLittleVideoStoryNewFullOverlayButton *_commentListButton;
    WBLittleVideoStoryNewFullOverlayButton *_shareButton;
    WBLittleVideoStoryWechatControl *_wechatButton;
    WBLittleVideoStoryMusicDiversionControl *_musicDiversion;
    NSMutableArray *_rightViews;
    WBLittleVideoStoryNewFullScreenOverlayNicknameLabel *_nickNameLabel;
    WBLittleVideoStoryNewFullScreenOverlayMusicLabel *_musicTitleLabel;
    NSMutableArray *_bottomViews;
    WBSTLikeAnimationView *_likeAnimation;
    WBStoryClickNodesContentView *_clickNodesContentView;
    WBLittleVideoContextView *_littleVideoContentView;
    WBLittleVideoStoryAttributedExpandableTextView *_textContentView;
    UILabel *_adLabel;
    WBLittleVideoStoryAdvertView *_advertView;
    WBLittleVideoSTVSADCardView *_adCard;
    WBOperatingLocationView *_operatingLocationView;
    NSTimer *_beginUserPhotoTimer;
    NSTimer *_endUserPhotoTimer;
    UIButton *_fullScreenChangeButton;
    UILabel *_currentTimeLabel;
    WBViewController *_repostVC;
    UINavigationController *_repostNavigationVC;
    CDStruct_1b6d18a9 _totalTime;
    CDStruct_1b6d18a9 _currentTime;
}

@property(nonatomic) _Bool needCheckMusicGuideViewWhenConfigureStatus; // @synthesize needCheckMusicGuideViewWhenConfigureStatus=_needCheckMusicGuideViewWhenConfigureStatus;
@property(nonatomic) _Bool ignoreMusicGuideView; // @synthesize ignoreMusicGuideView=_ignoreMusicGuideView;
@property(nonatomic) _Bool adActive; // @synthesize adActive=_adActive;
@property(nonatomic) __weak UINavigationController *repostNavigationVC; // @synthesize repostNavigationVC=_repostNavigationVC;
@property(nonatomic) __weak WBViewController *repostVC; // @synthesize repostVC=_repostVC;
@property(nonatomic) _Bool manualSuspendedBeforeEnterBackGround; // @synthesize manualSuspendedBeforeEnterBackGround=_manualSuspendedBeforeEnterBackGround;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) CDStruct_1b6d18a9 totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic, getter=isSeeking) _Bool seeking; // @synthesize seeking=_seeking;
@property(retain, nonatomic) UIButton *fullScreenChangeButton; // @synthesize fullScreenChangeButton=_fullScreenChangeButton;
@property(nonatomic) int picChangeDuration; // @synthesize picChangeDuration=_picChangeDuration;
@property(nonatomic) int picChangeStartTime; // @synthesize picChangeStartTime=_picChangeStartTime;
@property(retain, nonatomic) NSTimer *endUserPhotoTimer; // @synthesize endUserPhotoTimer=_endUserPhotoTimer;
@property(retain, nonatomic) NSTimer *beginUserPhotoTimer; // @synthesize beginUserPhotoTimer=_beginUserPhotoTimer;
@property(retain, nonatomic) WBOperatingLocationView *operatingLocationView; // @synthesize operatingLocationView=_operatingLocationView;
@property(nonatomic) _Bool haveMusicBanner; // @synthesize haveMusicBanner=_haveMusicBanner;
@property(nonatomic) _Bool haveOperatingLocation; // @synthesize haveOperatingLocation=_haveOperatingLocation;
@property(nonatomic) _Bool isAdClosed; // @synthesize isAdClosed=_isAdClosed;
@property(nonatomic) _Bool isDisplayAdCard; // @synthesize isDisplayAdCard=_isDisplayAdCard;
@property(retain, nonatomic) WBLittleVideoSTVSADCardView *adCard; // @synthesize adCard=_adCard;
@property(retain, nonatomic) WBLittleVideoStoryAdvertView *advertView; // @synthesize advertView=_advertView;
@property(nonatomic) _Bool isAdCardEnable; // @synthesize isAdCardEnable=_isAdCardEnable;
@property(nonatomic) _Bool highLightedBtn; // @synthesize highLightedBtn=_highLightedBtn;
@property(retain, nonatomic) UILabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) WBLittleVideoStoryAttributedExpandableTextView *textContentView; // @synthesize textContentView=_textContentView;
@property(retain, nonatomic) WBLittleVideoContextView *littleVideoContentView; // @synthesize littleVideoContentView=_littleVideoContentView;
@property(retain, nonatomic) WBStoryClickNodesContentView *clickNodesContentView; // @synthesize clickNodesContentView=_clickNodesContentView;
@property(retain, nonatomic) WBSTLikeAnimationView *likeAnimation; // @synthesize likeAnimation=_likeAnimation;
@property(retain, nonatomic) NSMutableArray *bottomViews; // @synthesize bottomViews=_bottomViews;
@property(retain, nonatomic) WBLittleVideoStoryNewFullScreenOverlayMusicLabel *musicTitleLabel; // @synthesize musicTitleLabel=_musicTitleLabel;
@property(retain, nonatomic) WBLittleVideoStoryNewFullScreenOverlayNicknameLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) NSMutableArray *rightViews; // @synthesize rightViews=_rightViews;
@property(retain, nonatomic) WBLittleVideoStoryMusicDiversionControl *musicDiversion; // @synthesize musicDiversion=_musicDiversion;
@property(retain, nonatomic) WBLittleVideoStoryWechatControl *wechatButton; // @synthesize wechatButton=_wechatButton;
@property(retain, nonatomic) WBLittleVideoStoryNewFullOverlayButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) WBLittleVideoStoryNewFullOverlayButton *commentListButton; // @synthesize commentListButton=_commentListButton;
@property(retain, nonatomic) WBLittleVideoStoryNewFullOverlayButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) LOTAnimationView *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak WBShortVideoBizView *bizview; // @synthesize bizview=_bizview;
@property(nonatomic) __weak WBVideoPlayerController *videoController; // @synthesize videoController=_videoController;
@property(nonatomic) _Bool privateMessage; // @synthesize privateMessage=_privateMessage;
@property(nonatomic) __weak WBShortVideoSharedContext *shareContext; // @synthesize shareContext=_shareContext;
- (void)setProgressView:(id)arg1;
- (void).cxx_destruct;
- (void)repostDidEnterFullScreen:(id)arg1;
- (void)repostDidDismiss:(id)arg1;
- (void)commentDidSendFinished:(id)arg1;
- (void)setAdCardHidden:(_Bool)arg1;
- (void)doAdCardAnimationWithCardIn:(_Bool)arg1;
- (void)videoOverlayControlsPlugin:(id)arg1 currentTime:(double)arg2 totalTime:(double)arg3;
- (void)tapAdCardCloseButton;
- (void)resetAdButtonUI;
- (void)setVisible:(_Bool)arg1;
- (void)doAdFollowAnimation;
- (void)resetAdFollowState;
- (void)updateAdButtons;
- (_Bool)shouldHighLightBtn;
- (void)highLightBtn;
- (void)setBottomButtonHight;
- (_Bool)canOpenYoukuScheme;
- (_Bool)isVideoAd;
- (void)adButtonPressed;
- (double)maxHeight;
- (void)checkLoginWithTitle:(id)arg1;
- (void)pushWeiboContentViewController;
- (id)contentView;
- (id)progressView;
- (void)clickNodesView:(id)arg1 tipControlDidPressed:(id)arg2;
- (void)stopAnimateAvatarIfNeed;
- (void)startAnimateAvatarIfNeed;
- (_Bool)shouldHideWechatButton;
- (void)resetWechatButton;
- (void)animatedWechatButtonOnce;
- (void)showWechatIcon;
- (void)adjustProgressNormalUI;
- (void)adjustProgressHeightUI;
- (void)stopAnimateMusicControlIfNeed;
- (void)startAnimateMusicControlIfNeed;
- (void)doLikeAnimation:(_Bool)arg1;
- (_Bool)shouldPlayNow;
- (void)setBottomHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setContentHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)doSuccessFollowAnimation;
- (void)updateFollowState;
- (void)timeLabelShow:(_Bool)arg1;
- (void)showGuideViewMusicIfNeedWithDuration:(double)arg1;
- (void)updateDiversionArea:(id)arg1;
- (void)updateCommentListButton;
- (void)updateLikeButton;
- (void)updateAvatar;
- (void)startShareTimer;
- (void)becomePrimaryCell;
- (void)resignTimer;
- (void)configureWithstatus:(id)arg1;
- (void)getContactListData;
- (void)guideAnimationForType:(id)arg1;
- (void)configureUI;
- (void)retweetComposeViewWillDismiss:(id)arg1;
- (void)retweetComposeViewDidSendMessage:(id)arg1;
- (void)startWechatButtonAnimation;
- (void)hideClickNodeTips;
- (void)configureWithClickNodes:(id)arg1 mediaContentRect:(struct CGRect)arg2;
- (void)adCardAction;
- (void)tapMoreButton;
- (void)tapAdCardButton;
- (void)updateTextContentView:(id)arg1 maxWidth:(double)arg2 maxLine:(long long)arg3;
- (void)operatingLocationViewAnction;
- (void)diversionContolPressed;
- (id)adOpenScheme;
- (void)userNameDidPressed;
- (void)showUserProfile;
- (void)userViewDidPressed;
- (void)followButtonPressed;
- (void)shareButtonPressed;
- (void)storyBulletinCommentViewControllerDidDismiss:(id)arg1;
- (void)commentsButtonPressed;
- (void)wechatButtonPressed;
- (id)firstContact;
- (void)likeStateChanged:(_Bool)arg1;
- (void)likeButtonPressed;
- (void)manualStartAnimate;
- (void)manualStopAnimate;
- (void)moreVideoButtonPressed;
- (void)videoOverlayControlsPlugin:(id)arg1 didUpdateActiveState:(_Bool)arg2;
- (void)fullScreenChangeAction:(id)arg1;
- (void)updateTimeLabels:(id)arg1 remainTime:(id)arg2;
- (void)updateTimeLabels;
- (void)updateTimesWhenSeeking:(id)arg1;
- (_Bool)isVisiableOnScreen;
- (void)updateTimes;
- (void)videoControlsProgressViewProgressChangedConfirm:(id)arg1 slider:(id)arg2;
- (void)videoControlsProgressViewProgressChanged:(id)arg1 slider:(id)arg2;
- (void)videoControlsProgressViewSliderPressed:(id)arg1 slider:(id)arg2;
- (void)videoPlayerControllerDidPlayToEnd:(id)arg1;
- (void)videoPlayerControllerUserSeekDone:(id)arg1;
- (void)videoPlayerControllerUserWillStartSeek:(id)arg1;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)showBottomWithCurrentTime:(double)arg1;
- (void)videoPlayerController:(id)arg1 didUpdateCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayerController:(id)arg1 userDidPerformEvent:(unsigned long long)arg2 sender:(id)arg3 info:(id)arg4;
- (void)layoutRight:(double)arg1;
- (void)layoutBottom:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

