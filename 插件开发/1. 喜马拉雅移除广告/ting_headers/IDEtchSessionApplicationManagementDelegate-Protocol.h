//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDEtchSession, NSString;

@protocol IDEtchSessionApplicationManagementDelegate <NSObject>

@optional
- (void)session:(IDEtchSession *)arg1 applicationManagementService:(long long)arg2 handleApplicationManagementServiceEvent:(int)arg3 uniqueIdentifier:(NSString *)arg4 appIdentifier:(NSString *)arg5;
@end

