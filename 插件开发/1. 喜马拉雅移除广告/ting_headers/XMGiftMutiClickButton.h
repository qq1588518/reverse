//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSTimer, UIButton, XMConsecutiveProgress, XMLiveGiftItem;
@protocol XMGiftMutiClickButtonDelegate;

@interface XMGiftMutiClickButton : UIView
{
    float _countTime;
    id <XMGiftMutiClickButtonDelegate> _delegate;
    XMLiveGiftItem *_giftItem;
    long long _timeoutDuration;
    CAGradientLayer *_gradientLayer;
    UIButton *_clickBtn;
    XMConsecutiveProgress *_circleProgress;
    NSTimer *_countDownTimer;
}

- (void).cxx_destruct;
@property(nonatomic) float countTime; // @synthesize countTime=_countTime;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) XMConsecutiveProgress *circleProgress; // @synthesize circleProgress=_circleProgress;
@property(retain, nonatomic) UIButton *clickBtn; // @synthesize clickBtn=_clickBtn;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) long long timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property(retain, nonatomic) XMLiveGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(nonatomic) __weak id <XMGiftMutiClickButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)stopTimer;
- (void)startTimer;
- (void)endConsective;
- (void)startConsective;
- (void)onMutiSendGift;
- (void)onConsectiveButtonTouchUp;
- (void)onConsectiveButtonTouchDown;
- (void)onTimerCallBack;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

