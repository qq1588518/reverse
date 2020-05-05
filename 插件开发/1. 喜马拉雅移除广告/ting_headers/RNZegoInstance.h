//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ZegoLivePublisherDelegate-Protocol.h"
#import "ZegoRoomDelegate-Protocol.h"
#import "ZegoSoundLevelDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, RNAudioLiveRoomInfo, RNSoundMixController, ZegoLiveRoomApi;
@protocol RNZegoInstanceDelegate;

@interface RNZegoInstance : NSObject <ZegoLivePublisherDelegate, ZegoRoomDelegate, ZegoSoundLevelDelegate>
{
    NSArray *_loginStreamList;
    _Bool _loopbackEnabled;
    _Bool _captureSoundLevelEnabled;
    long long _state;
    RNAudioLiveRoomInfo *_liveRoomInfo;
    long long _role;
    RNSoundMixController *_soundMixController;
    ZegoLiveRoomApi *_zegoLiveRoomApi;
    NSMutableArray *_zegoMixStreamConfigs;
    NSMutableArray *_streamList;
    NSMutableArray *_replayList;
    id <RNZegoInstanceDelegate> _delegate;
}

+ (id)decryptSignKey:(id)arg1;
+ (void)setSoundEnvEffect:(long long)arg1;
+ (id)createZegoInstance:(long long)arg1 signKeyData:(id)arg2;
+ (id)createZegoInstance:(long long)arg1 base64SignKey:(id)arg2;
@property(nonatomic) __weak id <RNZegoInstanceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *replayList; // @synthesize replayList=_replayList;
@property(retain, nonatomic) NSMutableArray *streamList; // @synthesize streamList=_streamList;
@property(retain, nonatomic) NSMutableArray *zegoMixStreamConfigs; // @synthesize zegoMixStreamConfigs=_zegoMixStreamConfigs;
@property(retain, nonatomic) ZegoLiveRoomApi *zegoLiveRoomApi; // @synthesize zegoLiveRoomApi=_zegoLiveRoomApi;
@property(retain, nonatomic) RNSoundMixController *soundMixController; // @synthesize soundMixController=_soundMixController;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(retain, nonatomic) RNAudioLiveRoomInfo *liveRoomInfo; // @synthesize liveRoomInfo=_liveRoomInfo;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool captureSoundLevelEnabled; // @synthesize captureSoundLevelEnabled=_captureSoundLevelEnabled;
@property(nonatomic) _Bool loopbackEnabled; // @synthesize loopbackEnabled=_loopbackEnabled;
- (void).cxx_destruct;
- (_Bool)isHeadsetPluggedIn;
- (void)onCaptureSoundLevelUpdate:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)audioSessionWasInterrupted:(id)arg1;
- (void)onMixStreamConfigUpdate:(int)arg1 mixStream:(id)arg2 streamInfo:(id)arg3;
- (void)onPublishStateUpdate:(int)arg1 streamID:(id)arg2 streamInfo:(id)arg3;
- (void)onPublishQualityUpdate:(id)arg1 quality:(CDStruct_64582893)arg2;
- (void)onStreamUpdated:(int)arg1 streams:(id)arg2 roomID:(id)arg3;
- (void)onTempBroken:(int)arg1 roomID:(id)arg2;
- (void)onReconnect:(int)arg1 roomID:(id)arg2;
- (void)onDisconnect:(int)arg1 roomID:(id)arg2;
- (void)onKickOut:(int)arg1 roomID:(id)arg2;
- (void)onAuxCallback:(void *)arg1 dataLen:(int *)arg2 sampleRate:(int *)arg3 channelCount:(int *)arg4;
- (void)onRecvSideInfo:(const char *)arg1 dataLen:(int)arg2;
- (void)initMicEffect;
- (void)clearAllMixStreamConfig;
- (void)addMixStreamConfig:(id)arg1;
- (void)configMixStream:(id)arg1;
- (void)resume;
- (void)pause;
- (void)finishPublish:(CDUnknownBlockType)arg1;
- (void)beginPublish:(CDUnknownBlockType)arg1;
- (void)stopPublishAndClearMix;
- (void)logout;
- (void)login:(id)arg1 role:(int)arg2 complete:(CDUnknownBlockType)arg3;
- (void)updateUserInfo;
- (void)dealloc;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (id)initWithAppId:(long long)arg1 signKeyData:(id)arg2;
- (void)removeStreamInfo:(id)arg1;
- (_Bool)isStreamIDExist:(id)arg1;
- (void)deleteStream:(id)arg1;
- (void)onStreamUpdateForDelete:(id)arg1;
- (void)onStreamUpdateForAdd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

