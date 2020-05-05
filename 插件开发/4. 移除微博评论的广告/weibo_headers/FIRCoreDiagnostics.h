//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRCoreDiagnosticsInterop-Protocol.h"

@class FIRCoreDiagnosticsDateFileStorage, GDTCORTransport, NSString;
@protocol OS_dispatch_queue;

@interface FIRCoreDiagnostics : NSObject <FIRCoreDiagnosticsInterop>
{
    NSObject<OS_dispatch_queue> *_diagnosticsQueue;
    GDTCORTransport *_transport;
    FIRCoreDiagnosticsDateFileStorage *_heartbeatDateStorage;
}

+ (void)sendDiagnosticsData:(id)arg1;
+ (id)deviceModel;
+ (id)filePathURLWithName:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) FIRCoreDiagnosticsDateFileStorage *heartbeatDateStorage; // @synthesize heartbeatDateStorage=_heartbeatDateStorage;
@property(readonly, nonatomic) GDTCORTransport *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *diagnosticsQueue; // @synthesize diagnosticsQueue=_diagnosticsQueue;
- (void).cxx_destruct;
- (_Bool)isDate:(id)arg1 inSameDayOrBeforeThan:(id)arg2;
- (void)setHeartbeatFlagIfNeededToConfig:(struct _logs_proto_mobilesdk_ios_ICoreConfiguration *)arg1;
- (void)sendDiagnosticsData:(id)arg1;
- (id)initWithTransport:(id)arg1 heartbeatDateStorage:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

