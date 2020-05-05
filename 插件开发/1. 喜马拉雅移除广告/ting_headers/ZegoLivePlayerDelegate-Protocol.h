//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol ZegoLivePlayerDelegate <NSObject>
- (void)onPlayStateUpdate:(int)arg1 streamID:(NSString *)arg2;

@optional
- (void)onPlayQualityUpate:(NSString *)arg1 quality:(CDStruct_e0e1cbd9)arg2;
- (void)onPlayQualityUpdate:(int)arg1 stream:(NSString *)arg2 videoFPS:(double)arg3 videoBitrate:(double)arg4;
- (void)onVideoSizeChangedTo:(struct CGSize)arg1 ofStream:(NSString *)arg2;
- (void)onEndJoinLiveCommad:(NSString *)arg1 userName:(NSString *)arg2 roomID:(NSString *)arg3;
- (void)onInviteJoinLiveRequest:(int)arg1 fromUserID:(NSString *)arg2 fromUserName:(NSString *)arg3 roomID:(NSString *)arg4;
@end

