//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionLocation, BaseRequest, NSMutableArray, NSString;

@interface AALaunchByPersonReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionLocation *actionLocation; // @dynamic actionLocation;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *groupid; // @dynamic groupid;
@property(nonatomic) unsigned long long operationTimestamp; // @dynamic operationTimestamp;
@property(retain, nonatomic) NSMutableArray *payerList; // @dynamic payerList;
@property(retain, nonatomic) NSString *pfOrderNo; // @dynamic pfOrderNo;
@property(retain, nonatomic) NSString *picCdnThumbUrl; // @dynamic picCdnThumbUrl;
@property(retain, nonatomic) NSString *picCdnUrl; // @dynamic picCdnUrl;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned long long totalPayAmount; // @dynamic totalPayAmount;

@end

