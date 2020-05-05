//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCUnReadStory : NSObject <WCTTableCoding>
{
    unsigned int _postTime;
    unsigned int _readTimestamp;
    NSString *_username;
    NSString *_maxTid;
    NSString *_readTid;
}

+ (void)__wcdb_index_16:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)readTimestamp;
+ (const struct WCTProperty *)__wcdb_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)postTime;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)readTid;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)maxTid;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)username;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int readTimestamp; // @synthesize readTimestamp=_readTimestamp;
@property(nonatomic) unsigned int postTime; // @synthesize postTime=_postTime;
@property(retain, nonatomic) NSString *readTid; // @synthesize readTid=_readTid;
@property(retain, nonatomic) NSString *maxTid; // @synthesize maxTid=_maxTid;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

