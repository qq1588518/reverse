//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface XMPacketIndex : NSObject <NSCoding, NSCopying>
{
    long long index;
    long long offset;
    long long length;
}

@property(nonatomic) long long length; // @synthesize length;
@property(nonatomic) long long offset; // @synthesize offset;
@property(nonatomic) long long index; // @synthesize index;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

