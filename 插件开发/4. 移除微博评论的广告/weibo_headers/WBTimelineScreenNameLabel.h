//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBUIControl.h"

@class NSArray, NSIndexSet, UIColor, WBTimelineScreenNameTextRender, WBUser;
@protocol WBTimelineScreenNameLabelDelegate;

@interface WBTimelineScreenNameLabel : WBUIControl
{
    struct {
        unsigned int iconsNeedsUpdate:1;
    } _flags;
    _Bool _isNeedShowDefaultIcon;
    _Bool _unanimousBaseLine;
    _Bool _hiddenIcon;
    WBUser *_user;
    long long _options;
    id <WBTimelineScreenNameLabelDelegate> _delegate;
    double _currentTextBaselineOrigin;
    UIColor *_textColor;
    UIColor *_redNameTextColor;
    double _fontSize;
    NSIndexSet *_remoteIconIndexSet;
    NSArray *_icons;
    NSArray *_remoteIconImageViews;
    NSArray *_surfix;
    NSArray *_cachedScreenNameSurfix;
    double _cachedScreenNameSurfixFrameWidth;
    long long _interfaceStyle;
    WBTimelineScreenNameTextRender *_screenNameRender;
    struct CGRect _touchableRect;
    struct CGRect _currentTextFrame;
}

@property(retain, nonatomic) WBTimelineScreenNameTextRender *screenNameRender; // @synthesize screenNameRender=_screenNameRender;
@property(nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
@property(nonatomic) double cachedScreenNameSurfixFrameWidth; // @synthesize cachedScreenNameSurfixFrameWidth=_cachedScreenNameSurfixFrameWidth;
@property(retain, nonatomic) NSArray *cachedScreenNameSurfix; // @synthesize cachedScreenNameSurfix=_cachedScreenNameSurfix;
@property(retain, nonatomic) NSArray *surfix; // @synthesize surfix=_surfix;
@property(nonatomic) _Bool hiddenIcon; // @synthesize hiddenIcon=_hiddenIcon;
@property(nonatomic) _Bool unanimousBaseLine; // @synthesize unanimousBaseLine=_unanimousBaseLine;
@property(retain, nonatomic) NSArray *remoteIconImageViews; // @synthesize remoteIconImageViews=_remoteIconImageViews;
@property(nonatomic) struct CGRect currentTextFrame; // @synthesize currentTextFrame=_currentTextFrame;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSIndexSet *remoteIconIndexSet; // @synthesize remoteIconIndexSet=_remoteIconIndexSet;
@property(nonatomic) _Bool isNeedShowDefaultIcon; // @synthesize isNeedShowDefaultIcon=_isNeedShowDefaultIcon;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) UIColor *redNameTextColor; // @synthesize redNameTextColor=_redNameTextColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) struct CGRect touchableRect; // @synthesize touchableRect=_touchableRect;
@property(readonly, nonatomic) double currentTextBaselineOrigin; // @synthesize currentTextBaselineOrigin=_currentTextBaselineOrigin;
@property(nonatomic) __weak id <WBTimelineScreenNameLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)_userPressedIcon:(id)arg1;
- (void)_userPressedText;
- (_Bool)handleControlEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)_sendActionsForControlEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addRemoteIcons;
- (double)iconRightAtIndex:(unsigned long long)arg1 inIconList:(id)arg2;
- (double)iconLeftAtIndex:(unsigned long long)arg1 inIconList:(id)arg2;
- (void)removeRemoteIcons;
- (void)drawingDidFinishAsynchronously:(_Bool)arg1 success:(_Bool)arg2;
- (_Bool)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 asynchronously:(_Bool)arg3;
- (void)drawingWillStartAsynchronously:(_Bool)arg1;
- (id)defaultIcons;
- (void)updateIcons;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)redrawsAutomaticallyWhenStateChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

