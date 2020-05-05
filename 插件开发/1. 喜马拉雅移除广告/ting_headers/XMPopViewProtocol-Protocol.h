//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView, UIViewController;

@protocol XMPopViewProtocol <NSObject>
- (_Bool)canHandleDragGesture:(UIView *)arg1;
- (void)hideWithAnimate:(_Bool)arg1;
- (void)showWithAnimate:(_Bool)arg1;
- (id)initPopFromView:(UIView *)arg1;
- (id)initWithController:(UIViewController *)arg1 title:(NSString *)arg2;
- (id)initWithController:(UIViewController *)arg1;
@end

