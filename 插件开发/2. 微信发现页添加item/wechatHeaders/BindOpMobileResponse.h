//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BuiltinIPList, HostList, NSString, NetworkControl, SafeDeviceList, ShowStyleKey;

@interface BindOpMobileResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authTicket; // @dynamic authTicket;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BuiltinIPList *builtinIplist; // @dynamic builtinIplist;
@property(retain, nonatomic) NSString *cc; // @dynamic cc;
@property(retain, nonatomic) NSString *formatedMobile; // @dynamic formatedMobile;
@property(nonatomic) unsigned int mmtlsControlBitFlag; // @dynamic mmtlsControlBitFlag;
@property(nonatomic) unsigned int mobileCheckType; // @dynamic mobileCheckType;
@property(nonatomic) unsigned int needSetPwd; // @dynamic needSetPwd;
@property(retain, nonatomic) NetworkControl *networkControl; // @dynamic networkControl;
@property(retain, nonatomic) HostList *newHostList; // @dynamic newHostList;
@property(nonatomic) unsigned int obsoleteItem1; // @dynamic obsoleteItem1;
@property(retain, nonatomic) NSString *pureMobile; // @dynamic pureMobile;
@property(retain, nonatomic) NSString *pwd; // @dynamic pwd;
@property(retain, nonatomic) NSString *regSessionId; // @dynamic regSessionId;
@property(nonatomic) unsigned int restart; // @dynamic restart;
@property(nonatomic) unsigned int safeDevice; // @dynamic safeDevice;
@property(retain, nonatomic) SafeDeviceList *safeDeviceList; // @dynamic safeDeviceList;
@property(retain, nonatomic) ShowStyleKey *showStyle; // @dynamic showStyle;
@property(retain, nonatomic) NSString *smsNo; // @dynamic smsNo;
@property(retain, nonatomic) NSString *smsUpCode; // @dynamic smsUpCode;
@property(retain, nonatomic) NSString *smsUpMobile; // @dynamic smsUpMobile;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

