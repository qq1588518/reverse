//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIDatePicker, UIView;
@protocol WXDatePickerManagerDelegate;

@interface WXDatePickerManager : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _isAnimating;
    UIDatePicker *datePicker;
    id <WXDatePickerManagerDelegate> _delegate;
    UIView *_backgroudView;
    UIView *_datePickerView;
    NSString *_type;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(nonatomic) __weak id <WXDatePickerManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)hide;
- (void)show;
- (id)createDatePickerView;
- (id)createBackgroundView;
- (void)updateDatePicker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

