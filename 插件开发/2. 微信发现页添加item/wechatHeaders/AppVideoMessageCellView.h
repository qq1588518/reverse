//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BizAppBaseMessageCellView.h"

@class AppVideoMessageViewModel, CAGradientLayer, MMUILabel, SightIconView;

@interface AppVideoMessageCellView : BizAppBaseMessageCellView
{
    SightIconView *_playIconImgView;
    MMUILabel *_timeLabel;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) SightIconView *playIconImgView; // @synthesize playIconImgView=_playIconImgView;
- (void).cxx_destruct;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)addTimeLabel;
- (void)addCoverImageView;
- (void)addTitleLabel;
- (id)coverImageView;
- (id)coverImage;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) AppVideoMessageViewModel *viewModel; // @dynamic viewModel;

@end

