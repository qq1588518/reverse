//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CAKeyframeAnimation, NSString, UIButton, UIImageView, UILabel, UIView, XMNPQACellModel, XMWebImageView;
@protocol XMNPQACellDelegate;

@interface XMNPQACell : UITableViewCell
{
    id <XMNPQACellDelegate> _delegate;
    XMWebImageView *_headerIV;
    XMWebImageView *_avatarLivingBorderView;
    CAKeyframeAnimation *_avatarLivingAnimation;
    NSString *_avatarLivingAnimationKey;
    UIImageView *_vLogoIcon;
    UILabel *_nickNameLB;
    UIImageView *_verifyIV;
    UILabel *_followersLB;
    UIButton *_sponsorBtn;
    UIImageView *_rightPushIV;
    UIButton *_rightPushBtn;
    UIButton *_followBtn;
    UIImageView *_introBackImageIV;
    UILabel *_introLB;
    UIButton *_askBtn;
    UIImageView *_askIV;
    UILabel *_askLB;
    UIImageView *_rightPushAskIV;
    UIButton *_rightPushAskBtn;
    UIView *_inviteLine;
    UILabel *_inviteLB;
    UIImageView *_invitePushAskIV;
    UIButton *_invitePushAskBtn;
    XMNPQACellModel *_model;
}

+ (double)heightWithDatasource:(id)arg1;
+ (double)heightForCell:(id)arg1;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMNPQACellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *invitePushAskBtn; // @synthesize invitePushAskBtn=_invitePushAskBtn;
@property(retain, nonatomic) UIImageView *invitePushAskIV; // @synthesize invitePushAskIV=_invitePushAskIV;
@property(retain, nonatomic) UILabel *inviteLB; // @synthesize inviteLB=_inviteLB;
@property(retain, nonatomic) UIView *inviteLine; // @synthesize inviteLine=_inviteLine;
@property(retain, nonatomic) UIButton *rightPushAskBtn; // @synthesize rightPushAskBtn=_rightPushAskBtn;
@property(retain, nonatomic) UIImageView *rightPushAskIV; // @synthesize rightPushAskIV=_rightPushAskIV;
@property(retain, nonatomic) UILabel *askLB; // @synthesize askLB=_askLB;
@property(retain, nonatomic) UIImageView *askIV; // @synthesize askIV=_askIV;
@property(retain, nonatomic) UIButton *askBtn; // @synthesize askBtn=_askBtn;
@property(retain, nonatomic) UILabel *introLB; // @synthesize introLB=_introLB;
@property(retain, nonatomic) UIImageView *introBackImageIV; // @synthesize introBackImageIV=_introBackImageIV;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UIButton *rightPushBtn; // @synthesize rightPushBtn=_rightPushBtn;
@property(retain, nonatomic) UIImageView *rightPushIV; // @synthesize rightPushIV=_rightPushIV;
@property(retain, nonatomic) UIButton *sponsorBtn; // @synthesize sponsorBtn=_sponsorBtn;
@property(retain, nonatomic) UILabel *followersLB; // @synthesize followersLB=_followersLB;
@property(retain, nonatomic) UIImageView *verifyIV; // @synthesize verifyIV=_verifyIV;
@property(retain, nonatomic) UILabel *nickNameLB; // @synthesize nickNameLB=_nickNameLB;
@property(retain, nonatomic) UIImageView *vLogoIcon; // @synthesize vLogoIcon=_vLogoIcon;
@property(retain, nonatomic) NSString *avatarLivingAnimationKey; // @synthesize avatarLivingAnimationKey=_avatarLivingAnimationKey;
@property(retain, nonatomic) CAKeyframeAnimation *avatarLivingAnimation; // @synthesize avatarLivingAnimation=_avatarLivingAnimation;
@property(retain, nonatomic) XMWebImageView *avatarLivingBorderView; // @synthesize avatarLivingBorderView=_avatarLivingBorderView;
@property(retain, nonatomic) XMWebImageView *headerIV; // @synthesize headerIV=_headerIV;
@property(nonatomic) __weak id <XMNPQACellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)anchorGradeTap;
- (void)sponsorBtnTouch:(id)arg1;
- (void)followBtnTouchUpInside:(id)arg1;
- (void)invitePushAskBtnTouchUpInside:(id)arg1;
- (void)rightPushAskBtnTouchUpInside:(id)arg1;
- (void)askBtnTouchUpInside:(id)arg1;
- (void)rightPushBtnTouchUpInside:(id)arg1;
- (void)userHasEnableAnswer:(_Bool)arg1;
- (void)isHiddenAskModule:(_Bool)arg1;
- (void)updateVImageStatus:(id)arg1;
- (void)stopLiveAnimation;
- (void)startLiveAnimation;
- (void)layoutSubviewsWithDatasource:(id)arg1;
- (void)setDatasource:(id)arg1;
- (void)setNPQACellType:(unsigned long long)arg1;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)initWithSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

