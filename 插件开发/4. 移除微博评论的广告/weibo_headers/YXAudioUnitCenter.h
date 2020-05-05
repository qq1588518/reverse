//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AEAudioUnitInputModule, AEAudioUnitOutput, AEBandpassModule, AEManagedValue, AEReverbModule, AEVarispeedModule, YXAudioDataOutProcessModule;

@interface YXAudioUnitCenter : NSObject
{
    char *audioBufferLst[4];
    unsigned char audioBuffer0[16384];
    unsigned char audioBuffer1[16384];
    double bgmPlayTime;
    _Bool _inputEnabled;
    _Bool _outProcessEnabled;
    _Bool _loopBgm;
    _Bool _pauseBgm;
    _Bool _isRunning;
    _Bool _playingBgm;
    _Bool _isInPutDeviceChange;
    _Bool _openAudioInterrupt;
    _Bool _headsetDeviceAvailable;
    _Bool _bluetoothDeviceAvailable;
    _Bool _phoneDeviceAvailable;
    _Bool _speakerDeviceAvailable;
    int _oldSampleRate;
    double _bandpassCenterFrequency;
    double _bandpassWetDry;
    double _balanceSweepRate;
    double _micVolume;
    double _bgmVolume;
    CDUnknownFunctionPointerType _outputDataFunction;
    void *_opaque;
    double _dryWetMix;
    double _gain;
    double _minDelayTime;
    double _maxDelayTime;
    double _decayTimeAt0Hz;
    double _decayTimeAtNyquist;
    double _randomizeReflections;
    AEAudioUnitInputModule *_input;
    AEAudioUnitOutput *_output;
    YXAudioDataOutProcessModule *_outProcess;
    AEBandpassModule *_bandpass;
    AEBandpassModule *_micBandpass;
    AEReverbModule *_micReverb;
    AEVarispeedModule *_varispeed;
    AEManagedValue *_playerValue;
    const void **_outputBuffList;
}

+ (void)resetSharedInstance;
+ (id)getSharedInstance;
+ (id)getSharedInstanceChannels:(int)arg1 sampleRate:(int)arg2;
@property(nonatomic) _Bool speakerDeviceAvailable; // @synthesize speakerDeviceAvailable=_speakerDeviceAvailable;
@property(nonatomic) _Bool phoneDeviceAvailable; // @synthesize phoneDeviceAvailable=_phoneDeviceAvailable;
@property(nonatomic) _Bool bluetoothDeviceAvailable; // @synthesize bluetoothDeviceAvailable=_bluetoothDeviceAvailable;
@property(nonatomic) _Bool headsetDeviceAvailable; // @synthesize headsetDeviceAvailable=_headsetDeviceAvailable;
@property(nonatomic) const void **outputBuffList; // @synthesize outputBuffList=_outputBuffList;
@property(nonatomic) _Bool openAudioInterrupt; // @synthesize openAudioInterrupt=_openAudioInterrupt;
@property(nonatomic) _Bool isInPutDeviceChange; // @synthesize isInPutDeviceChange=_isInPutDeviceChange;
@property(nonatomic) int oldSampleRate; // @synthesize oldSampleRate=_oldSampleRate;
@property(nonatomic) _Bool playingBgm; // @synthesize playingBgm=_playingBgm;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) AEManagedValue *playerValue; // @synthesize playerValue=_playerValue;
@property(retain, nonatomic) AEVarispeedModule *varispeed; // @synthesize varispeed=_varispeed;
@property(retain, nonatomic) AEReverbModule *micReverb; // @synthesize micReverb=_micReverb;
@property(retain, nonatomic) AEBandpassModule *micBandpass; // @synthesize micBandpass=_micBandpass;
@property(retain, nonatomic) AEBandpassModule *bandpass; // @synthesize bandpass=_bandpass;
@property(retain, nonatomic) YXAudioDataOutProcessModule *outProcess; // @synthesize outProcess=_outProcess;
@property(retain, nonatomic) AEAudioUnitOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AEAudioUnitInputModule *input; // @synthesize input=_input;
@property(nonatomic) _Bool pauseBgm; // @synthesize pauseBgm=_pauseBgm;
@property(nonatomic) _Bool loopBgm; // @synthesize loopBgm=_loopBgm;
@property(nonatomic) double randomizeReflections; // @synthesize randomizeReflections=_randomizeReflections;
@property(nonatomic) double decayTimeAtNyquist; // @synthesize decayTimeAtNyquist=_decayTimeAtNyquist;
@property(nonatomic) double decayTimeAt0Hz; // @synthesize decayTimeAt0Hz=_decayTimeAt0Hz;
@property(nonatomic) double maxDelayTime; // @synthesize maxDelayTime=_maxDelayTime;
@property(nonatomic) double minDelayTime; // @synthesize minDelayTime=_minDelayTime;
@property(nonatomic) double gain; // @synthesize gain=_gain;
@property(nonatomic) double dryWetMix; // @synthesize dryWetMix=_dryWetMix;
@property(nonatomic) void *opaque; // @synthesize opaque=_opaque;
@property(nonatomic) CDUnknownFunctionPointerType outputDataFunction; // @synthesize outputDataFunction=_outputDataFunction;
@property(nonatomic) double bgmVolume; // @synthesize bgmVolume=_bgmVolume;
@property(nonatomic) double micVolume; // @synthesize micVolume=_micVolume;
@property(nonatomic) _Bool outProcessEnabled; // @synthesize outProcessEnabled=_outProcessEnabled;
@property(nonatomic) _Bool inputEnabled; // @synthesize inputEnabled=_inputEnabled;
@property(nonatomic) double balanceSweepRate; // @synthesize balanceSweepRate=_balanceSweepRate;
@property(nonatomic) double bandpassWetDry; // @synthesize bandpassWetDry=_bandpassWetDry;
@property(nonatomic) double bandpassCenterFrequency; // @synthesize bandpassCenterFrequency=_bandpassCenterFrequency;
- (void).cxx_destruct;
- (_Bool)getIsInPutDeviceChange;
- (int)getCurrentSampleRate;
- (void)unregisterObservers;
- (void)registerObservers;
- (_Bool)setAudioSessionCategory:(id *)arg1;
- (_Bool)detectAvailableDevices;
- (_Bool)isBluetoothDevice:(id)arg1;
- (void)restartInputAndOutput;
- (void)currentRouteChanged:(id)arg1;
- (double)getBgmPlayingPos;
- (double)getBgmDuration;
- (void)stopPlayingBgm;
- (_Bool)playBgmWithPath:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
- (void)setAudioInterruptOpt:(_Bool)arg1;
- (void)InterruptBeginProcess;
- (void)stopAndRemoveObservers:(_Bool)arg1;
- (void)stop;
- (_Bool)start:(id *)arg1 registerObservers:(_Bool)arg2;
- (_Bool)start:(id *)arg1;
- (void)dealloc;
- (id)initWithChannels:(int)arg1 sampleRate:(int)arg2;

@end

