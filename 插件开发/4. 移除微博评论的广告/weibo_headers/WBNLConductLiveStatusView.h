//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WBNLConductLiveStatusView : UIView
{
    _Bool _isReplay;
    UIView *_bgView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
}

@property(nonatomic) _Bool isReplay; // @synthesize isReplay=_isReplay;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)initView;
- (void)initData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

