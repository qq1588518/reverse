//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAnalysisDevice.h"

@interface WBAnalysisRemoteDevice : WBAnalysisDevice
{
}

+ (Class)modelClass;
+ (id)sharedDevice;
- (_Bool)shouldDistributeEvent:(int)arg1 withCorrespondingTriggers:(id *)arg2;
- (_Bool)allowedPerformanceByType:(id)arg1;
- (_Bool)allowLogWithAction:(id)arg1 andExtraParameters:(id)arg2;
- (void)sendLogs:(id)arg1 withAccount:(id)arg2 toServerWithResultBlock:(CDUnknownBlockType)arg3;
- (_Bool)isEnableForLevel:(id)arg1;
- (void)outputString:(id)arg1 withInfo:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

