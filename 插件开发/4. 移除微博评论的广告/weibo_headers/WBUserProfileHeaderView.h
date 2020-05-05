//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSObject, NSString, UIButton, UIControl, UIImageView, UIScrollView, UserInfoBackgroundView, WBCustomUserScreenNameLabel, WBPageHeaderBackgroundView, WBRoundedImageView, WBStoryRingView, WBUser, WBUserDescriptionView, WBUserProfileEditItem, WBUserProfileHeaderAvatarView, WBUserProfileLikeButton;
@protocol OS_dispatch_queue, WBUserProfileHeaderViewDelegate;

@interface WBUserProfileHeaderView : WBView <UIScrollViewDelegate>
{
    double scrollViewOffset;
    double detaViewOffset;
    long long direction;
    long long thisScrollIndex;
    _Bool isScrolling;
    UIImageView *remindArrow;
    _Bool isRemindArrowAnimationLoad;
    _Bool isRemindTap;
    _Bool _hideRelation;
    _Bool _peeking;
    _Bool _showingCover;
    WBUserProfileEditItem *_oneCover;
    WBUserProfileEditItem *_anotherCover;
    UIControl *_backgroundTapControl;
    UIImageView *_seperateLineView;
    WBRoundedImageView *_backgroundShadowView;
    WBPageHeaderBackgroundView *_headerBackgroundView;
    WBUser *_user;
    UIControl *_avatarTapControl;
    WBUserProfileHeaderAvatarView *_avatarView;
    WBCustomUserScreenNameLabel *_screenNameLabel;
    WBUserDescriptionView *_specialVerificationView;
    UIButton *_followingButton;
    UIButton *_followerButton;
    WBUserProfileLikeButton *_profileLikeButton;
    id <WBUserProfileHeaderViewDelegate> _delegate;
    UIScrollView *_coverScroll;
    UserInfoBackgroundView *_userInfoBackground;
    NSMutableArray *_coverUrls;
    WBStoryRingView *_storyRingView;
    long long _nowCoverIndex;
    NSObject<OS_dispatch_queue> *_coverRenderQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *coverRenderQueue; // @synthesize coverRenderQueue=_coverRenderQueue;
@property(nonatomic) long long nowCoverIndex; // @synthesize nowCoverIndex=_nowCoverIndex;
@property(nonatomic) _Bool showingCover; // @synthesize showingCover=_showingCover;
@property(nonatomic) _Bool peeking; // @synthesize peeking=_peeking;
@property(readonly, nonatomic) WBStoryRingView *storyRingView; // @synthesize storyRingView=_storyRingView;
@property(retain, nonatomic) NSMutableArray *coverUrls; // @synthesize coverUrls=_coverUrls;
@property(retain, nonatomic) UserInfoBackgroundView *userInfoBackground; // @synthesize userInfoBackground=_userInfoBackground;
@property(retain, nonatomic) UIScrollView *coverScroll; // @synthesize coverScroll=_coverScroll;
@property(nonatomic) id <WBUserProfileHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBUserProfileLikeButton *profileLikeButton; // @synthesize profileLikeButton=_profileLikeButton;
@property(nonatomic) _Bool hideRelation; // @synthesize hideRelation=_hideRelation;
@property(readonly, nonatomic) UIButton *followerButton; // @synthesize followerButton=_followerButton;
@property(readonly, nonatomic) UIButton *followingButton; // @synthesize followingButton=_followingButton;
@property(readonly, nonatomic) WBUserDescriptionView *specialVerificationView; // @synthesize specialVerificationView=_specialVerificationView;
@property(readonly, nonatomic) WBCustomUserScreenNameLabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(readonly, nonatomic) WBUserProfileHeaderAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) UIControl *avatarTapControl; // @synthesize avatarTapControl=_avatarTapControl;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
@property(retain, nonatomic) WBPageHeaderBackgroundView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(retain, nonatomic) WBRoundedImageView *backgroundShadowView; // @synthesize backgroundShadowView=_backgroundShadowView;
@property(retain, nonatomic) UIImageView *seperateLineView; // @synthesize seperateLineView=_seperateLineView;
@property(readonly, nonatomic) UIControl *backgroundTapControl; // @synthesize backgroundTapControl=_backgroundTapControl;
@property(retain, nonatomic) WBUserProfileEditItem *anotherCover; // @synthesize anotherCover=_anotherCover;
@property(retain, nonatomic) WBUserProfileEditItem *oneCover; // @synthesize oneCover=_oneCover;
- (void).cxx_destruct;
- (void)logClickActionPara;
- (void)didPressedDescriptionView;
- (void)setContentPoint:(struct CGPoint)arg1;
- (void)arrowBackgroundViewClicked;
- (void)setSubViewFeedAlpha:(double)arg1;
- (void)animationWithView:(id)arg1 delay:(double)arg2;
- (void)setupAnimation;
- (void)profileLikeButtonClick:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)prepareNextCover:(long long)arg1;
- (void)remindArrowAnimationEnd;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadUIElements;
- (void)configSubViewsFrame;
- (void)layoutSubviews;
- (void)hideRemindArrow;
- (void)showRemindArrowAnimation;
- (void)showRemindArrow;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)coverClicked:(id)arg1;
- (void)remindTap:(id)arg1;
- (void)receiveReloadCoverNotification:(id)arg1;
- (void)updateStoryRingViewVisible:(_Bool)arg1;
- (void)cacheImageByUrl:(id)arg1;
- (void)prestrainImages;
- (void)coverImage:(id)arg1 setImageUrl:(id)arg2;
- (void)coverImageNeedSetNil:(id)arg1 setImageUrl:(id)arg2;
- (void)loadCover;
- (void)loadCoverFromDisk;
- (void)reloadCover;
- (id)coverImage;
@property(readonly, nonatomic) double coverHeight;
- (void)didMoveToWindow;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

