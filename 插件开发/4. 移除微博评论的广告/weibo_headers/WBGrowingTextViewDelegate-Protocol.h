//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBGrowingTextView;

@protocol WBGrowingTextViewDelegate <NSObject>

@optional
- (void)growingTextView:(WBGrowingTextView *)arg1 textViewDidChangeHeight:(double)arg2;
- (void)growingTextView:(WBGrowingTextView *)arg1 textViewWillChangeHeight:(double)arg2;
- (_Bool)growingTextView:(WBGrowingTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)growingTextViewDidChange:(WBGrowingTextView *)arg1;
- (void)growingTextViewDidEndEditing:(WBGrowingTextView *)arg1;
- (void)growingTextViewDidBeginEditing:(WBGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldEndEditing:(WBGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(WBGrowingTextView *)arg1;
@end

