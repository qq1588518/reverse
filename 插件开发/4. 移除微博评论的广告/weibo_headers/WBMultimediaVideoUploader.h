//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSSet, NSString, SNHTTPRequestOperationWrapper, WBCompressVideoOperation, WBNetworkClient, WBNoBaseURLNetworkClient, WBQueueUploadDebugSettingItem, WBVideoEditorCache, WBVideoTraceLog;
@protocol OS_dispatch_semaphore;

@interface WBMultimediaVideoUploader : NSObject
{
    _Bool _cancel;
    _Bool _isPrivate;
    _Bool _support_ori;
    _Bool _print_mark;
    _Bool _ignore_rotate;
    _Bool _noRequestSuccessedAfterResumeForeground;
    _Bool _ignoreErrorDueToReturnFromBackground;
    _Bool _monitorBeginBgTask;
    _Bool _willEnterDispatchQueue;
    int _retryTimesOverride;
    NSDictionary *_result;
    NSError *_error;
    CDUnknownBlockType _uploadProgressBlock;
    NSString *_discoveryInfoString;
    NSString *_identifier;
    NSString *_fileTypeString;
    WBCompressVideoOperation *_compressVideoOperation;
    NSDictionary *_discoverDict;
    NSString *_path;
    NSString *_uploadFilePath;
    NSString *_uploadFileMD5;
    unsigned long long _fileType;
    unsigned long long _fileSource;
    NSString *_originMD5;
    NSDictionary *_videoInitInfo;
    NSDictionary *_strategy;
    unsigned long long _filesize;
    long long _uploadFileSize;
    unsigned long long _currentChunkNum;
    unsigned long long _totalChunkNum;
    unsigned long long _chunkSize;
    NSString *_fileMD5String;
    double _currentChunkProgress;
    unsigned long long _startUploadLoc;
    NSString *_key;
    NSString *_cachePath;
    NSString *_initurl;
    NSString *_authStr;
    NSString *_uploadURL;
    NSArray *_backUploadURLs;
    NSString *_checkURL;
    long long _urlTag;
    NSString *_mediaID;
    NSString *_uploadID;
    NSString *_uploadProtocol;
    NSArray *_uploadedIndexes;
    long long _checkFinishCount;
    long long _chunkRetryCount;
    long long _chunkRetryDelay;
    long long _chunkDidRetryCount;
    NSString *_bussinessID;
    NSString *_bussinessDescription;
    unsigned long long _bussinessType;
    WBVideoEditorCache *_videoCache;
    NSString *_originPHAssetID;
    AVAsset *_asset;
    double _dataUploadTime;
    NSString *_extraProps;
    NSDictionary *_dmVideoProps;
    NSString *_createType;
    NSString *_videoDuration;
    NSString *_videoType;
    NSString *_videoEffectID;
    long long _auth_state;
    NSString *_videoSourceType;
    NSString *_error_operation;
    NSString *_bypass;
    NSString *_watermark;
    double _currentUploadProgress;
    NSDate *_startUploadTime;
    NSDate *_finishUploadTime;
    NSString *_customCacheDirectory;
    SNHTTPRequestOperationWrapper *_wrapper;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSDictionary *_logExtraDict;
    double _panoramaHeadingDegrees;
    double _panoramaPitchDegrees;
    NSMutableDictionary *_logs;
    NSMutableArray *_detailActions;
    unsigned long long _previousFailureCount;
    NSString *_idc;
    NSDictionary *_editInfo;
    NSString *_videoProcessUUID;
    long long _uploadVideoDefinition;
    NSDictionary *_liveDetails;
    NSNumber *_transcodeVersion;
    NSDictionary *_additionalHTTPHeaderFields;
    NSDictionary *_originFileInfo;
    double _userSendTime;
    NSArray *_playlistIds;
    NSDictionary *_contributeInfo;
    WBNetworkClient *_cronetDisabledNetworkClient;
    WBNoBaseURLNetworkClient *_cronetDisabledNoBaseURLNetworkClient;
    double _totalEnterBackgroundDuration;
    double _currentEnterBackgroundTime;
    double _mostRecentEnterBackgroundDuration;
    WBVideoTraceLog *_rootNode;
    WBQueueUploadDebugSettingItem *_uploadDebugSettingItem;
    NSSet *_chunkRetryErrorCodes;
    NSString *_cancelReason;
    struct CGSize _videoSize;
}

