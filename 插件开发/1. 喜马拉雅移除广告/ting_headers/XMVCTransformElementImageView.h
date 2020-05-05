//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMWebImageView.h"

#import "XMVCStickerViewProtocol-Protocol.h"
#import "XMVCTransformElement-Protocol.h"

@class NSString, XMVCImageStickerInfo;

@interface XMVCTransformElementImageView : XMWebImageView <XMVCTransformElement, XMVCStickerViewProtocol>
{
    XMVCImageStickerInfo *_stickerInfo;
    struct XMVCRotateRect _rotateRect;
}

@property(retain, nonatomic) XMVCImageStickerInfo *stickerInfo; // @synthesize stickerInfo=_stickerInfo;
@property(nonatomic) struct XMVCRotateRect rotateRect; // @synthesize rotateRect=_rotateRect;
- (void).cxx_destruct;
- (void)updateWithStickerInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) struct XMVCRotateRect defRotateRect;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

