//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMViewSupportRealExposureProtocol-Protocol.h"

@class NSString, XMAlbumAdInfo;

@interface XMAlbumAdView : UIView <XMViewSupportRealExposureProtocol>
{
    XMAlbumAdInfo *_albumAdInfo;
}

+ (_Bool)cusViewIsRealExposedInWindow:(id)arg1;
@property(nonatomic) __weak XMAlbumAdInfo *albumAdInfo; // @synthesize albumAdInfo=_albumAdInfo;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)viewDidExposureInWindow;
- (_Bool)isViewShowInWindow;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

