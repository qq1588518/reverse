//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveTableViewCell.h"

@class UIButton, UIImageView, UILabel, XMLiveUser, XMWebImageView;
@protocol XMRoomFollowingCellDelegate;

@interface XMRoomFollowingCell : XMLiveTableViewCell
{
    id <XMRoomFollowingCellDelegate> _delegate;
    XMLiveUser *_person;
    XMWebImageView *_coverImgView;
    UILabel *_nameLabel;
    UIImageView *_vipImgView;
    UIImageView *_loadingView;
    UIButton *_actionBtn;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *vipImgView; // @synthesize vipImgView=_vipImgView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(retain, nonatomic) XMLiveUser *person; // @synthesize person=_person;
@property(nonatomic) __weak id <XMRoomFollowingCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showPersonInfo:(id)arg1;
- (void)onActionButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)customedSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

