//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTLoadAdParams, GDTLoadAdRequestExtData, NSDictionary, NSMutableDictionary, NSString;

@interface GDTLoadAdRequestBaseData : NSObject
{
    _Bool _supportHttps;
    _Bool _supportNewLaunchScreen;
    _Bool _disableServerMediation;
    int _posWidth;
    int _posHeight;
    int _adPosCount;
    NSString *_placementId;
    long long _count;
    long long _render_type;
    GDTLoadAdRequestExtData *_extReq;
    NSMutableDictionary *_jsExtMap;
    NSMutableDictionary *_splashExtMap;
    NSString *_checksum;
    GDTLoadAdParams *_loadAdParams;
    long long _sdkAdType;
    NSDictionary *_tagDict;
    long long _serverType;
}

+ (id)encryptExt:(id)arg1;
@property(nonatomic) _Bool disableServerMediation; // @synthesize disableServerMediation=_disableServerMediation;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
@property(retain, nonatomic) NSDictionary *tagDict; // @synthesize tagDict=_tagDict;
@property(nonatomic) long long sdkAdType; // @synthesize sdkAdType=_sdkAdType;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams; // @synthesize loadAdParams=_loadAdParams;
@property(copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(retain, nonatomic) NSMutableDictionary *splashExtMap; // @synthesize splashExtMap=_splashExtMap;
@property(retain, nonatomic) NSMutableDictionary *jsExtMap; // @synthesize jsExtMap=_jsExtMap;
@property(retain, nonatomic) GDTLoadAdRequestExtData *extReq; // @synthesize extReq=_extReq;
@property(nonatomic) _Bool supportNewLaunchScreen; // @synthesize supportNewLaunchScreen=_supportNewLaunchScreen;
@property(nonatomic) long long render_type; // @synthesize render_type=_render_type;
@property(nonatomic) _Bool supportHttps; // @synthesize supportHttps=_supportHttps;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) int adPosCount; // @synthesize adPosCount=_adPosCount;
@property(nonatomic) int posHeight; // @synthesize posHeight=_posHeight;
@property(nonatomic) int posWidth; // @synthesize posWidth=_posWidth;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
- (void).cxx_destruct;
- (long long)sspAdTypeWithSDKAdType:(long long)arg1;
- (long long)anAdTypeWithSDKAdType:(long long)arg1;
- (id)buildRequestExtData;
- (void)mergeExtReqDic:(id)arg1 withJsReqDic:(id)arg2;
- (void)generateCheckSumValue;
- (id)toMap;
- (long long)placementType;
- (id)init;

@end

