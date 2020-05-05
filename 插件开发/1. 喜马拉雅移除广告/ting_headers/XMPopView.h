//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UITapGestureRecognizer, XMPopArrowContainerView, XMPopArrowView;

@interface XMPopView : UIView <UIGestureRecognizerDelegate>
{
    struct CGRect _senderFrameInSelf;
    XMPopArrowView *_arrowView;
    XMPopArrowContainerView *_containerView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    double _senderInterval;
    _Bool _automaticallyHide;
    CDUnknownBlockType _tapBackgroundBlock;
    CDUnknownBlockType _didHideBlock;
    long long _arrowDirection;
    double _arrowOffset;
    UIView *_contentView;
    double _animationDuration;
    struct UIEdgeInsets _containerViewMargin;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct UIEdgeInsets containerViewMargin; // @synthesize containerViewMargin=_containerViewMargin;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(copy, nonatomic) CDUnknownBlockType didHideBlock; // @synthesize didHideBlock=_didHideBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBackgroundBlock; // @synthesize tapBackgroundBlock=_tapBackgroundBlock;
@property(nonatomic) _Bool automaticallyHide; // @synthesize automaticallyHide=_automaticallyHide;
- (void).cxx_destruct;
@property(nonatomic) double arrowAnchor;
@property(nonatomic) double arrowSize;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property(readonly, nonatomic) XMPopArrowContainerView *containerView;
@property(readonly, nonatomic) XMPopArrowView *arrowView;
- (double)horizontalOffsetForContentFrame:(struct CGRect)arg1;
- (double)verticalOffestForContentFrame:(struct CGRect)arg1;
- (void)layoutMySubviews;
- (void)initTableViewAndConetentView;
- (void)initArrowView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGSize)finalContentSizeThatFits:(struct CGSize)arg1;
- (id)finalTintColor;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tapBackground:(id)arg1;
- (void)didFinishHidingAnimation;
- (void)performHidingAnimation;
- (void)prepareForHiding;
- (void)didFinishShowingAnimation;
- (void)performShowingAnimation;
- (void)prepareForShowing;
- (void)hide;
- (void)_show;
- (void)showInView:(id)arg1 withSenderFrame:(struct CGRect)arg2 interval:(double)arg3;
- (void)showInView:(id)arg1 withSenderFrame:(struct CGRect)arg2;
- (void)showWithSenderFrame:(struct CGRect)arg1;
- (void)showInView:(id)arg1 withSender:(id)arg2 interval:(double)arg3;
- (void)showInView:(id)arg1 withSender:(id)arg2;
- (void)showWithSender:(id)arg1;
- (void)didInitialize;
- (id)initWithContentView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

