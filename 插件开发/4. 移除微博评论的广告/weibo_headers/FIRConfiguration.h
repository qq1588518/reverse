//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRAnalyticsConfiguration;

@interface FIRConfiguration : NSObject
{
    FIRAnalyticsConfiguration *_analyticsConfiguration;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FIRAnalyticsConfiguration *analyticsConfiguration; // @synthesize analyticsConfiguration=_analyticsConfiguration;
- (void).cxx_destruct;
- (void)setLoggerLevel:(long long)arg1;
- (id)init;

@end

