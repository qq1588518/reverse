//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UIColor, UIFont, UILabel, UITextView;
@protocol XHInputViewDelagete;

@interface XHInputView : UIView <UITextViewDelegate, UIGestureRecognizerDelegate>
{
    id <XHInputViewDelagete> _delegate;
    long long _maxCount;
    UIFont *_font;
    NSString *_placeholder;
    UIColor *_placeholderColor;
    UIColor *_textViewBackgroundColor;
    UIColor *_sendButtonBackgroundColor;
    NSString *_sendButtonTitle;
    double _sendButtonCornerRadius;
    UIFont *_sendButtonFont;
    NSString *_textDefault;
    UITextView *_textView;
    UIView *_textBgView;
    UIView *_inputView;
    UILabel *_countLab;
    UILabel *_placeholderLab;
    UIButton *_sendButton;
    long long _style;
    long long _keyboardType;
    CDUnknownBlockType _sendBlcok;
    CDUnknownBlockType _cancelBlock;
    struct CGRect _showFrameDefault;
    struct CGRect _sendButtonFrameDefault;
    struct CGRect _textViewFrameDefault;
}

+ (id)showWithStyle:(long long)arg1 keyboardType:(long long)arg2 sendBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;
+ (id)showWithStyle:(long long)arg1 keyboardString:(id)arg2 sendBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType sendBlcok; // @synthesize sendBlcok=_sendBlcok;
@property(nonatomic) struct CGRect textViewFrameDefault; // @synthesize textViewFrameDefault=_textViewFrameDefault;
@property(nonatomic) struct CGRect sendButtonFrameDefault; // @synthesize sendButtonFrameDefault=_sendButtonFrameDefault;
@property(nonatomic) struct CGRect showFrameDefault; // @synthesize showFrameDefault=_showFrameDefault;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UILabel *placeholderLab; // @synthesize placeholderLab=_placeholderLab;
@property(retain, nonatomic) UILabel *countLab; // @synthesize countLab=_countLab;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *textBgView; // @synthesize textBgView=_textBgView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *textDefault; // @synthesize textDefault=_textDefault;
@property(retain, nonatomic) UIFont *sendButtonFont; // @synthesize sendButtonFont=_sendButtonFont;
@property(nonatomic) double sendButtonCornerRadius; // @synthesize sendButtonCornerRadius=_sendButtonCornerRadius;
@property(copy, nonatomic) NSString *sendButtonTitle; // @synthesize sendButtonTitle=_sendButtonTitle;
@property(retain, nonatomic) UIColor *sendButtonBackgroundColor; // @synthesize sendButtonBackgroundColor=_sendButtonBackgroundColor;
@property(retain, nonatomic) UIColor *textViewBackgroundColor; // @synthesize textViewBackgroundColor=_textViewBackgroundColor;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) id <XHInputViewDelagete> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyboardWillDisappear:(id)arg1;
- (void)keyboardWillAppear:(id)arg1;
- (void)sendButtonClick:(id)arg1;
- (void)bgViewClick;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)resetFrameDefault;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 keyboardType:(long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)hide;
- (void)show;
- (void)cancel;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

