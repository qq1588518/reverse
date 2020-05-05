//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBNLStatisticStepModel : NSObject
{
    NSString *_liveId;
    unsigned long long _step;
    double _beginTime;
    double _endTime;
    double _netTime;
    double _duringTime;
}

@property(nonatomic) double duringTime; // @synthesize duringTime=_duringTime;
@property(nonatomic) double netTime; // @synthesize netTime=_netTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) unsigned long long step; // @synthesize step=_step;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;
- (void)log:(unsigned long long)arg1 message:(id)arg2 extra:(id)arg3;
- (void)endHttp:(id)arg1 withCode:(unsigned long long)arg2 message:(id)arg3 extra:(id)arg4;
- (void)endWithCode:(unsigned long long)arg1 message:(id)arg2 extra:(id)arg3;
- (void)endWithExtra:(id)arg1;
- (void)endWithError:(id)arg1 andExtra:(id)arg2;
- (void)endWithError:(id)arg1;
- (void)end;
- (void)begin;
- (id)initStep:(unsigned long long)arg1 withLiveId:(id)arg2;

@end

