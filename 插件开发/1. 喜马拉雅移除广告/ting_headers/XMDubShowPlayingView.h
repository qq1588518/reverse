//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, NSMutableArray, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol XMDubShowPlayingViewDelegate;

@interface XMDubShowPlayingView : UIView
{
    _Bool _isScrollDownEnable;
    _Bool _isScrollUpEnable;
    _Bool _pushGR;
    NSMutableArray *_options;
    id <XMDubShowPlayingViewDelegate> _delegate;
    long long _interfaceOrientation;
    UIView *_contentView;
    double _lastDubDR;
    UITapGestureRecognizer *_dblclickGR;
    UIPanGestureRecognizer *_panGR;
    LOTAnimationView *_dubclickGuideLotView;
    UIView *_dubclickGuideAlphaView;
}

@property(retain, nonatomic) UIView *dubclickGuideAlphaView; // @synthesize dubclickGuideAlphaView=_dubclickGuideAlphaView;
@property(retain, nonatomic) LOTAnimationView *dubclickGuideLotView; // @synthesize dubclickGuideLotView=_dubclickGuideLotView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGR; // @synthesize panGR=_panGR;
@property(retain, nonatomic) UITapGestureRecognizer *dblclickGR; // @synthesize dblclickGR=_dblclickGR;
@property(nonatomic) double lastDubDR; // @synthesize lastDubDR=_lastDubDR;
@property(nonatomic) _Bool pushGR; // @synthesize pushGR=_pushGR;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isScrollUpEnable; // @synthesize isScrollUpEnable=_isScrollUpEnable;
@property(nonatomic) _Bool isScrollDownEnable; // @synthesize isScrollDownEnable=_isScrollDownEnable;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) __weak id <XMDubShowPlayingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)hideDubclickGuideLotView;
- (void)showDoubleClickGuide;
- (long long)addPlayNextOrPreCount;
- (_Bool)shouldShowDoubleClickGuide;
- (void)onGuideTap:(id)arg1;
- (void)addGuideView;
- (void)showLikeAnimationWithPoint:(struct CGPoint)arg1;
- (void)onDblTapGR:(id)arg1;
- (void)onTapGR:(id)arg1;
- (void)resetOffset;
- (void)playPreOrNextItem:(_Bool)arg1;
- (void)onPanGR:(id)arg1;
- (void)addGestureRecognizer;
- (void)invalidateVideoPlayer;
- (void)invalidateTimer;
- (void)resetContentViewOffset;
- (void)applicationDidBecomeActive;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

