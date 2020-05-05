//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKEffectInput-Protocol.h"
#import "CKTimelineEffect-Protocol.h"

@class CKDispatchQueue, CKEffectLog, NSString, WBGPUImageEffectFrameBufferCache;

@interface CKEffectOutput : NSObject <CKTimelineEffect, CKEffectInput>
{
    CKEffectLog *_log;
    CKDispatchQueue *_workQueue;
    WBGPUImageEffectFrameBufferCache *_cache;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) __weak WBGPUImageEffectFrameBufferCache *cache; // @synthesize cache=_cache;
@property(nonatomic) __weak CKDispatchQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) CKEffectLog *log; // @synthesize log=_log;
- (void).cxx_destruct;
- (id)currentFrame;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1;
- (void)inputFrame:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updateParams:(CDUnknownBlockType)arg1;
- (_Bool)shouldRunAtTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

