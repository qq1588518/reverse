//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBXMixComponent.h"

@class AVPlayer, AVPlayerItem, NSString;

@interface WBXMixAudioComponent : WBXMixComponent
{
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    NSString *url;
    unsigned long long _status;
    _Bool _wifiplay;
}

- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)click;
- (void)listenEvents:(id)arg1 data:(id)arg2;
- (void)playbackFinished:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)parserTime:(unsigned long long)arg1;
- (void)setupAudio;
- (void)dealloc;
- (void)unload;
- (void)updateAtrributes:(id)arg1 value:(id)arg2;
- (void)appletEnterForegroundHandler:(id)arg1;
- (void)appletEnterBackgroundHandler:(id)arg1;
- (void)becomActive:(id)arg1;
- (void)enterBackground:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 attributes:(id)arg3 events:(id)arg4 page:(id)arg5;

@end

