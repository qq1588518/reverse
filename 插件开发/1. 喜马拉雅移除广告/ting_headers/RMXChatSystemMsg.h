//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface RMXChatSystemMsg : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long chatId; // @dynamic chatId;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) _Bool hasChatId; // @dynamic hasChatId;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int type; // @dynamic type;

@end

