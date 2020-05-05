//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OutputDelegate-Protocol.h"

@class BluzDevice, MyAlarmManager, MyAuxManager, MyGlobalManager, MyMusicManager, MyRadioManager, ReadDataBuffer;

@interface BluzManager : NSObject <OutputDelegate>
{
    BluzDevice *mBluzConnector;
    MyGlobalManager *mGlobalManager;
    MyMusicManager *mMusicManager;
    MyRadioManager *mRadioManager;
    MyAlarmManager *mAlarmManager;
    MyAuxManager *mAuxManager;
    unsigned long long mFeatureSupport;
    ReadDataBuffer *mReadDataBuffer;
}

- (void).cxx_destruct;
- (void)updateData:(id)arg1;
- (void)releaseManager;
- (void)updateInstruction:(id)arg1;
- (void)sendInstruction:(id)arg1;
- (id)getAuxManager:(id)arg1;
- (id)getAlarmManager:(id)arg1;
- (id)getRadioManager:(id)arg1;
- (id)getMusicManager:(id)arg1;
- (id)getGlobalManager:(id)arg1;
- (void)handleInstructionMessage:(id)arg1;
- (void)dealloc;
- (id)initWithConnector:(id)arg1;

@end

