//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKSpiltLineTableViewCell.h"

@class UIImageView, UILabel;

@interface MovieSDKMovieInfoCell : MovieSDKSpiltLineTableViewCell
{
    UILabel *_label;
    UIImageView *_arrow;
}

+ (double)preferredHeightForData:(id)arg1 cellInfo:(id)arg2 fitWidth:(double)arg3;
+ (struct UIEdgeInsets)spiltLineInset;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)bindData:(id)arg1 cellInfo:(id)arg2;
- (void)layoutSubviews;
- (void)ruleLableTapped;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

