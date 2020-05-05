//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WBMLCommonLiveMultiVideoPlayViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, WBMLCommonLiveMultiVideoPlayView;
@protocol WBMLCommonLivePlayCycleViewDelegate, WBMLVideoPlayerDelegate;

@interface WBMLCommonLivePlayCycleView : UIView <UIScrollViewDelegate, WBMLCommonLiveMultiVideoPlayViewDelegate>
{
    _Bool _isCycleEnabled;
    _Bool _hasCycledThrough;
    id <WBMLCommonLivePlayCycleViewDelegate> _delegate;
    id <WBMLVideoPlayerDelegate> _playerDelegate;
    NSArray *_cycleModels;
    NSString *_playUrl;
    NSMutableArray *_updateCycleModels;
    unsigned long long _currentModelIndex;
    WBMLCommonLiveMultiVideoPlayView *_multiVideoPlayView;
}

@property(retain, nonatomic) WBMLCommonLiveMultiVideoPlayView *multiVideoPlayView; // @synthesize multiVideoPlayView=_multiVideoPlayView;
@property(nonatomic) _Bool hasCycledThrough; // @synthesize hasCycledThrough=_hasCycledThrough;
@property(nonatomic) _Bool isCycleEnabled; // @synthesize isCycleEnabled=_isCycleEnabled;
@property(nonatomic) unsigned long long currentModelIndex; // @synthesize currentModelIndex=_currentModelIndex;
@property(retain, nonatomic) NSMutableArray *updateCycleModels; // @synthesize updateCycleModels=_updateCycleModels;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) NSArray *cycleModels; // @synthesize cycleModels=_cycleModels;
@property(nonatomic) __weak id <WBMLVideoPlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic) __weak id <WBMLCommonLivePlayCycleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)multiVideoPlayViewEndScroll:(id)arg1 indexDidChanged:(_Bool)arg2 autoScroll:(_Bool)arg3;
- (void)multiVideoPlayViewWillScroll:(id)arg1;
- (void)delegateEvent:(unsigned long long)arg1;
- (void)playNewModels;
- (void)configPlayer;
- (void)playCurrentModel;
@property(readonly, nonatomic) _Bool isCycling;
@property(readonly, nonatomic) NSString *currentModelID;
- (void)updateCycleModels:(id)arg1;
- (void)playNext;
- (void)startPlaying;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

