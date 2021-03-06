//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLVideoBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WBBaseSegmentViewWrapperDelegate-Protocol.h"
#import "WBFloatWindowProtcol-Protocol.h"
#import "WBMLAdvertMangerDelegate-Protocol.h"
#import "WBMLCommonCommentSegmentViewControllerDelegate-Protocol.h"
#import "WBMLCommonLiveAirPlayDelegate-Protocol.h"
#import "WBMLCommonLiveBottomOperationViewDelegate-Protocol.h"
#import "WBMLCommonLiveDLNAControlDelegate-Protocol.h"
#import "WBMLCommonLiveDLNADeviceListViewDelegate-Protocol.h"
#import "WBMLCommonLiveDisplayerViewControllerDelegate-Protocol.h"
#import "WBMLCommonLiveInputViewDelegate-Protocol.h"
#import "WBMLCommonLiveLandscapeDLNADeviceDelegate-Protocol.h"
#import "WBMLCommonLiveQuickCommentDelegate-Protocol.h"
#import "WBMLCommonLiveScreenRecordViewControllerDelegate-Protocol.h"
#import "WBMLCommonLiveShareOptionsViewDelegate-Protocol.h"
#import "WBMLCommonRecommendSegmentViewControllerDelegate-Protocol.h"
#import "WBMLVideoFollowTipViewDelegate-Protocol.h"
#import "WBMLVideoInteractionDelegate-Protocol.h"
#import "WBMLVideoPayLiveDelegate-Protocol.h"
#import "WBMLVideoPlayerDelegate-Protocol.h"
#import "WBMLVideoReplayProgressViewDelegate-Protocol.h"
#import "WBMLVideoUserProfileCardViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString, UIView, WBGuideView, WBMLAdvertViewController, WBMLCommonCommentSegmentViewController, WBMLCommonLikeAnimationView, WBMLCommonLiveAirPlayTool, WBMLCommonLiveBottomOperationView, WBMLCommonLiveCornerIconView, WBMLCommonLiveCornerWindowModel, WBMLCommonLiveDisplayerViewController, WBMLCommonLiveInfo, WBMLCommonLiveInputView, WBMLCommonLiveLoadingView, WBMLCommonLivePreviewDialogView, WBMLCommonLiveQuickCommentView, WBMLCommonLiveScreenRecordViewController, WBMLCommonRealTimeWeiboSegmentViewController, WBMLCommonRecommendSegmentViewController, WBMLCommonSegmentViewWrapper, WBMLDelayTask, WBMLQADebugLogView, WBMLVideoLivingCardView, WBMLVideoPayLiveBottomBar, WBMLVideoReplayControl, WBMLVideoUserInfoModel, WBViewController;

