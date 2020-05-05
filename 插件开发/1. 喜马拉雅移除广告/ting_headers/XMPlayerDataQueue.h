//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface XMPlayerDataQueue : NSObject
{
    CDStruct_c5d49230 audioDataBuffer;
    NSObject<OS_dispatch_semaphore> *fullWaiting;
    NSObject<OS_dispatch_semaphore> *emptyWating;
    CDStruct_20644ef1 *_packetData;
    int _aqBufferMinLen;
    int _dequeuePacketsCount;
    int _enqueuePacketsCount;
    struct _opaque_pthread_mutex_t _queueBufferMutex;
    struct _opaque_pthread_cond_t _queueBufferReadyCond;
    NSMutableDictionary *_playDataLenDict;
}

@property(retain, nonatomic) NSMutableDictionary *playDataLenDict; // @synthesize playDataLenDict=_playDataLenDict;
- (_Bool)checkCanAudioUnitStart;
- (_Bool)checkDataBufferIsEmpty;
- (_Bool)checkDataBufferIsFull;
- (void)dequeueAudioBufferListData:(struct AudioBufferList *)arg1;
- (void)dequeueAudioBufferLisDataBuffer:(void *)arg1 withLen:(unsigned short *)arg2;
- (void)enqueueAudioBufferLisDataBuffer:(void *)arg1 withLen:(unsigned short *)arg2;
- (void)dequeueAudioData:(void *)arg1 withLen:(unsigned short *)arg2;
- (void)enqueueAudioData:(void *)arg1 withLen:(unsigned short)arg2;
- (void)destroyDataBuffer;
- (void)createDataBuffer;
- (void)dealloc;
- (id)init;
- (id)initWithAudioDataBufferLength:(int)arg1;

@end

