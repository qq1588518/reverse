//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface XMRecFlowMoresCell : UICollectionViewCell
{
    UIView *_backView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    double _cornerRadius;
    double _topMargin;
    double _backHeight;
}

@property(nonatomic) double backHeight; // @synthesize backHeight=_backHeight;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)p_makeConstraints;
- (void)p_setUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

