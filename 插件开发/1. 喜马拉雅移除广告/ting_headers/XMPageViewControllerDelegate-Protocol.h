//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIViewController, XMPageViewController;

@protocol XMPageViewControllerDelegate <NSObject>

@optional
- (void)pageViewController:(XMPageViewController *)arg1 fullDisplayViewController:(UIViewController *)arg2;
- (void)pageViewController:(XMPageViewController *)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(NSArray *)arg3 transitionCompleted:(_Bool)arg4;
@end

