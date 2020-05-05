//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPlayerControlView.h"

#import "SightIconViewDelegate-Protocol.h"
#import "WCCanvasAdVideoProgressBarDelegate-Protocol.h"

@class NSObject, NSString, SightIconView, UIImageView, UIView, WCCanvasAdVideoProgressBar;
@protocol WCCanvasAdControlViewDelegate;

@interface WCCanvasAdControlView : WCPlayerControlView <SightIconViewDelegate, WCCanvasAdVideoProgressBarDelegate>
{
    _Bool _ignoreEdgeInset;
    _Bool _hiddenIconView;
    _Bool _withAudioButton;
    NSObject<WCCanvasAdControlViewDelegate> *_delegate;
    UIView *_toolPanView;
    UIImageView *_bottomToolView;
    WCCanvasAdVideoProgressBar *_progressBar;
    SightIconView *_iconView;
}

@property(nonatomic) _Bool withAudioButton; // @synthesize withAudioButton=_withAudioButton;
@property(nonatomic) _Bool hiddenIconView; // @synthesize hiddenIconView=_hiddenIconView;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCCanvasAdVideoProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIImageView *bottomToolView; // @synthesize bottomToolView=_bottomToolView;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
@property(nonatomic) __weak NSObject<WCCanvasAdControlViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool ignoreEdgeInset; // @synthesize ignoreEdgeInset=_ignoreEdgeInset;
- (void).cxx_destruct;
- (void)onVoiceBtnClick:(_Bool)arg1;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarHidden;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)hiddenDownloadPercentView;
- (void)showBufferingView;
- (void)showDownloadPercentView;
- (void)onTapSightIconView;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)setProgress:(double)arg1;
- (void)onProgressEnd;
- (void)updateBottomToolViewWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)layoutSubviews;
- (_Bool)isToolBarShow;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1 hiddenIcon:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

