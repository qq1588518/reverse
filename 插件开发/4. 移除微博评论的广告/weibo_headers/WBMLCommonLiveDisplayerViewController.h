//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLVideoBaseViewController.h"

#import "WBMLCommonLiveDLNAControlDelegate-Protocol.h"
#import "WBMLCommonLiveDisplayerFollowTipDelegate-Protocol.h"
#import "WBMLCommonLiveDisplayerInterfaceDelegate-Protocol.h"
#import "WBMLCommonLiveJumpHuyaDelegate-Protocol.h"
#import "WBMLCommonLiveLandscapeDLNADeviceDelegate-Protocol.h"
#import "WBMLCommonLivePlayCycleViewDelegate-Protocol.h"
#import "WBMLCommonLivePlayStatusDelegate-Protocol.h"
#import "WBMLCommonLiveReservationDelegate-Protocol.h"
#import "WBMLCommonLiveResolutionSettingViewDelegate-Protocol.h"
#import "WBMLImageTextFloatAdDelegate-Protocol.h"
#import "WBMLVideoPlayerDelegate-Protocol.h"
#import "WBMLVideoReplayProgressViewDelegate-Protocol.h"

@class CAGradientLayer, NSMutableDictionary, NSString, UIButton, UILabel, UIView, WBMLCommonLikeAnimationView, WBMLCommonLiveDLNAControlView, WBMLCommonLiveDisplayerInterfaceView, WBMLCommonLiveFloatVideoCycleView, WBMLCommonLiveFollowTipView, WBMLCommonLiveInfo, WBMLCommonLiveJoinUserAnimationView, WBMLCommonLiveJumpHuyaTipView, WBMLCommonLiveLandscapeDLNADeviceListView, WBMLCommonLivePlayCycleView, WBMLCommonLivePlayStatusView, WBMLCommonLiveReservationView, WBMLCommonLiveResolutionSettingView, WBMLCommonLiveTryInfoModel, WBMLDelayTask, WBMLImageTextFloatAdView, WBMLImageTextLiveBillboardModel, WBMLImageTextLiveBillboardView, WBMLVideoBarrageCanvasView, WBMLVideoLiveBrightnessVolume, WBMLVideoLiveDragProgressIndicatorView;
@protocol WBMLCommonLiveDLNAControlDelegate, WBMLCommonLiveDisplayerViewControllerDelegate, WBMLCommonLiveLandscapeDLNADeviceDelegate, WBMLVideoPlayerDelegate, WBMLVideoReplayProgressViewDelegate;

