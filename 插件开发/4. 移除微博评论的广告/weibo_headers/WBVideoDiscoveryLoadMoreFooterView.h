//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PRLMFooterView.h"

@class UIImageView;

@interface WBVideoDiscoveryLoadMoreFooterView : PRLMFooterView
{
    _Bool _showingRecommend;
    _Bool _isFollowList;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) _Bool isFollowList; // @synthesize isFollowList=_isFollowList;
@property(nonatomic) _Bool showingRecommend; // @synthesize showingRecommend=_showingRecommend;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setPrlmState:(int)arg1;
- (void)updateDisplay;
- (void)setHighlighted:(_Bool)arg1;
- (double)footerHeight;
- (void)appLanguageDidChange:(id)arg1;
- (void)reloadUIElements;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

