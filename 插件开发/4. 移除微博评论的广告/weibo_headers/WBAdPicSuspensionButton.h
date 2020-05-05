//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, NSDictionary, UILabel, WBAdSuspensionViewEngine;

@interface WBAdPicSuspensionButton : UIView
{
    UILabel *_titleLabel;
    NSDictionary *_dataDic;
    WBAdSuspensionViewEngine *_engine;
    CAGradientLayer *_gradientBottomLayer;
    CAShapeLayer *_fastenRingLayer;
    CAShapeLayer *_animateRingLayer;
}

@property(retain, nonatomic) CAShapeLayer *animateRingLayer; // @synthesize animateRingLayer=_animateRingLayer;
@property(retain, nonatomic) CAShapeLayer *fastenRingLayer; // @synthesize fastenRingLayer=_fastenRingLayer;
@property(retain, nonatomic) CAGradientLayer *gradientBottomLayer; // @synthesize gradientBottomLayer=_gradientBottomLayer;
@property(retain, nonatomic) WBAdSuspensionViewEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)stopBreathingRippleAnimation;
- (void)playBreathingRippleAnimation;
- (void)setHidden:(_Bool)arg1;
- (void)removeFromSuperview;
- (void)didMoveToSuperview;
- (void)tapGesture:(id)arg1;
- (void)updataWithData:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

