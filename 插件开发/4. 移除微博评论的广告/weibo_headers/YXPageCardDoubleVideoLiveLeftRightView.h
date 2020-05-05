//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class CAGradientLayer, UIButton, UIImageView, UILabel, WBContactAvatarView, WBContentImageView, WBLiveInfoFlowerView, YXPageCardDoubleVideoLiveAnchorLevelView, YXPageCardDoubleVideoLiveNewBillboardView, YXPageCardDoubleVideoLiveNewLocationView, YXPageCardDoubleVideoLiveNewRecommendView, YXPageCardDoubleVideoLivePlayButton, YXPageCardDoubleVideoLiveUserScreenNameLabel, YXPageCardDoubleVideoLiveViewBottomLiveButton, YXPageCardDoubleVideoLiveVipView, YXUserScreenNameLabelControl;

@interface YXPageCardDoubleVideoLiveLeftRightView : WBPageCardViewBase
{
    UIButton *backGroundImageView;
    WBContactAvatarView *avatarView;
    YXUserScreenNameLabelControl *screenNameLabel;
    WBContentImageView *photoImageView;
    YXPageCardDoubleVideoLivePlayButton *playButton;
    WBLiveInfoFlowerView *liveInfoFlowerView;
    _Bool _isJumptoYzb;
    unsigned long long _position;
    YXPageCardDoubleVideoLiveViewBottomLiveButton *_bottomLiveButton;
    UILabel *_titleLabel;
    YXPageCardDoubleVideoLiveNewBillboardView *_billboardView;
    YXPageCardDoubleVideoLiveNewRecommendView *_recommendView;
    YXPageCardDoubleVideoLiveNewLocationView *_locationView;
    YXPageCardDoubleVideoLiveVipView *_vipImageView;
    YXPageCardDoubleVideoLiveUserScreenNameLabel *_nameLabel;
    YXPageCardDoubleVideoLiveAnchorLevelView *_anchorLevelView;
    UIImageView *_anchorLevelImageView;
    UIImageView *_anchorPKImageView;
    CAGradientLayer *_gradientLayer;
    UIImageView *_redPacketImageView;
}

+ (double)bottomTitleHeight;
+ (double)avatartSize;
+ (double)avatarTopInEdge;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) UIImageView *redPacketImageView; // @synthesize redPacketImageView=_redPacketImageView;
@property(nonatomic) _Bool isJumptoYzb; // @synthesize isJumptoYzb=_isJumptoYzb;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *anchorPKImageView; // @synthesize anchorPKImageView=_anchorPKImageView;
@property(retain, nonatomic) UIImageView *anchorLevelImageView; // @synthesize anchorLevelImageView=_anchorLevelImageView;
@property(retain, nonatomic) YXPageCardDoubleVideoLiveAnchorLevelView *anchorLevelView; // @synthesize anchorLevelView=_anchorLevelView;
@property(retain, nonatomic) YXPageCardDoubleVideoLiveUserScreenNameLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) YXPageCardDoubleVideoLiveVipView *vipImageView; // @synthesize vipImageView=_vipImageView;
@property(retain, nonatomic) YXPageCardDoubleVideoLiveNewLocationView *locationView; // @synthesize locationView=_locationView;
@property(retain, nonatomic) YXPageCardDoubleVideoLiveNewRecommendView *recommendView; // @synthesize recommendView=_recommendView;
@property(retain, nonatomic) YXPageCardDoubleVideoLiveNewBillboardView *billboardView; // @synthesize billboardView=_billboardView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YXPageCardDoubleVideoLiveViewBottomLiveButton *bottomLiveButton; // @synthesize bottomLiveButton=_bottomLiveButton;
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
- (void)setPageCard:(id)arg1;
- (void)reloadUIElements;
- (id)initWithFrame:(struct CGRect)arg1;

@end

