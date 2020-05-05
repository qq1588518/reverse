//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBLiveRoomView.h"

@class LOTAnimationView, NSString, UIButton, UIImage, UIImageView, UILabel, YXLIndicatorLamp, YXLTopInfoPanelViewModel, YXLiveUserView;

@interface YXLTopInfoPanel : WBLiveRoomView
{
    _Bool _showLiveRoomId;
    _Bool _indicatorLamoShowing;
    YXLTopInfoPanelViewModel *_viewModel;
    UIImage *_backgroundImage;
    NSString *_follow_txt;
    UIButton *_followBtn;
    NSString *_anchor_id;
    NSString *_scid;
    UIImageView *_bgView;
    YXLiveUserView *_userView;
    UILabel *_nicknameLbl;
    UILabel *_countLbl;
    UIButton *_headBtn;
    YXLIndicatorLamp *_indicatorLamp;
    UIImageView *_anchorPKImageView;
    NSString *_hotValue;
    double _followbtnWidth;
    LOTAnimationView *_followButtonAnimateView;
}

@property(retain, nonatomic) LOTAnimationView *followButtonAnimateView; // @synthesize followButtonAnimateView=_followButtonAnimateView;
@property(nonatomic) double followbtnWidth; // @synthesize followbtnWidth=_followbtnWidth;
@property(copy, nonatomic) NSString *hotValue; // @synthesize hotValue=_hotValue;
@property(retain, nonatomic) UIImageView *anchorPKImageView; // @synthesize anchorPKImageView=_anchorPKImageView;
@property(nonatomic) _Bool indicatorLamoShowing; // @synthesize indicatorLamoShowing=_indicatorLamoShowing;
@property(retain, nonatomic) YXLIndicatorLamp *indicatorLamp; // @synthesize indicatorLamp=_indicatorLamp;
@property(retain, nonatomic) UIButton *headBtn; // @synthesize headBtn=_headBtn;
@property(retain, nonatomic) UILabel *countLbl; // @synthesize countLbl=_countLbl;
@property(retain, nonatomic) UILabel *nicknameLbl; // @synthesize nicknameLbl=_nicknameLbl;
@property(retain, nonatomic) YXLiveUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool showLiveRoomId; // @synthesize showLiveRoomId=_showLiveRoomId;
@property(copy, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(copy, nonatomic) NSString *anchor_id; // @synthesize anchor_id=_anchor_id;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) NSString *follow_txt; // @synthesize follow_txt=_follow_txt;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) YXLTopInfoPanelViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateLiveRoomIDViewForSwitch;
- (void)updateNickLabelConstraints;
- (void)updateViewForSwitch;
- (void)livePKStatusDidChanged:(id)arg1;
- (void)updateFollowBtnWidth;
- (void)updateNickLabelText:(id)arg1;
- (void)_updateSelfFollowBtnConstraint;
- (double)_caculateSelfShouldFitWidth:(_Bool)arg1;
- (double)_caculateFollowBtnLeftShouldFitWidth:(_Bool)arg1;
- (double)_caculateFollowBtnShouldFitHeight;
- (double)_caculateFollowBtnShouldFitWidth;
- (double)_caculateTextShouldFitWidth;
- (double)_caculateLabelShouldFitWidth:(id)arg1;
- (double)_caculateCountLabelShouldFitWidth;
- (double)_caculateNickLabelShouldFitWidth;
- (void)updatePKIcon;
- (void)updateVIcon;
- (void)updateLiveRoomID:(id)arg1;
- (void)dealloc;
- (void)closeFollowBtnAnimation:(_Bool)arg1;
- (void)hideTopInfoPanelPublishBubbleView;
- (void)showFollowBtn:(_Bool)arg1 isTrueLove:(_Bool)arg2;
- (void)showFollowBtn:(_Bool)arg1 isTrueLove:(_Bool)arg2 isExpiry:(_Bool)arg3;
- (void)hideFollowBtn;
- (void)updateConstrainsToHideFollowBtn;
- (void)updateIndicatorLampStatusHide:(_Bool)arg1 animation:(_Bool)arg2 immediately:(_Bool)arg3;
- (void)followBtnClicked:(id)arg1;
- (void)configureView;
- (void)updateUserAvatar:(id)arg1;
- (_Bool)isShowingIndicatorLamp;
- (void)updateIndicatorLampStatue:(unsigned long long)arg1;
- (void)followBtnDid;
- (void)animationClick;
- (void)animationWithName:(id)arg1;
- (void)followAnimation;
- (id)init;
- (id)initWithViewModel:(id)arg1;

@end

