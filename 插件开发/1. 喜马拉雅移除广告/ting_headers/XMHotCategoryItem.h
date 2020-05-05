//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface XMHotCategoryItem : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    NSString *title;
    long long categoryId;
    NSString *categoryName;
    NSMutableArray *tracks;
    NSString *categoryTag;
}

@property(copy, nonatomic) NSString *categoryTag; // @synthesize categoryTag;
@property(retain, nonatomic) NSMutableArray *tracks; // @synthesize tracks;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName;
@property(nonatomic) long long categoryId; // @synthesize categoryId;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)updatePropertiesFromDictionary:(id)arg1;
- (void)copyPropertiesFrom:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end