+ (id)convertPathToRelativePath:(id)arg1;
+ (id)getIPWithHostName:(id)arg1;
+ (id)getIPWithURL:(id)arg1;
+ (void)removeCacheInfoByFilePathArray:(id)arg1;
+ (id)uploaderWithPath:(id)arg1 fileType:(unsigned long long)arg2 fileSource:(unsigned long long)arg3 uploadFileCacheDirectory:(id)arg4 options:(id)arg5 uploadProgressBlock:(CDUnknownBlockType)arg6;
+ (id)uploaderWithPath:(id)arg1 fileType:(unsigned long long)arg2 uploadFileCacheDirectory:(id)arg3 options:(id)arg4 uploadProgressBlock:(CDUnknownBlockType)arg5;
+ (_Bool)supportsFileType:(unsigned long long)arg1 businessType:(unsigned long long)arg2 videoType:(id)arg3;
+ (_Bool)enabled;
@property(copy, nonatomic) NSString *cancelReason; // @synthesize cancelReason=_cancelReason;
@property(retain, nonatomic) NSSet *chunkRetryErrorCodes; // @synthesize chunkRetryErrorCodes=_chunkRetryErrorCodes;
@property(nonatomic) _Bool willEnterDispatchQueue; // @synthesize willEnterDispatchQueue=_willEnterDispatchQueue;
@property(retain, nonatomic) WBQueueUploadDebugSettingItem *uploadDebugSettingItem; // @synthesize uploadDebugSettingItem=_uploadDebugSettingItem;
@property(nonatomic) __weak WBVideoTraceLog *rootNode; // @synthesize rootNode=_rootNode;
@property(nonatomic) _Bool monitorBeginBgTask; // @synthesize monitorBeginBgTask=_monitorBeginBgTask;
@property(nonatomic) _Bool ignoreErrorDueToReturnFromBackground; // @synthesize ignoreErrorDueToReturnFromBackground=_ignoreErrorDueToReturnFromBackground;
@property(nonatomic) _Bool noRequestSuccessedAfterResumeForeground; // @synthesize noRequestSuccessedAfterResumeForeground=_noRequestSuccessedAfterResumeForeground;
@property(nonatomic) double mostRecentEnterBackgroundDuration; // @synthesize mostRecentEnterBackgroundDuration=_mostRecentEnterBackgroundDuration;
@property(nonatomic) double currentEnterBackgroundTime; // @synthesize currentEnterBackgroundTime=_currentEnterBackgroundTime;
@property(nonatomic) double totalEnterBackgroundDuration; // @synthesize totalEnterBackgroundDuration=_totalEnterBackgroundDuration;
@property(nonatomic) int retryTimesOverride; // @synthesize retryTimesOverride=_retryTimesOverride;
@property(retain, nonatomic) WBNoBaseURLNetworkClient *cronetDisabledNoBaseURLNetworkClient; // @synthesize cronetDisabledNoBaseURLNetworkClient=_cronetDisabledNoBaseURLNetworkClient;
@property(retain, nonatomic) WBNetworkClient *cronetDisabledNetworkClient; // @synthesize cronetDisabledNetworkClient=_cronetDisabledNetworkClient;
@property(retain, nonatomic) NSDictionary *contributeInfo; // @synthesize contributeInfo=_contributeInfo;
@property(retain, nonatomic) NSArray *playlistIds; // @synthesize playlistIds=_playlistIds;
@property(nonatomic) double userSendTime; // @synthesize userSendTime=_userSendTime;
@property(retain, nonatomic) NSDictionary *originFileInfo; // @synthesize originFileInfo=_originFileInfo;
@property(retain, nonatomic) NSDictionary *additionalHTTPHeaderFields; // @synthesize additionalHTTPHeaderFields=_additionalHTTPHeaderFields;
@property(retain, nonatomic) NSNumber *transcodeVersion; // @synthesize transcodeVersion=_transcodeVersion;
@property(retain, nonatomic) NSDictionary *liveDetails; // @synthesize liveDetails=_liveDetails;
@property(nonatomic) long long uploadVideoDefinition; // @synthesize uploadVideoDefinition=_uploadVideoDefinition;
@property(copy, nonatomic) NSString *videoProcessUUID; // @synthesize videoProcessUUID=_videoProcessUUID;
@property(retain, nonatomic) NSDictionary *editInfo; // @synthesize editInfo=_editInfo;
@property(copy, nonatomic) NSString *idc; // @synthesize idc=_idc;
@property(nonatomic) unsigned long long previousFailureCount; // @synthesize previousFailureCount=_previousFailureCount;
@property(retain, nonatomic) NSMutableArray *detailActions; // @synthesize detailActions=_detailActions;
@property(retain, nonatomic) NSMutableDictionary *logs; // @synthesize logs=_logs;
@property(nonatomic) double panoramaPitchDegrees; // @synthesize panoramaPitchDegrees=_panoramaPitchDegrees;
@property(nonatomic) double panoramaHeadingDegrees; // @synthesize panoramaHeadingDegrees=_panoramaHeadingDegrees;
@property(copy, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) SNHTTPRequestOperationWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(copy, nonatomic) NSString *customCacheDirectory; // @synthesize customCacheDirectory=_customCacheDirectory;
@property(retain, nonatomic) NSDate *finishUploadTime; // @synthesize finishUploadTime=_finishUploadTime;
@property(retain, nonatomic) NSDate *startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(nonatomic) double currentUploadProgress; // @synthesize currentUploadProgress=_currentUploadProgress;
@property(copy, nonatomic) NSString *watermark; // @synthesize watermark=_watermark;
@property(copy, nonatomic) NSString *bypass; // @synthesize bypass=_bypass;
@property(copy, nonatomic) NSString *error_operation; // @synthesize error_operation=_error_operation;
@property(copy, nonatomic) NSString *videoSourceType; // @synthesize videoSourceType=_videoSourceType;
@property(nonatomic) long long auth_state; // @synthesize auth_state=_auth_state;
@property(copy, nonatomic) NSString *videoEffectID; // @synthesize videoEffectID=_videoEffectID;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(copy, nonatomic) NSString *videoType; // @synthesize videoType=_videoType;
@property(copy, nonatomic) NSString *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *createType; // @synthesize createType=_createType;
@property(retain, nonatomic) NSDictionary *dmVideoProps; // @synthesize dmVideoProps=_dmVideoProps;
@property(copy, nonatomic) NSString *extraProps; // @synthesize extraProps=_extraProps;
@property(nonatomic) _Bool ignore_rotate; // @synthesize ignore_rotate=_ignore_rotate;
@property(nonatomic) _Bool print_mark; // @synthesize print_mark=_print_mark;
@property(nonatomic) _Bool support_ori; // @synthesize support_ori=_support_ori;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(nonatomic) double dataUploadTime; // @synthesize dataUploadTime=_dataUploadTime;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) NSString *originPHAssetID; // @synthesize originPHAssetID=_originPHAssetID;
@property(nonatomic) __weak WBVideoEditorCache *videoCache; // @synthesize videoCache=_videoCache;
@property(nonatomic) unsigned long long bussinessType; // @synthesize bussinessType=_bussinessType;
@property(copy, nonatomic) NSString *bussinessDescription; // @synthesize bussinessDescription=_bussinessDescription;
@property(copy, nonatomic) NSString *bussinessID; // @synthesize bussinessID=_bussinessID;
@property(nonatomic) long long chunkDidRetryCount; // @synthesize chunkDidRetryCount=_chunkDidRetryCount;
@property(nonatomic) long long chunkRetryDelay; // @synthesize chunkRetryDelay=_chunkRetryDelay;
@property(nonatomic) long long chunkRetryCount; // @synthesize chunkRetryCount=_chunkRetryCount;
@property(nonatomic) long long checkFinishCount; // @synthesize checkFinishCount=_checkFinishCount;
@property(retain, nonatomic) NSArray *uploadedIndexes; // @synthesize uploadedIndexes=_uploadedIndexes;
@property(copy, nonatomic) NSString *uploadProtocol; // @synthesize uploadProtocol=_uploadProtocol;
@property(copy, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(nonatomic) long long urlTag; // @synthesize urlTag=_urlTag;
@property(copy, nonatomic) NSString *checkURL; // @synthesize checkURL=_checkURL;
@property(copy, nonatomic) NSArray *backUploadURLs; // @synthesize backUploadURLs=_backUploadURLs;
@property(copy, nonatomic) NSString *uploadURL; // @synthesize uploadURL=_uploadURL;
@property(copy, nonatomic) NSString *authStr; // @synthesize authStr=_authStr;
@property(copy, nonatomic) NSString *initurl; // @synthesize initurl=_initurl;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) _Bool cancel; // @synthesize cancel=_cancel;
@property(nonatomic) unsigned long long startUploadLoc; // @synthesize startUploadLoc=_startUploadLoc;
@property(nonatomic) double currentChunkProgress; // @synthesize currentChunkProgress=_currentChunkProgress;
@property(copy, nonatomic) NSString *fileMD5String; // @synthesize fileMD5String=_fileMD5String;
@property(nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(nonatomic) unsigned long long totalChunkNum; // @synthesize totalChunkNum=_totalChunkNum;
@property(nonatomic) unsigned long long currentChunkNum; // @synthesize currentChunkNum=_currentChunkNum;
@property(nonatomic) long long uploadFileSize; // @synthesize uploadFileSize=_uploadFileSize;
@property(nonatomic) unsigned long long filesize; // @synthesize filesize=_filesize;
@property(retain, nonatomic) NSDictionary *strategy; // @synthesize strategy=_strategy;
@property(retain, nonatomic) NSDictionary *videoInitInfo; // @synthesize videoInitInfo=_videoInitInfo;
@property(copy, nonatomic) NSString *originMD5; // @synthesize originMD5=_originMD5;
@property(nonatomic) unsigned long long fileSource; // @synthesize fileSource=_fileSource;
@property(nonatomic) unsigned long long fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) NSString *uploadFileMD5; // @synthesize uploadFileMD5=_uploadFileMD5;
@property(copy, nonatomic) NSString *uploadFilePath; // @synthesize uploadFilePath=_uploadFilePath;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSDictionary *discoverDict; // @synthesize discoverDict=_discoverDict;
@property(retain, nonatomic) WBCompressVideoOperation *compressVideoOperation; // @synthesize compressVideoOperation=_compressVideoOperation;
@property(copy, nonatomic) NSString *fileTypeString; // @synthesize fileTypeString=_fileTypeString;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *discoveryInfoString; // @synthesize discoveryInfoString=_discoveryInfoString;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)_backgroundMonitorDidBeginTask;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_enterForeground;
- (void)_enterBackground;
- (void)_registerBackgroundNotification;
- (void)updateCurrentChunkSpeedLogWithUploadDataLength:(unsigned long long)arg1 duration:(float)arg2;
@property(readonly, copy, nonatomic) NSDictionary *uploadLogs;
- (void)addDebugLog:(id)arg1;
- (id)uploadLogFilePath;
- (id)folderPath;
- (void)callbackWithResult:(_Bool)arg1;
- (id)mediaProperties;
- (_Bool)isPreUploadVideo;
- (id)mediaPropertiesForInit;
- (id)definitionStr;
- (long long)definitionWithStr:(id)arg1;
- (id)generalParameters;
- (unsigned long long)readFileSize:(id)arg1;
- (id)generateFileMD5String:(id)arg1;
- (_Bool)checkUploadParameterValidation;
- (_Bool)checkInitParameterValidation;
- (_Bool)checkFileIfExists;
- (void)resetCache;
- (_Bool)removeCache;
- (void)updateCache;
- (void)readCacheData;
- (void)calTotalChunkNum;
- (id)currentChunk;
- (void)prepareNextChunk;
- (_Bool)hasChunkToUpload;
- (void)cancelUploadWithReason:(id)arg1;
- (void)cancelUpload;
- (_Bool)upload;
- (_Bool)uploadChunkShouldRetry;
- (_Bool)uploadRequestWithUrl:(id)arg1;
- (void)startSyncUpload;
- (void)startTranscode;
- (_Bool)checkIsExpired:(_Bool)arg1;
- (void)startInitRequest;
- (void)startInit;
- (_Bool)updateWithDiscoverDict;
- (void)startDiscoveryRequest;
- (void)startDiscovery;
- (void)notiProgress:(double)arg1;
- (void)startUpload;
- (void)uploadAndCheck;
- (_Bool)checkFileIsValid;
- (id)noBaseURLNetworkClient;
- (id)commonRequestNetworkClient;
- (id)initWithPath:(id)arg1 fileType:(unsigned long long)arg2 fileSource:(unsigned long long)arg3 uploadFileCacheDirectory:(id)arg4 options:(id)arg5 uploadProgressBlock:(CDUnknownBlockType)arg6;
- (void)dealloc;

@end

