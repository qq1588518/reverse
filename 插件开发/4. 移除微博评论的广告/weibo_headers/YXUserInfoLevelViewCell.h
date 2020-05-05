//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXUserInfoPanelCell.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface YXUserInfoLevelViewCell : YXUserInfoPanelCell <CAAnimationDelegate>
{
    _Bool _enableFlip;
    _Bool _oppositeSide;
    _Bool _shakeAnimateIsStart;
    UIImageView *_bgImageView;
    UIView *_contentBGView;
    UIImageView *_animateView;
    UILabel *_oppositeSideTitle;
    UILabel *_oppositeSideCount;
}

@property(nonatomic) _Bool shakeAnimateIsStart; // @synthesize shakeAnimateIsStart=_shakeAnimateIsStart;
@property(retain, nonatomic) UILabel *oppositeSideCount; // @synthesize oppositeSideCount=_oppositeSideCount;
@property(retain, nonatomic) UILabel *oppositeSideTitle; // @synthesize oppositeSideTitle=_oppositeSideTitle;
@property(retain, nonatomic) UIImageView *animateView; // @synthesize animateView=_animateView;
@property(retain, nonatomic) UIView *contentBGView; // @synthesize contentBGView=_contentBGView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) _Bool oppositeSide; // @synthesize oppositeSide=_oppositeSide;
@property(nonatomic) _Bool enableFlip; // @synthesize enableFlip=_enableFlip;
- (void).cxx_destruct;
- (void)flipCurveAnimateDidRotationToEnd;
- (void)flipCurveAnimateDidRotationToMeddle;
- (void)flipCurveAnimate;
- (void)startFlipShakeAniamte;
- (void)startAuroraAniamte;
- (void)loadUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

