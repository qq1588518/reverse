//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLTools : NSObject
{
}

+ (id)cl_getUUID;
+ (void)writeLogWithParamr:(id)arg1;
+ (void)writeLogWithString:(id)arg1;
+ (id)clDescripetionWithError:(id)arg1;
+ (id)clCodeWithError:(id)arg1;
+ (void)showLoading:(id)arg1 animationBlock:(CDUnknownBlockType)arg2;
+ (void)bringLoadingToFront:(id)arg1;
+ (void)hideLoading:(id)arg1;
+ (void)showLoading:(id)arg1 loadingSize:(id)arg2 indicatorStyle:(id)arg3 cornerRadius:(id)arg4 backgroundColor:(id)arg5 tintColor:(id)arg6;
+ (void)showMessage:(id)arg1 message:(id)arg2;
+ (struct CGSize)screenSizeFor35Inch;
+ (struct CGSize)screenSizeFor40Inch;
+ (struct CGSize)screenSizeFor47Inch;
+ (struct CGSize)screenSizeFor55Inch;
+ (struct CGSize)screenSizeFor58Inch;
+ (struct CGSize)screenSizeFor61Inch;
+ (struct CGSize)screenSizeFor65Inch;
+ (_Bool)is58InchScreen;
+ (_Bool)isNotchedScreen;
+ (struct UIEdgeInsets)safeAreaInsetsForDeviceWithNotch;
+ (id)getImageResourceForNameFromCLShanYanSDKBundle:(id)arg1;
+ (id)imageCompressWithSimple:(id)arg1 scale:(float)arg2;
+ (id)hexStringFromString:(id)arg1;
+ (id)stringFromHexString:(id)arg1;
+ (id)aes_decryptData:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)aes_encryptData:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)AES128operation:(unsigned int)arg1 data:(id)arg2 key:(id)arg3 iv:(id)arg4;
+ (id)aes_encryptData:(id)arg1 keyString:(id)arg2 ivString:(id)arg3;
+ (id)decryptData:(id)arg1 publicKey:(id)arg2;
+ (id)decryptString:(id)arg1 publicKey:(id)arg2;
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;
+ (id)encryptString:(id)arg1 publicKey:(id)arg2;
+ (id)decryptData:(id)arg1 privateKey:(id)arg2;
+ (id)decryptString:(id)arg1 privateKey:(id)arg2;
+ (id)decryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (id)encryptData:(id)arg1 privateKey:(id)arg2;
+ (id)encryptString:(id)arg1 privateKey:(id)arg2;
+ (id)encryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2 isSign:(_Bool)arg3;
+ (struct __SecKey *)addPrivateKey:(id)arg1;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)stripPrivateKeyHeader:(id)arg1;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (_Bool)isGzippedData:(id)arg1;
+ (id)gunzippedData:(id)arg1;
+ (id)gzippedData:(id)arg1;
+ (id)gzippedDataWithCompressionLevel:(float)arg1 originalData:(id)arg2;
+ (id)base64Url:(id)arg1;
+ (id)base64DecodeString:(id)arg1;
+ (id)base64EncodeString:(id)arg1;
+ (id)URLDecodedString:(id)arg1;
+ (id)URLEncodedString:(id)arg1;
+ (id)dictionaryWithJsonString:(id)arg1;
+ (id)stringByReplaceUnicode:(id)arg1;
+ (id)replaceUnicode:(id)arg1;
+ (id)cl_getWiFiNetStutas;
+ (id)cl_getCellNetStutas;
+ (id)getIPAddresses;
+ (id)getIPAddress:(_Bool)arg1;
+ (id)getIpAddressWIFI;
+ (id)cl_getIpAddressCell;
+ (id)cl_ipAddressWithIfaName:(id)arg1;
+ (id)getDeviceName;
+ (id)getDeviceModel;
+ (id)md5:(id)arg1;
+ (id)secretLoginAndMachineCheckhmacsha1:(id)arg1 key:(id)arg2;
+ (id)secretLoginAndMachineCheckescapedWithString:(id)arg1;
+ (id)secretLoginAndMachineCheckcurrentTimeStr;
+ (id)secretLoginAndMachineCheckuuidString;
+ (id)cl_shanyan_pks;
+ (id)api_sdk_uploadLog_URL;
+ (id)api_sdk_url;
+ (id)cl_sdk_model_envirment;

@end

