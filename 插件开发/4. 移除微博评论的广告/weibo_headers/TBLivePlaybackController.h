//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TBLiveColleagueProtocol-Protocol.h"

@class NSString, TBLiveOverlayController, TBLiveOverlayView;
@protocol LiveRoomMediaPlayerProtocol;

@interface TBLivePlaybackController : NSObject <TBLiveColleagueProtocol>
{
    TBLiveOverlayController *_overlayController;
    TBLiveOverlayView *_overlayView;
    id <LiveRoomMediaPlayerProtocol> _mediaPlayerAdapter;
}

+ (id)identifier;
@property(nonatomic) __weak id <LiveRoomMediaPlayerProtocol> mediaPlayerAdapter; // @synthesize mediaPlayerAdapter=_mediaPlayerAdapter;
@property(nonatomic) __weak TBLiveOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak TBLiveOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void).cxx_destruct;
- (void)refreshWithData:(id)arg1;
- (void)resetplayerControlView:(_Bool)arg1;
- (void)refreahCurrentTime:(double)arg1 duration:(double)arg2;
- (void)receivemsg:(id)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)setupInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

