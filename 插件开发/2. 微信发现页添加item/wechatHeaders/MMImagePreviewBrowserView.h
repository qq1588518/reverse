//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImageScrollView.h"

#import "MMAssetPickerBrowserViewProtocol-Protocol.h"

@class MMAssetInfo, MMAssetPickerBrowserStateInfo, NSString;
@protocol MMAssetPickerBrowserViewDelegate, MMImagePickerControlCenter;

@interface MMImagePreviewBrowserView : ImageScrollView <MMAssetPickerBrowserViewProtocol>
{
    id <MMImagePickerControlCenter> controlCenter;
    MMAssetInfo *assetInfo;
    id <MMAssetPickerBrowserViewDelegate> browserDelegate;
    MMAssetPickerBrowserStateInfo *m_stateInfo;
}

@property(readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo; // @synthesize stateInfo=m_stateInfo;
@property(nonatomic) __weak id <MMAssetPickerBrowserViewDelegate> browserDelegate; // @synthesize browserDelegate;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (void).cxx_destruct;
- (void)loadAsset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