@interface WBMLCommonLiveViewController : WBMLVideoBaseViewController <WBMLCommonLiveShareOptionsViewDelegate, WBMLCommonLiveBottomOperationViewDelegate, WBMLCommonCommentSegmentViewControllerDelegate, WBMLCommonLiveInputViewDelegate, WBFloatWindowProtcol, WBMLVideoInteractionDelegate, WBMLVideoFollowTipViewDelegate, WBMLVideoPayLiveDelegate, WBMLCommonLiveDisplayerViewControllerDelegate, WBMLVideoReplayProgressViewDelegate, WBMLVideoPlayerDelegate, WBMLCommonLiveDLNADeviceListViewDelegate, WBMLCommonLiveDLNAControlDelegate, WBMLCommonLiveLandscapeDLNADeviceDelegate, WBMLCommonLiveAirPlayDelegate, WBMLCommonRecommendSegmentViewControllerDelegate, UIGestureRecognizerDelegate, WBBaseSegmentViewWrapperDelegate, WBMLCommonLiveScreenRecordViewControllerDelegate, WBMLCommonLiveQuickCommentDelegate, WBMLAdvertMangerDelegate, WBMLVideoUserProfileCardViewControllerDelegate>
{
    _Bool _cornerChecked;
    _Bool _homeIndicatorAutoHidden;
    _Bool _lockedPortraitOrientation;
    _Bool _lockedLandscapeOrientation;
    _Bool _floating;
    _Bool _viewAppeared;
    _Bool _isFollowing;
    _Bool _hasShowWifiTip;
    _Bool _hasShared;
    _Bool _isAttitudeABTestOn;
    _Bool _isProjecting;
    _Bool _auto_follow;
    NSDictionary *_paras;
    WBMLCommonLiveInfo *_entryLiveInfo;
    WBMLCommonLiveInfo *_liveInfo;
    WBMLVideoUserInfoModel *_currentUser;
    WBMLCommonLiveCornerWindowModel *_extraInfo;
    UIView *_contentView;
    WBViewController *_wrapperViewController;
    WBMLCommonSegmentViewWrapper *_segmentViewWrapper;
    WBMLCommonLiveDisplayerViewController *_displayerViewController;
    WBMLCommonLiveBottomOperationView *_portraitBottomOperationView;
    WBMLCommonLiveQuickCommentView *_quickCommentView;
    WBMLQADebugLogView *_debugLogView;
    UIView *_likeBgView;
    WBMLCommonLiveInputView *_inputView;
    WBMLVideoLivingCardView *_livingCardView;
    WBMLCommonLiveLoadingView *_loadingView;
    WBMLCommonLikeAnimationView *_attitudeAnimationView;
    WBMLCommonLiveCornerIconView *_rightOneCornerIconView;
    WBMLCommonLiveCornerIconView *_rightTwoCornerIconView;
    WBMLAdvertViewController *_weakAdvertViewController;
    WBMLCommonLivePreviewDialogView *_weakPreviewDialog;
    WBMLVideoPayLiveBottomBar *_payLiveBottomBar;
    WBMLVideoReplayControl *_replayCommentFetcher;
    WBMLDelayTask *_shareMessageDelayTask;
    WBMLDelayTask *_checkLivingRoomDelayTask;
    WBMLDelayTask *_anchorFollowTipDelayTask;
    WBMLDelayTask *_commentTipDelayTask;
    WBGuideView *_guideView;
    long long _shareMsgCount;
    WBMLCommonLiveScreenRecordViewController *_screenRecordViewController;
    WBMLCommonLiveAirPlayTool *_airPlayTool;
    double _currentProgress;
    NSString *_replay_url;
    NSString *_wbmlAdId;
}

