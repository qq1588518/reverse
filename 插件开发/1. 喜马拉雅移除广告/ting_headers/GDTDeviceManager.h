//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSArray, NSDictionary, NSString, WKWebView;
@protocol OS_dispatch_source;

@interface GDTDeviceManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *locManager;
    int _deviceType;
    int _ori;
    int _screenWidth;
    int _screenHeight;
    int _dpi;
    int _muidtype;
    NSString *_an;
    NSString *_appVersionCode;
    NSString *_appId;
    long long _lastRequestTime;
    NSArray *_adxDomainWhiteList;
    long long _seq;
    NSString *_device;
    NSString *_muid;
    NSString *_uid;
    NSString *_model;
    long long _freeDiskSpaceInBytes;
    NSString *_osver;
    NSString *_os;
    NSString *_lg;
    NSString *_m5;
    NSString *_userAgent;
    long long _connType;
    long long _carrier;
    double _lat;
    double _lng;
    double _loc_accuracy;
    NSString *_client_ip;
    NSString *_wifiBSSID;
    NSString *_qIdfa;
    NSString *_sysBootTimeSecond;
    NSString *_sysBootTimeRealSecond;
    NSString *_countryC;
    NSString *_languge;
    NSString *_currentDeviceName;
    NSString *_systemHardware;
    NSString *_systemFileTime;
    NSString *_diskS;
    NSString *_timezone;
    NSString *_machine;
    NSDictionary *_connDict;
    NSString *_appn;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_QAID;
    WKWebView *_webView;
}

+ (_Bool)isJailBroken;
+ (id)timeZone;
+ (id)disk;
+ (id)systemFileTime;
+ (unsigned long long)getSysInfo:(unsigned int)arg1;
+ (id)mobileCountryAndNetworkCode;
+ (id)carrierInfo;
+ (id)getSystemHardwareByName:(const char *)arg1;
+ (id)systemHardware;
+ (id)modelName;
+ (id)currentDeviceName;
+ (id)systemVersion;
+ (id)language;
+ (id)countryCode;
+ (long long)bootTimeSecond;
+ (id)systemBootTimeRealSecond;
+ (id)systemBootTimeSecond;
+ (long long)freeDiskSpaceInBytes;
+ (long long)carrierType;
+ (id)defaultManager;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *QAID; // @synthesize QAID=_QAID;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSString *appn; // @synthesize appn=_appn;
@property(retain, nonatomic) NSDictionary *connDict; // @synthesize connDict=_connDict;
@property(readonly, copy, nonatomic) NSString *machine; // @synthesize machine=_machine;
@property(readonly, copy, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(readonly, copy, nonatomic) NSString *diskS; // @synthesize diskS=_diskS;
@property(readonly, copy, nonatomic) NSString *systemFileTime; // @synthesize systemFileTime=_systemFileTime;
@property(readonly, copy, nonatomic) NSString *systemHardware; // @synthesize systemHardware=_systemHardware;
@property(readonly, copy, nonatomic) NSString *currentDeviceName; // @synthesize currentDeviceName=_currentDeviceName;
@property(readonly, copy, nonatomic) NSString *languge; // @synthesize languge=_languge;
@property(readonly, copy, nonatomic) NSString *countryC; // @synthesize countryC=_countryC;
@property(readonly, copy, nonatomic) NSString *sysBootTimeRealSecond; // @synthesize sysBootTimeRealSecond=_sysBootTimeRealSecond;
@property(readonly, copy, nonatomic) NSString *sysBootTimeSecond; // @synthesize sysBootTimeSecond=_sysBootTimeSecond;
@property(readonly, copy, nonatomic) NSString *qIdfa; // @synthesize qIdfa=_qIdfa;
@property(copy, nonatomic) NSString *wifiBSSID; // @synthesize wifiBSSID=_wifiBSSID;
@property(copy, nonatomic) NSString *client_ip; // @synthesize client_ip=_client_ip;
@property(nonatomic) double loc_accuracy; // @synthesize loc_accuracy=_loc_accuracy;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) long long carrier; // @synthesize carrier=_carrier;
@property(nonatomic) long long connType; // @synthesize connType=_connType;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) NSString *m5; // @synthesize m5=_m5;
@property(copy, nonatomic) NSString *lg; // @synthesize lg=_lg;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *osver; // @synthesize osver=_osver;
@property(nonatomic) long long freeDiskSpaceInBytes; // @synthesize freeDiskSpaceInBytes=_freeDiskSpaceInBytes;
@property(nonatomic) int muidtype; // @synthesize muidtype=_muidtype;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *muid; // @synthesize muid=_muid;
@property(nonatomic) int dpi; // @synthesize dpi=_dpi;
@property(nonatomic) int screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) int screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) int ori; // @synthesize ori=_ori;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *device; // @synthesize device=_device;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSArray *adxDomainWhiteList; // @synthesize adxDomainWhiteList=_adxDomainWhiteList;
@property(nonatomic) long long lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *appVersionCode; // @synthesize appVersionCode=_appVersionCode;
@property(copy, nonatomic) NSString *an; // @synthesize an=_an;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long supportedOrientationMask;
- (id)QIDFA;
- (id)formatIDFA:(id)arg1;
- (_Bool)isIPad;
- (id)macAddress;
- (id)convertWifiBSSID:(id)arg1;
- (id)getCurrentWifiInfo;
- (id)getIPAddress;
@property(readonly, copy, nonatomic) NSString *mnc;
@property(readonly, copy, nonatomic) NSString *hwMachine;
@property(readonly, copy, nonatomic) NSString *hwModel;
- (id)machineName;
@property(readonly, nonatomic) long long networkType;
@property(readonly, nonatomic) NSString *cellNative;
- (id)currentRadioAccessTechnology;
- (void)startUpdateLocation;
- (void)startLocationTimer;
- (_Bool)isRetina;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)collectDynamicInfo:(id)arg1;
- (void)collectDeviceInfo:(id)arg1;
- (void)collectSDKInfo:(id)arg1;
- (void)collectAppInfo:(id)arg1;
- (void)initializeData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

