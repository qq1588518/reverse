//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RNBaseStatistics.h"

@class NSMutableDictionary, RNEventTracker;

@interface RNConfigUpdateStatistics : RNBaseStatistics
{
    NSMutableDictionary *_retainedCompleteHandlers;
    RNEventTracker *_eventTracker;
}

- (void).cxx_destruct;
- (id)eventTracker;
- (void)manifestFetchComplete:(double)arg1 error:(id)arg2;
- (void)setupStatisticsHooks;
- (id)initWithWorkQueue:(id)arg1;

@end

