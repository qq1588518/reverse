//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPBMessage, NSString, XMIMBaseSocket;

@protocol XMIMBaseSocketDelegate <NSObject>
- (NSString *)imJoinRspMsgNameOfSocket:(XMIMBaseSocket *)arg1;
- (GPBMessage *)imJoinReqMsgOfSocket:(XMIMBaseSocket *)arg1;
- (_Bool)imSocket:(XMIMBaseSocket *)arg1 recvJoinRsp:(GPBMessage *)arg2;
- (void)imSocket:(XMIMBaseSocket *)arg1 recvNewMsg:(GPBMessage *)arg2;
- (void)imSocketCSUnreachable:(XMIMBaseSocket *)arg1;

@optional
- (NSString *)imLeaveRspMsgNameOfSocket:(XMIMBaseSocket *)arg1;
- (GPBMessage *)imLeaveReqMsgOfSocket:(XMIMBaseSocket *)arg1;
- (GPBMessage *)imHeartbeatMsgOfSocket:(XMIMBaseSocket *)arg1;
- (NSString *)imHeartbeatMsgNameOfSocket:(XMIMBaseSocket *)arg1;
@end

