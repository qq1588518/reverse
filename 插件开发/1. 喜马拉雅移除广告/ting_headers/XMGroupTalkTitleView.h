//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILabel;

@interface XMGroupTalkTitleView : UIView
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *detail;
@property(retain, nonatomic) NSString *title;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didInitialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

