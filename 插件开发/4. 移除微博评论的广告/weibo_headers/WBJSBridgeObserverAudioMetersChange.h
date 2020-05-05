//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBJSBridgeObserver.h"

@class AVAudioRecorder, NSTimer;

@interface WBJSBridgeObserverAudioMetersChange : WBJSBridgeObserver
{
    float _averagePower;
    AVAudioRecorder *_audioRecorder;
    NSTimer *_levelTimer;
}

@property(nonatomic) float averagePower; // @synthesize averagePower=_averagePower;
@property(retain, nonatomic) NSTimer *levelTimer; // @synthesize levelTimer=_levelTimer;
@property(retain, nonatomic) AVAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
- (void).cxx_destruct;
- (float)levelForPlatformDecibels:(float)arg1;
- (void)levelTimerCallback:(id)arg1;
- (void)checkAudioSession;
- (void)startTimer;
- (void)stopTimer;
- (void)_visibilityChanged;
- (void)_teardown;
- (void)_setup;

@end

