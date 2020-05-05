//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMPlayerDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, XMNewYiJianTingChannelInfo;
@protocol XMNewYiJianTingPlayControlViewDelegate;

@interface XMNewYiJianTingPlayControlView : UIView <XMPlayerDelegate>
{
    UIButton *_nextTrackButton;
    UILabel *_timingLabel;
    UILabel *_listLabel;
    UIButton *_soundDetailButton;
    UIButton *_loveButton;
    UIButton *_timingButton;
    id <XMNewYiJianTingPlayControlViewDelegate> _delegate;
    XMNewYiJianTingChannelInfo *_channelInfo;
    UIButton *_playTrackButton;
    UIImageView *_playLoadingView;
}

@property(retain, nonatomic) UIImageView *playLoadingView; // @synthesize playLoadingView=_playLoadingView;
@property(retain, nonatomic) UIButton *playTrackButton; // @synthesize playTrackButton=_playTrackButton;
@property(retain, nonatomic) XMNewYiJianTingChannelInfo *channelInfo; // @synthesize channelInfo=_channelInfo;
@property(nonatomic) __weak id <XMNewYiJianTingPlayControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *timingButton; // @synthesize timingButton=_timingButton;
@property(retain, nonatomic) UIButton *loveButton; // @synthesize loveButton=_loveButton;
@property(retain, nonatomic) UIButton *soundDetailButton; // @synthesize soundDetailButton=_soundDetailButton;
@property(retain, nonatomic) UILabel *listLabel; // @synthesize listLabel=_listLabel;
@property(retain, nonatomic) UILabel *timingLabel; // @synthesize timingLabel=_timingLabel;
@property(retain, nonatomic) UIButton *nextTrackButton; // @synthesize nextTrackButton=_nextTrackButton;
- (void).cxx_destruct;
- (void)endRotateInLoadingIV;
- (void)startRotateInLoadingIV;
- (void)playOrPause;
- (void)playerDidPlaying;
- (void)playerTrackChanged;
- (void)checkButtonState;
- (void)endBuffer;
- (void)beginBuffer;
- (void)p_timing;
- (void)p_love;
- (void)p_showTableView;
- (void)p_play;
- (void)p_nextTrack;
- (void)p_previousTrack;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

