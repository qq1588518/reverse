//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface TransferPhonePayCheckReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *extendStr; // @dynamic extendStr;
@property(nonatomic) unsigned long long fee; // @dynamic fee;
@property(retain, nonatomic) NSString *placeorderToken; // @dynamic placeorderToken;
@property(retain, nonatomic) NSString *rcvrToken; // @dynamic rcvrToken;
@property(retain, nonatomic) NSString *receiverOpenid; // @dynamic receiverOpenid;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(retain, nonatomic) NSString *transactionId; // @dynamic transactionId;
@property(retain, nonatomic) NSString *transferId; // @dynamic transferId;

@end

