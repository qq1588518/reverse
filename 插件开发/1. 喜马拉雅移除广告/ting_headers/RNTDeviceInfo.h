//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeviceInfoModel;

@interface RNTDeviceInfo : NSObject
{
    DeviceInfoModel *_deviceModel;
}

+ (id)shareDeviceInfo;
@property(retain, nonatomic) DeviceInfoModel *deviceModel; // @synthesize deviceModel=_deviceModel;
- (void).cxx_destruct;
- (id)sharedUUID;
- (id)hardwareString;
- (id)modelType;
- (id)udidFromKeychain;
- (id)udid;
- (void)saveUUIDToLocal;
- (id)init;
- (void)dealloc;
- (void)setUDID:(id)arg1;
- (id)getDeviceBasicInfo;

@end

