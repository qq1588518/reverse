//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WBTimelineTagDelegate <NSObject>
@property(nonatomic) _Bool show_delete;
@property(retain, nonatomic) NSString *delete_title;
@property(retain, nonatomic) NSString *detail_title;
@property(retain, nonatomic) NSString *url_type_pic;
@property(nonatomic) long long type;
@property(retain, nonatomic) NSString *oid;
@property(retain, nonatomic) NSString *scheme;
@property(retain, nonatomic) NSString *name;
- (NSString *)validUrlTypeImageURL;
@end

