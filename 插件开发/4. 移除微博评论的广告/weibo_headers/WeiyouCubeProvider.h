//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WeiboCubeBaseLog-Protocol.h"
#import "WeiboCubeWeiyouTraceLogProtocol-Protocol.h"

@class NSString;

@interface WeiyouCubeProvider : NSObject <WeiboCubeWeiyouTraceLogProtocol, WeiboCubeBaseLog>
{
}

+ (id)sharedProvider;
- (id)traceLogHeaderWithTraceId:(id)arg1;
- (id)actionWithType:(unsigned long long)arg1 traceId:(id)arg2;
- (id)number64HexString:(id)arg1;
- (void)actionLogWithBaseLog:(id)arg1 extParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double endTime;
@property(retain, nonatomic) NSString *error;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *method;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *requestParams;
@property(nonatomic) unsigned long long requestStatus;
@property(copy, nonatomic) NSString *sa;
@property(nonatomic) double startTime;
@property(readonly) Class superclass;

@end

