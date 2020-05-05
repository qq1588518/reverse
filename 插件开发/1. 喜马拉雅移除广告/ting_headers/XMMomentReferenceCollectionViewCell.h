//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, XMMomentReferenceInfo;

@interface XMMomentReferenceCollectionViewCell : UICollectionViewCell
{
    XMMomentReferenceInfo *_referenceInfo;
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) XMMomentReferenceInfo *referenceInfo; // @synthesize referenceInfo=_referenceInfo;
- (void).cxx_destruct;
- (void)configWithMomentReferenceInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

