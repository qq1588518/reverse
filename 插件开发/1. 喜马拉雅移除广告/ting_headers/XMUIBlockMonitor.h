//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray, NSThread, XMStackQueue;

@interface XMUIBlockMonitor : NSObject
{
    long long m_currentState;
    struct __CFRunLoopObserver *m_runLoopBeginObserver;
    struct __CFRunLoopObserver *m_runLoopEndObserver;
    struct __CFRunLoopObserver *m_initRunloopBeginObserver;
    struct __CFRunLoopObserver *m_initRunloopEndObserver;
    _Bool m_bInSuspend;
    NSThread *m_monitorThread;
    _Bool m_bStop;
    unsigned int m_firstSleepTime;
    XMStackQueue *m_stackQueue;
    struct HighSpeedLogger *_blockLogger;
    NSPointerArray *_weakObservers;
}

+ (id)filePath;
+ (id)monitor;
@property(retain, nonatomic) NSPointerArray *weakObservers; // @synthesize weakObservers=_weakObservers;
- (void).cxx_destruct;
- (void)removeInitRunLoopObserver;
- (void)addInitRunLoopObserver;
- (unsigned long long)checkMainRunloop:(unsigned long long *)arg1 blockDiffTime:(unsigned long long *)arg2;
- (void)monitorThreadProc;
- (void)pingMainThread;
- (void)analysisBlockStack:(id)arg1 dumpType:(unsigned long long)arg2 runTime:(unsigned long long)arg3 blockDiffTime:(float)arg4;
- (void)reportAllExceptionCallStack:(id)arg1 groupId:(unsigned long long)arg2 blockDiff:(float)arg3 blockType:(unsigned long long)arg4;
- (void)reportBlockDict:(id)arg1 blockType:(unsigned long long)arg2;
- (void)syncBlockDataToDisk:(id)arg1 groupId:(unsigned long long)arg2 blockDiff:(float)arg3;
- (id)stackQueueToDict:(id)arg1 groupId:(unsigned long long)arg2 blockDiff:(float)arg3;
- (void)onReportBlockType:(unsigned long long)arg1;
- (void)addMonitorThread;
- (void)handleSuspend;
- (void)handleBackgroundLaunch;
- (void)willResignActive;
- (void)didEnterBackground;
- (void)didBecomeActive;
- (void)willTerminate;
- (void)removeRunLoopObserver;
- (void)addMainRunLoopObserver;
- (void)analysisBlockFileData;
- (void)stop;
- (void)start;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

