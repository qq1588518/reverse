//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMediaEditorCacheMediaInfo-Protocol.h"

@class WB360ImageUploadPreviewViewController, WBImageEditorCache;

@protocol WB360ImageUploadPreviewViewControllerDelegate <WBMediaEditorCacheMediaInfo>

@optional
- (void)three60ImageUploadPreviewController:(WB360ImageUploadPreviewViewController *)arg1 didFinishPreviewingWithSelectedImageCache:(WBImageEditorCache *)arg2;
- (void)three60ImageUploadPreviewControllerDidCancelPreview:(WB360ImageUploadPreviewViewController *)arg1;
@end

