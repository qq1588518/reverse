//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol WVSerializableProtocol <NSObject>

@optional
+ (NSDictionary *)subClassForProperties;
+ (NSString *)containerKeyForProperty;
+ (NSDictionary *)keyPathsForProperties;
+ (NSArray *)ignoredProperties;
- (NSString *)dumpProperty:(NSString *)arg1 withValue:(id)arg2 maxLength:(unsigned long long)arg3;
- (void)onDeserialization;
@end

