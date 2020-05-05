//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMGuideView.h"

@class UIImageView, UILabel, UIPanGestureRecognizer, UIView;

@interface XMMVideoFullScreenGuideView : XMMGuideView
{
    UIView *_orignPanView;
    UIPanGestureRecognizer *_panGesture;
    UIImageView *_guideImageView1;
    UIImageView *_guideImageView2;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *guideImageView2; // @synthesize guideImageView2=_guideImageView2;
@property(retain, nonatomic) UIImageView *guideImageView1; // @synthesize guideImageView1=_guideImageView1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)removeFromSuperview;
- (void)willHiden;
- (void)didShow;
- (void)willShow;
- (void)panHandler:(id)arg1;
- (void)setPanGesture:(id)arg1;
- (void)didSetPanGesture;
- (void)willSetPanGesture;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

