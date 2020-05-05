//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ALiNetServiceBase : NSObject
{
    struct _opaque_pthread_rwlock_t _propertyRWLock;
    double _timeoutSeconds;
    long long _netType;
    NSMutableArray *_packetList;
    NSMutableArray *_waitingPacketList;
}

@property(retain, nonatomic) NSMutableArray *waitingPacketList; // @synthesize waitingPacketList=_waitingPacketList;
@property(retain, nonatomic) NSMutableArray *packetList; // @synthesize packetList=_packetList;
@property(nonatomic) long long netType; // @synthesize netType=_netType;
@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
- (void).cxx_destruct;
- (_Bool)shouldRetry:(id)arg1;
- (_Bool)performSend:(id)arg1;
- (_Bool)inerProcessPacket:(id)arg1 bWaiting:(_Bool)arg2;
- (_Bool)processPacket:(id)arg1;
- (void)netPacketFail:(id)arg1 error:(id)arg2;
- (void)netPacketSuccess:(id)arg1 data:(id)arg2;
- (_Bool)ConbineInWaitingList:(id)arg1;
- (void)removeFromWaitingList:(id)arg1;
- (void)addToWaitingList:(id)arg1;
- (_Bool)ContainInList:(id)arg1;
- (void)removeFromList:(id)arg1;
- (void)addToList:(id)arg1;
- (void)dealloc;
- (id)init;

@end

