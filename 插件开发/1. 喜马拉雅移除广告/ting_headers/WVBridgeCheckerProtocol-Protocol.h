//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WVBridgePermission;
@protocol WVBridgeContext;

@protocol WVBridgeCheckerProtocol <NSObject>
- (WVBridgePermission *)checkPermission:(NSString *)arg1 withParams:(NSDictionary *)arg2 withContext:(id <WVBridgeContext>)arg3;
@end

