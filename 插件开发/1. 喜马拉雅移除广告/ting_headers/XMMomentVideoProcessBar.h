//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIColor, UIImage, UILabel;
@protocol DynamicVideoProcessBarDelegate;

@interface XMMomentVideoProcessBar : UIControl <UIGestureRecognizerDelegate>
{
    UIButton *_dotButton;
    struct CGRect _dotRect;
    double _width;
    UILabel *_timeLabel;
    UILabel *_totolLabel;
    UIColor *_bgColor;
    UIColor *_cacheColor;
    UIColor *_processColor;
    _Bool _inTracking;
    _Bool _isLandscape;
    _Bool _disabled;
    double _processValue;
    double _cacheValue;
    id <DynamicVideoProcessBarDelegate> _delegate;
    UIActivityIndicatorView *_indicatorView;
    UIImage *_dotImage;
    long long _kMargin;
}

@property(nonatomic) long long kMargin; // @synthesize kMargin=_kMargin;
@property(retain, nonatomic) UIImage *dotImage; // @synthesize dotImage=_dotImage;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) _Bool inTracking; // @synthesize inTracking=_inTracking;
@property(nonatomic) __weak id <DynamicVideoProcessBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double cacheValue; // @synthesize cacheValue=_cacheValue;
@property(nonatomic) double processValue; // @synthesize processValue=_processValue;
- (void).cxx_destruct;
- (void)setTimeLabelTitle:(id)arg1;
- (void)onPan:(id)arg1;
- (void)onTap:(id)arg1;
- (void)_interalSetProcessValue:(double)arg1;
@property(readonly, nonatomic) double margin;
@property(readonly, nonatomic) struct CGPoint dotCenter;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

