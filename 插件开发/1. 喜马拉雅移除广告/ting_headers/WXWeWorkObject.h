//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXWeWorkObject : NSObject
{
    int _subType;
    NSData *_data;
    NSString *_extInfo;
}

+ (id)object;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end

