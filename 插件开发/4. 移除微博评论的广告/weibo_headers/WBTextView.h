//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UILabel, WBTextViewDelegateProxy;
@protocol WBTextViewDelegate;

@interface WBTextView : UITextView
{
    long long minHeight;
    long long maxHeight;
    _Bool inited;
    UILabel *placeHolderLabel;
    WBTextViewDelegateProxy *proxyDelegate;
    _Bool _wraperWithScrollView;
    _Bool _animateHeightChange;
    UIColor *_placeHolderColor;
    NSString *_placeHolder;
    id <WBTextViewDelegate> _textDelegate;
    long long _maxNumberOfLines;
    long long _minNumberOfLines;
    struct UIEdgeInsets _placeHolderEdgeInsets;
}

@property(nonatomic) _Bool animateHeightChange; // @synthesize animateHeightChange=_animateHeightChange;
@property(nonatomic) long long minNumberOfLines; // @synthesize minNumberOfLines=_minNumberOfLines;
@property(nonatomic) long long maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
@property(nonatomic) __weak id <WBTextViewDelegate> textDelegate; // @synthesize textDelegate=_textDelegate;
@property(nonatomic) _Bool wraperWithScrollView; // @synthesize wraperWithScrollView=_wraperWithScrollView;
@property(nonatomic) struct UIEdgeInsets placeHolderEdgeInsets; // @synthesize placeHolderEdgeInsets=_placeHolderEdgeInsets;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) UIColor *placeHolderColor; // @synthesize placeHolderColor=_placeHolderColor;
@property(nonatomic) long long maxHeight; // @synthesize maxHeight;
@property(nonatomic) long long minHeight; // @synthesize minHeight;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)textViewDidChangeSize;
- (void)resizeTextView:(long long)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (int)numberOfLines;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)checkPlaceHolderState;
- (void)showPlaceHolder:(_Bool)arg1;
- (id)placeHolderLabel;
- (void)setFont:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)sharedInitialization;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end

