//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView, XMAVPlayerView, XMDubShowVoiceTopicMyWorkModel, XMWebImageView;

@interface XMDubShowVoiceTopicMyWorkCell : UITableViewCell
{
    XMDubShowVoiceTopicMyWorkModel *_model;
    UIView *_bottomView;
    CDUnknownBlockType _clickShareActionBlock;
    CDUnknownBlockType _clickPlayActionBlock;
    CDUnknownBlockType _clickAVPlayerBlock;
    CDUnknownBlockType _clickVolumeBlock;
    XMWebImageView *_avaterImgV;
    UILabel *_nameLabel;
    UILabel *_crtTimeLabel;
    UILabel *_titleLabel;
    UIView *_coverConView;
    XMWebImageView *_coverImgV;
    UIButton *_playBtn;
    UIImageView *_medieTypeImgV;
    UILabel *_durationAndPlayCountLabel;
    UIButton *_volumeBtn;
    UILabel *_rankLabel;
    UILabel *_challengeCountLabel;
    UIButton *_shareButton;
    XMAVPlayerView *_avplayerView;
    UIImageView *_loadingView;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) XMAVPlayerView *avplayerView; // @synthesize avplayerView=_avplayerView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *challengeCountLabel; // @synthesize challengeCountLabel=_challengeCountLabel;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) UIButton *volumeBtn; // @synthesize volumeBtn=_volumeBtn;
@property(retain, nonatomic) UILabel *durationAndPlayCountLabel; // @synthesize durationAndPlayCountLabel=_durationAndPlayCountLabel;
@property(retain, nonatomic) UIImageView *medieTypeImgV; // @synthesize medieTypeImgV=_medieTypeImgV;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) XMWebImageView *coverImgV; // @synthesize coverImgV=_coverImgV;
@property(retain, nonatomic) UIView *coverConView; // @synthesize coverConView=_coverConView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *crtTimeLabel; // @synthesize crtTimeLabel=_crtTimeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMWebImageView *avaterImgV; // @synthesize avaterImgV=_avaterImgV;
@property(copy, nonatomic) CDUnknownBlockType clickVolumeBlock; // @synthesize clickVolumeBlock=_clickVolumeBlock;
@property(copy, nonatomic) CDUnknownBlockType clickAVPlayerBlock; // @synthesize clickAVPlayerBlock=_clickAVPlayerBlock;
@property(copy, nonatomic) CDUnknownBlockType clickPlayActionBlock; // @synthesize clickPlayActionBlock=_clickPlayActionBlock;
@property(copy, nonatomic) CDUnknownBlockType clickShareActionBlock; // @synthesize clickShareActionBlock=_clickShareActionBlock;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) XMDubShowVoiceTopicMyWorkModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)endLoading;
- (void)startLoading;
- (void)notifyAVPlayerDidPlayer;
- (void)updateVolume;
- (void)p_handleVolumeAction;
- (void)p_handleAVPlayerTap;
- (void)stop;
- (void)pause;
- (void)playWithAVPlayer:(id)arg1;
- (void)handlePlayAction;
- (void)clickShareAction;
- (void)setupView;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

