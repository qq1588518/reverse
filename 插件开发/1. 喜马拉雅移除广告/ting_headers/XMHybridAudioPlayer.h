//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, XMCorePlayer, XMHCapAudioMonitor, XMHCapAudioPlayerModel, XMHybridViewController;

@interface XMHybridAudioPlayer : NSObject
{
    float _audioDuration;
    float _currentTime;
    XMHCapAudioPlayerModel *_audioPlayerModel;
    id _timeObserverToken;
    XMHybridViewController *_hybridViewController;
    XMHCapAudioMonitor *_audioMonitor;
    NSString *_status;
    XMCorePlayer *_audioPlayer;
    NSTimer *_playerTimer;
}

@property(retain, nonatomic) NSTimer *playerTimer; // @synthesize playerTimer=_playerTimer;
@property(nonatomic) float currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) float audioDuration; // @synthesize audioDuration=_audioDuration;
@property(retain, nonatomic) XMCorePlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) XMHCapAudioMonitor *audioMonitor; // @synthesize audioMonitor=_audioMonitor;
@property(nonatomic) __weak XMHybridViewController *hybridViewController; // @synthesize hybridViewController=_hybridViewController;
@property(retain, nonatomic) id timeObserverToken; // @synthesize timeObserverToken=_timeObserverToken;
@property(retain, nonatomic) XMHCapAudioPlayerModel *audioPlayerModel; // @synthesize audioPlayerModel=_audioPlayerModel;
- (void).cxx_destruct;
- (void)didNeedUserLoginAuth;
- (void)didAudioFileDownload:(id)arg1 withTrackId:(unsigned long long)arg2 withRequestURL:(id)arg3 withExtData:(id)arg4;
- (void)playerTimerAction;
- (void)stopTimer;
- (void)startTimer;
- (void)playURL:(id)arg1;
- (id)convertURL:(id)arg1;
- (void)onAudioStop;
- (void)onAudioResume;
- (void)onAudioPause;
- (void)audioPlayerStatusChanged:(id)arg1;
- (void)onAudioPlayingProgress:(float)arg1;
- (void)onAudioPlay;
- (void)audioMonitorCallbackWithArgs:(id)arg1;
- (id)audioPlayArgsForCallbackType:(id)arg1 status:(id)arg2;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)play;
- (void)playAudioWithProtectedURL:(id)arg1 resId:(unsigned long long)arg2;
- (id)currentAudioPlayInfo;
- (id)init;
- (void)dealloc;

@end

