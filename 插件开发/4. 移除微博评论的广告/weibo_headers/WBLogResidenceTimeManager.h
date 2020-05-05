//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WBLogResidenceTimeManager : NSObject
{
    NSObject<OS_dispatch_queue> *_safe_queue;
    NSMutableDictionary *_record_collection_set;
    NSDate *_forgroundTimeStamp;
    NSDate *_backgroundTimeStamp;
}

+ (void)recordDisappearedEntity:(id)arg1;
+ (void)recordAppearedEntity:(id)arg1;
+ (void)notifyBackground:(id)arg1;
+ (void)notifyForground:(id)arg1;
+ (void)notifyBackground:(id)arg1 forced:(_Bool)arg2;
+ (void)notifyForground:(id)arg1 forced:(_Bool)arg2;
+ (void)notifyLaunch:(id)arg1;
+ (void)recordDisappearedController:(id)arg1;
+ (void)recordAppearedController:(id)arg1;
+ (void)recordStopController:(id)arg1;
+ (_Bool)isInWhiteList:(id)arg1;
+ (void)recordStartController:(id)arg1;
+ (void)unregistTimeRecorder:(id)arg1;
+ (void)registTimeRecorder:(id)arg1;
+ (id)_sharedInstance;
- (void).cxx_destruct;
- (void)_recordDisappearedEntityWithDate:(id)arg1 andEntity:(id)arg2;
- (void)_recordAppearedEntityWithDate:(id)arg1 andEntity:(id)arg2;
- (void)_unregistTimeRecorder:(id)arg1;
- (void)_registTimeRecorder:(id)arg1;
- (void)_notifyForgroundWithDate:(id)arg1 forced:(_Bool)arg2;
- (void)_notifyBackgroundWithDate:(id)arg1 forced:(_Bool)arg2;
- (void)_recordDisappearedControllerWithDate:(id)arg1 andController:(id)arg2;
- (void)_recordAppearedControllerWithDate:(id)arg1 andController:(id)arg2;
- (id)init;

@end

