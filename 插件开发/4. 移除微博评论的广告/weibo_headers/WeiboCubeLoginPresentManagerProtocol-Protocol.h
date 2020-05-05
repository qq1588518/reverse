//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIViewController;

@protocol WeiboCubeLoginPresentManagerProtocol <NSObject>
- (void)presentRegisterViewInController:(UIViewController *)arg1;
- (void)presentLoginViewInController:(UIViewController *)arg1 withCancelBlock:(void (^)(void))arg2;
- (void)presentLoginViewInController:(UIViewController *)arg1;
- (long long)needPhoneBinded;
- (void)showQuickBindPhoneViewWithTitle:(NSString *)arg1 inController:(UIViewController *)arg2 withCancelBlock:(void (^)(void))arg3 withComposeBlock:(void (^)(void))arg4;
- (void)showQuickBindPhoneViewWithTitle:(NSString *)arg1 inController:(UIViewController *)arg2 withComposeBlock:(void (^)(void))arg3;
- (void)showQuickLoginViewWithTitle:(NSString *)arg1 inController:(UIViewController *)arg2 withCancelBlock:(void (^)(void))arg3 extParams:(NSDictionary *)arg4;
- (void)showQuickLoginViewWithTitle:(NSString *)arg1 inController:(UIViewController *)arg2 withCancelBlock:(void (^)(void))arg3;
- (void)showQuickLoginViewWithTitle:(NSString *)arg1 inController:(UIViewController *)arg2;
- (void)showQuickLoginViewWithType:(unsigned long long)arg1 title:(NSString *)arg2 inController:(UIViewController *)arg3;
- (void)showQuickLoginDefaultTitleViewinController:(UIViewController *)arg1 withCancelBlock:(void (^)(void))arg2;
- (void)showQuickLoginDefaultTitleViewinController:(UIViewController *)arg1;
- (void)showVIPPayViewinController:(UIViewController *)arg1 WithUserID:(NSString *)arg2 Parameters:(NSDictionary *)arg3;
@end

