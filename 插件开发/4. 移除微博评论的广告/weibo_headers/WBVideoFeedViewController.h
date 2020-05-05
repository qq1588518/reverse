//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoTimelineViewController.h"

#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WBVideoTimelinePlayerControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, PRLMTableViewWrapper, SNHTTPRequestOperationWrapper, UIView, WBContactEngine, WBMediaAutoPlayManager, WBStatus, WBVideoTimelinePlayerController;
@protocol WBVideoPlayerSourceView;

@interface WBVideoFeedViewController : WBVideoTimelineViewController <UIViewControllerTransitioningDelegate, WBVideoTimelinePlayerControllerDelegate>
{
    long long _originalStatusBarStyle;
    _Bool _originalStatusBarHidden;
    struct {
        unsigned int presentFinished:1;
        long long threaterMode;
        unsigned int nextVideoButtonHidden:1;
        unsigned int firstIntoThreaterMode:1;
        unsigned int showCustomBackground:1;
        unsigned int firstVideoTimelineLoaded:1;
        unsigned int fromOpenURL:1;
        unsigned int playingGifVideo:1;
        unsigned int shouldFadeVolume:1;
        unsigned int shouldShowPreView:1;
    } _flags;
    PRLMTableViewWrapper *_loadMoreWrapper;
    unsigned long long _pageNum;
    unsigned long long _pageCount;
    NSString *_cacheID;
    NSString *_navigationTitle;
    unsigned long long _playCount;
    SNHTTPRequestOperationWrapper *_wrapper;
    id _audioSessionHandler;
    _Bool _dismissing;
    _Bool _recmmendVideoDisplayed;
    _Bool _isVideoPluginActive;
    WBStatus *_baseStatus;
    WBContactEngine *_contactEngine;
    NSMutableArray *_preloadedPlaybackIdentifiers;
    double _offsetYWhenDrag;
}

@property(nonatomic) _Bool isVideoPluginActive; // @synthesize isVideoPluginActive=_isVideoPluginActive;
@property(nonatomic) double offsetYWhenDrag; // @synthesize offsetYWhenDrag=_offsetYWhenDrag;
@property(nonatomic) _Bool recmmendVideoDisplayed; // @synthesize recmmendVideoDisplayed=_recmmendVideoDisplayed;
@property(nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(retain, nonatomic) NSMutableArray *preloadedPlaybackIdentifiers; // @synthesize preloadedPlaybackIdentifiers=_preloadedPlaybackIdentifiers;
@property(retain, nonatomic) WBContactEngine *contactEngine; // @synthesize contactEngine=_contactEngine;
@property(retain, nonatomic) WBStatus *baseStatus; // @synthesize baseStatus=_baseStatus;
- (void).cxx_destruct;
- (_Bool)videoCollectionHelperDisabled;
- (void)updateToolBarBottomPadding;
- (void)videoPlayerController:(id)arg1 didExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didChangeVideoPlayerItem:(id)arg2;
- (void)videoPlayerControllerUserSeekDone:(id)arg1;
- (void)videoPlayerController:(id)arg1 didPerformPauseWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)updateTextViewVisibilityIfNeeded:(_Bool)arg1;
- (void)videoPlayerController:(id)arg1 didUpdateActiveState:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)videoPlayerController:(id)arg1 didEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerControllerUserDidTapOnBlankArea:(id)arg1;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenByPressingFullScreenButton:(id)arg2;
- (_Bool)videoPlayerController:(id)arg1 shouldExitFullscreenAnimated:(_Bool)arg2;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenAnimated:(_Bool)arg2;
- (_Bool)videoUpNextPluginShouldCountDown:(id)arg1;
- (void)_finishSoundPlayback;
- (void)updateVideoAudioPlaybackState;
- (_Bool)shouldScrollVideoCardViewToNavBottom:(id)arg1;
- (_Bool)shouldScrollVideoCardViewToTop:(id)arg1;
- (_Bool)videoCardViewBigRatio:(id)arg1;
- (void)_slientScrollToCellAtIndexPath:(id)arg1;
- (double)contentOffsetYToCell:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)loadMoreFooterView;
- (id)activeCell;
- (id)playingCell;
- (void)updateTableViewCellState:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)copyStatus:(id)arg1;
- (void)configVideoPlayerControllerPlugins;
- (id)initWithSourceView:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIView *backgroundView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WBMediaAutoPlayManager *playbackManager;
@property(retain, nonatomic) WBVideoTimelinePlayerController *playerController;
@property(retain, nonatomic) NSArray *statuses;
@property(readonly) Class superclass;
@property(nonatomic) __weak UIView<WBVideoPlayerSourceView> *timelineSourceView;

@end

