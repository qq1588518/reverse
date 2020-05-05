//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, WBSTPlayHeaderBaseView, WBStoryFullScreenProgressView, WBStoryLabel, WBStoryUserView;
@protocol WBSTPlayHeaderBaseViewDelegate, WBStoryFullScreenHeaderContainerDelegate;

@interface WBSTPlayHeaderContainerView : UIView
{
    id <WBSTPlayHeaderBaseViewDelegate> _delegate;
    WBStoryFullScreenProgressView *_progressView;
    WBStoryUserView *_profileView;
    UIButton *_closeButton;
    UIButton *_moreButton;
    UIButton *_followButton;
    WBStoryLabel *_screenNameLabel;
    WBStoryLabel *_timeLabel;
    long long _providerType;
    NSString *_featureCode;
    unsigned long long _visibility;
    unsigned long long _segmentStyleType;
    WBSTPlayHeaderBaseView<WBStoryFullScreenHeaderContainerDelegate> *_headerView;
    struct UIEdgeInsets _gradientEdgeInsets;
}

@property(retain, nonatomic) WBSTPlayHeaderBaseView<WBStoryFullScreenHeaderContainerDelegate> *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) unsigned long long segmentStyleType; // @synthesize segmentStyleType=_segmentStyleType;
@property(nonatomic) struct UIEdgeInsets gradientEdgeInsets; // @synthesize gradientEdgeInsets=_gradientEdgeInsets;
@property(nonatomic) unsigned long long visibility; // @synthesize visibility=_visibility;
@property(nonatomic) NSString *featureCode; // @synthesize featureCode=_featureCode;
@property(nonatomic) long long providerType; // @synthesize providerType=_providerType;
@property(retain, nonatomic) WBStoryLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) WBStoryLabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) WBStoryUserView *profileView; // @synthesize profileView=_profileView;
@property(retain, nonatomic) WBStoryFullScreenProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <WBSTPlayHeaderBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (unsigned long long)segmentTypeWith:(id)arg1 segment:(id)arg2;
- (void)doFollowTipsHideAnimation;
- (void)doFollowSucessAnimation;
- (_Bool)isFollowTipsShowing;
- (id)actionButtons;
- (id)item;
@property(nonatomic) _Bool showFollowTipsIfNeed;
@property(nonatomic) _Bool shouldShowCameraButton;
- (void)updateItem:(id)arg1 segments:(id)arg2 segmentIndex:(unsigned long long)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

