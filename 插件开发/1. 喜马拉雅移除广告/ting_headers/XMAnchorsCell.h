//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, XMWebImageView;

@interface XMAnchorsCell : UICollectionViewCell
{
    UIView *_colorView;
    XMWebImageView *_iconImageView;
    UIImageView *_vLogoIcon;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *vLogoIcon; // @synthesize vLogoIcon=_vLogoIcon;
@property(retain, nonatomic) XMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

