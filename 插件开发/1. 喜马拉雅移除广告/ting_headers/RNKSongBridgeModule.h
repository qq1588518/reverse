//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "RCTBridgeModule-Protocol.h"
#import "RNKSongSocketDelegate-Protocol.h"

@class NSObject, NSString, RCTBridge, RNKSongSocket;
@protocol OS_dispatch_queue;

@interface RNKSongBridgeModule : RCTEventEmitter <RNKSongSocketDelegate, RCTBridgeModule>
{
    RNKSongSocket *_ksongSocket;
    _Bool _hadJoined;
    _Bool _hadSendHistoryMsgs;
}

+ (const struct RCTMethodInfo *)__rct_export__985;
+ (const struct RCTMethodInfo *)__rct_export__884;
+ (const struct RCTMethodInfo *)__rct_export__843;
+ (const struct RCTMethodInfo *)__rct_export__712;
+ (const struct RCTMethodInfo *)__rct_export__541;
+ (const struct RCTMethodInfo *)__rct_export__410;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)ksongSocketLoginFailed:(id)arg1;
- (void)ksongSocketStateUpdated:(unsigned long long)arg1 oldState:(unsigned long long)arg2;
- (void)ksongSocketDidRecvHistoryMessages:(id)arg1;
- (void)ksongSocketDidRecvNewMessages:(id)arg1;
- (void)ksongSocketLoginSuccess:(id)arg1;
- (id)supportedEvents;
- (void)getSocketInfo:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)close;
- (void)getState:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)send:(id)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)joinRoomExt:(id)arg1 userInfo:(id)arg2;
- (void)joinRoom:(long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

