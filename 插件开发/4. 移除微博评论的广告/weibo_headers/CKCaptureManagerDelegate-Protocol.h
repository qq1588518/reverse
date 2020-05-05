//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKCaptureManager, NSURL, WBCameraFrame;

@protocol CKCaptureManagerDelegate <NSObject>
- (_Bool)captureManager:(CKCaptureManager *)arg1 shouldWrite:(WBCameraFrame *)arg2;
- (NSURL *)outputURLForCaptureManager:(CKCaptureManager *)arg1;

@optional
- (void)captureManagerDidStopRecording;
- (void)captureManagerDidStartRecording;
@end

