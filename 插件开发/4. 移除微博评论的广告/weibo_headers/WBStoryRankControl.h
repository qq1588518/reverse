//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAGradientLayer, UIImageView, UILabel, WBContentImageView, WBStoryItemSegmentRank;

@interface WBStoryRankControl : UIControl
{
    UIImageView *_arrowImgView;
    UILabel *_titleLabel;
    WBStoryItemSegmentRank *_rank;
    CAGradientLayer *_gradientLayer;
    WBContentImageView *_iconImageView;
}

@property(retain, nonatomic) WBContentImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) WBStoryItemSegmentRank *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
- (void).cxx_destruct;
- (void)handleTouch:(id)arg1;
- (void)updateWith:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