@interface WBMLCommonLiveDisplayerViewController : WBMLVideoBaseViewController <WBMLCommonLiveDisplayerInterfaceDelegate, WBMLCommonLiveDisplayerFollowTipDelegate, WBMLVideoReplayProgressViewDelegate, WBMLCommonLiveResolutionSettingViewDelegate, WBMLCommonLivePlayCycleViewDelegate, WBMLImageTextFloatAdDelegate, WBMLCommonLiveJumpHuyaDelegate, WBMLCommonLiveDLNAControlDelegate, WBMLCommonLiveLandscapeDLNADeviceDelegate, WBMLCommonLivePlayStatusDelegate, WBMLVideoPlayerDelegate, WBMLCommonLiveReservationDelegate>
{
    _Bool _disenableResum;
    _Bool _isFloating;
    _Bool _isProjecting;
    _Bool _payLiveInfoUpdate;
    _Bool _isShowingFollowTip;
    id <WBMLCommonLiveDisplayerViewControllerDelegate> _delegate;
    id <WBMLVideoReplayProgressViewDelegate> _replayProgressViewDelegate;
    id <WBMLCommonLiveDLNAControlDelegate> _dlnaControlViewDelegate;
    id <WBMLCommonLiveLandscapeDLNADeviceDelegate> _landscapeDLNADeivceDelegate;
    id <WBMLVideoPlayerDelegate> _playerDelegate;
    long long _playDuration;
    WBMLCommonLivePlayStatusView *_playStatusView;
    WBMLCommonLiveDisplayerInterfaceView *_interfaceView;
    WBMLCommonLiveResolutionSettingView *_resolutionSettingView;
    WBMLVideoLiveDragProgressIndicatorView *_indicatorView;
    WBMLVideoLiveBrightnessVolume *_brightnessVolume;
    UIView *_gestureView;
    WBMLCommonLivePlayCycleView *_playCycleView;
    WBMLCommonLiveJoinUserAnimationView *_joinView;
    WBMLCommonLiveInfo *_liveInfo;
    NSMutableDictionary *_videoURLCache;
    WBMLImageTextLiveBillboardView *_billboardView;
    WBMLImageTextLiveBillboardModel *_billboardModel;
    WBMLCommonLiveFloatVideoCycleView *_floatView;
    WBMLImageTextFloatAdView *_floatAdView;
    WBMLCommonLiveReservationView *_reservationView;
    WBMLCommonLiveFollowTipView *_followTipView;
    UILabel *_followTipLabel;
    WBMLCommonLiveJumpHuyaTipView *_jumpHuyaTipView;
    WBMLCommonLiveTryInfoModel *_win_info;
    NSString *_replayUrl;
    WBMLCommonLiveDLNAControlView *_dlnaControlView;
    WBMLCommonLiveLandscapeDLNADeviceListView *_landscapeDlnaDeviceView;
    CDUnknownBlockType _interfaceViewWillShow;
    CDUnknownBlockType _interfaceViewWillHidden;
    CAGradientLayer *_maskLayer;
    UILabel *_centerBtnLabel;
    UILabel *_tips;
    UIButton *_floatCenterBtn;
    WBMLVideoBarrageCanvasView *_barrageView;
    UILabel *_floatInfoStatusLabel;
    UIView *_praiseView;
    WBMLCommonLikeAnimationView *_attitudeAnimationView;
    unsigned long long _viewType;
    WBMLDelayTask *_delayTask;
}

