//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WBMLQAGradientView;

@interface WBMLCommonLiveBarrageSwitchButton : UIView
{
    _Bool _isSwitchedOn;
    UIImageView *_imageView;
    WBMLQAGradientView *_gradientView;
    UIView *_offView;
}

@property(retain, nonatomic) UIView *offView; // @synthesize offView=_offView;
@property(retain, nonatomic) WBMLQAGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool isSwitchedOn; // @synthesize isSwitchedOn=_isSwitchedOn;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

