//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LiveRoomPowerMsgProtocol-Protocol.h"

@class NSString;

@interface WBTBLiveRoomPowerMsgAdapter : NSObject <LiveRoomPowerMsgProtocol>
{
}

- (void)report:(long long)arg1 code:(long long)arg2 msg:(id)arg3;
- (void)sendMessage:(long long)arg1 withMsg:(id)arg2 context:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)sendTextMessage:(long long)arg1 withMsg:(id)arg2 context:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)count:(long long)arg1 withTopic:(id)arg2 withAck:(_Bool)arg3 withParam:(id)arg4 context:(id)arg5 withCallback:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

