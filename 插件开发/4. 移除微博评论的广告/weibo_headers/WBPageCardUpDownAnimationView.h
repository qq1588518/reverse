//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class NSArray, WBPageCardBubbleView, WBUpDownAnimateStillView;

@interface WBPageCardUpDownAnimationView : WBPageCardViewBase
{
    _Bool isPause;
    _Bool isScrolling;
    double animationDuration;
    WBUpDownAnimateStillView *_stillView;
    WBPageCardBubbleView *_animateBubbleView;
    NSArray *_animtionGroups;
    unsigned long long _direction;
    CDUnknownBlockType _scrollTask;
}

+ (struct UIEdgeInsets)edgeInsetsViewOutside:(id)arg1;
+ (double)heightOfDataObject:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType scrollTask; // @synthesize scrollTask=_scrollTask;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSArray *animtionGroups; // @synthesize animtionGroups=_animtionGroups;
@property(retain, nonatomic) WBPageCardBubbleView *animateBubbleView; // @synthesize animateBubbleView=_animateBubbleView;
@property(retain, nonatomic) WBUpDownAnimateStillView *stillView; // @synthesize stillView=_stillView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resumeScroll;
- (void)pauseScroll;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)viewControllerStateChangeNotification:(id)arg1;
- (void)tableViewDidEndDisplayCellNotification:(id)arg1;
- (void)tableViewWillDisplayCellNotification:(id)arg1;
- (void)addObserver;
- (void)actionLogWithCard:(id)arg1;
- (void)ad3rdMoniterWithCard:(id)arg1;
- (void)startAnimationWithIndex:(long long)arg1;
- (void)startScrollWithIndex:(long long)arg1;
- (_Bool)highlightCellBackgroundWhenPressed;
- (void)resetScrollTask;
- (void)setPageCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

