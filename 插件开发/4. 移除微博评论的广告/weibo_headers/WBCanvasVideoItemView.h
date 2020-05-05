//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCanvasItemView.h"

#import "WBCanvasVideoContainerEventDelegate-Protocol.h"
#import "WBMediaAutoPlaySourceViewProvider-Protocol.h"

@class NSArray, NSString, UIImageView, UIView, WBCanvasVideoView, WBVideoItem;
@protocol WBMediaAutoPlayProviderDataModel, WBVideoPlayerSourceView;

@interface WBCanvasVideoItemView : WBCanvasItemView <WBCanvasVideoContainerEventDelegate, WBMediaAutoPlaySourceViewProvider>
{
    WBCanvasVideoView *_videoContainerView;
}

@property(retain, nonatomic) WBCanvasVideoView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <WBMediaAutoPlayProviderDataModel> mediaAutoPlayDataModel;
@property(readonly, nonatomic) NSArray *mediaAutoPlaySourceViews;
@property(readonly, nonatomic) UIView<WBVideoPlayerSourceView> *videoPlayer_sourceView;
@property(readonly, nonatomic) WBVideoItem *videoPlayer_videoItem;
@property(readonly, nonatomic) UIImageView *thumbView;
- (void)canvasVideoView:(id)arg1 didPressPlayButton:(id)arg2;
- (void)layoutSubviews;
- (void)resetItem:(id)arg1;
- (void)setupViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *mediaAutoPlayContainedSourceViewProviders;
@property(readonly) Class superclass;

@end

