//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WSCommentInputDelegate <NSObject>
- (void)onHideInputOfTouchEmpty:(NSString *)arg1;
- (void)onSubmitWithOverLengthText:(NSString *)arg1;
- (void)onSubmitWithText:(NSString *)arg1;
- (void)onCancelWithText:(NSString *)arg1;
@end

