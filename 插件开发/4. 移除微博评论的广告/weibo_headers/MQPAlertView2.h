//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMPAlertViewProtocol-Protocol.h"

@class NSAttributedString, NSMutableArray, NSString, UIButton, UIColor, UILabel;
@protocol UIAlertViewDelegate;

@interface MQPAlertView2 : UIView <MMPAlertViewProtocol>
{
    _Bool _hasCancel;
    NSString *_title;
    NSString *_message;
    id <UIAlertViewDelegate> _delegate;
    long long _cancelButtonIndex;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSAttributedString *_attributedText;
    NSMutableArray *_allBtnTitles;
    UIView *_maskView;
    UIButton *_lastbtn;
    double _leftPadding;
    double _contentPadding;
    double _messagePadding;
    double _animateTime;
    UIColor *_sepColor;
}

+ (void)initialize;
@property(nonatomic) _Bool hasCancel; // @synthesize hasCancel=_hasCancel;
@property(retain, nonatomic) UIColor *sepColor; // @synthesize sepColor=_sepColor;
@property(nonatomic) double animateTime; // @synthesize animateTime=_animateTime;
@property(nonatomic) double messagePadding; // @synthesize messagePadding=_messagePadding;
@property(nonatomic) double contentPadding; // @synthesize contentPadding=_contentPadding;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(retain, nonatomic) UIButton *lastbtn; // @synthesize lastbtn=_lastbtn;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSMutableArray *allBtnTitles; // @synthesize allBtnTitles=_allBtnTitles;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
@property(nonatomic) __weak id <UIAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)onClick:(id)arg1;
- (id)targetView;
- (void)showInView:(id)arg1;
- (void)realHideKeyboard;
- (void)hideKeyboard;
- (void)resume;
- (void)pause;
- (void)show;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (_Bool)isShow;
- (double)getBtnTop;
- (void)configMoreBtn;
- (void)configTwoBtn;
- (id)createBtnWithText:(id)arg1 isBlackColor:(_Bool)arg2;
- (void)configBtns;
- (void)configMessage;
- (void)configTitle;
- (void)configUI;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

