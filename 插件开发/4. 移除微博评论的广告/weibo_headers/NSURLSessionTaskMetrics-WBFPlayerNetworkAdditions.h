//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskMetrics.h>

#import "WBFPlayerNetworkTaskMetrics-Protocol.h"

@class NSArray, NSDate, NSString;

@interface NSURLSessionTaskMetrics (WBFPlayerNetworkAdditions) <WBFPlayerNetworkTaskMetrics>
@property(readonly, copy) NSDate *taskEndDate;
@property(readonly, copy) NSDate *taskStartDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long redirectCount;
@property(readonly) Class superclass;
@property(readonly, copy) NSArray *transactionMetrics;
@end

