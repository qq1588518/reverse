//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSAnalyticsEventFilter : NSObject
{
}

+ (int)javaHashCodeForString:(id)arg1;
+ (_Bool)shouldDiscardEventWithInstallationID:(id)arg1 forSamplingFactor:(long long)arg2;
+ (_Bool)samplingEnabledForEventType:(id)arg1;
+ (_Bool)shouldDiscardEvent:(id)arg1 betaToken:(id)arg2 installationID:(id)arg3 withFactor:(long long)arg4;

@end

