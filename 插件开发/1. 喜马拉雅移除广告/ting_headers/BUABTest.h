//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUToDictionary-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface BUABTest : NSObject <NSCoding, BUToDictionary>
{
    NSString *_version;
    NSString *_param;
    NSDictionary *_dictionary;
}

@property(copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(copy, nonatomic) NSString *param; // @synthesize param=_param;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setupDataWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

