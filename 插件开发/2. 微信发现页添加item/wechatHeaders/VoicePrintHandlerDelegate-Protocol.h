//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol VoicePrintHandlerDelegate <NSObject>

@optional
- (void)OnRegSuccessWithBioSigTicket:(NSString *)arg1;
- (void)OnClickCanNotUnLockBtn;
- (void)OnLoginVerifyOverLimit;
- (void)OnLoginVerifySucessWithRandomAuthKey:(NSString *)arg1 andTicket:(NSString *)arg2;
- (void)OnVerifySuccessful;
- (void)OnVerifyCancel;
@end

