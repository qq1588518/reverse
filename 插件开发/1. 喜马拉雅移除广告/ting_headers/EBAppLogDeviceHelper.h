//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EBAppLogDeviceHelper : NSObject
{
}

+ (id)systemVersion;
+ (long long)timeZoneOffset;
+ (id)timeZoneName;
+ (id)currentRegion;
+ (id)currentLanguage;
+ (id)currentSystemLanguage;
+ (id)IDFVString;
+ (id)IDFAString;
+ (id)fetchOpenUDIDFromKeychain;
+ (void)saveOpenUDIDToKeychain:(id)arg1;
+ (id)openUDID;
+ (id)resolutionString;
+ (struct CGSize)resolution;
+ (double)screenScale;
+ (id)decivceModel;
+ (id)machineModel;
+ (id)platformName;
+ (_Bool)isJailBroken;

@end

