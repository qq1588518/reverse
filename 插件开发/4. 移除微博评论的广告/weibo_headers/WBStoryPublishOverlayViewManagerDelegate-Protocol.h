//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, UIButton, WBStoryChallengeModel, WBStoryPublishInfo;
@protocol WBStoryPublishViewManagerProtocol;

@protocol WBStoryPublishOverlayViewManagerDelegate <NSObject>
- (void)publishOverlayViewManagerBackContinueCapture:(NSObject<WBStoryPublishViewManagerProtocol> *)arg1;
- (void)publishOverlayViewManager:(NSObject<WBStoryPublishViewManagerProtocol> *)arg1 didDeleteChallenge:(WBStoryChallengeModel *)arg2;
- (void)publishOverlayViewManagerSaveDraft:(NSObject<WBStoryPublishViewManagerProtocol> *)arg1 success:(_Bool)arg2;
- (void)publishOverlayViewManager:(NSObject<WBStoryPublishViewManagerProtocol> *)arg1 didSendWithInfo:(WBStoryPublishInfo *)arg2;
- (void)publishOverlayViewManager:(NSObject<WBStoryPublishViewManagerProtocol> *)arg1 didPressCloseButton:(UIButton *)arg2;
- (void)publishOverlayViewManagerLoadingAssetFailed:(NSObject<WBStoryPublishViewManagerProtocol> *)arg1;
@end

