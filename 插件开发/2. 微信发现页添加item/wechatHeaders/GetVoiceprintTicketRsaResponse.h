//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BuiltinIPList, HostList, NSString, NetworkControl;

@interface GetVoiceprintTicketRsaResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BuiltinIPList *builtinIplist; // @dynamic builtinIplist;
@property(retain, nonatomic) NetworkControl *networkControl; // @dynamic networkControl;
@property(retain, nonatomic) HostList *newHostList; // @dynamic newHostList;
@property(retain, nonatomic) NSString *voiceprintTicket; // @dynamic voiceprintTicket;

@end

