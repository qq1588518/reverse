//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, TPLoopbackParams, TPPlayerDataSource, TPPlayerQueue, UIView;

@interface TPPlaybackParams : NSObject
{
    _Bool _outputMute;
    _Bool _allowsExternalPlayback;
    _Bool _usesExternalPlaybackWhileExternalScreenIsActive;
    _Bool _enableResourceLoader;
    UIView *_playerView;
    double _playSpeedRatio;
    double _audioGainRatio;
    TPPlayerQueue *_playerQueue;
    long long _playerScene;
    unsigned long long _videoGravity;
    unsigned long long _externalPlaybackVideoGravity;
    TPPlayerDataSource *_dataSource;
    TPLoopbackParams *_loopbackParams;
    struct NSMutableDictionary *_optionalConfig;
    struct NSMutableArray *_trackList;
    struct NSMutableDictionary *_selectedTrackInfo;
    struct NSMutableDictionary *_selectedTrackOpaque;
}

@property(retain, nonatomic) NSMutableDictionary *selectedTrackOpaque; // @synthesize selectedTrackOpaque=_selectedTrackOpaque;
@property(retain, nonatomic) NSMutableDictionary *selectedTrackInfo; // @synthesize selectedTrackInfo=_selectedTrackInfo;
@property(retain, nonatomic) NSMutableArray *trackList; // @synthesize trackList=_trackList;
@property(retain, nonatomic) NSMutableDictionary *optionalConfig; // @synthesize optionalConfig=_optionalConfig;
@property(retain, nonatomic) TPLoopbackParams *loopbackParams; // @synthesize loopbackParams=_loopbackParams;
@property(retain, nonatomic) TPPlayerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long externalPlaybackVideoGravity; // @synthesize externalPlaybackVideoGravity=_externalPlaybackVideoGravity;
@property(nonatomic) unsigned long long videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) long long playerScene; // @synthesize playerScene=_playerScene;
@property(retain, nonatomic) TPPlayerQueue *playerQueue; // @synthesize playerQueue=_playerQueue;
@property(nonatomic) _Bool enableResourceLoader; // @synthesize enableResourceLoader=_enableResourceLoader;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive; // @synthesize usesExternalPlaybackWhileExternalScreenIsActive=_usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic) _Bool outputMute; // @synthesize outputMute=_outputMute;
@property(nonatomic) double audioGainRatio; // @synthesize audioGainRatio=_audioGainRatio;
@property(nonatomic) double playSpeedRatio; // @synthesize playSpeedRatio=_playSpeedRatio;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (id)queueStringOptionalParamValueForKey:(unsigned long long)arg1;
- (id)queueIntOptionalParamValueForKey:(unsigned long long)arg1;
- (id)stringOptionalParamValueForKey:(unsigned long long)arg1;
- (long long)boolOptionalParamValueForKey:(unsigned long long)arg1;
- (long long)longOptionalParamValueForKey:(unsigned long long)arg1;
- (id)allTrackList;
- (id)allOptionParams;
- (_Bool)isDataSourceValid;
- (long long)selectedTrackOpaqueForType:(unsigned long long)arg1;
- (id)selectedTrackInfoForType:(unsigned long long)arg1;
- (void)syncAllTracks:(id)arg1;
- (void)removeSelectedTrackAtIndex:(unsigned long long)arg1;
- (void)saveSelectedTrackInfo:(id)arg1 withOpaque:(long long)arg2;
- (void)setLoopback:(_Bool)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (void)addAudioTrackSource:(id)arg1 name:(id)arg2;
- (void)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3;
- (void)addOptionalParams:(id)arg1;
- (void)setMediaAsset:(id)arg1;
- (void)setUrlDataSource:(id)arg1;
- (void)reset;
- (id)init;

@end

