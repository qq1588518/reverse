//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface YXLiveAudienceContributionView : UIView
{
    UIView *_bgView;
    UIImageView *_bgImgView;
    UILabel *_contentLabel;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (id)getRankContextWithValue:(id)arg1;
- (id)getContextWithValue:(long long)arg1;
- (void)updateBgLayerColor:(long long)arg1;
- (void)viewUpdateConstraints;
- (void)initView;
- (void)setRankContent:(id)arg1;
- (void)setContent:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

