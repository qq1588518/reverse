//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, WBVideoInstreamAdImagePlayController;

@protocol WBVideoAdImageControllerDelegate <NSObject>

@optional
- (void)videoAdImageController:(WBVideoInstreamAdImagePlayController *)arg1 didUpdateCurrentTime:(double)arg2;
- (void)videoAdImageControllerDidPlayToEnd:(WBVideoInstreamAdImagePlayController *)arg1;
- (void)videoAdImageController:(WBVideoInstreamAdImagePlayController *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoAdImageControllerPressed:(WBVideoInstreamAdImagePlayController *)arg1;
- (void)videoAdImageControllerIsReady:(WBVideoInstreamAdImagePlayController *)arg1;
@end

