//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, XMLiveGuardianRankInfo, XMWebImageView;
@protocol XMLiveEntGuardianRankMineBoardDelegate;

@interface XMLiveEntGuardianRankInfoBoard : UIView
{
    id <XMLiveEntGuardianRankMineBoardDelegate> _delegate;
    XMLiveGuardianRankInfo *_info;
    UILabel *_rankLabel;
    XMWebImageView *_avatarView;
    UILabel *_bannerLabel;
    UIButton *_actionBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *bannerLabel; // @synthesize bannerLabel=_bannerLabel;
@property(retain, nonatomic) XMWebImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) XMLiveGuardianRankInfo *info; // @synthesize info=_info;
@property(nonatomic) __weak id <XMLiveEntGuardianRankMineBoardDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAction;
- (void)_baseInit;
- (id)init;

@end

