//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

#import "BaseSmartVideoPlayerDelegate-Protocol.h"
#import "WBUserScreenNameLabelDelegate-Protocol.h"

@class CAGradientLayer, NSString, UIButton, UIImageView, UILabel, UIView, WBContactAvatarView, WBContentImageView, WBLiveInfoFlowerView, WBPageCardDoubleVideoLiveAnchorLevelView, WBPageCardDoubleVideoLiveNewBillboardView, WBPageCardDoubleVideoLiveNewLocationView, WBPageCardDoubleVideoLiveNewRecommendView, WBPageCardDoubleVideoLivePlayButton, WBPageCardDoubleVideoLiveUserScreenNameLabel, WBPageCardDoubleVideoLiveViewBottomLiveButton, WBPageCardDoubleVideoLiveVipView, WBPageCardDoubleViewVideoPlayer, WBUserScreenNameLabelControl;

@interface WBPageCardDoubleVideoLiveLeftRightView : WBPageCardViewBase <BaseSmartVideoPlayerDelegate, WBUserScreenNameLabelDelegate>
{
    UIButton *backGroundImageView;
    WBContactAvatarView *avatarView;
    WBUserScreenNameLabelControl *screenNameLabel;
    WBContentImageView *photoImageView;
    WBPageCardDoubleVideoLivePlayButton *playButton;
    WBLiveInfoFlowerView *liveInfoFlowerView;
    _Bool _isJumptoYzb;
    unsigned long long _position;
    WBPageCardDoubleVideoLiveViewBottomLiveButton *_bottomLiveButton;
    UILabel *_titleLabel;
    WBPageCardDoubleVideoLiveNewBillboardView *_billboardView;
    WBPageCardDoubleVideoLiveNewRecommendView *_recommendView;
    WBPageCardDoubleVideoLiveNewLocationView *_locationView;
    WBPageCardDoubleVideoLiveVipView *_vipImageView;
    WBPageCardDoubleVideoLiveUserScreenNameLabel *_nameLabel;
    WBPageCardDoubleVideoLiveAnchorLevelView *_anchorLevelView;
    UIImageView *_anchorLevelImageView;
    UIImageView *_anchorPKImageView;
    WBPageCardDoubleViewVideoPlayer *_videoPlayer;
    CAGradientLayer *_gradientLayer;
    UIImageView *_redPacketImageView;
    UIView *_playVideoView;
}

+ (double)bottomTitleHeight;
+ (double)avatartSize;
+ (double)avatarTopInEdge;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) UIView *playVideoView; // @synthesize playVideoView=_playVideoView;
@property(retain, nonatomic) UIImageView *redPacketImageView; // @synthesize redPacketImageView=_redPacketImageView;
@property(nonatomic) _Bool isJumptoYzb; // @synthesize isJumptoYzb=_isJumptoYzb;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) WBPageCardDoubleViewVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) UIImageView *anchorPKImageView; // @synthesize anchorPKImageView=_anchorPKImageView;
@property(retain, nonatomic) UIImageView *anchorLevelImageView; // @synthesize anchorLevelImageView=_anchorLevelImageView;
@property(retain, nonatomic) WBPageCardDoubleVideoLiveAnchorLevelView *anchorLevelView; // @synthesize anchorLevelView=_anchorLevelView;
@property(retain, nonatomic) WBPageCardDoubleVideoLiveUserScreenNameLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WBPageCardDoubleVideoLiveVipView *vipImageView; // @synthesize vipImageView=_vipImageView;
@property(retain, nonatomic) WBPageCardDoubleVideoLiveNewLocationView *locationView; // @synthesize locationView=_locationView;
@property(retain, nonatomic) WBPageCardDoubleVideoLiveNewRecommendView *recommendView; // @synthesize recommendView=_recommendView;
@property(retain, nonatomic) WBPageCardDoubleVideoLiveNewBillboardView *billboardView; // @synthesize billboardView=_billboardView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WBPageCardDoubleVideoLiveViewBottomLiveButton *bottomLiveButton; // @synthesize bottomLiveButton=_bottomLiveButton;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (id)playActionAnalysisParametersWithExtraParameters:(id)arg1 pageInfo:(id)arg2;
- (void)logRealtimePlayActionWithExtraParameters:(id)arg1 pageInfo:(id)arg2;
- (void)photoImageViewPressed:(id)arg1;
- (void)playButtonPressed:(id)arg1;
- (void)bottomLiveButtonClick:(id)arg1;
- (void)screenNameLabelPressed:(id)arg1;
- (void)screenNameDidPressed;
- (void)avatarViewPressed:(id)arg1;
- (void)openTheUserProfile:(id)arg1;
- (void)backGroundImageViewMethod:(id)arg1;
- (void)setBackgroundImage:(id)arg1 highlightImage:(id)arg2;
- (double)liveInfoFlowerViewLeftMargin;
- (double)liveInfoFlowerViewTopMargin;
- (void)resetSubViewRects;
- (void)updateSubviewsWithIsLive:(_Bool)arg1 withIsIconShow:(_Bool)arg2;
- (void)BaseSmartVideoPlayerDoPlay:(id)arg1;
- (void)BaseSmartVideoPlayerDoPause:(id)arg1;
- (void)BaseSmartVideoPlayerDoubleTapped;
- (void)BaseSmartVideoPlayerSingleTapped;
- (void)BaseSmartVideoPlayerReadyToPlay;
- (void)BaseSmartVideoPlayerDidPlayToEnd:(id)arg1;
- (void)actionLogShow:(id)arg1 withItem:(id)arg2;
- (void)setPageCard:(id)arg1;
- (void)reloadUIElements;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

