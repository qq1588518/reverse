//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, UIButton, UIImageView;
@protocol XMFloatTipViewDelegate;

@interface XMFloatTipView : UIView
{
    _Bool _showing;
    _Bool _animating;
    unsigned long long _showSecs;
    unsigned long long _noOperationSecs;
    _Bool _hidePopTip;
    _Bool _autoShow;
    _Bool _panning;
    int _popDirection;
    int _tipDirection;
    id <XMFloatTipViewDelegate> _delegate;
    NSString *_urlStr;
    double _startY;
    UIImageView *_mainView;
    UIView *_tipView;
    UIButton *_button;
    NSTimer *_timer;
    NSTimer *_noOperationTimer;
    UIButton *_tipBtn;
    UIButton *_mainBtn;
    struct CGPoint _initialPoint;
}

@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(nonatomic) _Bool panning; // @synthesize panning=_panning;
@property(retain, nonatomic) UIButton *mainBtn; // @synthesize mainBtn=_mainBtn;
@property(retain, nonatomic) UIButton *tipBtn; // @synthesize tipBtn=_tipBtn;
@property(nonatomic) int tipDirection; // @synthesize tipDirection=_tipDirection;
@property(retain, nonatomic) NSTimer *noOperationTimer; // @synthesize noOperationTimer=_noOperationTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIImageView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) _Bool autoShow; // @synthesize autoShow=_autoShow;
@property(nonatomic) int popDirection; // @synthesize popDirection=_popDirection;
@property(nonatomic) double startY; // @synthesize startY=_startY;
@property(retain, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(nonatomic) _Bool hidePopTip; // @synthesize hidePopTip=_hidePopTip;
@property(nonatomic) __weak id <XMFloatTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)noOperationCountUp;
- (void)startNoOperationCounting;
- (void)stopNoOperationCounting;
- (void)showCountUp;
- (void)stopCounting;
- (void)panning:(id)arg1;
- (void)hideToSide;
- (void)showPopTip;
- (void)draggingDidEnd;
- (void)tipViewDidTap:(id)arg1;
- (void)mainViewDidTap:(id)arg1;
- (void)tipTapped:(id)arg1;
- (void)btnTapped:(id)arg1;
- (void)hide;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)show;
- (void)show:(CDUnknownBlockType)arg1;
- (id)initWithView:(id)arg1 imageName:(id)arg2 popDirection:(int)arg3 tipPopDirection:(int)arg4 popImage:(id)arg5 popText:(id)arg6;
- (id)initWithView:(id)arg1 imageName:(id)arg2 popDirection:(int)arg3 tipPopDirection:(int)arg4 popImage:(id)arg5;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 imageName:(id)arg2 popDirection:(int)arg3 tipPopDirection:(int)arg4 popText:(id)arg5;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (id)popTipViewWithImage:(id)arg1;
- (void)setupMainViewForDirection:(int)arg1;
- (void)setupTipViewForDirection:(int)arg1;
- (id)popTipViewWithText:(id)arg1;
- (void)dealloc;

@end

