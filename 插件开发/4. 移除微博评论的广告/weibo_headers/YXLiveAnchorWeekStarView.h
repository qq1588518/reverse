//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSTimer, UIImageView, UILabel, YXLiveAnchorMissionViewNew, YXLiveAnchorRankView, YXLiveModel;
@protocol YXLiveAnchorWeekStarViewDelegate;

@interface YXLiveAnchorWeekStarView : UIView
{
    id <YXLiveAnchorWeekStarViewDelegate> _delegate;
    NSDictionary *_weekStarInfo;
    YXLiveAnchorMissionViewNew *_anchorMissionViewNew;
    UIImageView *_bgImageView;
    UIImageView *_hourIcon;
    UILabel *_titleLabel;
    UILabel *_specialLabel;
    UIImageView *_weekStarImageView;
    UIView *_lineView;
    YXLiveAnchorRankView *_anchorRankView;
    YXLiveModel *_liveRoomPlayInfo;
    unsigned long long _anchorShowStatus;
    NSTimer *_timer;
    long long _time;
}

@property(nonatomic) long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long anchorShowStatus; // @synthesize anchorShowStatus=_anchorShowStatus;
@property(retain, nonatomic) YXLiveModel *liveRoomPlayInfo; // @synthesize liveRoomPlayInfo=_liveRoomPlayInfo;
@property(retain, nonatomic) YXLiveAnchorRankView *anchorRankView; // @synthesize anchorRankView=_anchorRankView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *weekStarImageView; // @synthesize weekStarImageView=_weekStarImageView;
@property(retain, nonatomic) UILabel *specialLabel; // @synthesize specialLabel=_specialLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *hourIcon; // @synthesize hourIcon=_hourIcon;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak YXLiveAnchorMissionViewNew *anchorMissionViewNew; // @synthesize anchorMissionViewNew=_anchorMissionViewNew;
@property(retain, nonatomic) NSDictionary *weekStarInfo; // @synthesize weekStarInfo=_weekStarInfo;
@property(nonatomic) __weak id <YXLiveAnchorWeekStarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateAnchorShowStatus:(unsigned long long)arg1;
- (void)specialLabelTextTime:(long long)arg1 bufferValue:(id)arg2;
- (void)changeRankingText:(long long)arg1;
- (void)deallocTimer;
- (void)handleTimer;
- (void)startCountdown;
- (_Bool)isFromStory;
- (id)liveViewController;
- (id)currentViewController;
- (void)anchorWeekStarViewTap:(id)arg1;
- (void)showNomalAnimationWithWeekStarInfo:(id)arg1;
- (void)showRankChangeAnimationWithWeekStarInfo:(id)arg1;
- (void)showBufferAnimationWithWeekStarInfo:(id)arg1;
- (void)showIntoListAnimationWithWeekStarInfo:(id)arg1;
- (void)updateWeekStar:(id)arg1;
- (void)layout;
- (void)creatView;
- (id)initWithWeekStarInfo:(id)arg1 playInfo:(id)arg2 anchorShowStatus:(unsigned long long)arg3;

@end

