//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "PHLivePhotoViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, PHLivePhotoView, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, WBImageEditorCache, WBImageView, WBPhotoProgressView;
@protocol WBPhotoPreviewerViewCellDelegate;

@interface WBPhotoPreviewerViewCell : UICollectionViewCell <UIScrollViewDelegate, PHLivePhotoViewDelegate, UIGestureRecognizerDelegate>
{
    float _minZoomScale;
    float _maxZoomScale;
    float _defaultZoomScale;
    float _doubleTapZoomScale;
    WBPhotoProgressView *_progressView;
    UIScrollView *_scrollView;
    WBImageView *_imageView;
    WBImageEditorCache *_imageCache;
    id <WBPhotoPreviewerViewCellDelegate> _delegate;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_pullGesture;
    PHLivePhotoView *_livePhotoView;
}

+ (_Bool)applyIpadLandscapeWithImageSize:(struct CGSize)arg1;
+ (double)CellPadding;
@property(retain, nonatomic) PHLivePhotoView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
@property(retain, nonatomic) UIPanGestureRecognizer *pullGesture; // @synthesize pullGesture=_pullGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak id <WBPhotoPreviewerViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBImageEditorCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) WBImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)startPlayingGifIfAvailable;
- (_Bool)isGifPlaying;
- (void)startPlayingLivePhotoHintIfAvailable;
- (void)startPlayingLivePhotoIfAvailable;
- (void)didEndDisplaying;
- (void)willDisplay:(id)arg1;
- (_Bool)isLivePhotoAllowAndOn;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (struct CGSize)currentImageSize;
- (void)layoutScrollView;
- (void)scrollViewDoubleTapped:(id)arg1;
- (void)centerScrollViewContents;
- (void)displayImage:(id)arg1;
- (struct CGRect)imageViewFrameToView:(id)arg1;
- (id)currentImage;
- (id)currentZoomingView;
- (void)setContentsFrame:(struct CGRect)arg1;
- (struct CGRect)contentsFrame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (void)finishDownProgress;
- (void)addProgressView;
- (id)progressView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

