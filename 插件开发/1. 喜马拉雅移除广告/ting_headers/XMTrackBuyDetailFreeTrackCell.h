//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIButton, UIImageView, UILabel, XMSoundItem, XMSoundTableSubTitleView, XMTableCellObject, XMView, XMWebImageView;

@interface XMTrackBuyDetailFreeTrackCell : XMTableViewCell
{
    UIImageView *_coverBg;
    XMWebImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_creatTimeLabel;
    XMSoundTableSubTitleView *_subTitleView;
    UIButton *_playBtn;
    UIImageView *_playLoadingIV;
    id _actionPlayer;
    SEL _actionSelectorPlayer;
    XMView *_invitationBrand;
    XMView *_tagView;
    _Bool _highlightTitle;
    XMSoundItem *_track;
    long long _index;
    XMTableCellObject *_cellObject;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(nonatomic) _Bool highlightTitle; // @synthesize highlightTitle=_highlightTitle;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) XMSoundItem *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)playerAction:(id)arg1;
- (void)addTextAttachment:(id)arg1 attributedString:(id)arg2;
- (void)endRotateInLoadingIV;
- (void)startRotateInLoadingIV;
- (void)updatePlayLoading;
- (void)updateUI;
- (void)loadingIVTapAction:(id)arg1;
- (void)addPlayLoadingView;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

