//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"

@class NSString, UIView, UIViewController, WBPhotoPreviewerTransitionAnimationOptions, WBPhotoPreviewerTransitionController;
@protocol UIViewControllerContextTransitioning;

@interface WBPhotoPreviewerTransitionDismissalAnimator : NSObject <UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning>
{
    struct CGPoint _originalInteractingViewCenter;
    struct CGSize _originalInteractingViewSize;
    _Bool _dismissing;
    double _duration;
    WBPhotoPreviewerTransitionController *_transitionController;
    id <UIViewControllerContextTransitioning> _transitionContext;
    WBPhotoPreviewerTransitionAnimationOptions *_animationOptions;
    UIViewController *_viewController;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) WBPhotoPreviewerTransitionAnimationOptions *animationOptions; // @synthesize animationOptions=_animationOptions;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) __weak WBPhotoPreviewerTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)prepareForDismiss;
- (_Bool)endWithGesture:(id)arg1;
- (void)changeWithGesture:(id)arg1;
- (void)beginWithDismissalViewController:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

