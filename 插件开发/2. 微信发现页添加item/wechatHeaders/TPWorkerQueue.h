//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TPWorkerQueue : NSObject
{
    void *_workingQueueKey;
    unsigned long long _queueType;
    NSObject<OS_dispatch_queue> *_workingQueue;
}

+ (id)workerQueueWithQueueType:(unsigned long long)arg1 queueName:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(nonatomic) unsigned long long queueType; // @synthesize queueType=_queueType;
- (void).cxx_destruct;
- (void)destoryQueue;
- (void)scheduleTaskSync:(CDUnknownBlockType)arg1;
- (void)scheduleTaskAsync:(CDUnknownBlockType)arg1;

@end

