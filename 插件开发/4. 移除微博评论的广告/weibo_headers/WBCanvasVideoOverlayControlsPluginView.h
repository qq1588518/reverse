//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoPluginBaseView.h"

@class MPVolumeView, NSTimer, UIButton, UILabel, UISlider, UIView, WBVideoControlsIndicatorView, WBVideoProgressSlider, _WBCanvasVideoControlOverlayToolbar;
@protocol WBCanvasVideoOverlayControlsPluginViewDelegate;

@interface WBCanvasVideoOverlayControlsPluginView : WBVideoPluginBaseView
{
    struct CGPoint _beginPanPoint;
    _Bool _panRightPart;
    UISlider *_volumeSlider;
    _Bool _activate;
    _Bool _seeking;
    _Bool _systemVolumeViewHidden;
    id <WBCanvasVideoOverlayControlsPluginViewDelegate> _delegate;
    UIButton *_toolBarPlayButton;
    WBVideoProgressSlider *_playProgressSlider;
    WBVideoProgressSlider *_cacheProgressSlider;
    UILabel *_currentTimeLabel;
    UILabel *_totalTimeLabel;
    _WBCanvasVideoControlOverlayToolbar *_toolBar;
    NSTimer *_activateTimer;
    UIView *_gestureView;
    MPVolumeView *_volumeView;
    WBVideoControlsIndicatorView *_vbProgressHud;
    UIButton *_muteButton;
    double _toolbarBottomOffsetY;
    CDStruct_1b6d18a9 _totalTime;
    CDStruct_1b6d18a9 _currentTime;
}

+ (id)convertStringFromInterval:(double)arg1;
+ (unsigned long long)defaultPresentationStateVisibilityOptions;
+ (unsigned long long)defaultPlaybackStateVisibilityOptions;
@property(nonatomic) double toolbarBottomOffsetY; // @synthesize toolbarBottomOffsetY=_toolbarBottomOffsetY;
@property(nonatomic) _Bool systemVolumeViewHidden; // @synthesize systemVolumeViewHidden=_systemVolumeViewHidden;
@property(retain, nonatomic) UIButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) WBVideoControlsIndicatorView *vbProgressHud; // @synthesize vbProgressHud=_vbProgressHud;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) NSTimer *activateTimer; // @synthesize activateTimer=_activateTimer;
@property(readonly, nonatomic) _WBCanvasVideoControlOverlayToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(readonly, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(readonly, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(readonly, nonatomic) WBVideoProgressSlider *cacheProgressSlider; // @synthesize cacheProgressSlider=_cacheProgressSlider;
@property(readonly, nonatomic) WBVideoProgressSlider *playProgressSlider; // @synthesize playProgressSlider=_playProgressSlider;
@property(readonly, nonatomic) UIButton *toolBarPlayButton; // @synthesize toolBarPlayButton=_toolBarPlayButton;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) CDStruct_1b6d18a9 totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic, getter=isSeeking) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic) __weak id <WBCanvasVideoOverlayControlsPluginViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isActivate) _Bool activate; // @synthesize activate=_activate;
- (void).cxx_destruct;
- (void)videoPlayerController:(id)arg1 didReceiveOrientationChangeNotificationWithOrientation:(long long)arg2;
- (void)videoPlayerController:(id)arg1 didExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)videoPlayerController:(id)arg1 didRequestPlaybackForVideoItem:(id)arg2 reason:(long long)arg3;
- (void)videoPlayerController:(id)arg1 didUpdateCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayerControllerIsReady:(id)arg1;
- (void)updateGestureViewUserInteractionEnabled;
- (void)updateTimes;
- (void)prepareForDisplay;
- (void)_delegateDidUpdateActiveState:(_Bool)arg1;
- (void)_delegateDidPerformEvent:(unsigned long long)arg1;
- (id)volumeSlider;
- (void)progressChangedConfirm:(id)arg1;
- (void)progressChanged:(id)arg1;
- (void)progressSlidePressed:(id)arg1;
- (void)toolbarPlayButtonPressed:(id)arg1;
- (void)didTapToolBar;
- (void)userPanMPVideoView:(id)arg1;
- (void)userSingleTapMPVideoView:(id)arg1;
- (void)updateProgressHudDisplay;
- (void)systemVolumeDidChange:(id)arg1;
- (id)downloadActionItem;
- (id)createButtonWithFrame:(struct CGRect)arg1 normalImage:(id)arg2 highlightImage:(id)arg3 target:(id)arg4 action:(SEL)arg5;
- (void)updateTimeLabels;
- (void)updatePlayingWithPlaybackState:(long long)arg1;
@property(nonatomic, getter=isPlaying) _Bool playing;
- (id)actionItem;
@property(nonatomic) double cacheProgress;
@property(nonatomic) double progress;
@property(readonly, nonatomic) _Bool inlineMode;
- (void)didPressMuteBtn:(id)arg1;
- (void)setActivate:(_Bool)arg1 deactiveToolbar:(_Bool)arg2;
- (void)updateVolumeViewState;
- (void)didMoveToWindow;
- (void)setToolBarBottomOffsetY:(double)arg1;
- (void)activateTimerFire;
- (void)layoutSubviews;
- (double)displayAnimationDuration;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

