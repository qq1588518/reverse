//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface BUDeepLink : NSObject <NSCoding>
{
    NSString *_deepLinkURL;
    NSString *_fallbackURL;
    long long _fallbackType;
}

@property(nonatomic) long long fallbackType; // @synthesize fallbackType=_fallbackType;
@property(copy, nonatomic) NSString *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(copy, nonatomic) NSString *deepLinkURL; // @synthesize deepLinkURL=_deepLinkURL;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setupDataWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

