//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "PHLivePhotoViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, PHLivePhotoView, UIScrollView, WBImageEditorCache, WBImageView;

@interface WBImageBrowserViewCell : UICollectionViewCell <UIScrollViewDelegate, PHLivePhotoViewDelegate>
{
    float _minZoomScale;
    float _maxZoomScale;
    float _defaultZoomScale;
    float _doubleTapZoomScale;
    UIScrollView *_scrollView;
    WBImageView *_imageView;
    WBImageEditorCache *_imageCache;
    PHLivePhotoView *_livePhotoView;
}

+ (_Bool)applyIpadLandscapeWithImageSize:(struct CGSize)arg1;
+ (double)CellPadding;
@property(retain, nonatomic) PHLivePhotoView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
@property(retain, nonatomic) WBImageEditorCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) WBImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)startPlayingGifIfAvailable;
- (_Bool)isGifPlaying;
- (void)startPlayingLivePhotoHintIfAvailable;
- (void)startPlayingLivePhotoIfAvailable;
- (void)didEndDisplaying;
- (void)willDisplay:(id)arg1;
- (void)prepareForReuse;
- (_Bool)isLivePhotoAllowAndOn;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (struct CGSize)currentImageSize;
- (void)layoutSubviews;
- (void)layoutScrollView;
- (void)scrollViewDoubleTapped:(id)arg1;
- (void)centerScrollViewContents;
- (id)currentZoomingView;
- (void)setContentsFrame:(struct CGRect)arg1;
- (struct CGRect)contentsFrame;
- (void)displayImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

