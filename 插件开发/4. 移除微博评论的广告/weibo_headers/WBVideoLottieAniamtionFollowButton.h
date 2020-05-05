//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class LOTAnimationView, NSString, WBContentImageView;

@interface WBVideoLottieAniamtionFollowButton : UIControl
{
    _Bool _isAnimating;
    NSString *_iconUrlStr;
    WBContentImageView *_iconView;
    LOTAnimationView *_animationView;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) LOTAnimationView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) WBContentImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) NSString *iconUrlStr; // @synthesize iconUrlStr=_iconUrlStr;
- (void).cxx_destruct;
- (id)featureCode;
- (void)setFrame:(struct CGRect)arg1;
- (void)showAnimationFollowButton:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

