//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACTReporter.h"

@class NSString;

@interface ACTConversionReporter : ACTReporter
{
}

+ (_Bool)registerReferrer:(id)arg1;
+ (void)reportWithProductID:(id)arg1 value:(id)arg2 isRepeatable:(_Bool)arg3;
+ (void)reportWithConversionID:(id)arg1 label:(id)arg2 value:(id)arg3 isRepeatable:(_Bool)arg4;
@property(copy, nonatomic) NSString *value;
- (id)initWithProductID:(id)arg1 value:(id)arg2 isRepeatable:(_Bool)arg3;
- (id)initWithConversionID:(id)arg1 label:(id)arg2 value:(id)arg3 isRepeatable:(_Bool)arg4;

@end

