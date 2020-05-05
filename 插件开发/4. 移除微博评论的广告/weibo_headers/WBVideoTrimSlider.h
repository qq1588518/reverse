//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class AVAsset, AVAssetImageGenerator, NSMutableArray, NSString, UIColor, UIImageView, UIScrollView, WBVideoEditorCache;
@protocol WBVideoTrimSliderDelegate;

@interface WBVideoTrimSlider : UIView <UIScrollViewDelegate>
{
    double lastContentOffset;
    double centerWidth;
    AVAsset *_playerAsset;
    struct CGSize _layoutSize;
    id <WBVideoTrimSliderDelegate> _delegate;
    unsigned long long _maxGap;
    unsigned long long _minGap;
    double _currentTime;
    AVAssetImageGenerator *_imageGenerator;
    UIScrollView *_framesScrollView;
    WBVideoEditorCache *_videoCache;
    UIImageView *_leftThumb;
    UIImageView *_rightThumb;
    double _leftPosition;
    double _rightPosition;
    double _frame_width;
    double _durationSeconds;
    UIView *_progressView;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIView *_leftMaskView;
    UIView *_rightMaskView;
    UIView *_leftGestureView;
    UIView *_rightGestureView;
    UIColor *_lineColor;
    NSMutableArray *_timelineViews;
    NSMutableArray *_videoFrames;
}

@property(retain, nonatomic) NSMutableArray *videoFrames; // @synthesize videoFrames=_videoFrames;
@property(retain, nonatomic) NSMutableArray *timelineViews; // @synthesize timelineViews=_timelineViews;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) UIView *rightGestureView; // @synthesize rightGestureView=_rightGestureView;
@property(retain, nonatomic) UIView *leftGestureView; // @synthesize leftGestureView=_leftGestureView;
@property(retain, nonatomic) UIView *rightMaskView; // @synthesize rightMaskView=_rightMaskView;
@property(retain, nonatomic) UIView *leftMaskView; // @synthesize leftMaskView=_leftMaskView;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double durationSeconds; // @synthesize durationSeconds=_durationSeconds;
@property(nonatomic) double frame_width; // @synthesize frame_width=_frame_width;
@property(nonatomic) double rightPosition; // @synthesize rightPosition=_rightPosition;
@property(nonatomic) double leftPosition; // @synthesize leftPosition=_leftPosition;
@property(retain, nonatomic) UIImageView *rightThumb; // @synthesize rightThumb=_rightThumb;
@property(retain, nonatomic) UIImageView *leftThumb; // @synthesize leftThumb=_leftThumb;
@property(retain, nonatomic) WBVideoEditorCache *videoCache; // @synthesize videoCache=_videoCache;
@property(retain, nonatomic) UIScrollView *framesScrollView; // @synthesize framesScrollView=_framesScrollView;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) unsigned long long minGap; // @synthesize minGap=_minGap;
@property(nonatomic) unsigned long long maxGap; // @synthesize maxGap=_maxGap;
@property(nonatomic) __weak id <WBVideoTrimSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cleanMemory;
- (void)hideProgressView;
- (double)timeLineBottomMargin;
- (void)drawLongLineWithSeconds:(unsigned long long)arg1;
- (void)loadTimeline;
- (void)drawMovieFrame;
- (void)resetLineFrame;
- (void)handleRightPan:(id)arg1;
- (void)handleLeftPan:(id)arg1;
- (void)delegateNotification;
- (double)frameViewTopPadding;
- (double)leftPadding;
- (void)didMoveToSuperview;
- (void)relayoutMaskViewWithStart:(double)arg1 stopTime:(double)arg2;
- (void)repostionSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 videoCache:(id)arg2 withDelegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

