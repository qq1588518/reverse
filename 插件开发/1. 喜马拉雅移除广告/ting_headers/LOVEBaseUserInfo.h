//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, LOVEBaseFansCard, NSString;

@interface LOVEBaseUserInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) LOVEBaseFansCard *fansCard; // @dynamic fansCard;
@property(nonatomic) _Bool hasFansCard; // @dynamic hasFansCard;
@property(nonatomic) _Bool hasLevel; // @dynamic hasLevel;
@property(nonatomic) _Bool hasNickname; // @dynamic hasNickname;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) int level; // @dynamic level;
@property(copy, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) GPBInt32Array *tagsArray; // @dynamic tagsArray;
@property(readonly, nonatomic) unsigned long long tagsArray_Count; // @dynamic tagsArray_Count;
@property(nonatomic) unsigned long long userId; // @dynamic userId;

@end

