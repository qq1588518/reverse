//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class EmoticonStoreItem, NSString;

@protocol EmoticonStoreItemExt

@optional
- (void)OnEmoticonStoreItemGetDetailFailed:(NSString *)arg1;
- (void)OnEmoticonStoreItemGetProductFinished:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemInstallFailed:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemInstallFinished:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemInstallStarted:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemDownloadFailed:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemDownloadFinished:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemDownloadProgressChanged:(EmoticonStoreItem *)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnEmoticonStoreItemChanged:(EmoticonStoreItem *)arg1;
@end

