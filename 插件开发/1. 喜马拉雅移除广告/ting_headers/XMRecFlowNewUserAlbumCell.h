//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMFindFlowWhiteBackTableViewCell.h"

#import "XMNewerUnlikeViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIView, XMFlowNewUserModel, XMTableCellObject;
@protocol XMRecFlowNewUserAlbumCellDelegate;

@interface XMRecFlowNewUserAlbumCell : XMFindFlowWhiteBackTableViewCell <XMNewerUnlikeViewDelegate>
{
    id <XMRecFlowNewUserAlbumCellDelegate> _delegate;
    XMFlowNewUserModel *_model;
    XMTableCellObject *_cellObj;
    UILabel *_titleLabel;
    UILabel *_categoryLabel;
    UIImageView *_categoryBox;
    UIButton *_changeButton;
    UIButton *_unlikeButton;
    NSMutableArray *_cardViews;
    UIView *_shadowView;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
+ (double)cardWidth;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) NSMutableArray *cardViews; // @synthesize cardViews=_cardViews;
@property(retain, nonatomic) UIButton *unlikeButton; // @synthesize unlikeButton=_unlikeButton;
@property(retain, nonatomic) UIButton *changeButton; // @synthesize changeButton=_changeButton;
@property(retain, nonatomic) UIImageView *categoryBox; // @synthesize categoryBox=_categoryBox;
@property(retain, nonatomic) UILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak XMTableCellObject *cellObj; // @synthesize cellObj=_cellObj;
@property(retain, nonatomic) XMFlowNewUserModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <XMRecFlowNewUserAlbumCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)newerUnlikeViewDidClickUnlike;
- (void)newerUnlikeViewDidClickCancel;
- (void)cardDidClick:(id)arg1;
- (void)unlikeDidClick;
- (void)changeBatchDidClick;
- (void)moreButtonDidClick;
- (void)layoutSubviews;
- (void)setupMore;
- (void)setupCardViews;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

