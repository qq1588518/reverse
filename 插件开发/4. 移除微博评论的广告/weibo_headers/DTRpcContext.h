//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTRpcContext : NSObject
{
}

+ (_Bool)shouldShowFlow;
+ (void)setShouldShowFlow:(_Bool)arg1;
+ (_Bool)isForegroundRPC;
+ (void)removeRpcRespHeader;
+ (id)getRpcRespHeader;
+ (void)setRpcRespHeader:(id)arg1;
+ (void)setForegroundRPC:(_Bool)arg1;
+ (void)removeRpcHeader;
+ (id)getRpcHeader;
+ (void)setRpcHeader:(id)arg1;
+ (void)setRpcCustomUsingAMRPC:(_Bool)arg1;
+ (void)setRpcCustomAppID:(id)arg1;
+ (void)setRpcCustomSignAppkey:(id)arg1;
+ (void)setRpcCustomGateWayUrl:(id)arg1;
+ (void)setRpcUsingRegionConf:(id)arg1;

@end

