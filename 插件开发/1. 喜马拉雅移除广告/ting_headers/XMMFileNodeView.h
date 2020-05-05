//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseNodeView.h"

@class UILabel, XMAnimatedImageView, XMMFileNode;

@interface XMMFileNodeView : XMMBaseNodeView
{
    XMAnimatedImageView *_iconImageView;
    UILabel *_fileLabel;
    UILabel *_sizeLabel;
}

@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *fileLabel; // @synthesize fileLabel=_fileLabel;
@property(retain, nonatomic) XMAnimatedImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviewsWithSize:(struct CGSize)arg1;
- (void)resetColor;
- (void)updateColorWithTheme:(id)arg1;
- (void)reuseWithNode:(id)arg1;
- (void)didInitialize;

// Remaining properties
@property(retain, nonatomic) XMMFileNode *node; // @dynamic node;

@end

