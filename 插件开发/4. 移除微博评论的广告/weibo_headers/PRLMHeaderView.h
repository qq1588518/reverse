//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PRLMHeaderFooterView.h"

@class CALayer, UIImageView, UILabel, WBIndicatorView;

@interface PRLMHeaderView : PRLMHeaderFooterView
{
    UILabel *lastUpdateTimeLabel;
    CALayer *arrowImageLayer;
    WBIndicatorView *refreshActivityIndicatorView;
    UIImageView *backgroundImageView;
}

- (void).cxx_destruct;
- (void)setPrlmState:(int)arg1;
- (void)didFinishPullRefreshAnimation;
- (void)layoutSubviews;
- (struct CGRect)_backgroundViewFrameWithImageSize:(struct CGSize)arg1;
- (id)localizedPromptText;
- (id)localizedLastUpdateTimeText:(id)arg1;
- (id)arrowImage;
- (double)headerHeight;
- (void)didEndDraggingscrollView:(id)arg1;
- (void)draggingScrollView:(id)arg1 combinedOffset:(struct CGPoint)arg2;
- (id)backgroundWBImageView;
- (void)setBackgroundImage:(id)arg1;
- (void)reloadUIElement;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

