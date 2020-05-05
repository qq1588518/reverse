//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoOverlayControlsPluginView.h"

@class UILabel, WBVideoTitleContentView;

@interface WBVideoDiscoveryControlsPluginView : WBVideoOverlayControlsPluginView
{
    WBVideoTitleContentView *_titleContentView;
    UILabel *_playCountLabel;
}

@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) WBVideoTitleContentView *titleContentView; // @synthesize titleContentView=_titleContentView;
- (void).cxx_destruct;
- (void)setActivate:(_Bool)arg1 deactiveToolbar:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoControlsProgressViewFullscreenButtonPressed:(id)arg1 sender:(id)arg2;
- (void)videoPlayerController:(id)arg1 didChangeVideoPlayerItem:(id)arg2;
- (void)updateFullScreenProgressViewState;
- (void)layoutSubviews;
- (void)prepareForHidden;
- (id)initWithFrame:(struct CGRect)arg1;

@end

