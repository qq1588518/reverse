//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, XMAlbumCoverImageView, XMPayAlbumItem, YYLabel;

@interface XMPayAlbumRankAlbumCell : UITableViewCell
{
    XMAlbumCoverImageView *_coverView;
    YYLabel *_titleLabel;
    UILabel *_introLabel;
    UILabel *_scoreLabel;
    UILabel *_indexLablel;
    UIImageView *_indexView;
    UIImageView *_shiftView;
    UIView *_divideLine;
    XMPayAlbumItem *_model;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMPayAlbumItem *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) UIImageView *shiftView; // @synthesize shiftView=_shiftView;
@property(retain, nonatomic) UIImageView *indexView; // @synthesize indexView=_indexView;
@property(retain, nonatomic) UILabel *indexLablel; // @synthesize indexLablel=_indexLablel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) YYLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMAlbumCoverImageView *coverView; // @synthesize coverView=_coverView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitle;
- (void)updateAlbum:(id)arg1 fromIndex:(long long)arg2;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)layoutSubviews;
- (void)setupLayout;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

