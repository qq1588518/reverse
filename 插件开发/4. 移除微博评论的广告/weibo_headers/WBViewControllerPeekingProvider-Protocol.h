//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol UIViewControllerPreviewing;

@protocol WBViewControllerPeekingProvider <NSObject>
- (UIViewController *)previewingContext:(id <UIViewControllerPreviewing>)arg1 viewControllerForLocation:(struct CGPoint)arg2;

@optional
- (_Bool)previewingContextShouldBeginPreview:(id <UIViewControllerPreviewing>)arg1;
@end

