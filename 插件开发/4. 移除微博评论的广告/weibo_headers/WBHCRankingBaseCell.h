//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class UIImageView, UILabel, UIView, WBContactAvatarView, WBHCRankData;

@interface WBHCRankingBaseCell : WBTableViewCell
{
    double scale;
    _Bool _fullSeparatorWidth;
    WBHCRankData *_rankData;
    WBContactAvatarView *_avatar;
    UILabel *_userLabel;
    UILabel *_dataLabel;
    UIView *_accessoryControl;
    UILabel *_rankLabel;
    UIView *_rankLabelBackground;
    unsigned long long _rank;
    UIImageView *_sepLine;
}

+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2;
+ (_Bool)showsData;
@property(nonatomic) _Bool fullSeparatorWidth; // @synthesize fullSeparatorWidth=_fullSeparatorWidth;
@property(readonly, nonatomic) UIImageView *sepLine; // @synthesize sepLine=_sepLine;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) UIView *rankLabelBackground; // @synthesize rankLabelBackground=_rankLabelBackground;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) UIView *accessoryControl; // @synthesize accessoryControl=_accessoryControl;
@property(readonly, nonatomic) UILabel *dataLabel; // @synthesize dataLabel=_dataLabel;
@property(readonly, nonatomic) UILabel *userLabel; // @synthesize userLabel=_userLabel;
@property(readonly, nonatomic) WBContactAvatarView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) WBHCRankData *rankData; // @synthesize rankData=_rankData;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)usesCustomSelectedBackgroundView;
- (void)updateViewsWithCurrentRank;
- (id)rankBackgroundColorForRank:(unsigned long long)arg1;
- (id)rankColorForRank:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

