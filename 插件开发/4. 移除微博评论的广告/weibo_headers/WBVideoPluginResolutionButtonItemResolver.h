//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBVideoPlaybackEventListener-Protocol.h"
#import "WBVideoPlaybackMediaSelectionEventListener-Protocol.h"

@class NSArray, NSString, WBVideoPlayerController, WBVideoPluginResolutionButtonItemResolverEventAnnouncer, WBVideoResolutionButtonItem;

@interface WBVideoPluginResolutionButtonItemResolver : NSObject <WBVideoPlaybackMediaSelectionEventListener, WBVideoPlaybackEventListener>
{
    _Bool _allowsResolutionButtonItemForSingleResolutionVideo;
    NSArray *_resolutionButtonItems;
    WBVideoResolutionButtonItem *_selectedResolutionButtonItem;
    NSArray *_cachingButtonItems;
    WBVideoPlayerController *_playerController;
    WBVideoResolutionButtonItem *_currentAutoItem;
    WBVideoPluginResolutionButtonItemResolverEventAnnouncer *_eventAnnouncer;
}

@property(nonatomic) _Bool allowsResolutionButtonItemForSingleResolutionVideo; // @synthesize allowsResolutionButtonItemForSingleResolutionVideo=_allowsResolutionButtonItemForSingleResolutionVideo;
@property(retain, nonatomic) WBVideoPluginResolutionButtonItemResolverEventAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
@property(retain, nonatomic) WBVideoResolutionButtonItem *currentAutoItem; // @synthesize currentAutoItem=_currentAutoItem;
@property(nonatomic) __weak WBVideoPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) NSArray *cachingButtonItems; // @synthesize cachingButtonItems=_cachingButtonItems;
@property(retain, nonatomic) WBVideoResolutionButtonItem *selectedResolutionButtonItem; // @synthesize selectedResolutionButtonItem=_selectedResolutionButtonItem;
@property(retain, nonatomic) NSArray *resolutionButtonItems; // @synthesize resolutionButtonItems=_resolutionButtonItems;
- (void).cxx_destruct;
- (void)showTips:(id)arg1;
- (_Bool)selectCachedResourceIfNeeded;
- (_Bool)appendCacheStatus:(id)arg1 selectionOption:(id)arg2;
- (void)reloadCachingButtonsWithPlaybackResources:(id)arg1;
- (void)_reloadCachingButtonItemsABREnabledWithSelectionGroup:(id)arg1;
- (void)queryVideoAvailableResourcesCompletion:(CDUnknownBlockType)arg1;
- (void)reloadCachingButtonItems;
- (void)_reloadCachedResolutionButtonItemsABREnabledWithManager:(id)arg1 currentGroup:(id)arg2;
- (void)_reloadResolutionButtonItemsABREnabledWithManager:(id)arg1 currentGroup:(id)arg2;
- (_Bool)_selectMediaSelectionOption:(id)arg1 manager:(id)arg2 playerController:(id)arg3;
- (_Bool)shouldSelectMediaSelectionOption:(id)arg1 source:(long long)arg2;
- (id)displaySortedItems:(id)arg1;
- (void)_continuePlaybackAfterQualitySelectionForPlayerController:(id)arg1;
- (void)updateAutoButtonItem;
- (void)reloadResolutionButtonItems;
- (void)delegateDidReloadData;
- (_Bool)selectItem:(id)arg1;
- (id)resolutionIdentifier;
- (void)mediaSelectionManager:(id)arg1 didFinishManualQualitySwitchingTo:(id)arg2 successed:(_Bool)arg3;
- (void)mediaSelectionManager:(id)arg1 didUpdateSelectionOptions:(id)arg2;
- (void)mediaSelectionManager:(id)arg1 didUpdateVideoQualitySelectionGroup:(id)arg2;
- (void)videoPlayerController:(id)arg1 didUpdateTransferState:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)videoPlayerController:(id)arg1 didRequestPlaybackForVideoItem:(id)arg2 reason:(long long)arg3;
- (void)removeEventListener:(id)arg1;
- (void)addEventListener:(id)arg1;
- (id)initWithVideoPlaybackController:(id)arg1 resolveButtonItemsForSingleResolutionVideo:(_Bool)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

