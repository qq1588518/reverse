//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPBMessage, NSArray, XMLiveChatCustomMsg, XMLiveChatKickOut, XMLiveChatMsg;

@protocol XMLiveChatMessageHandlerDelegate <NSObject>

@optional
- (void)recvNormalMsg:(GPBMessage *)arg1;
- (void)recvCachedMessages:(NSArray *)arg1;
- (void)recvKickOut:(XMLiveChatKickOut *)arg1;
- (void)recvCustomMsg:(XMLiveChatCustomMsg *)arg1;
- (void)recvNewLiveMsg:(XMLiveChatMsg *)arg1;
@end

