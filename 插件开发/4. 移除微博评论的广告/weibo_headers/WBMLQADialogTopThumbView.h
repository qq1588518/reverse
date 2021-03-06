//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, NSTimer, UIImageView, UILabel, WBMLQADialogProgressView, WBMLVideoGradientControl;

@interface WBMLQADialogTopThumbView : UIView
{
    NSString *_questionID;
    NSString *_questionNumber;
    NSString *_content;
    UILabel *_onLookLabel;
    UILabel *_answerLabel;
    UIImageView *_imgView;
    WBMLVideoGradientControl *_warnView;
    WBMLQADialogProgressView *_progressLayer;
    CAShapeLayer *_progressBackLayer;
    NSTimer *_timer;
    long long _countSec;
}

@property(nonatomic) long long countSec; // @synthesize countSec=_countSec;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) CAShapeLayer *progressBackLayer; // @synthesize progressBackLayer=_progressBackLayer;
@property(retain, nonatomic) WBMLQADialogProgressView *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) WBMLVideoGradientControl *warnView; // @synthesize warnView=_warnView;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UILabel *answerLabel; // @synthesize answerLabel=_answerLabel;
@property(retain, nonatomic) UILabel *onLookLabel; // @synthesize onLookLabel=_onLookLabel;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *questionNumber; // @synthesize questionNumber=_questionNumber;
@property(copy, nonatomic) NSString *questionID; // @synthesize questionID=_questionID;
- (void).cxx_destruct;
- (void)removeTimer;
- (void)timerRepeat:(id)arg1;
- (void)onWarn;
- (void)timeOut;
- (void)onAnswering;
- (void)onCorrect;
- (void)onWrong;
- (void)onLookAnswer;
- (void)onLook;
- (void)resetSubViewsHidden;
- (void)showTopThumbViewWithStatus:(unsigned long long)arg1;
- (void)setTopThumbViewOnPubResultStatus;
- (void)setTopThumbViewOnAnsweringStatus;
- (void)setTopThumbViewOnLookStatus;
- (void)setTopThumbView;
- (void)addSubViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

