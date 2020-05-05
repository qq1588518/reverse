//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, UIControl, UIImageView, UILabel;
@protocol YXWBShowCaseFloatViewTappedDelegate;

@interface YXWBShowCaseFloatTopView : UIView
{
    id <YXWBShowCaseFloatViewTappedDelegate> _delegate;
    NSDictionary *_userInfo;
    UIImageView *_speakImageV;
    UILabel *_introLabel;
    UIImageView *_goodsImageV;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    NSString *_tburl;
    NSString *_notburl;
    unsigned long long _platformType;
    long long _explain_type;
    UIControl *_tapControl;
}

@property(retain, nonatomic) UIControl *tapControl; // @synthesize tapControl=_tapControl;
@property(nonatomic) long long explain_type; // @synthesize explain_type=_explain_type;
@property(nonatomic) unsigned long long platformType; // @synthesize platformType=_platformType;
@property(copy, nonatomic) NSString *notburl; // @synthesize notburl=_notburl;
@property(copy, nonatomic) NSString *tburl; // @synthesize tburl=_tburl;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *goodsImageV; // @synthesize goodsImageV=_goodsImageV;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UIImageView *speakImageV; // @synthesize speakImageV=_speakImageV;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <YXWBShowCaseFloatViewTappedDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)goToDetailPage:(id)arg1;
- (void)reloadUI;
- (void)setData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

