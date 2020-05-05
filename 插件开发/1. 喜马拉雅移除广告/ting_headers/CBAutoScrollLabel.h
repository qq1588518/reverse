//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSString, UIColor, UIFont, UILabel, UIScrollView;

@interface CBAutoScrollLabel : UIView <UIScrollViewDelegate>
{
    _Bool _scrolling;
    float _scrollSpeed;
    long long _scrollDirection;
    double _pauseInterval;
    long long _labelSpacing;
    unsigned long long _animationOptions;
    double _fadeLength;
    long long _textAlignment;
    NSArray *_labels;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) double fadeLength; // @synthesize fadeLength=_fadeLength;
@property(readonly, nonatomic) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property(nonatomic) long long labelSpacing; // @synthesize labelSpacing=_labelSpacing;
@property(nonatomic) double pauseInterval; // @synthesize pauseInterval=_pauseInterval;
@property(nonatomic) float scrollSpeed; // @synthesize scrollSpeed=_scrollSpeed;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
- (void).cxx_destruct;
- (void)onUIApplicationDidChangeStatusBarOrientationNotification:(id)arg1;
- (void)applyGradientMaskForFadeLength:(double)arg1 enableFade:(_Bool)arg2;
- (void)didChangeFrame;
- (void)refreshLabels;
- (void)scrollLabelIfNeeded;
- (void)enableShadow;
- (void)observeApplicationNotifications;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) struct CGSize shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)setAttributedText:(id)arg1 refreshLabels:(_Bool)arg2;
@property(copy, nonatomic) NSString *text;
- (void)setText:(id)arg1 refreshLabels:(_Bool)arg2;
@property(readonly, nonatomic) UILabel *mainLabel;
- (void)didMoveToWindow;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

