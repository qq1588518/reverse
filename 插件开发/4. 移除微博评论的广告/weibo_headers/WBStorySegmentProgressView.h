//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface WBStorySegmentProgressView : UIView
{
    double _progress;
    UIColor *_foregroundColor;
    UIColor *_bgColor;
    double _height;
    CAShapeLayer *_foregroundLayer;
    CAShapeLayer *_backgroundLayer;
}

@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) CAShapeLayer *foregroundLayer; // @synthesize foregroundLayer=_foregroundLayer;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (struct CGPath *)createPath;
- (void)updateLayers;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

