//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XMSubsidyTaskItem;

@interface XMTrackListenTime : NSObject
{
    _Bool _didStartRecord;
    double _start;
    _Bool _valid;
    _Bool _reportingFinish;
    long long _retryCount;
    XMSubsidyTaskItem *_taskItem;
    double _currentTime;
    double _dayStartTs;
    long long _uid;
    double _machineTimeForDayStartTsShouldUpdate;
}

+ (id)jsonDicFromString:(id)arg1;
+ (void)writeSavedListenTimeInfo:(CDUnknownBlockType)arg1 withUid:(long long)arg2;
+ (void)readSavedListenTimeInfo:(CDUnknownBlockType)arg1 withUid:(long long)arg2;
+ (void)removeSavedInfoExcludeUid:(long long)arg1;
+ (void)removeSavedInfoForUid0;
+ (double)todayStartInterval;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLogger;
@property(nonatomic) double machineTimeForDayStartTsShouldUpdate; // @synthesize machineTimeForDayStartTsShouldUpdate=_machineTimeForDayStartTsShouldUpdate;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) double dayStartTs; // @synthesize dayStartTs=_dayStartTs;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) XMSubsidyTaskItem *taskItem; // @synthesize taskItem=_taskItem;
- (void).cxx_destruct;
- (void)stopAndSaveLogger;
- (void)saveListenTimeTodayWithListenTime:(double)arg1 andUid:(long long)arg2;
- (double)savedListenTimeTodayWithUid:(long long)arg1;
- (void)reportTaskFinishWithTaskId:(long long)arg1 andParams:(id)arg2 andComplete:(CDUnknownBlockType)arg3;
- (void)addListenTime:(double)arg1;
- (void)startRecordeListenTime;
- (void)userOrDayChanged;
- (void)updateMachineTimeForDayStartTs;
- (void)loadInfoFromCache;
- (void)updateTaskInfoIfNeeded;
- (void)requestTaskInfoWithComplete:(CDUnknownBlockType)arg1;
- (void)startRecord;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

