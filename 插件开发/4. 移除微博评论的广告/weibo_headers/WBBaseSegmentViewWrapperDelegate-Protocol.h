//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBBaseSegmentViewWrapper, WBSegmentChannelsBarView, WBSegmentSwipeView, WBUniversialViewController;
@protocol WBSegmentWrapperVCProtocol><WBSegmentChannelViewControllerProtocol><UIScrollViewDelegate;

@protocol WBBaseSegmentViewWrapperDelegate <NSObject>

@optional
- (void)wrapperWillResetDefaultSelectedIndex:(long long)arg1;
- (void)wrapperDidAddChildViewController:(WBUniversialViewController<WBSegmentWrapperVCProtocol><WBSegmentChannelViewControllerProtocol><UIScrollViewDelegate> *)arg1 toIndex:(long long)arg2;
- (void)wrapperWillAddChildViewController:(WBUniversialViewController<WBSegmentWrapperVCProtocol><WBSegmentChannelViewControllerProtocol><UIScrollViewDelegate> *)arg1 toIndex:(long long)arg2;
- (void)wrapperDidChangeSwipeViewCurrentItem:(WBSegmentSwipeView *)arg1;
- (void)wrapperWillChangeSwipeViewCurrentItem:(WBSegmentSwipeView *)arg1;
- (void)wrapperDidClickSameChannelsBar:(WBSegmentChannelsBarView *)arg1;
- (void)wrapperWillClickSameChannelsBar:(WBSegmentChannelsBarView *)arg1;
- (void)wrapperDidSelectChannelsBar:(WBSegmentChannelsBarView *)arg1 toIndex:(long long)arg2;
- (void)wrapperWillSelectChannelsBar:(WBSegmentChannelsBarView *)arg1 toIndex:(long long)arg2;
- (void)wrapperDidInitializeSubViews:(WBBaseSegmentViewWrapper *)arg1;
@end

