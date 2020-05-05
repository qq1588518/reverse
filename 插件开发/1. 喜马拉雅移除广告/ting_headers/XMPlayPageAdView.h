//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseAdView.h"

@class UIButton, UIImageView, UILabel, XMAdMarkView, XMAdSourceLabel;

@interface XMPlayPageAdView : XMBaseAdView
{
    UIImageView *_imageView1;
    UIImageView *_imageView2;
    UIImageView *_imageView3;
    XMAdMarkView *_adMark;
    UIButton *_closeBtn;
    UILabel *_title;
    XMAdSourceLabel *_sourceLabel;
}

+ (double)heightWithItem:(id)arg1 andWidth:(double)arg2;
@property(retain, nonatomic) XMAdSourceLabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
- (void).cxx_destruct;
- (void)didClick:(id)arg1;
- (void)close:(id)arg1;
- (void)hideAll;
- (void)setupUI;
- (void)setAdItem:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end

