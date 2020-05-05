//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageSegmentChannelsBarView.h"

@class NSArray, UIButton, UIColor, WBVideoSearchView;

@interface WBVideoSegmentChannelsBarView : WBPageSegmentChannelsBarView
{
    struct CGRect videoBouns;
    _Bool _disableTheme;
    _Bool _showSlider;
    WBVideoSearchView *_searchView;
    UIColor *_norColor;
    UIColor *_selColor;
    NSArray *_channelButtonColorArray;
    UIButton *_searchButton;
    NSArray *_sliderColorArray;
}

+ (id)segmentChannelsViewWithFrame:(struct CGRect)arg1 showSlider:(_Bool)arg2;
@property(nonatomic) _Bool showSlider; // @synthesize showSlider=_showSlider;
@property(retain, nonatomic) NSArray *sliderColorArray; // @synthesize sliderColorArray=_sliderColorArray;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) NSArray *channelButtonColorArray; // @synthesize channelButtonColorArray=_channelButtonColorArray;
@property(retain, nonatomic) UIColor *selColor; // @synthesize selColor=_selColor;
@property(retain, nonatomic) UIColor *norColor; // @synthesize norColor=_norColor;
@property(nonatomic) _Bool disableTheme; // @synthesize disableTheme=_disableTheme;
@property(retain, nonatomic) WBVideoSearchView *searchView; // @synthesize searchView=_searchView;
- (void).cxx_destruct;
- (void)searchButtonPressed:(id)arg1;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3;
- (id)hexStringForColor:(id)arg1;
- (void)setupChannelButtons:(unsigned long long)arg1;
- (void)updateChannelButtonWithNormalColor:(id)arg1 selectedColor:(id)arg2;
- (void)reloadNavVideoSegmentChannelsBarUIElements;
- (double)getBarHeightWithoutTips;
- (void)layoutSubviews;
- (double)channelBarLeftPadding;
- (double)itemSpacing;
- (double)barItemTitleSeletedFontSize;
- (double)barItemTitleFontSize;
- (void)scrollCurrentButtonToCenter:(id)arg1;
- (void)resetItemPositonsWithOffset:(double)arg1 itemSpace:(double)arg2 needScroll:(_Bool)arg3;
- (_Bool)caculateOffset:(double *)arg1 itemSpace:(double *)arg2;
- (id)initWithFrame:(struct CGRect)arg1 showSlider:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

