//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, XMDSICardSentenceModel;

@interface XMDSICardSentenceView : UIView
{
    UIImageView *_contentIV;
    UILabel *_describeLB;
    UILabel *_inscriptionLB;
    XMDSICardSentenceModel *_sentenceModel;
}

@property(retain, nonatomic) XMDSICardSentenceModel *sentenceModel; // @synthesize sentenceModel=_sentenceModel;
@property(retain, nonatomic) UILabel *inscriptionLB; // @synthesize inscriptionLB=_inscriptionLB;
@property(retain, nonatomic) UILabel *describeLB; // @synthesize describeLB=_describeLB;
@property(retain, nonatomic) UIImageView *contentIV; // @synthesize contentIV=_contentIV;
- (void).cxx_destruct;
- (void)updateDescribeFont;
- (void)setDataSources:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

