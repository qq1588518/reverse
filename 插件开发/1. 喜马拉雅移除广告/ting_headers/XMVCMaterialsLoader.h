//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, XMVCMediaLoader, XMVCPropModel, XMVCTrimAudioInfo, XMVCTrimVideoInfo, XMVCVideoModel;

@interface XMVCMaterialsLoader : NSObject
{
    _Bool _readySuccess;
    _Bool _isIdo;
    _Bool _didStop;
    _Bool _isRuning;
    float _progress;
    float _lastProgress;
    float _pwt;
    NSError *_error;
    XMVCVideoModel *_idoVideoInfo;
    XMVCTrimAudioInfo *_audioTrimInfo;
    XMVCTrimVideoInfo *_videoTrimInfo;
    XMVCPropModel *_prop;
    XMVCPropModel *_fliter;
    NSDictionary *_videoDict;
    NSDictionary *_materialsDict;
    XMVCMediaLoader *_mediaLoader;
    CDUnknownBlockType _progressCallback;
    CDUnknownBlockType _completionCallback;
}

@property(copy, nonatomic) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property(copy, nonatomic) CDUnknownBlockType progressCallback; // @synthesize progressCallback=_progressCallback;
@property(nonatomic) _Bool isRuning; // @synthesize isRuning=_isRuning;
@property(nonatomic) _Bool didStop; // @synthesize didStop=_didStop;
@property(nonatomic) float pwt; // @synthesize pwt=_pwt;
@property(nonatomic) float lastProgress; // @synthesize lastProgress=_lastProgress;
@property(retain, nonatomic) XMVCMediaLoader *mediaLoader; // @synthesize mediaLoader=_mediaLoader;
@property(copy, nonatomic) NSDictionary *materialsDict; // @synthesize materialsDict=_materialsDict;
@property(copy, nonatomic) NSDictionary *videoDict; // @synthesize videoDict=_videoDict;
@property(nonatomic) _Bool isIdo; // @synthesize isIdo=_isIdo;
@property(retain, nonatomic) XMVCPropModel *fliter; // @synthesize fliter=_fliter;
@property(retain, nonatomic) XMVCPropModel *prop; // @synthesize prop=_prop;
@property(retain, nonatomic) XMVCTrimVideoInfo *videoTrimInfo; // @synthesize videoTrimInfo=_videoTrimInfo;
@property(retain, nonatomic) XMVCTrimAudioInfo *audioTrimInfo; // @synthesize audioTrimInfo=_audioTrimInfo;
@property(retain, nonatomic) XMVCVideoModel *idoVideoInfo; // @synthesize idoVideoInfo=_idoVideoInfo;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool readySuccess; // @synthesize readySuccess=_readySuccess;
- (void).cxx_destruct;
- (void)loadIdoVideoIfNeed:(CDUnknownBlockType)arg1;
- (void)loadVideoIfNeed:(CDUnknownBlockType)arg1;
- (void)loadAudioIfNeed:(CDUnknownBlockType)arg1;
- (void)onCompletion;
- (void)onProgress:(float)arg1;
- (void)stop;
- (void)start;
- (void)rinseData;
- (void)analysisDatas;
- (id)initWithVideo:(id)arg1 materials:(id)arg2 isIdo:(_Bool)arg3;

@end

