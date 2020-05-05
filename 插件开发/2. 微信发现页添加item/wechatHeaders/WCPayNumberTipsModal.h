//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, WCPayNumberTipsModalViewData;
@protocol WCPayNumberTipsModalDelegate;

@interface WCPayNumberTipsModal : UIView
{
    id <WCPayNumberTipsModalDelegate> _delegate;
    UIView *_backgroundView;
    WCPayNumberTipsModalViewData *_viewModel;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIView *_upLine;
    UIView *_bottomLine;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIView *_btnsContentView;
}

@property(retain, nonatomic) UIView *btnsContentView; // @synthesize btnsContentView=_btnsContentView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *upLine; // @synthesize upLine=_upLine;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCPayNumberTipsModalViewData *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <WCPayNumberTipsModalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dissmissView;
- (void)handleTap:(id)arg1;
- (void)showInView;
- (void)onTapConfirmBtn;
- (void)onTapCancelBtn;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithViewData:(id)arg1;

@end

