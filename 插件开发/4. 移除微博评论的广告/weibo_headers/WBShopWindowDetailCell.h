//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class UILabel, WBShopProduct;

@interface WBShopWindowDetailCell : WBTableViewCell
{
    WBShopProduct *_product;
    UILabel *_priceLabel;
    UILabel *_visitLabel;
    UILabel *_detailLabel;
    UILabel *_sourceLabel;
}

+ (double)getCellHeightWithProduct:(id)arg1;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *visitLabel; // @synthesize visitLabel=_visitLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) WBShopProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (id)getSourceStrWithItemType:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

