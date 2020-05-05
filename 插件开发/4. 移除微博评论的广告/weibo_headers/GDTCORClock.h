//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface GDTCORClock : NSObject <NSSecureCoding>
{
    long long _timeMillis;
    long long _timezoneOffsetSeconds;
    long long _kernelBootTime;
    long long _uptime;
}

+ (_Bool)supportsSecureCoding;
+ (id)clockSnapshotInTheFuture:(unsigned long long)arg1;
+ (id)snapshot;
@property(readonly, nonatomic) long long uptime; // @synthesize uptime=_uptime;
@property(readonly, nonatomic) long long kernelBootTime; // @synthesize kernelBootTime=_kernelBootTime;
@property(readonly, nonatomic) long long timezoneOffsetSeconds; // @synthesize timezoneOffsetSeconds=_timezoneOffsetSeconds;
@property(readonly, nonatomic) long long timeMillis; // @synthesize timeMillis=_timeMillis;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isAfter:(id)arg1;
- (id)init;

@end

