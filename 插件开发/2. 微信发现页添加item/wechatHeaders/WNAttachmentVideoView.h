//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNAttachmentBaseView.h"

#import "FavSightViewDelegate-Protocol.h"
#import "FavVideoCompressExt-Protocol.h"

@class FavSightView, NSString;

@interface WNAttachmentVideoView : WNAttachmentBaseView <FavSightViewDelegate, FavVideoCompressExt>
{
    FavSightView *_videoPlayer;
}

+ (double)getHeightOfAttachment:(id)arg1 withWidth:(double)arg2;
- (void).cxx_destruct;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(_Bool)arg2;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)onClickObject;
- (void)tryConfigCompressVideoPath;
- (void)layoutView;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

