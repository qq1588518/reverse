//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionSheetInfo, BaseResponse, CheckJsApiInfo, LaunchAction, NSString, OperationInfo, PublicLibUpdateInfo, WxaAppHostInfo;

@interface LaunchWxaAppResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionSheetInfo *actionSheet; // @dynamic actionSheet;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CheckJsApiInfo *checkJsApi; // @dynamic checkJsApi;
@property(retain, nonatomic) WxaAppHostInfo *hostInfo; // @dynamic hostInfo;
@property(retain, nonatomic) LaunchAction *launch; // @dynamic launch;
@property(retain, nonatomic) OperationInfo *operation; // @dynamic operation;
@property(retain, nonatomic) PublicLibUpdateInfo *publicLibUpdate; // @dynamic publicLibUpdate;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

