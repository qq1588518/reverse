//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WBSegmentChannelModelProtocol <NSObject>
@property(nonatomic) _Bool defaultAdd;
@property(copy, nonatomic) NSString *apiPath;
@property(nonatomic) unsigned long long type;
@property(copy, nonatomic) NSString *scheme;
@property(copy, nonatomic) NSString *containerId;
@property(copy, nonatomic) NSString *name;
- (NSString *)cornerBadgeImageURL;
- (Class)viewControllerClass;
@end

