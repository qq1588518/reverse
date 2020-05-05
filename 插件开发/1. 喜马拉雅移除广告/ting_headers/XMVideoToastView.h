//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface XMVideoToastView : UIView
{
    UILabel *_titleLabel;
    UIView *_cacheView;
    UIView *_processView;
    double _processWidth;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedVideoToastView;
@property(nonatomic) double processWidth; // @synthesize processWidth=_processWidth;
@property(retain, nonatomic) UIView *processView; // @synthesize processView=_processView;
@property(retain, nonatomic) UIView *cacheView; // @synthesize cacheView=_cacheView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)showCurrentTime:(double)arg1 totalTime:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

