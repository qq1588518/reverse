//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EditImageAttr, WCEditImageViewController;

@protocol WCEditImageViewControllerDelegate <NSObject>

@optional
- (void)editImageViewControllerDidCancel:(WCEditImageViewController *)arg1;
- (void)editImageViewController:(WCEditImageViewController *)arg1 didFinishEditingImage:(EditImageAttr *)arg2;
@end

