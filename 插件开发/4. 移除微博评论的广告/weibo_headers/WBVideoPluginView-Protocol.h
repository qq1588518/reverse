//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoPlaybackEventListener-Protocol.h"
#import "WBVideoPlaybackUserEventListener-Protocol.h"

@class WBVideoPlayerController;
@protocol WBVideoPluginView;

@protocol WBVideoPluginView <WBVideoPlaybackEventListener, WBVideoPlaybackUserEventListener>
+ (_Bool)positionBelowVideoLayer;
@property(nonatomic) _Bool visible;
@property(nonatomic) __weak WBVideoPlayerController *videoController;
@property(nonatomic) unsigned long long presentationStateVisibilityOptions;
@property(nonatomic) unsigned long long playbackStateVisibilityOptions;
- (void)setVisible:(_Bool)arg1 animationDuration:(double)arg2;

@optional
@property(nonatomic) struct UIEdgeInsets safeInsets;
- (void)transferStateToPluginView:(id <WBVideoPluginView>)arg1;
- (void)updateVisibilityWithPlaybackState:(unsigned long long)arg1 presentationState:(unsigned long long)arg2 performanceSenstive:(_Bool)arg3 animated:(_Bool)arg4;
@end

