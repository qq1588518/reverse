//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CDZButton, UIButton, UILabel;

@interface XMRealNameReminderView : UIView
{
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _verifyBlock;
    UILabel *_reminderLabel;
    CDZButton *_closeButton;
    UIButton *_rightButton;
}

@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) CDZButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *reminderLabel; // @synthesize reminderLabel=_reminderLabel;
@property(copy, nonatomic) CDUnknownBlockType verifyBlock; // @synthesize verifyBlock=_verifyBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (void)p_handleRightButton:(id)arg1;
- (void)p_handlecloseButton:(id)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

