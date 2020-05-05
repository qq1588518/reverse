//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAGradientLayer, CALayer, NSString, UIImageView;
@protocol WBMLVideoBarrageSwitchBtnDelegate;

@interface WBMLVideoBarrageSwitchBtn : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isOn;
    _Bool _enabled;
    id <WBMLVideoBarrageSwitchBtnDelegate> _delegate;
    CAGradientLayer *_onLayer;
    CALayer *_offLayer;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) CALayer *offLayer; // @synthesize offLayer=_offLayer;
@property(retain, nonatomic) CAGradientLayer *onLayer; // @synthesize onLayer=_onLayer;
@property(nonatomic) __weak id <WBMLVideoBarrageSwitchBtnDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
- (void).cxx_destruct;
- (double)iconSide;
- (void)tapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

