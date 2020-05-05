//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WBPreloadModel;

@interface WBPreloadTask : NSObject
{
    _Bool _ready;
    _Bool _executing;
    _Bool _finished;
    _Bool _cancelled;
    _Bool _suspend;
    NSString *_taskId;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(nonatomic, getter=isSuspend) _Bool suspend; // @synthesize suspend=_suspend;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (_Bool)preloadEnable;
- (id)init;
- (id)description;

// Remaining properties
@property(retain, nonatomic) WBPreloadModel *model; // @dynamic model;

@end

