//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIImageView, UILabel, XMRankItem, XMWebImageView;

@interface XMCategoryRankEnterCell : XMTableViewCell
{
    XMWebImageView *_coverImageView;
    UILabel *_titleLab;
    UILabel *_detailLab;
    UIImageView *_moreIndicator;
    XMRankItem *_rank;
}

+ (double)height;
@property(retain, nonatomic) XMRankItem *rank; // @synthesize rank=_rank;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

