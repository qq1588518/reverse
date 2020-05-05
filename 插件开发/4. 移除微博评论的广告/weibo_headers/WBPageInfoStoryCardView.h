//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageInfoBaseCardView.h"

#import "WBMediaPlaybackSourceView-Protocol.h"
#import "WBVideoPlaybackEventListener-Protocol.h"

@class NSDictionary, NSString, UIButton, UIImage, UIImageView, UILabel, WBContentImageView, WBSlideGradientColorView, WBStatus, WBTimelinePageInfo, WBUIControl, WBVideoPlayerController;
@protocol WBMediaPlaybackItem;

@interface WBPageInfoStoryCardView : WBPageInfoBaseCardView <WBMediaPlaybackSourceView, WBVideoPlaybackEventListener>
{
    _Bool _isClicked;
    _Bool _isVideoPlaying;
    _Bool _syncCachedImageLoading;
    UIImage *_placeholderImage;
    WBSlideGradientColorView *_maskView;
    WBContentImageView *_iconView;
    UIImageView *_waterMarkImageView;
    UILabel *_titleLabel;
    WBUIControl *_maskButton;
    UIButton *_playButton;
    UILabel *_playcount;
    double _originPlayTime;
    double _remainingTime;
    WBVideoPlayerController *_videoController;
    UILabel *_bottomRightLabel;
}

+ (id)vp_formatTimeString:(double)arg1 alwaysShow:(_Bool)arg2;
+ (double)heightConstraintToWidth:(double)arg1 forPageInfo:(id)arg2 displayType:(long long)arg3;
+ (_Bool)timelineNeedsBackgroundBorder;
+ (struct UIEdgeInsets)timelineBackgroundBorderEdgeInsetsWithPageInfo:(id)arg1;
+ (_Bool)timelineIntegratable;
+ (struct CGSize)sizeConstraintToWidth:(double)arg1 forPageInfo:(id)arg2 displayType:(long long)arg3;
+ (id)pictureForPageInfo:(id)arg1 andDisplayType:(long long)arg2;
@property(retain, nonatomic) UILabel *bottomRightLabel; // @synthesize bottomRightLabel=_bottomRightLabel;
@property(nonatomic) __weak WBVideoPlayerController *videoController; // @synthesize videoController=_videoController;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) double originPlayTime; // @synthesize originPlayTime=_originPlayTime;
@property(retain, nonatomic) UILabel *playcount; // @synthesize playcount=_playcount;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) WBUIControl *maskButton; // @synthesize maskButton=_maskButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *waterMarkImageView; // @synthesize waterMarkImageView=_waterMarkImageView;
@property(retain, nonatomic) WBContentImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WBSlideGradientColorView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) _Bool syncCachedImageLoading; // @synthesize syncCachedImageLoading=_syncCachedImageLoading;
- (void).cxx_destruct;
- (_Bool)isSecondDownEnable;
- (_Bool)shouldShowTimeLabel;
- (void)updateTextInfoViewVisibility;
- (void)resetLabel;
- (void)updateLabel;
- (void)videoPlayerController:(id)arg1 didUpdateCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)videoPlayerController:(id)arg1 didPerformPlayWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)setBottomRightText:(id)arg1;
- (id)createBottomLabel;
- (double)currentRemainingTime;
- (unsigned long long)wbvideo_sceneType;
@property(readonly, nonatomic) WBStatus *mediaPlaybackStatus;
@property(readonly, nonatomic) NSDictionary *mediaPlaybackExtraLogParameters;
@property(readonly, nonatomic) WBTimelinePageInfo *mediaPlaybackAnalysisPageInfo;
- (id)mediaPlaybackPlaceholderWithLoadedStatus:(_Bool *)arg1;
- (id)mediaPlaybackPlaceholderImageURL;
@property(readonly, nonatomic) _Bool supportsInlineMediaPlayback;
- (_Bool)supportsSlidesPicture;
- (_Bool)supportsSlidesVideo;
@property(readonly, nonatomic) id <WBMediaPlaybackItem> mediaPlaybackItem;
- (id)mediaAutoPlaySourceViews;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)cacheSlides;
- (id)nickNameWithPageInfo:(id)arg1;
- (id)avatarUrlWithPageInfo:(id)arg1;
- (_Bool)needRefreshImageViewForImageURL:(id)arg1 reusing:(_Bool)arg2;
- (void)updateViewWithPageInfo:(id)arg1;
- (void)clearViewsForAsyncLoading;
- (void)mediaPlayerViewDidRemove:(id)arg1;
- (void)mediaPlayerViewDidAttach:(id)arg1;
- (void)didPressStoryCard:(id)arg1;
- (void)buttonPressed;
- (id)imageView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *mediaAutoPlayContextID;
@property(readonly, nonatomic) _Bool mediaAutoPlayIgnoresPlaybackItemsPolicy;
@property(readonly, nonatomic) NSDictionary *sourceViewExtraLogParameters;
@property(readonly) Class superclass;

@end

