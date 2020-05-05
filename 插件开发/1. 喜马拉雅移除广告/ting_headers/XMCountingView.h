//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UILabel;
@protocol XMCountingViewDelegate;

@interface XMCountingView : UIView
{
    UILabel *_countDownLabel;
    UILabel *_loadingLabel;
    id <XMCountingViewDelegate> _delegate;
    long long _preparedTime;
    NSTimer *_countDownTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(nonatomic) long long preparedTime; // @synthesize preparedTime=_preparedTime;
@property(nonatomic) __weak id <XMCountingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopLoading;
- (void)countDownAnimate;
- (void)showPreparedCountDown;
- (void)customedSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

