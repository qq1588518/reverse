//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface WBTBLineLabelView : UIView
{
    UIView *_leftLine;
    UIView *_rightLine;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
- (void).cxx_destruct;
- (void)initView;
- (void)initData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

