//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WBJSBridgeContactPickerController;

@protocol WBJSBridgeContactPickerControllerDelegate <NSObject>
- (void)jsbridge_contactPickerControllerDidCancel:(WBJSBridgeContactPickerController *)arg1;
- (void)jsbridge_contactPickerController:(WBJSBridgeContactPickerController *)arg1 didPickContacts:(NSArray *)arg2;
@end

