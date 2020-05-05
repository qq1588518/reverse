//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView, UILabel, UIView, XMCheckInRemindInfo, XMMeCenterInfo, XMMeInviteInfo, XMMeVipView, XMPCHeaderCoinView, XMWebImageView;

@interface XMPersonalCenterHeaderView : UICollectionReusableView
{
    _Bool _showLoginGift;
    _Bool _isFlipAnimating;
    XMWebImageView *_avatarImageView;
    XMMeCenterInfo *_info;
    XMCheckInRemindInfo *_checkInInfo;
    XMMeInviteInfo *_inviteInfo;
    long long _action;
    UIImageView *_vLogoIcon;
    UILabel *_nameLabel;
    UIImageView *_giftIcon;
    UILabel *_unLoginLabel;
    UILabel *_fansLabel;
    UILabel *_likesLabel;
    UIImageView *_arrowIV;
    UIImageView *_vipIV;
    UIImageView *_levelIV;
    XMMeVipView *_vipView;
    UIView *_entranceView;
    XMPCHeaderCoinView *_coinView;
    XMWebImageView *_avatarFlipIV;
    UIView *_redView;
}

@property(nonatomic) _Bool isFlipAnimating; // @synthesize isFlipAnimating=_isFlipAnimating;
@property(retain, nonatomic) UIView *redView; // @synthesize redView=_redView;
@property(retain, nonatomic) XMWebImageView *avatarFlipIV; // @synthesize avatarFlipIV=_avatarFlipIV;
@property(retain, nonatomic) XMPCHeaderCoinView *coinView; // @synthesize coinView=_coinView;
@property(retain, nonatomic) UIView *entranceView; // @synthesize entranceView=_entranceView;
@property(retain, nonatomic) XMMeVipView *vipView; // @synthesize vipView=_vipView;
@property(retain, nonatomic) UIImageView *levelIV; // @synthesize levelIV=_levelIV;
@property(retain, nonatomic) UIImageView *vipIV; // @synthesize vipIV=_vipIV;
@property(retain, nonatomic) UIImageView *arrowIV; // @synthesize arrowIV=_arrowIV;
@property(retain, nonatomic) UILabel *likesLabel; // @synthesize likesLabel=_likesLabel;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *unLoginLabel; // @synthesize unLoginLabel=_unLoginLabel;
@property(retain, nonatomic) UIImageView *giftIcon; // @synthesize giftIcon=_giftIcon;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *vLogoIcon; // @synthesize vLogoIcon=_vLogoIcon;
@property(nonatomic) _Bool showLoginGift; // @synthesize showLoginGift=_showLoginGift;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) XMMeInviteInfo *inviteInfo; // @synthesize inviteInfo=_inviteInfo;
@property(retain, nonatomic) XMCheckInRemindInfo *checkInInfo; // @synthesize checkInInfo=_checkInInfo;
@property(retain, nonatomic) XMMeCenterInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) XMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)p_tappedName;
- (void)p_userAnchorGradeTap;
- (void)p_openVip;
- (void)p_tappedListenedTimeView;
- (void)p_tappedLikesView;
- (void)p_tappedFansView;
- (void)p_tappedAvatar;
- (void)p_tapCheck;
- (void)p_inviteItemTapped:(id)arg1;
- (void)p_setEntranceViews;
- (void)updateVipView;
- (void)updateRedViewStatus:(long long)arg1;
- (id)p_currentDateString;
- (_Bool)p_checkHasShowFlipAnimation;
- (void)p_checkAvatarImageViewStatus;
- (void)p_changeLayer;
- (void)p_addKeyFrameAnimation;
- (void)showAvatarFlipAnimation;
- (void)p_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

