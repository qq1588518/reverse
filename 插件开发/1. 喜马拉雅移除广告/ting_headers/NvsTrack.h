//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NvsObject.h"

@interface NvsTrack : NvsObject
{
}

- (void)getVolumeGain:(float *)arg1 rightVolumeGain:(float *)arg2;
- (void)setVolumeGain:(float)arg1 rightVolumeGain:(float)arg2;
- (_Bool)removeRegionClips:(long long)arg1 outPoint:(long long)arg2;
- (_Bool)removeAllClips;
- (_Bool)moveClip:(unsigned int)arg1 destClipIndex:(unsigned int)arg2;
- (_Bool)removeRange:(long long)arg1 endTimelinePos:(long long)arg2 keepSpace:(_Bool)arg3;
- (_Bool)removeClip:(unsigned int)arg1 keepSpace:(_Bool)arg2;
- (_Bool)splitClip:(unsigned int)arg1 splitPoint:(long long)arg2;
- (long long)changeOutPoint:(unsigned int)arg1 newOutPoint:(long long)arg2;
- (long long)changeInPoint:(unsigned int)arg1 newInPoint:(long long)arg2;
@property(readonly) unsigned int clipCount;
@property(readonly) long long duration;
@property(readonly) unsigned int index;
@property(readonly) int type;

@end

