//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HttpDnsExtensionProtocol-Protocol.h"
#import "LMMediaPlayerDelegate-Protocol.h"
#import "XMAppAudioAction-Protocol.h"
#import "XMCoreLiveDelegate-Protocol.h"

@class LMMediaPlayer, NSArray, NSDate, NSDictionary, NSMutableArray, NSString, NSURL, XMCoreLive, XMLiveRadioItem, XMLiveRadioProgramItem, XMNRequest, XMTimer;
@protocol XMLiveRadioPlayerDelegate;

@interface XMLiveRadioPlayer : NSObject <LMMediaPlayerDelegate, HttpDnsExtensionProtocol, XMCoreLiveDelegate, XMAppAudioAction>
{
    LMMediaPlayer *mediaPlayer;
    XMCoreLive *coreLivePlayer;
    XMCoreLive *ringPlayer;
    NSString *ringCachePath;
    long long _currentProgramIndex;
    _Bool _badNetPlay;
    long long _livePlayErrorCount;
    unsigned long long _streamConnectStatus;
    unsigned long long _playStash;
    _Bool _sameRadio;
    _Bool _isWaitingAd;
    _Bool _isPhoneCalling;
    long long _currentTime;
    id <XMLiveRadioPlayerDelegate> _delegate;
    XMLiveRadioItem *_radioItem;
    XMLiveRadioProgramItem *_programItem;
    NSMutableArray *_programListArray;
    NSDate *_startPlayDate;
    unsigned long long _mode;
    unsigned long long _liveMode;
    NSDictionary *_tagData;
    unsigned long long _playType;
    XMNRequest *_programListRequest;
    XMNRequest *_realInfoRequest;
    NSArray *_playList;
    XMTimer *_liveRealInfoTimer;
}

