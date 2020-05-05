//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YXAudioUnitCenter;
@protocol OS_dispatch_queue, YXBGMPlayerDelegate;

@interface YXSDKBgmPlayer : NSObject
{
    _Bool _loop;
    int _bufferTime;
    int _maxBufferTime;
    unsigned long long _currentEventId;
    id <YXBGMPlayerDelegate> _livePlayerDelegate;
    double _lastCurrentTime;
    YXAudioUnitCenter *_audioCenter;
    NSObject<OS_dispatch_queue> *_callBackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callBackQueue; // @synthesize callBackQueue=_callBackQueue;
@property(nonatomic) YXAudioUnitCenter *audioCenter; // @synthesize audioCenter=_audioCenter;
@property(nonatomic) double lastCurrentTime; // @synthesize lastCurrentTime=_lastCurrentTime;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) __weak id <YXBGMPlayerDelegate> livePlayerDelegate; // @synthesize livePlayerDelegate=_livePlayerDelegate;
@property(nonatomic) unsigned long long currentEventId; // @synthesize currentEventId=_currentEventId;
@property(nonatomic) int maxBufferTime; // @synthesize maxBufferTime=_maxBufferTime;
@property(nonatomic) int bufferTime; // @synthesize bufferTime=_bufferTime;
- (void).cxx_destruct;
- (void)playOrPauseBgm;
- (void)setPause:(_Bool)arg1;
- (void)onAudioRender:(void *)arg1 data:(char *)arg2 size:(unsigned int)arg3;
- (int)getAudioPlayTime;
- (int)getAudioStreamDuration;
- (void)setAudioPlayDataDelegate:(id)arg1;
- (unsigned long long)getCurrentEventId;
- (int)getBufferLength;
- (void)handleInterruption:(id)arg1;
- (void)setPlayViewAutoTransparent:(_Bool)arg1;
- (void)setLogLevel:(int)arg1;
- (void)setEnableVideo:(_Bool)arg1;
- (void)setEnableAudio:(_Bool)arg1;
- (void)enterBackground:(id)arg1;
- (void)enterForeground:(id)arg1;
- (int)cleanPlayer;
- (int)stopPlay;
- (int)startPlayRtmpUrl:(id)arg1;
- (void)EventCallback:(id)arg1 event:(unsigned long long)arg2;
- (int)updatePlayUrl:(id)arg1;
- (int)startPlay:(id)arg1;
- (int)setUIViewContentMode:(long long)arg1;
- (int)setUIView:(id)arg1 ContentMode:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

