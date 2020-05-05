//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface WBPhotoViewerTransitionAnimationOptions : NSObject
{
    _Bool _interactingHorizontalDisable;
    _Bool _interactingScaleDisable;
    _Bool _interactingUpDisable;
    _Bool _interactingVelocityDisable;
    _Bool _interactingSlowFade;
    _Bool _onlyFade;
    CDUnknownBlockType _preparation;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
    UIView *_interactingView;
    CDUnknownBlockType _interactingViewCancelAnimations;
    CDUnknownBlockType _interactingViewFinishAnimations;
}

@property(nonatomic) _Bool onlyFade; // @synthesize onlyFade=_onlyFade;
@property(copy, nonatomic) CDUnknownBlockType interactingViewFinishAnimations; // @synthesize interactingViewFinishAnimations=_interactingViewFinishAnimations;
@property(copy, nonatomic) CDUnknownBlockType interactingViewCancelAnimations; // @synthesize interactingViewCancelAnimations=_interactingViewCancelAnimations;
@property(nonatomic) _Bool interactingSlowFade; // @synthesize interactingSlowFade=_interactingSlowFade;
@property(nonatomic) _Bool interactingVelocityDisable; // @synthesize interactingVelocityDisable=_interactingVelocityDisable;
@property(nonatomic) _Bool interactingUpDisable; // @synthesize interactingUpDisable=_interactingUpDisable;
@property(nonatomic) _Bool interactingScaleDisable; // @synthesize interactingScaleDisable=_interactingScaleDisable;
@property(nonatomic) _Bool interactingHorizontalDisable; // @synthesize interactingHorizontalDisable=_interactingHorizontalDisable;
@property(retain, nonatomic) UIView *interactingView; // @synthesize interactingView=_interactingView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(copy, nonatomic) CDUnknownBlockType preparation; // @synthesize preparation=_preparation;
- (void).cxx_destruct;

@end

