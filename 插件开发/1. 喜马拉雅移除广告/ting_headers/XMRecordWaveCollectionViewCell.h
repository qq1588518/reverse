//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIView;

@interface XMRecordWaveCollectionViewCell : UICollectionViewCell
{
    UIColor *_bgColor;
    double _bgHeightRatio;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) double bgHeightRatio; // @synthesize bgHeightRatio=_bgHeightRatio;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

