//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMBarButton;

@interface MMBarItemCustomView : UIView
{
    _Bool _showRedDot;
    UIView *_redDotView;
    MMBarButton *_barButton;
    struct UIEdgeInsets _extendTouchEdges;
}

@property(retain, nonatomic) MMBarButton *barButton; // @synthesize barButton=_barButton;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(nonatomic) struct UIEdgeInsets extendTouchEdges; // @synthesize extendTouchEdges=_extendTouchEdges;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
- (void).cxx_destruct;
- (void)addBarItemButton:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

