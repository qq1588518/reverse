//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBMLVideoPublishLog : NSObject
{
    double _validPlayDuration;
    double publishStart;
    double publishStop;
    double publishDuration;
    double previewStart;
    double previewStop;
    double previewDuration;
    long long publishCameraFirst;
    int publishCameraSwitch;
    long long publishWhitening;
    long long publishPolished;
    double apiCreateDuration;
    double apiShareDuration;
    double apiRoomDuration;
    double apiFinishDuration;
    double apiCdnDuration;
    double apiCreateStart;
    double apiShareStart;
    double apiRoomStart;
    double apiFinishStart;
    double apiCdnStart;
    long long playertype;
    int audio_rate;
    int video_rate;
    int video_publish_buffering_count;
    double video_publish_buffering_duration;
    NSString *publish_mediaid;
    NSString *publish_url;
    double publisherRtmpConnectStart;
    double publisherRtmpConnectDuration;
    double publisherRtmpSendAudioFirstFrameStart;
    double publisherRtmpSendAudioFirstFrameDuration;
    double publisherRtmpSendVideoFirstFrameStart;
    double publisherRtmpSendVideoFirstFrameDuration;
    int publisherRtmpReconncetCount;
    int publishHaltCount;
    double publishHaltTime;
    int calcFramerateIndex;
    long long avgFrameInterval;
    double startCalcFramerateTimestamp;
    double lastSendTimeStamp;
    int windowIndex;
    double _startupTime;
    double _logStartTime;
    NSString *_networkType;
    double _duration;
}

+ (id)encapsulateLiveLog:(id)arg1 objectId:(id)arg2;
+ (void)reset;
+ (id)instance;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(nonatomic) double logStartTime; // @synthesize logStartTime=_logStartTime;
@property(nonatomic) double startupTime; // @synthesize startupTime=_startupTime;
- (void).cxx_destruct;
- (void)publisherSetNativeValue:(id)arg1;
- (void)publisherCalcAvgSendTime;
- (void)publisherRtmpReconnect;
- (void)publisherRtmpSendVideoFirstFrameStop;
- (void)publisherRtmpSendAudioFirstFrameStop;
- (void)publisherRtmpConnectStop;
- (void)publisherRtmpConnectStart;
- (void)publishSetId:(id)arg1 withUrl:(id)arg2;
- (void)publishBufferCount;
- (void)publishVideoRate:(int)arg1;
- (void)publishAudioRate:(int)arg1;
- (void)publishApiCdnStop;
- (void)publishApiFinishWeiboStop;
- (void)publishApiRoomStop;
- (void)publishApiShareWeiboStop;
- (void)publishApiCreateLiveStop;
- (void)publishApiCdnStart;
- (void)publishApiFinishWeiboStart;
- (void)publishApiRoomStart;
- (void)publishApiShareWeiboStart;
- (void)publishApiCreateLiveStart;
- (void)publishPolished:(long long)arg1;
- (void)publishWhitening:(long long)arg1;
- (void)publishCameraSwitch;
- (void)publishCameraFirst:(long long)arg1;
- (void)publishPreviewStop;
- (void)publishPreviewStart;
- (void)publishStop;
- (void)publishStart;
- (void)finishPublishLogWithType:(long long)arg1;
- (id)_currentLogData;
- (id)currentNetworkType;
- (id)finishPublish;
- (id)init;
- (void)dealloc;

@end

