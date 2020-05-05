//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface XMGatewayManager : NSObject
{
    _Bool _hasSyncedWhenNoKey;
    NSArray *_gwSwitches;
    double _lastSyncedTime;
    double _lastSyncedTimeAbnormal;
    long long _syncIntervalAbnormal;
}

+ (_Bool)checkIfGatewayCheckEnable;
+ (id)linkeyeServerURL;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool hasSyncedWhenNoKey; // @synthesize hasSyncedWhenNoKey=_hasSyncedWhenNoKey;
@property long long syncIntervalAbnormal; // @synthesize syncIntervalAbnormal=_syncIntervalAbnormal;
@property(nonatomic) double lastSyncedTimeAbnormal; // @synthesize lastSyncedTimeAbnormal=_lastSyncedTimeAbnormal;
@property(nonatomic) double lastSyncedTime; // @synthesize lastSyncedTime=_lastSyncedTime;
@property(retain) NSArray *gwSwitches; // @synthesize gwSwitches=_gwSwitches;
- (void).cxx_destruct;
- (void)tryRequestSouthGate:(_Bool)arg1 needHandleNoKeyCondition:(_Bool)arg2;
- (void)updateSyncInterval:(id)arg1;
- (void)updateLastSyncedTimeAbnormal;
- (void)updateLastSyncedTime;
- (_Bool)checkIfLocalSwitchOn:(id)arg1;
- (void)saveGateWaySwitches:(id)arg1;
- (void)requestSouthGateSwitch;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

