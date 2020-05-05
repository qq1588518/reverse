//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardListViewController.h"

#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "WBVideoPlayerControllerDelegate-Protocol.h"
#import "WBVideoStorePlayerControllerDelegate-Protocol.h"
#import "WBVideoStorePlayerViewEventDelegate-Protocol.h"

@class NSDictionary, NSString, SKStoreProductViewController, UIView, WBVideoItem, WBVideoStorePlayerController, WBVideoStorePlayerView, WBVideoStoreView;
@protocol WBVideoPlayerSourceView;

@interface WBVideoStoreNewViewController : WBCardListViewController <WBVideoPlayerControllerDelegate, WBVideoStorePlayerControllerDelegate, WBVideoStorePlayerViewEventDelegate, SKStoreProductViewControllerDelegate>
{
    WBVideoStoreView *_storeView;
    SKStoreProductViewController *_skProductViewController;
    UIView *_appStoreView;
    NSString *_appID;
    WBVideoItem *_videoItem;
    WBVideoStorePlayerController *_playerController;
    UIView<WBVideoPlayerSourceView> *_sourceView;
    WBVideoStorePlayerView *_playerView;
    NSDictionary *_extraParams;
}

@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(retain, nonatomic) WBVideoStorePlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView<WBVideoPlayerSourceView> *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) WBVideoStorePlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) WBVideoItem *videoItem; // @synthesize videoItem=_videoItem;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) UIView *appStoreView; // @synthesize appStoreView=_appStoreView;
@property(retain, nonatomic) SKStoreProductViewController *skProductViewController; // @synthesize skProductViewController=_skProductViewController;
@property(retain, nonatomic) WBVideoStoreView *storeView; // @synthesize storeView=_storeView;
- (void).cxx_destruct;
- (void)finishLoadingData;
- (id)analysisParameters;
- (void)_inactivePlayerView;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)videoPlayerController:(id)arg1 didUpdateActiveState:(_Bool)arg2;
- (void)videoPlayerControllerDidTapOnBlankArea:(id)arg1;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenAnimated:(_Bool)arg2;
- (_Bool)shouldPlayToEndWithVideoPlayerController:(id)arg1;
- (void)_playWithReason:(long long)arg1;
- (void)videoStorePlayerView:(id)arg1 didPressPlayButton:(id)arg2;
- (void)downloadButtonPress:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)uiCode;
- (void)_resetAppStoreStuff;
- (void)_resetLayout;
- (void)_setupContentView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVideoItem:(id)arg1 sourceView:(id)arg2 appID:(id)arg3 containerID:(id)arg4 params:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