+ (void)load;
@property(copy, nonatomic) NSString *wbmlAdId; // @synthesize wbmlAdId=_wbmlAdId;
@property(nonatomic) _Bool auto_follow; // @synthesize auto_follow=_auto_follow;
@property(copy, nonatomic) NSString *replay_url; // @synthesize replay_url=_replay_url;
@property(nonatomic) _Bool isProjecting; // @synthesize isProjecting=_isProjecting;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) WBMLCommonLiveAirPlayTool *airPlayTool; // @synthesize airPlayTool=_airPlayTool;
@property(nonatomic) _Bool isAttitudeABTestOn; // @synthesize isAttitudeABTestOn=_isAttitudeABTestOn;
@property(retain, nonatomic) WBMLCommonLiveScreenRecordViewController *screenRecordViewController; // @synthesize screenRecordViewController=_screenRecordViewController;
@property(nonatomic) long long shareMsgCount; // @synthesize shareMsgCount=_shareMsgCount;
@property(nonatomic) _Bool hasShared; // @synthesize hasShared=_hasShared;
@property(nonatomic) _Bool hasShowWifiTip; // @synthesize hasShowWifiTip=_hasShowWifiTip;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(retain, nonatomic) WBGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) WBMLDelayTask *commentTipDelayTask; // @synthesize commentTipDelayTask=_commentTipDelayTask;
@property(retain, nonatomic) WBMLDelayTask *anchorFollowTipDelayTask; // @synthesize anchorFollowTipDelayTask=_anchorFollowTipDelayTask;
@property(retain, nonatomic) WBMLDelayTask *checkLivingRoomDelayTask; // @synthesize checkLivingRoomDelayTask=_checkLivingRoomDelayTask;
@property(retain, nonatomic) WBMLDelayTask *shareMessageDelayTask; // @synthesize shareMessageDelayTask=_shareMessageDelayTask;
@property(retain, nonatomic) WBMLVideoReplayControl *replayCommentFetcher; // @synthesize replayCommentFetcher=_replayCommentFetcher;
@property(nonatomic) _Bool viewAppeared; // @synthesize viewAppeared=_viewAppeared;
@property(nonatomic) _Bool floating; // @synthesize floating=_floating;
@property(nonatomic) _Bool lockedLandscapeOrientation; // @synthesize lockedLandscapeOrientation=_lockedLandscapeOrientation;
@property(nonatomic) _Bool lockedPortraitOrientation; // @synthesize lockedPortraitOrientation=_lockedPortraitOrientation;
@property(nonatomic) _Bool homeIndicatorAutoHidden; // @synthesize homeIndicatorAutoHidden=_homeIndicatorAutoHidden;
@property(retain, nonatomic) WBMLVideoPayLiveBottomBar *payLiveBottomBar; // @synthesize payLiveBottomBar=_payLiveBottomBar;
@property(retain, nonatomic) WBMLCommonLivePreviewDialogView *weakPreviewDialog; // @synthesize weakPreviewDialog=_weakPreviewDialog;
@property(nonatomic) __weak WBMLAdvertViewController *weakAdvertViewController; // @synthesize weakAdvertViewController=_weakAdvertViewController;
@property(nonatomic) _Bool cornerChecked; // @synthesize cornerChecked=_cornerChecked;
@property(retain, nonatomic) WBMLCommonLiveCornerIconView *rightTwoCornerIconView; // @synthesize rightTwoCornerIconView=_rightTwoCornerIconView;
@property(retain, nonatomic) WBMLCommonLiveCornerIconView *rightOneCornerIconView; // @synthesize rightOneCornerIconView=_rightOneCornerIconView;
@property(retain, nonatomic) WBMLCommonLikeAnimationView *attitudeAnimationView; // @synthesize attitudeAnimationView=_attitudeAnimationView;
@property(retain, nonatomic) WBMLCommonLiveLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WBMLVideoLivingCardView *livingCardView; // @synthesize livingCardView=_livingCardView;
@property(retain, nonatomic) WBMLCommonLiveInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *likeBgView; // @synthesize likeBgView=_likeBgView;
@property(retain, nonatomic) WBMLQADebugLogView *debugLogView; // @synthesize debugLogView=_debugLogView;
@property(retain, nonatomic) WBMLCommonLiveQuickCommentView *quickCommentView; // @synthesize quickCommentView=_quickCommentView;
@property(retain, nonatomic) WBMLCommonLiveBottomOperationView *portraitBottomOperationView; // @synthesize portraitBottomOperationView=_portraitBottomOperationView;
@property(retain, nonatomic) WBMLCommonLiveDisplayerViewController *displayerViewController; // @synthesize displayerViewController=_displayerViewController;
@property(retain, nonatomic) WBMLCommonSegmentViewWrapper *segmentViewWrapper; // @synthesize segmentViewWrapper=_segmentViewWrapper;
@property(retain, nonatomic) WBViewController *wrapperViewController; // @synthesize wrapperViewController=_wrapperViewController;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) WBMLCommonLiveCornerWindowModel *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) WBMLVideoUserInfoModel *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) WBMLCommonLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) WBMLCommonLiveInfo *entryLiveInfo; // @synthesize entryLiveInfo=_entryLiveInfo;
@property(retain, nonatomic) NSDictionary *paras; // @synthesize paras=_paras;
- (void).cxx_destruct;
- (id)wbmlAdvertId;
- (void)wbmlAdvertEvent:(unsigned long long)arg1 with:(id)arg2;
- (void)startWBMLAdvertMangerWithScheme:(id)arg1 andInfo:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)jsActionNotificationWithSender:(id)arg1;
- (void)handleFloatPanGesture:(id)arg1;
- (_Bool)panToNavigation;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)prefersStatusBarHidden;
- (void)resetAttitudeLikeType;
- (void)screenRecordViewController:(id)arg1 record:(_Bool)arg2;
- (void)commonRecommendViewController:(id)arg1 liveIDWillChange:(id)arg2;
- (void)userProfileCardView:(id)arg1 goldFansWeb:(id)arg2;
- (void)userProfileCardView:(id)arg1 event:(long long)arg2;
- (void)wrapperDidChangeSwipeViewCurrentItem:(id)arg1;
- (void)wrapperDidSelectChannelsBar:(id)arg1 toIndex:(long long)arg2;
- (void)commonLiveQuickCommentWithContent:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)enableFloatGesture;
@property(readonly, nonatomic) WBMLCommonRecommendSegmentViewController *recommendViewController;
@property(readonly, nonatomic) WBMLCommonRealTimeWeiboSegmentViewController *realTimeWeiboViewController;
@property(readonly, nonatomic) WBMLCommonCommentSegmentViewController *commentViewController;
- (void)configAnalysisCenter;
- (id)findViewControllerFromSegmentViewControllersWithClass:(Class)arg1;
- (void)hideChildViewControllerView:(id)arg1;
- (void)showChildViewControllerView:(id)arg1;
- (void)configSegmentView;
- (void)cleanDetailUI;
- (void)buildDetailUI;
- (void)buildBaseUI;
- (void)loadLiveExtInfoWithLiveID:(id)arg1;
- (void)requestFansTypeWithLiveId:(id)arg1;
- (void)updateLiveViewControllerWithLiveID:(id)arg1;
- (void)checkLiveInfoAndViewIfAppeared;
- (void)clearRecordCaches;
- (void)closeLiveRoom;
- (void)selectTabChildViewController:(id)arg1;
- (void)unregisterNetworkChangeNotification;
- (void)showNetWorkAlterViewIfNeeded;
- (void)reachabilityChanged:(id)arg1;
- (void)registerNetworkChangeNotification;
- (void)addSystemNotiAndCommentAuth;
- (void)updateLiveViewControllerIfSameRoomWithInfo:(id)arg1;
- (void)updateLiveViewControllerWithLiveInfo:(id)arg1;
- (void)layoutSubviewsForLandscapeOrientation;
- (void)layoutSubviewsForPortraitOrientation;
- (void)layoutSubviewsForCurrentOrientation;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (void)cleanViewController;
- (void)dealloc;
- (void)showAdvertLogWithModel:(id)arg1;
- (id)advertDelayTask;
- (void)setAdvertDelayTask:(id)arg1;
- (_Bool)extInfoAdvertFileExist;
- (void)writeToFileWithLiveID:(id)arg1 userID:(id)arg2;
- (void)removeTheTimer;
- (void)timerAction;
- (void)startTimerWithInterval:(double)arg1;
- (void)getURLStringWithURLString:(id)arg1 HttpURLString:(id *)arg2 sinaweiboURLString:(id *)arg3;
- (void)advertWithURLString:(id)arg1;
- (void)hideAdvertViewController;
- (void)showAdvertViewWithImageURLString:(id)arg1 gotoWebURLString:(id)arg2 touchBackgroundViewClose:(_Bool)arg3;
- (void)showAdvertViewWithURLString:(id)arg1 touchBackgroundViewClose:(_Bool)arg2;
- (void)handleAdvertRequestLiveInfo:(id)arg1;
- (void)handleAdvertOrientationWillChangeEvent:(id)arg1;
- (void)shareOptionsView:(id)arg1 didChooseButton:(id)arg2 withTag:(long long)arg3;
- (id)getCoverImage:(id)arg1;
- (void)showShareWeiboToThirdPartyActionSheet;
- (void)shareWeiboByRepost;
- (void)shareToWeiboDirect;
- (void)shareWeiboToInteraction;
- (void)doTapLikeActionWithType:(unsigned long long)arg1 onButton:(_Bool)arg2;
- (void)doTapLikeAction;
- (void)doTapShareAtPoint:(struct CGPoint)arg1;
- (void)doTapCommentAction:(_Bool)arg1;
- (void)doTapGiftAction;
- (void)doTapFloatAction;
- (void)bottomOperationView:(id)arg1 didSelectAttitude:(unsigned long long)arg2;
- (void)bottomOperationView:(id)arg1 buttonDidTap:(id)arg2 buttonTag:(unsigned long long)arg3;
- (void)doTapCancelGoWatchNewLivingRoomAction;
- (void)doTapGoWatchNewLivingRoomAction;
- (void)checkLivingRoomIfExisted;
- (void)quickCommentWithStr:(id)arg1;
- (void)commonLiveInputViewSendEmptyComment:(id)arg1;
- (void)commonLiveInputViewCommentOutOfRange:(id)arg1 limitWordCount:(long long)arg2;
- (void)commonLiveInputView:(id)arg1 sendComment:(id)arg2 needShare:(_Bool)arg3;
- (void)commonCommentViewController:(id)arg1 commentView:(id)arg2 cell:(id)arg3 msg:(id)arg4 event:(unsigned long long)arg5;
- (void)appendCommentTipMessage;
- (void)sendShareMessage;
- (void)receiveStickyCommentMessage:(id)arg1;
- (void)endReplayCommentFetcher;
- (void)startReplayCommentFetcherWithLiveInfo:(id)arg1;
- (void)showPortraitLikeEffect:(long long)arg1 withSelf:(_Bool)arg2 withBoomAndImpact:(_Bool)arg3;
- (void)appendComment:(id)arg1;
- (void)handleCornerIconOrientationDidChangeEvent;
- (void)showCornerIconView:(_Bool)arg1;
- (void)judgeSegmentViewController;
- (void)handleCornerIcon:(id)arg1;
- (void)doTapDebugGestureAction;
- (void)enableDebugGesture;
- (id)jumpSuspendTool;
- (void)setJumpSuspendTool:(id)arg1;
- (void)suspendFloatWindowWithOpenWebURLString:(id)arg1;
- (void)closeFloatView:(id)arg1;
- (_Bool)equalFromViewController:(id)arg1 info:(id)arg2 floatWindow:(id)arg3;
- (void)recoverViewController:(id)arg1 baseViewController:(id)arg2 floatWindow:(id)arg3;
- (_Bool)willShowRecoverAnimal:(id)arg1 baseViewController:(id)arg2 floatWindow:(id)arg3;
- (void)changeToFloatState;
- (void)floatThisViewController;
- (id)followDictionary;
- (_Bool)hasShowedTip;
- (void)setHasShowedTip:(_Bool)arg1;
- (long long)remainTime;
- (void)setRemainTime:(long long)arg1;
- (long long)freeTime;
- (void)setFreeTime:(long long)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void)handleFollowTipWithFloating:(_Bool)arg1;
- (void)removeFollowFreeTimer;
- (long long)getRemainFreeTime;
- (void)removeCountTimer;
- (void)showFollowTipWithProgress:(double)arg1;
- (void)requestPlayerProgress;
- (void)showFollowTipWithTime:(long long)arg1;
- (void)handleGuideViewOrientationDidChangeEvent;
- (void)handleGuideView;
- (void)updateCurrentUser:(id)arg1;
- (void)onRecordShareMessage:(id)arg1 msg:(id)arg2;
- (void)onAdvertMessage:(id)arg1 msg:(id)arg2;
- (void)onCompetitionCaseMessage:(id)arg1 msg:(id)arg2;
- (void)onRealTimeCommentMessage:(id)arg1 msg:(id)arg2;
- (void)onUserPolicyChanged:(id)arg1 msg:(id)arg2;
- (void)onLivingLiveStreamStatusChangeWithMessage:(id)arg1 msg:(id)arg2;
- (void)onHandleLog:(id)arg1;
- (void)onReJoinRoom:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)onConnectionConnect:(id)arg1;
- (void)onLongLinkRetryFailed:(id)arg1;
- (void)onDisconnected:(id)arg1 error:(id)arg2;
- (void)onRewardFinish:(id)arg1 error:(id)arg2;
- (void)onStickMessage:(id)arg1 msg:(id)arg2;
- (void)onPopMessage:(id)arg1 msg:(id)arg2;
- (void)onAnchorCoinsChangeMessage:(id)arg1 msg:(id)arg2;
- (void)onUserListMessage:(id)arg1 msg:(id)arg2;
- (void)onActivityMarkMessage:(id)arg1 msg:(id)arg2;
- (void)onReviewMessage:(id)arg1 msg:(id)arg2;
- (void)onDepositIssueMessage:(id)arg1 msg:(id)arg2;
- (void)onShowCaseMessage:(id)arg1 msg:(id)arg2;
- (void)onAdminChangedMessage:(id)arg1 msg:(id)arg2;
- (void)onJoinOrExitRoomMessage:(id)arg1 msg:(id)arg2;
- (void)onLiveStatusChangedMessage:(id)arg1 msg:(id)arg2;
- (void)onFollowAnchorMessage:(id)arg1 msg:(id)arg2;
- (void)onShareLiveRoomMessage:(id)arg1 msg:(id)arg2;
- (void)onNotificationMessage:(id)arg1 msg:(id)arg2;
- (void)onGiftMessage:(id)arg1 msg:(id)arg2;
- (void)onShutupMessage:(id)arg1 msg:(id)arg2;
- (void)onLightAnchorMessage:(id)arg1 msg:(id)arg2;
- (void)onPraiseMessage:(id)arg1 msg:(id)arg2;
- (void)onCommentMessage:(id)arg1 msg:(id)arg2;
- (void)sendFollowUserMessage:(id)arg1;
- (void)exitRoomWithCompletion:(CDUnknownBlockType)arg1;
- (void)joinRoomWithLiveInfo:(id)arg1;
- (void)endInteractionWithLiveInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startInteractionWithLiveInfo:(id)arg1;
- (void)registerInteractionSDK;
- (void)tapFollowAnchorBtn:(id)arg1;
- (void)showAnchorFollowTipView;
- (void)tryShowAnchorFollowTipView;
- (void)showShareOptionsViewAtPoint:(struct CGPoint)arg1;
- (void)showLiveDeleteToast;
- (void)showLiveFinishAlert;
- (void)showStickyActionSheetWithMessage:(id)arg1;
- (void)showLivingCardViewWithLiveInfo:(id)arg1 liveingLiveInfoModel:(id)arg2;
- (void)showUserProfileCardViewWithUser:(id)arg1;
- (_Bool)checkLiveStatusAndToastWithLiveInfo:(id)arg1;
- (void)showNetworkErrorAlert;
- (void)requestLiveCornerWindowWithLiveID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestUserWithUID:(id)arg1 liveID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestLivingWithOwnerID:(id)arg1 liveID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)repostComment:(id)arg1 liveID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestRepostWeiboInfoWithLiveID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareWeiboWithLiveID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestLiveInfoWithLiveID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postPayLiveViewDurationTime:(long long)arg1;
- (void)payLiveBottomBar:(id)arg1 actionWithEvent:(unsigned long long)arg2;
- (void)payLiveBottomBarHidden:(_Bool)arg1;
- (void)livePayStatusExamineWithLiveInfo:(id)arg1;
- (void)requestLiveInfoForCommonLivePayLive;
- (void)progressView:(id)arg1 didEndDragProgress:(double)arg2;
- (void)progressView:(id)arg1 willBeginDragProgress:(double)arg2;
- (void)progressView:(id)arg1 playStateDidChange:(_Bool)arg2;
- (void)player:(id)arg1 currentProgress:(double)arg2 duration:(double)arg3;
- (void)tryShowFollowTipToWatchFull;
- (void)followAction;
- (void)displayerViewController:(id)arg1 didSelectAttitude:(long long)arg2;
- (void)displayerViewController:(id)arg1 didRespondToEvent:(unsigned long long)arg2;
- (id)dictionary;
- (id)previewModel;
- (void)setPreviewModel:(id)arg1;
- (_Bool)previewLockEnable;
- (void)setPreviewLockEnable:(_Bool)arg1;
- (long long)remainCount;
- (void)setRemainCount:(long long)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void)_closeActionExitWithSender:(id)arg1;
- (void)_closeActionRemoveWithSender:(id)arg1;
- (void)_gotoActionWithSender:(id)arg1;
- (void)_removePreviewDialog;
- (void)_setupPreviewDialogDataWithModel:(id)arg1;
- (void)_addPreviewDialog;
- (void)previewLock;
- (long long)getRemainViewDuration;
- (void)setRemianViewDuration;
- (void)_chekoutWithDuration:(double)arg1;
- (void)_timerRepeatAction:(id)arg1;
- (void)_removeTimer;
- (void)_startTimer;
- (void)previewLockWithRequestInfo:(id)arg1;
- (void)previewLockWithDuration:(double)arg1;
- (void)removePreviewLockTimer;
- (void)handleShowStatusBarError;
- (void)unlockOrientation;
- (void)unlockLandscapeOrientation;
- (void)lockLandscapeOrientation;
- (void)unlockPortraitOrientation;
- (void)lockPortraitOrientation;
- (void)statusBarOrientationWillChange:(id)arg1;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)unregisterRotationNotification;
- (void)registerRotationNotification;
- (_Bool)hasShowedSuccessTip;
- (void)setHasShowedSuccessTip:(_Bool)arg1;
- (double)airPlayCurrentProgress;
- (void)setAirPlayCurrentProgress:(double)arg1;
- (id)dlnaPositionInfo;
- (void)setDlnaPositionInfo:(id)arg1;
- (id)dlnaTransportInfo;
- (void)setDlnaTransportInfo:(id)arg1;
- (id)selectedStreamInfo;
- (void)setSelectedStreamInfo:(id)arg1;
- (id)selectedDevice;
- (void)setSelectedDevice:(id)arg1;
- (long long)projectionType;
- (void)setProjectionType:(long long)arg1;
- (id)projectionTimer;
- (void)setProjectionTimer:(id)arg1;
- (id)dlnaManager;
- (void)setDlnaManager:(id)arg1;
- (id)currentUrl;
- (void)setCurrentUrl:(id)arg1;
- (id)deviceListView;
- (void)setDeviceListView:(id)arg1;
- (void)landscapeDLNADeviceListViewClickHelp;
- (void)landscapeDLNADeviceListViewClickAirPlay;
- (void)landscapeDLNAResolutionListView:(id)arg1 selectedStream:(id)arg2;
- (void)landscapeDLNADeviceListView:(id)arg1 clickDevice:(id)arg2;
- (void)DLNAControlView:(id)arg1 isPlaying:(_Bool)arg2;
- (void)DLNAControlView:(id)arg1 progressView:(id)arg2 didEndDragProgress:(double)arg3;
- (void)DLNAControlView:(id)arg1 progressView:(id)arg2 didDragProgress:(double)arg3;
- (void)DLNAControlView:(id)arg1 progressView:(id)arg2 willBeginDragProgress:(double)arg3;
- (void)DLNAControlView:(id)arg1 progressView:(id)arg2 playStateDidChange:(_Bool)arg3;
- (void)DLNADeviceListViewClickHelp;
- (void)DLNADeviceListViewClickCancel;
- (void)DLNAResolutionListViewClickStream:(id)arg1;
- (void)DLNADeviceListViewClickAirPlay;
- (void)DLNADeviceListViewSelectDevice:(id)arg1;
- (void)exitProjectionNetwork;
- (void)undefinedErrorPostXML:(id)arg1;
- (void)dlnaGetPositionInfoResponse:(id)arg1;
- (void)dlnaGetTransportInfoResponse:(id)arg1;
- (void)dlnaPauseAction;
- (void)dlnaPlayAction;
- (void)dlnaStartPlay;
- (void)searchDLNAResult:(id)arg1;
- (void)airPlayIsReadyToPlay;
- (void)handleTimerEvent;
- (void)handleTimeWithType:(long long)arg1;
- (void)startAirPlayDirectly;
- (void)cleanCacheData;
- (void)exitDLNA;
- (void)dlnaCloseRoom;
- (void)showScreenProjectionResolutionView;
- (void)setupDlnaManager;
- (void)showLandscapeDeviceListView;
- (void)hideDeviceListView;
- (void)showDeviceListView;
- (void)audioSessionRouteChangeNoti:(id)arg1;
- (void)hideRecordView;
- (void)showRecordView;
- (void)unregisterProjectionNotification;
- (void)registerProjectionNotification;
- (void)clickChangeDevice;
- (void)clickControlBack;
- (void)clickScreenProjection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

