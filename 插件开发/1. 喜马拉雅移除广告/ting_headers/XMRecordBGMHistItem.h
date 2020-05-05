//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class XMNetSoundItem;

@interface XMRecordBGMHistItem : XMModel
{
    double _playStartTime;
    double _playEndTime;
    double _recordStartTime;
    double _recordEndTime;
    double _duration;
    XMNetSoundItem *_sound;
    double _volume;
}

@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(retain, nonatomic) XMNetSoundItem *sound; // @synthesize sound=_sound;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double recordEndTime; // @synthesize recordEndTime=_recordEndTime;
@property(nonatomic) double recordStartTime; // @synthesize recordStartTime=_recordStartTime;
@property(nonatomic) double playEndTime; // @synthesize playEndTime=_playEndTime;
@property(nonatomic) double playStartTime; // @synthesize playStartTime=_playStartTime;
- (void).cxx_destruct;
- (void)clipToRecordTime:(double)arg1;
- (void)dealloc;

@end