@property(nonatomic) _Bool isShowingFollowTip; // @synthesize isShowingFollowTip=_isShowingFollowTip;
@property(retain, nonatomic) WBMLDelayTask *delayTask; // @synthesize delayTask=_delayTask;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) WBMLCommonLikeAnimationView *attitudeAnimationView; // @synthesize attitudeAnimationView=_attitudeAnimationView;
@property(retain, nonatomic) UIView *praiseView; // @synthesize praiseView=_praiseView;
@property(retain, nonatomic) UILabel *floatInfoStatusLabel; // @synthesize floatInfoStatusLabel=_floatInfoStatusLabel;
@property(retain, nonatomic) WBMLVideoBarrageCanvasView *barrageView; // @synthesize barrageView=_barrageView;
@property(nonatomic) _Bool payLiveInfoUpdate; // @synthesize payLiveInfoUpdate=_payLiveInfoUpdate;
@property(retain, nonatomic) UIButton *floatCenterBtn; // @synthesize floatCenterBtn=_floatCenterBtn;
@property(retain, nonatomic) UILabel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) UILabel *centerBtnLabel; // @synthesize centerBtnLabel=_centerBtnLabel;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(copy, nonatomic) CDUnknownBlockType interfaceViewWillHidden; // @synthesize interfaceViewWillHidden=_interfaceViewWillHidden;
@property(copy, nonatomic) CDUnknownBlockType interfaceViewWillShow; // @synthesize interfaceViewWillShow=_interfaceViewWillShow;
@property(nonatomic) _Bool isProjecting; // @synthesize isProjecting=_isProjecting;
@property(retain, nonatomic) WBMLCommonLiveLandscapeDLNADeviceListView *landscapeDlnaDeviceView; // @synthesize landscapeDlnaDeviceView=_landscapeDlnaDeviceView;
@property(retain, nonatomic) WBMLCommonLiveDLNAControlView *dlnaControlView; // @synthesize dlnaControlView=_dlnaControlView;
@property(copy, nonatomic) NSString *replayUrl; // @synthesize replayUrl=_replayUrl;
@property(retain, nonatomic) WBMLCommonLiveTryInfoModel *win_info; // @synthesize win_info=_win_info;
@property(nonatomic) _Bool isFloating; // @synthesize isFloating=_isFloating;
@property(nonatomic) _Bool disenableResum; // @synthesize disenableResum=_disenableResum;
@property(retain, nonatomic) WBMLCommonLiveJumpHuyaTipView *jumpHuyaTipView; // @synthesize jumpHuyaTipView=_jumpHuyaTipView;
@property(retain, nonatomic) UILabel *followTipLabel; // @synthesize followTipLabel=_followTipLabel;
@property(retain, nonatomic) WBMLCommonLiveFollowTipView *followTipView; // @synthesize followTipView=_followTipView;
@property(retain, nonatomic) WBMLCommonLiveReservationView *reservationView; // @synthesize reservationView=_reservationView;
@property(retain, nonatomic) WBMLImageTextFloatAdView *floatAdView; // @synthesize floatAdView=_floatAdView;
@property(retain, nonatomic) WBMLCommonLiveFloatVideoCycleView *floatView; // @synthesize floatView=_floatView;
@property(retain, nonatomic) WBMLImageTextLiveBillboardModel *billboardModel; // @synthesize billboardModel=_billboardModel;
@property(retain, nonatomic) WBMLImageTextLiveBillboardView *billboardView; // @synthesize billboardView=_billboardView;
@property(retain, nonatomic) NSMutableDictionary *videoURLCache; // @synthesize videoURLCache=_videoURLCache;
@property(retain, nonatomic) WBMLCommonLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) WBMLCommonLiveJoinUserAnimationView *joinView; // @synthesize joinView=_joinView;
@property(retain, nonatomic) WBMLCommonLivePlayCycleView *playCycleView; // @synthesize playCycleView=_playCycleView;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) WBMLVideoLiveBrightnessVolume *brightnessVolume; // @synthesize brightnessVolume=_brightnessVolume;
@property(retain, nonatomic) WBMLVideoLiveDragProgressIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) WBMLCommonLiveResolutionSettingView *resolutionSettingView; // @synthesize resolutionSettingView=_resolutionSettingView;
@property(retain, nonatomic) WBMLCommonLiveDisplayerInterfaceView *interfaceView; // @synthesize interfaceView=_interfaceView;
@property(retain, nonatomic) WBMLCommonLivePlayStatusView *playStatusView; // @synthesize playStatusView=_playStatusView;
@property(nonatomic) long long playDuration; // @synthesize playDuration=_playDuration;
@property(nonatomic) __weak id <WBMLVideoPlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic) __weak id <WBMLCommonLiveLandscapeDLNADeviceDelegate> landscapeDLNADeivceDelegate; // @synthesize landscapeDLNADeivceDelegate=_landscapeDLNADeivceDelegate;
@property(nonatomic) __weak id <WBMLCommonLiveDLNAControlDelegate> dlnaControlViewDelegate; // @synthesize dlnaControlViewDelegate=_dlnaControlViewDelegate;
@property(nonatomic) __weak id <WBMLVideoReplayProgressViewDelegate> replayProgressViewDelegate; // @synthesize replayProgressViewDelegate=_replayProgressViewDelegate;
@property(nonatomic) __weak id <WBMLCommonLiveDisplayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cleanViewControllerIfNeeded;
- (void)setFloatStatusForPayLive;
- (void)clickToCharges:(id)arg1;
- (void)clickToChanges:(id)arg1;
- (void)hideDLNAControlView;
- (void)showDLNADeviceListView;
- (void)showDLNAControlViewWithType:(long long)arg1;
- (void)restorePlayerIndex;
- (void)bringPlayerToFront;
- (void)clearFloatAd;
- (void)updateBillboardViewWith:(id)arg1;
- (void)gestureViewTapped:(id)arg1;
- (void)anchorNameTapped:(id)arg1;
- (void)followButtonTapped:(id)arg1;
- (_Bool)isAttitudeABTestOn;
- (void)buildUIWithPlayStatus;
- (void)setDisplayerDatas;
- (void)layoutDisplayerView;
- (void)interactionUpdateLiveInfo:(id)arg1;
- (void)setPlayStatus:(long long)arg1;
- (void)cancelInterfaceViewAnimationDelayTask;
- (void)resetInterfaceViewAnimationDelayTask;
- (void)hideInterfaceView;
- (void)showInterfaceViewWithAnimation:(_Bool)arg1;
- (void)setBarrageViewHiddenComments:(_Bool)arg1;
- (void)appendJoinVUser:(id)arg1;
- (void)setInfoHiddenComments:(_Bool)arg1;
- (void)appendBarrage:(id)arg1;
- (void)showLandscapeLikeEffect:(long long)arg1 withSelf:(_Bool)arg2 withBoomAndImpact:(_Bool)arg3;
- (void)setAnchorCoinNumbers:(id)arg1;
- (void)setOnlineNumbers:(id)arg1;
- (void)setAnchorFollowed:(_Bool)arg1;
- (void)pause;
- (void)resume;
- (void)hideFollowTipView;
- (void)showFollowToWatchFullTip;
- (void)handleFloatViewWithState:(_Bool)arg1;
- (void)startPlayWithSchemeReplayUrl:(id)arg1;
- (void)restartPlayWithStreamInfo:(id)arg1;
- (void)restartPlayWithLiveInfo:(id)arg1;
- (void)startPlayWithLiveInfo:(id)arg1;
- (void)setDisplayerFrame:(struct CGRect)arg1 withViewType:(unsigned long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)cleanViewController;
- (void)dealloc;
- (void)delegateRespondsToEvent:(unsigned long long)arg1;
- (void)displayerFollowTipView:(id)arg1 didRespondToEvent:(long long)arg2;
- (void)displayerInterfaceView:(id)arg1 didSelectAttitude:(unsigned long long)arg2;
- (void)displayerInterfaceView:(id)arg1 didRespondToEvent:(long long)arg2;
- (void)landscapeDLNADeviceListViewClickHelp;
- (void)landscapeDLNAResolutionListView:(id)arg1 selectedStream:(id)arg2;
- (void)landscapeDLNADeviceListViewClickAirPlay;
- (void)landscapeDLNADeviceListView:(id)arg1 clickDevice:(id)arg2;
- (void)DLNAControlView:(id)arg1 isPlaying:(_Bool)arg2;
- (void)DLNAControlView:(id)arg1 respondsToEvent:(long long)arg2;
- (void)DLNAControlView:(id)arg1 progressView:(id)arg2 didEndDragProgress:(double)arg3;
- (void)DLNAControlView:(id)arg1 progressView:(id)arg2 didDragProgress:(double)arg3;
- (void)DLNAControlView:(id)arg1 progressView:(id)arg2 willBeginDragProgress:(double)arg3;
- (void)DLNAControlView:(id)arg1 progressView:(id)arg2 playStateDidChange:(_Bool)arg3;
- (void)handleJumpHuyaWith:(id)arg1 event:(long long)arg2;
- (void)onTapAd:(id)arg1;
- (void)resolutionSettingView:(id)arg1 didChangeToResolution:(id)arg2;
- (void)playCycleView:(id)arg1 didRespondsToEvent:(unsigned long long)arg2;
- (void)progressView:(id)arg1 didEndDragProgress:(double)arg2;
- (void)progressView:(id)arg1 didDragProgress:(double)arg2;
- (void)progressView:(id)arg1 willBeginDragProgress:(double)arg2;
- (void)progressView:(id)arg1 playStateDidChange:(_Bool)arg2;
- (void)showLandscapeDeviceView;
- (void)showResolutionSettingView;
- (void)requestVideoUrlWithVideoID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)statusBarOrientationWillChange:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)unregisterApplicationNotification;
- (void)registerApplicationNotification;
- (void)playReadyToStart:(id)arg1;
- (void)playStatusView:(id)arg1 didActEvent:(long long)arg2;
- (void)player:(id)arg1 currentProgress:(double)arg2 duration:(double)arg3;
- (void)player:(id)arg1 onEvent:(unsigned long long)arg2;
- (void)setReservatioDatas;
- (void)reservationView:(id)arg1 didRespondToEvent:(long long)arg2;
- (void)removeEventFromCalendarWithReservationModel:(id)arg1 andCalendarEvent:(id)arg2;
- (void)saveEventIntoCalendarWithReservationModel:(id)arg1 andCalendarEvent:(id)arg2;
- (void)handleReservationEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

