//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIButton, UILabel, UIView, XMTableCellObject, XMWebImageView, XMWeeklyHotCommentItem, YYLabel;
@protocol XMWeeklyHotCommentCellDelegate;

@interface XMWeeklyHotCommentCell : XMTableViewCell
{
    id <XMWeeklyHotCommentCellDelegate> _delegate;
    UILabel *_rowNumberLabel;
    UIView *_bgSuperView;
    UIView *_bgView;
    XMWebImageView *_headImageView;
    UILabel *_nickNameLabel;
    UILabel *_createTimeLabel;
    UIButton *_likeButton;
    UILabel *_likesLabel;
    UIView *_contentbgView;
    YYLabel *_contentLabel;
    UILabel *_comefromLabel;
    UIButton *_moreBtn;
    UILabel *_moreLabel;
    XMWebImageView *_trackImageView;
    UILabel *_trackLabel;
    UILabel *_albumLabel;
    XMWeeklyHotCommentItem *_model;
    XMTableCellObject *_cellObject;
}

+ (id)contentAttributedString:(id)arg1;
+ (double)contentDetailHeight:(id)arg1;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(retain, nonatomic) XMWeeklyHotCommentItem *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *albumLabel; // @synthesize albumLabel=_albumLabel;
@property(retain, nonatomic) UILabel *trackLabel; // @synthesize trackLabel=_trackLabel;
@property(retain, nonatomic) XMWebImageView *trackImageView; // @synthesize trackImageView=_trackImageView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UILabel *comefromLabel; // @synthesize comefromLabel=_comefromLabel;
@property(retain, nonatomic) YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *contentbgView; // @synthesize contentbgView=_contentbgView;
@property(retain, nonatomic) UILabel *likesLabel; // @synthesize likesLabel=_likesLabel;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *createTimeLabel; // @synthesize createTimeLabel=_createTimeLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) XMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *bgSuperView; // @synthesize bgSuperView=_bgSuperView;
@property(retain, nonatomic) UILabel *rowNumberLabel; // @synthesize rowNumberLabel=_rowNumberLabel;
@property(nonatomic) __weak id <XMWeeklyHotCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)clickTrack;
- (void)clickComment;
- (void)moreAction;
- (void)clickUser;
- (void)likeAction;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

