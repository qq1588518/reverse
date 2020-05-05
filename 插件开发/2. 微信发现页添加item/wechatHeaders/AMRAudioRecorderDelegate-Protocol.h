//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AudioRecorderUserData, NSString;

@protocol AMRAudioRecorderDelegate

@optional
- (void)OnAMRPart:(AudioRecorderUserData *)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5;
- (void)OnAMREndRecording:(AudioRecorderUserData *)arg1;
- (void)OnAMRBeginRecording:(AudioRecorderUserData *)arg1 ErrNo:(int)arg2;
- (void)OnAMRLevelMeter:(AudioRecorderUserData *)arg1 Peak:(float)arg2;
- (_Bool)OnPrepareSendAMR:(AudioRecorderUserData *)arg1;
- (_Bool)StopRecord;
- (_Bool)CheckIfButtonPressing:(NSString *)arg1;
@end

