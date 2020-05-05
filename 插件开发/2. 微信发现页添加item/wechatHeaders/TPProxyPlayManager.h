//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITPPlayerProxy-Protocol.h"
#import "TPDLProxyPlayDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, TPDownloadProxy, TPLock;
@protocol ITPPlayerProxyDelegate, TPProxyPlayDelegate;

@interface TPProxyPlayManager : NSObject <TPDLProxyPlayDelegate, ITPPlayerProxy>
{
    _Bool _initialized;
    _Bool _canUseProxy;
    int _serviceType;
    int _playId;
    id <ITPPlayerProxyDelegate> playerProxyDelegate;
    id <TPProxyPlayDelegate> _delegate;
    TPDownloadProxy *_downloadProxy;
    TPLock *_definitionTaskLock;
    TPLock *_trackTaskLock;
    NSMutableArray *_definitionTaskArray;
    NSMutableDictionary *_trackTaskMap;
    long long _initializeTryCount;
    long long _startPosMs;
    long long _skipEndMs;
    long long _playState;
}

@property(nonatomic) long long playState; // @synthesize playState=_playState;
@property(nonatomic) long long skipEndMs; // @synthesize skipEndMs=_skipEndMs;
@property(nonatomic) long long startPosMs; // @synthesize startPosMs=_startPosMs;
@property(nonatomic) _Bool canUseProxy; // @synthesize canUseProxy=_canUseProxy;
@property(nonatomic) long long initializeTryCount; // @synthesize initializeTryCount=_initializeTryCount;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSMutableDictionary *trackTaskMap; // @synthesize trackTaskMap=_trackTaskMap;
@property(retain, nonatomic) NSMutableArray *definitionTaskArray; // @synthesize definitionTaskArray=_definitionTaskArray;
@property(retain, nonatomic) TPLock *trackTaskLock; // @synthesize trackTaskLock=_trackTaskLock;
@property(retain, nonatomic) TPLock *definitionTaskLock; // @synthesize definitionTaskLock=_definitionTaskLock;
@property(nonatomic) int playId; // @synthesize playId=_playId;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) TPDownloadProxy *downloadProxy; // @synthesize downloadProxy=_downloadProxy;
@property(nonatomic) __weak id <TPProxyPlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ITPPlayerProxyDelegate> playerProxyDelegate; // @synthesize playerProxyDelegate;
- (void).cxx_destruct;
- (id)getPlayInfo:(id)arg1;
- (long long)getAdvRemainTime;
- (int)getCurrentPlayClipNo;
- (long long)getCurrentPosition;
- (long long)getPlayerBufferLength;
- (void)onDownloadProtocolUpdateWithProtocol:(id)arg1 protocolVer:(id)arg2;
- (void)onDownloadStatusUpdateWithStatusCode:(int)arg1;
- (void)onDownloadCdnUrlExpiredWithKVInfo:(id)arg1;
- (void)onDownloadCdnUrlInfoUpdateWithUrl:(id)arg1 cdnIP:(id)arg2 uIP:(id)arg3 errcodeStr:(id)arg4;
- (void)onDownloadCdnUrlUpdate:(id)arg1;
- (id)onPlayCallbackWithMessageType:(int)arg1 ext1:(id)arg2 ext2:(id)arg3 ext3:(id)arg4 ext4:(id)arg5;
- (void)onDownloadErrorWithModuleId:(int)arg1 errorCode:(int)arg2 extInfo:(id)arg3;
- (void)onDownloadFinish;
- (void)onDownloadProgressUpdateWithPlayableDuration:(int)arg1 downloadSpeedKBs:(int)arg2 currentDownloadSizeByte:(long long)arg3 totalFileSizeByte:(long long)arg4;
- (id)getClipsByMediaAsset:(id)arg1;
- (int)startMediaAssetTaskWithMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (void)stopCurrentPlayingTask;
- (void)stopDownloadWithPlayId:(int)arg1;
- (void)resumeDownloadWithPlayId:(int)arg1;
- (void)pauseDownloadWithPlayId:(int)arg1;
- (_Bool)initializeProxyImpl;
- (_Bool)initialzeProxyIfNeeded;
- (void)setUserData;
- (_Bool)isValidPlayId:(int)arg1;
- (void)setIsActive:(_Bool)arg1;
- (id)getErrorCode;
- (void)updateVideoInfo:(id)arg1;
- (void)pushEvent:(long long)arg1;
- (long long)getProxyPlayState;
- (void)setProxyServiceType:(int)arg1;
- (void)setProxyPlayState:(long long)arg1;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)stopTrackDownloadTaskWithUrl:(id)arg1;
- (void)resumeTrackDownloadTaskWithUrl:(id)arg1;
- (void)pauseTrackDownloadTaskWithUrl:(id)arg1;
- (id)startTrackDownloadTaskWithUrl:(id)arg1 trackType:(unsigned long long)arg2 downloadParamData:(id)arg3;
- (void)finishSwitchDefinitionTaskWithDefinitionId:(long long)arg1;
- (id)startSwitchDefinitionTaskWithMediaAsset:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (id)startSwitchDefinitionTaskWithUrl:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (void)stopDownload;
- (id)startPlayTaskWithMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (void)setAssetResourceloader:(void *)arg1;
- (id)startPlayTaskWithUrl:(id)arg1 videoInfo:(id)arg2;
- (void)setPlayerOptionalParam:(id)arg1;
- (_Bool)isPlayIdValid;
- (_Bool)isAvailable;
- (id)logTag;
- (void)dealloc;
- (id)init;
- (id)getDownloadParamWithMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (id)getDownloadParamWithUrl:(id)arg1 videoInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

