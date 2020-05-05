//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, WBContentImageView;

@interface WBPhotoViewerPromotionView : UIView
{
    double _lastTouchEndedTimeStamp;
    _Bool _isShow;
    CDUnknownBlockType _block;
    CDUnknownBlockType _clickBlock;
    UIButton *_closeBtn;
    WBContentImageView *_promotionImageView;
    UILabel *_titleLabel;
    UILabel *_desLabel;
    UIButton *_jumpBtn;
    UIButton *_backControl;
    NSString *_jumpUrl;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) UIButton *backControl; // @synthesize backControl=_backControl;
@property(retain, nonatomic) UIButton *jumpBtn; // @synthesize jumpBtn=_jumpBtn;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WBContentImageView *promotionImageView; // @synthesize promotionImageView=_promotionImageView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)promotionClickAnalysis:(int)arg1;
- (void)closeBtnClick;
- (void)jumpBtnClick:(id)arg1;
- (void)layoutSubviews;
- (void)configViewData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

