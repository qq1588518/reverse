//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BU_ZFPlayerView, NSError, NSString, UITapGestureRecognizer, UIView;

@protocol BU_ZFPlayerDelegate <NSObject>

@optional
- (void)zf_playerViewTouchesBegan:(BU_ZFPlayerView *)arg1;
- (void)zf_playerView:(BU_ZFPlayerView *)arg1 recognizeTapGesture:(UITapGestureRecognizer *)arg2;
- (void)zf_playerViewDidPlayFinish:(BU_ZFPlayerView *)arg1 error:(NSError *)arg2;
- (void)zf_playerViewReadyToPlay:(BU_ZFPlayerView *)arg1;
- (void)zf_playerView:(BU_ZFPlayerView *)arg1 stateDidChanged:(long long)arg2;
- (void)zf_playerControlViewWillHidden:(UIView *)arg1 isFullscreen:(_Bool)arg2;
- (void)zf_playerControlViewWillShow:(UIView *)arg1 isFullscreen:(_Bool)arg2;
- (void)zf_playerDownload:(NSString *)arg1;
- (void)zf_playerBackAction;
@end

