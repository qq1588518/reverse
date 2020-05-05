//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UILongPressGestureRecognizer, UIView, YXLivePackGiftModel;
@protocol YXLivePackGiftViewCellDelegate;

@interface YXLivePackGiftViewCell : UICollectionViewCell
{
    _Bool _isHorizantal;
    _Bool _hasShowLongPressTips;
    id <YXLivePackGiftViewCellDelegate> _delegate;
    UIView *_tagView;
    UILabel *_countLabel;
    UIImageView *_tagIV;
    YXLivePackGiftModel *_model;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    UIImageView *_longPressImgView;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) UIImageView *longPressImgView; // @synthesize longPressImgView=_longPressImgView;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) YXLivePackGiftModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIImageView *tagIV; // @synthesize tagIV=_tagIV;
@property(nonatomic) __weak UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) __weak UIView *tagView; // @synthesize tagView=_tagView;
@property(nonatomic) _Bool hasShowLongPressTips; // @synthesize hasShowLongPressTips=_hasShowLongPressTips;
@property(nonatomic) __weak id <YXLivePackGiftViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isHorizantal; // @synthesize isHorizantal=_isHorizantal;
- (void).cxx_destruct;
- (void)removeLongPressGesture;
- (void)addLongPressGesture;
- (void)hideLongLinkLabel;
- (void)longPressed:(id)arg1;
- (void)showLongLinkLabel:(_Bool)arg1;
- (void)updateIconImageViewURL:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateCellData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

