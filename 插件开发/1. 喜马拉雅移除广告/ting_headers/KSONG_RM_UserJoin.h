//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class KSONG_RM_UserInfo, NSString;

@interface KSONG_RM_UserJoin : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int animatedStyleType; // @dynamic animatedStyleType;
@property(nonatomic) unsigned long long chatId; // @dynamic chatId;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) _Bool hasAnimatedStyleType; // @dynamic hasAnimatedStyleType;
@property(nonatomic) _Bool hasChatId; // @dynamic hasChatId;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasIsNoble; // @dynamic hasIsNoble;
@property(nonatomic) _Bool hasStyleType; // @dynamic hasStyleType;
@property(nonatomic) _Bool hasUserInfo; // @dynamic hasUserInfo;
@property(nonatomic) _Bool isNoble; // @dynamic isNoble;
@property(nonatomic) int styleType; // @dynamic styleType;
@property(retain, nonatomic) KSONG_RM_UserInfo *userInfo; // @dynamic userInfo;

@end

