//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BUBUVideoBottomMaskClickDelegate-Protocol.h"
#import "BUBUVideoTopMaskClickDelegate-Protocol.h"
#import "BUPlayerDelegate-Protocol.h"
#import "BURewardedVideoDownloadBarDelegate-Protocol.h"
#import "BURewardedVideoTopBarDelegate-Protocol.h"

@class BUAdSlot, BUMaterialMeta, BUPlayer, BURewardedVideoDownloadBarView, BURewardedVideoTopBarView, BUTimer, BUURitSetingModel, BUVideoBottomMask, BUVideoTopMask, NSDictionary, NSString, NSTimer, UIActivityIndicatorView, UITapGestureRecognizer, UIView;
@protocol BURewardedVideoDisplayDelegate;

@interface BURewardedVideoDisplayViewController : UIViewController <BUPlayerDelegate, BURewardedVideoDownloadBarDelegate, BUBUVideoTopMaskClickDelegate, BUBUVideoBottomMaskClickDelegate, BURewardedVideoTopBarDelegate>
{
    _Bool _isTransform;
    _Bool _isRewardedVideo;
    _Bool _storeKitOpened;
    _Bool _isAlreadyPlayed;
    _Bool _isSkipTap;
    _Bool _isReportEvent;
    _Bool _isFirstAnimation;
    _Bool _isPlaying;
    _Bool _playingOnline;
    _Bool _hasPlayed;
    _Bool _isShowAlert;
    _Bool _tapedDislike;
    id <BURewardedVideoDisplayDelegate> _delegate;
    BUPlayer *_player;
    BUMaterialMeta *_materialMeta;
    BUAdSlot *_slot;
    double _screenWidth;
    double _screenHeight;
    BURewardedVideoTopBarView *_topBarView;
    NSTimer *_timer;
    long long _repeatsCount;
    UIView *_adlogoView;
    UIView *_playerView;
    UIActivityIndicatorView *_activityIndicator;
    BURewardedVideoDownloadBarView *_downloadView;
    BUVideoTopMask *_topMask;
    BUVideoBottomMask *_bottomMask;
    NSDictionary *_touchDict;
    UITapGestureRecognizer *_playerViewTap;
    double _lastTime;
    BUURitSetingModel *_ritModel;
    BUTimer *_quitTimer;
}

@property(nonatomic) _Bool tapedDislike; // @synthesize tapedDislike=_tapedDislike;
@property(nonatomic) _Bool isShowAlert; // @synthesize isShowAlert=_isShowAlert;
@property(nonatomic) _Bool hasPlayed; // @synthesize hasPlayed=_hasPlayed;
@property(nonatomic) _Bool playingOnline; // @synthesize playingOnline=_playingOnline;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) BUTimer *quitTimer; // @synthesize quitTimer=_quitTimer;
@property(nonatomic) _Bool isFirstAnimation; // @synthesize isFirstAnimation=_isFirstAnimation;
@property(retain, nonatomic) BUURitSetingModel *ritModel; // @synthesize ritModel=_ritModel;
@property(nonatomic) _Bool isReportEvent; // @synthesize isReportEvent=_isReportEvent;
@property(nonatomic) _Bool isSkipTap; // @synthesize isSkipTap=_isSkipTap;
@property(nonatomic) _Bool isAlreadyPlayed; // @synthesize isAlreadyPlayed=_isAlreadyPlayed;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) UITapGestureRecognizer *playerViewTap; // @synthesize playerViewTap=_playerViewTap;
@property(copy, nonatomic) NSDictionary *touchDict; // @synthesize touchDict=_touchDict;
@property(retain, nonatomic) BUVideoBottomMask *bottomMask; // @synthesize bottomMask=_bottomMask;
@property(retain, nonatomic) BUVideoTopMask *topMask; // @synthesize topMask=_topMask;
@property(retain, nonatomic) BURewardedVideoDownloadBarView *downloadView; // @synthesize downloadView=_downloadView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *adlogoView; // @synthesize adlogoView=_adlogoView;
@property(nonatomic) long long repeatsCount; // @synthesize repeatsCount=_repeatsCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) BURewardedVideoTopBarView *topBarView; // @synthesize topBarView=_topBarView;
@property(nonatomic) double screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) BUAdSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) BUMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(nonatomic) _Bool storeKitOpened; // @synthesize storeKitOpened=_storeKitOpened;
@property(nonatomic) _Bool isRewardedVideo; // @synthesize isRewardedVideo=_isRewardedVideo;
@property(nonatomic) _Bool isTransform; // @synthesize isTransform=_isTransform;
@property(retain, nonatomic) BUPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <BURewardedVideoDisplayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isNewDowloadBar;
- (void)downloadViewAnimation;
- (void)reportEvent;
- (long long)getdownloadBarShowTime;
- (void)checkToPlayOrPause;
- (void)updateLeftSeconds:(id)arg1;
- (void)startTimer;
- (_Bool)fullscreenNotShowEndcard;
- (_Bool)rewardShowAlert;
- (long long)rewardWatchPercentForRport;
- (long long)videoBufferSecondForClose;
- (_Bool)videoDefaultMute;
- (void)closeDisplayVC;
- (void)showDislikeHUD;
- (void)videoTopBarCloseButtonTapped:(id)arg1;
- (void)videoTopBarSilentButtonTapped:(id)arg1;
- (void)videoTopBarDislikeButtonTapped:(id)arg1;
- (void)videoTopBarTapped:(id)arg1 extraDic:(id)arg2;
- (id)playerViewTapyDict;
- (void)touchEventTrackerWithLabel:(id)arg1 sendClick:(_Bool)arg2;
- (id)getDurationAndPercentDic;
- (id)c_xyDict;
- (_Bool)needVideoAdaptation;
- (void)setPlayerVideoAdaption;
- (void)openAppStore;
- (void)judgeQuit:(id)arg1;
- (void)forceQuit;
- (void)handleSkip;
- (void)handlePlayFinish;
- (void)silentVideo;
- (void)playRewardedVideo;
- (void)preloadMaterialMeta;
- (void)buildCommonView;
- (void)buildNorlmalView;
- (void)buildMaskView;
- (void)continuePlay;
- (_Bool)sendClickEventWithArea:(id)arg1;
- (void)playerTap;
- (void)videoBottomMaskSubViewsTapped:(id)arg1 extraDic:(id)arg2;
- (void)videoBottomMaskTapped:(id)arg1 extraDic:(id)arg2;
- (void)videoTopMaskSubViewsTapped:(id)arg1 extraDic:(id)arg2 clickTypeString:(id)arg3;
- (void)videoTopMaskTapped:(id)arg1 extraDic:(id)arg2;
- (void)downloadButtonTapped:(id)arg1 extraDic:(id)arg2;
- (void)downloadBarTapped:(id)arg1 extraDic:(id)arg2;
- (id)getTrackTag;
- (void)reportLabel:(id)arg1 extraDic:(id)arg2 adExtraDataType:(long long)arg3 skipType:(long long)arg4;
- (void)reportLabel:(id)arg1 extraDic:(id)arg2 adExtraDataType:(long long)arg3;
- (void)playerReadyToPlay:(id)arg1;
- (void)player:(id)arg1 stateDidChanged:(long long)arg2;
- (void)playerDidPlayFinish:(id)arg1 error:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)layoutNormalSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)receiveWillEnterForegroundNotification:(id)arg1;
- (void)addNotification;
- (id)initViewControllerWithAd:(id)arg1 slot:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

