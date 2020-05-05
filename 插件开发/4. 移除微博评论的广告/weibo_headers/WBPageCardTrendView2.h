//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

#import "WBMusicControlDelegate-Protocol.h"

@class NSString, UIImageView, WBCommonButtonStyleTrendNormalView, WBContentImageView, WBMusicControl, WBPageCardTrendViewModel, WBTimelineLargeCardTextView, WBVideoControl;

@interface WBPageCardTrendView2 : WBPageCardViewBase <WBMusicControlDelegate>
{
    WBContentImageView *_trendDisplayImageView;
    WBPageCardTrendViewModel *_trendViewModel;
    WBTimelineLargeCardTextView *_trendTextView;
    WBTimelineLargeCardTextView *_trendTitleView;
    UIImageView *_backgroundView;
    UIImageView *_delBtn;
    WBCommonButtonStyleTrendNormalView *_commonButton;
    WBMusicControl *_musicControl;
    WBVideoControl *_videoControl;
}

+ (struct UIEdgeInsets)edgeInsetsViewOutside;
+ (id)placeholderText:(id)arg1 color:(id)arg2 fontSize:(double)arg3;
+ (double)heightOfDataObject:(id)arg1;
+ (Class)trendDisplayImageViewClass;
@property(retain, nonatomic) WBVideoControl *videoControl; // @synthesize videoControl=_videoControl;
@property(retain, nonatomic) WBMusicControl *musicControl; // @synthesize musicControl=_musicControl;
@property(retain, nonatomic) WBCommonButtonStyleTrendNormalView *commonButton; // @synthesize commonButton=_commonButton;
@property(retain, nonatomic) UIImageView *delBtn; // @synthesize delBtn=_delBtn;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) WBTimelineLargeCardTextView *trendTitleView; // @synthesize trendTitleView=_trendTitleView;
@property(retain, nonatomic) WBTimelineLargeCardTextView *trendTextView; // @synthesize trendTextView=_trendTextView;
@property(retain, nonatomic) WBPageCardTrendViewModel *trendViewModel; // @synthesize trendViewModel=_trendViewModel;
@property(retain, nonatomic) WBContentImageView *trendDisplayImageView; // @synthesize trendDisplayImageView=_trendDisplayImageView;
- (void).cxx_destruct;
- (id)musicControlIdentifier:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)resetSubViewRects;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)useCustomCommonButton;
- (int)detectExtraActionTypeWithPoint:(struct CGPoint)arg1;
- (void)reloadUIElements;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

