//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDZModalView.h"

@class UIButton, UILabel, XMAnimatedImageView, XMMCommunityTheme;

@interface XMCommunityFirstJoinPopView : CDZModalView
{
    XMMCommunityTheme *_theme;
    XMAnimatedImageView *_imageView;
    UILabel *_titleView;
    UILabel *_detailView;
    UIButton *_nextButton;
}

@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) XMAnimatedImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) XMMCommunityTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)clickNextButton:(id)arg1;
- (void)layoutMySubviews;
- (void)willShowInView:(id)arg1;
- (void)didInitialize;

@end

