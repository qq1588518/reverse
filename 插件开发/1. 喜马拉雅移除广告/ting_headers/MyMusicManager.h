//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MusicManager-Protocol.h"

@class MusicEntry, MusicStatus;
@protocol MusicDelegate;

@interface MyMusicManager : NSObject <MusicManager>
{
    id <MusicDelegate> musicDelegate;
    MusicStatus *mStatus;
    MusicEntry *mMusicEntry;
    unsigned int mPlayState;
    unsigned int mLoopMode;
    unsigned int mPlayId;
    _Bool mLyricFlag;
    unsigned long long mSupportFeature;
    _Bool firstRun;
    _Bool pListReady;
    _Bool mReleased;
    unsigned int mMode;
}

- (void).cxx_destruct;
- (void)clean;
- (void)getLyric:(unsigned int)arg1;
- (void)getCurrentEntry;
- (void)getPListFrom:(unsigned int)arg1 withCount:(unsigned int)arg2;
- (unsigned int)getPListSize;
- (void)setPList:(unsigned int *)arg1 length:(unsigned int)arg2;
- (void)setLoopMode:(unsigned int)arg1;
- (unsigned int)getDuration;
- (unsigned int)getCurrentPosition;
- (void)select:(unsigned int)arg1;
- (void)previous;
- (void)next;
- (void)pause;
- (void)play;
- (void)setFeatureSupport:(unsigned long long)arg1;
- (void)sendNotification:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)handleMusicMessage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

