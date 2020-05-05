//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIButton, UIImageView, UILabel, YXLiveModel, YXLiveUserView;
@protocol WBLiveRoomDowngradeViewDelegate;

@interface WBLiveRoomDowngradeView : UIView
{
    _Bool _isFullScreen;
    _Bool _countLabelHasLayouted;
    YXLiveModel *_liveModel;
    UIView *_superView;
    id <WBLiveRoomDowngradeViewDelegate> _delegate;
    unsigned long long _state;
    UIButton *_liveCloseBtn;
    UIView *_bgView;
    UIView *_topInfoPanel;
    YXLiveUserView *_userView;
    UILabel *_nickLabel;
    UIImageView *_waterMarkView;
    UIView *_commentView;
    UILabel *_commentLabel;
    UILabel *_countLabel;
    UIView *_bottomView;
    UIButton *_inputBtn;
    UIButton *_moreOptionBtn;
    UIButton *_giftBtn;
    NSTimer *_pollingTimer;
    long long _count;
    long long _lastTime;
}

@property(nonatomic) _Bool countLabelHasLayouted; // @synthesize countLabelHasLayouted=_countLabelHasLayouted;
@property(nonatomic) long long lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(retain, nonatomic) UIButton *giftBtn; // @synthesize giftBtn=_giftBtn;
@property(retain, nonatomic) UIButton *moreOptionBtn; // @synthesize moreOptionBtn=_moreOptionBtn;
@property(retain, nonatomic) UIButton *inputBtn; // @synthesize inputBtn=_inputBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UIView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UIImageView *waterMarkView; // @synthesize waterMarkView=_waterMarkView;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) YXLiveUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) UIView *topInfoPanel; // @synthesize topInfoPanel=_topInfoPanel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) __weak UIButton *liveCloseBtn; // @synthesize liveCloseBtn=_liveCloseBtn;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WBLiveRoomDowngradeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) YXLiveModel *liveModel; // @synthesize liveModel=_liveModel;
- (void).cxx_destruct;
- (void)removeObservers;
- (void)initObservers;
- (void)downgradeRoomEnterForeGround;
- (void)downgradeRoomEnterBackGroud;
- (void)requestWBUser;
- (id)nickLabelFitText:(id)arg1;
- (id)wbNickName;
- (id)wbAvaterUrl;
- (void)shakeAnimationForView:(id)arg1;
- (void)doClean;
- (void)stopTimer;
- (void)timerFuc:(id)arg1;
- (void)addPollingTimer;
- (double)topInfoPanelShouldWidth;
- (double)nickLabelShouldWidth;
- (double)labelFitWidth:(id)arg1 height:(double)arg2;
- (void)_updateCommentViewBeforeIntoNormalRoom:(double)arg1;
- (void)updateCommentViewBeforeIntoNormalRoom:(double)arg1;
- (void)updateWithNickName:(id)arg1 vType:(long long)arg2 avatarUrl:(id)arg3;
- (void)bottomBtnClicked:(id)arg1;
- (id)buildBottomButtonWithImage:(id)arg1 title:(id)arg2 selector:(SEL)arg3;
- (void)buildBottomBtns;
- (void)initSubViewConstraints;
- (void)initSubViews;
- (id)initWithLiveModel:(id)arg1;

@end

