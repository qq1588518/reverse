//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "WBSkinning-Protocol.h"

@class NSString, NSTimer, UIButton, UIImageView, UILabel;
@protocol WBHintBoardDelegate;

@interface WBHintBoard : UIControl <WBSkinning>
{
    double dismissDelay;
    UILabel *hintLabel;
    UIImageView *backgroundImageView;
    UIButton *closeButton;
    UIImageView *arrowView;
    struct CGRect originalFrame;
    int dismissDirection;
    NSTimer *autoHideTimer;
    unsigned long long version;
    double animationDurationTime;
    _Bool isChangeAlpha;
    id <WBHintBoardDelegate> delegate;
    _Bool _isShow;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) __weak id <WBHintBoardDelegate> delegate; // @synthesize delegate;
@property(nonatomic) double animationDurationTime; // @synthesize animationDurationTime;
@property(nonatomic) double dismissDelay; // @synthesize dismissDelay;
- (void).cxx_destruct;
- (void)appLanguageDidChange:(id)arg1;
- (void)reloadUIElements;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)autoDisappear:(id)arg1;
- (void)dismiss;
- (void)showHint:(id)arg1;
- (void)showHint:(id)arg1 dismissAfterDelay:(double)arg2;
- (void)popupHint;
- (void)popupHintAndDismissAfterDelay:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dismissDirection:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)initHintLabel;
- (void)initQaCloseButton;
- (void)initArrowView;
- (void)initCloseButton;
- (void)initBackgroundImageView;
- (struct CGRect)disappearFrame;
@property(nonatomic) struct CGRect appearFrame; // @dynamic appearFrame;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

