//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AdvertiseObject, BaseResponse, SKBuiltinBuffer_t, SnsADObject, SnsRecommendObject;

@interface SnsADObjectDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *adDynamicInfoBuffer; // @dynamic adDynamicInfoBuffer;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SnsADObject *object; // @dynamic object;
@property(retain, nonatomic) AdvertiseObject *remindAdobject; // @dynamic remindAdobject;
@property(retain, nonatomic) SKBuiltinBuffer_t *session; // @dynamic session;
@property(retain, nonatomic) SnsRecommendObject *snsRecommendObject; // @dynamic snsRecommendObject;

@end

