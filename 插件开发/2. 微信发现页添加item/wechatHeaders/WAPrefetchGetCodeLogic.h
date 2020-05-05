//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "CNetworkStatusExt-Protocol.h"
#import "IWALocalCacheMgrExt-Protocol.h"
#import "WAPackageDownloadUrlFetcherExtension-Protocol.h"

@class NSMutableArray, NSString;

@interface WAPrefetchGetCodeLogic : MMObject <WAPackageDownloadUrlFetcherExtension, IWALocalCacheMgrExt, CNetworkStatusExt>
{
    NSMutableArray *_arrRequestingCmd;
    NSMutableArray *_arrWaitingCmd;
}

@property(retain, nonatomic) NSMutableArray *arrWaitingCmd; // @synthesize arrWaitingCmd=_arrWaitingCmd;
@property(retain, nonatomic) NSMutableArray *arrRequestingCmd; // @synthesize arrRequestingCmd=_arrRequestingCmd;
- (void).cxx_destruct;
- (void)markRequestDidFailedCmd:(id)arg1;
- (_Bool)isCmdReachMaxRetryCount:(id)arg1;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (_Bool)startDownloadPkgWithAppInfoData:(id)arg1 CDNURL:(id)arg2 CDNURLWithZstd:(id)arg3 patchURL:(id)arg4;
- (void)onPackageDownloadUrlFetchFailWithErrCode:(long long)arg1 forInfoData:(id)arg2;
- (void)onPackageDownloadUrlFetchSuccessWithDownloadUrl:(id)arg1 zstdUrl:(id)arg2 patchUrl:(id)arg3 forInfoData:(id)arg4;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)checkWaitingQueue;
- (void)saveLocalData;
- (void)removeCmd:(id)arg1;
- (void)removeWaitingCmd:(id)arg1;
- (void)removeDownloadingCmd:(id)arg1;
- (void)removeDownloadingCmdForInfoData:(id)arg1;
- (_Bool)isAppInfoDataInDownloadingCode:(id)arg1;
- (_Bool)isNetworkTypeBetter2G:(unsigned int)arg1;
- (_Bool)isNetworkTypeBetter3G:(unsigned int)arg1;
- (_Bool)isNetworkTypeBetter4G:(unsigned int)arg1;
- (_Bool)checkCurrentNetworkValidForCmd:(id)arg1;
- (unsigned int)getNetworkType;
- (id)getRequestingCmdForAppInfoData:(id)arg1;
- (void)addCmdIntoWaitingQueue:(id)arg1;
- (void)addCmdIntoRequestingQueue:(id)arg1;
- (unsigned long long)checkLocalVersion:(id)arg1;
- (void)elimilateCmdFromWaitingQueueWhichPkgVersionLowerThanTargetCmd:(id)arg1;
- (_Bool)enqueueCheck:(id)arg1;
- (void)startGetCodeWithCmd:(id)arg1;
- (void)executeGetCodeCmd:(id)arg1;
- (void)resumeLocalData;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

