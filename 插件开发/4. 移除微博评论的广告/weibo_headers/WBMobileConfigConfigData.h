//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBMobileConfigConfigData : NSObject
{
}

- (id)valueForParam:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sourceLog;
@property(readonly, copy, nonatomic) NSDictionary *allValues;
- (id)configName;
- (id)arrayValueForParam:(id)arg1 defaultValue:(id)arg2;
- (id)dictionaryValueForParam:(id)arg1 defaultValue:(id)arg2;
- (_Bool)boolValueForParam:(id)arg1 defaultValue:(_Bool)arg2;
- (double)doubleValueForParam:(id)arg1 defaultValue:(double)arg2;
- (id)stringValueForParam:(id)arg1 defaultValue:(id)arg2;
- (long long)longlongValueForParam:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)getArray:(id *)arg1 param:(id)arg2;
- (_Bool)getDictionary:(id *)arg1 param:(id)arg2;
- (_Bool)getString:(id *)arg1 param:(id)arg2;
- (_Bool)getDouble:(double *)arg1 param:(id)arg2;
- (_Bool)getBool:(_Bool *)arg1 param:(id)arg2;
- (_Bool)getLongLong:(long long *)arg1 param:(id)arg2;
- (_Bool)containsParam:(id)arg1;

@end

