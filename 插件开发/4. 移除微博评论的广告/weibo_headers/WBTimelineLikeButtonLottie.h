//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimelineLikeButton.h"

@class LOTAnimationView;

@interface WBTimelineLikeButtonLottie : WBTimelineLikeButton
{
    LOTAnimationView *_lottieAnimationView;
}

@property(retain, nonatomic) LOTAnimationView *lottieAnimationView; // @synthesize lottieAnimationView=_lottieAnimationView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isAnimating;
- (void)beginLikeAnimation;
- (void)setLikeCount:(long long)arg1 changeDuringAnimation:(_Bool)arg2 specialStrategy:(CDUnknownBlockType)arg3;
- (void)setLikeCount:(long long)arg1 changeDuringAnimation:(_Bool)arg2;
- (void)setLikeState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setLikeState:(unsigned long long)arg1 attitudeType:(long long)arg2 animated:(_Bool)arg3;
- (void)onLayoutSubviews;

@end