+ (id)playUrlPathExtension:(id)arg1;
+ (id)getLivingCachePath;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(nonatomic) _Bool isPhoneCalling; // @synthesize isPhoneCalling=_isPhoneCalling;
@property(retain, nonatomic) XMTimer *liveRealInfoTimer; // @synthesize liveRealInfoTimer=_liveRealInfoTimer;
@property(retain, nonatomic) NSArray *playList; // @synthesize playList=_playList;
@property(retain, nonatomic) XMNRequest *realInfoRequest; // @synthesize realInfoRequest=_realInfoRequest;
@property(retain, nonatomic) XMNRequest *programListRequest; // @synthesize programListRequest=_programListRequest;
@property(nonatomic) unsigned long long playType; // @synthesize playType=_playType;
@property(retain, nonatomic) NSDictionary *tagData; // @synthesize tagData=_tagData;
@property(readonly, nonatomic) _Bool isWaitingAd; // @synthesize isWaitingAd=_isWaitingAd;
@property(nonatomic) unsigned long long liveMode; // @synthesize liveMode=_liveMode;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic, getter=isSameRadio) _Bool sameRadio; // @synthesize sameRadio=_sameRadio;
@property(retain, nonatomic) NSDate *startPlayDate; // @synthesize startPlayDate=_startPlayDate;
@property(retain, nonatomic) NSMutableArray *programListArray; // @synthesize programListArray=_programListArray;
@property(retain, nonatomic) XMLiveRadioProgramItem *programItem; // @synthesize programItem=_programItem;
@property(retain, nonatomic) XMLiveRadioItem *radioItem; // @synthesize radioItem=_radioItem;
@property(nonatomic) __weak id <XMLiveRadioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;
- (id)paramsForSoundPatch;
- (void)XMCorePlayerDidResumePlayForBadNetwork:(id)arg1 isSeek:(_Bool)arg2;
- (void)XMCorePlayerDidPausePlayForBadNetwork:(id)arg1;
- (void)onDidPausePlayForBadNetwork;
- (void)onDidResumePlayForBadNetworkWithSeek:(_Bool)arg1;
- (void)requestProgramListFinished:(id)arg1;
- (void)requestProgramList;
@property(readonly, nonatomic) _Bool isErrorRetry;
@property(readonly, nonatomic) _Bool isStopped;
@property(readonly, nonatomic) _Bool isPaused;
@property(readonly, nonatomic) _Bool isPlaying;
- (_Bool)checkIfNeedM3u8URL;
- (void)saveLivePlayerCurrentProgress;
- (void)saveEndPlayProcessForProgram:(id)arg1;
- (void)loadPlayProcessForProgram:(id)arg1;
- (void)savePlayProcessForProgram:(id)arg1;
- (void)XMCorePlayer:(id)arg1 didGetFLVEndWithResponseHeader:(id)arg2;
- (void)onPlayerDidExceptionWithType:(long long)arg1 withData:(id)arg2;
- (void)XMCorePlayer:(id)arg1 didGetFLVUnknowData:(id)arg2;
- (_Bool)XMCorePlayerShouldStartPlaying:(id)arg1;
- (void)XMCorePlayerDidStopped:(id)arg1;
- (void)XMCorePlayerDidStart:(id)arg1;
- (void)XMCorePlayerWillStart:(id)arg1;
- (void)XMCorePlayerDidPlaying:(id)arg1;
- (void)XMCorePlayer:(id)arg1 didErrorWithType:(id)arg2 withData:(id)arg3;
- (void)XMCorePlayerDidPaused:(id)arg1;
- (void)XMCorePlayerDidEnd:(id)arg1;
- (void)XMCorePlayerWillPlaying:(id)arg1;
- (void)XMCorePlayerDidDataBufferEnd:(id)arg1;
- (void)XMCorePlayerDidDataBufferStart:(id)arg1;
- (void)XMCorePlayer:(id)arg1 notifyPlayProgress:(double)arg2 currentTime:(long long)arg3;
- (void)XMCorePlayer:(id)arg1 notifyCacheProgress:(double)arg2;
- (void)XMCorePlayer:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)playPreProgram;
- (_Bool)playNextProgram;
- (_Bool)seekHistoryLivePlay:(double)arg1;
- (void)startHistoryLivePlayWithRadio:(id)arg1 withProgram:(id)arg2 inProgramList:(id)arg3;
- (void)startHistoryLivePlayWithRadio:(id)arg1 withProgram:(id)arg2;
- (void)stopLivePlay;
- (void)resumeLivePlay;
- (void)pausePlayWhenRouterChanged;
- (void)pauseLivePlay;
- (void)startLivePlayWithRadio:(id)arg1;
- (_Bool)switchErrorOccurredDNSDomain;
- (_Bool)seekToPlayDuration:(double)arg1;
@property(readonly, nonatomic) double realPlayDuration;
- (void)pauseLivePlayRingWithBeforePlaying:(_Bool)arg1;
- (void)startLivePlayRingWithRadio:(id)arg1;
- (void)setLiveCachePath:(id)arg1;
- (void)checkClearCacheForPath:(id)arg1;
- (_Bool)forceClearCacheDataForPath:(id)arg1;
- (unsigned long long)getCurrentMode;
- (id)getCurrentPlayList;
- (id)getCurrentPlayingRadio;
- (id)getCurrentPlayingProgram;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) NSString *cachePath;
@property(readonly, nonatomic) NSURL *liveURL;
- (void)onSleepTimerExpired;
- (void)onReceivedNetworkChangedNotif:(id)arg1;
- (void)changeRadioPlayerUrl:(id)arg1;
- (void)setCorePlayType:(long long)arg1;
- (void)checkResumeWhenEnterForeground;
- (void)audioInterruptionEnd;
- (void)audioInterruptionBegin;
- (void)addNotificationObserver;
- (void)appSessionOnRouteChange:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)appSessionOnInterruptted:(unsigned long long)arg1;
- (_Bool)appSessionAudioActionNotifyResumeByOther;
- (_Bool)appSessionWasPreemptedByOther;
- (void)changeMode:(unsigned long long)arg1 subLiveMode:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)recoverPlayLiveIfAudioInterrupt:(id)arg1;
- (void)retryPlayLiveItem;
- (void)mediaPlayerDidFailedWithError:(id)arg1 player:(id)arg2 media:(id)arg3;
- (void)mediaPlayerDidFinishPlaying:(id)arg1 media:(id)arg2;
- (void)mediaPlayerDidStop:(id)arg1 media:(id)arg2;
- (void)mediaPlayerDidStartPlaying:(id)arg1 media:(id)arg2;
- (void)mediaPlayerDidEndLoading:(id)arg1 media:(id)arg2;
- (void)mediaPlayerWillStartLoading:(id)arg1 media:(id)arg2;
- (_Bool)mediaPlayerWillStartPlaying:(id)arg1 media:(id)arg2;
- (void)mediaPlayerDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerDidBufferEmpty:(id)arg1 media:(id)arg2;
- (void)onRealInfoRequestFinished:(id)arg1;
- (void)loadRealInfoTimerCallback;
- (void)invalidateLiveTimer;
- (void)invalidateTimerWhenNotLiving;
- (void)invalidateRealTimer;
- (void)addRealTimeRequestTimer;
- (void)startLivingPlayURL:(id)arg1;
- (void)changeLivePlayerUrl:(id)arg1;
- (void)startLivePlayForItem:(id)arg1;
- (void)updateProperties:(id)arg1 fromPhc:(id)arg2;
- (void)updateProperties:(id)arg1 fromRadio:(id)arg2;
- (id)originDomain;
- (void)setOriginDomain:(id)arg1;
- (void)notifySuccess:(id)arg1;
- (void)notifyFailWithIpUrl:(id)arg1 domain:(id)arg2 error:(id)arg3;
- (id)getIpHostFromUrl:(id)arg1;
- (id)convertUrl:(id)arg1 previousHosts:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

