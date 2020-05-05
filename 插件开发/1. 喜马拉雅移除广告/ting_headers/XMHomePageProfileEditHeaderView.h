//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, XMHomePageProfileFinishInfo, XMPersonEditButtonProgressView;

@interface XMHomePageProfileEditHeaderView : UIView
{
    XMHomePageProfileFinishInfo *_finishInfo;
    UIImageView *_bgImgV;
    UIImageView *_iconImgV;
    UILabel *_titleLbl;
    UILabel *_completeLbl;
    XMPersonEditButtonProgressView *_progressView;
}

@property(retain, nonatomic) XMPersonEditButtonProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *completeLbl; // @synthesize completeLbl=_completeLbl;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) UIImageView *iconImgV; // @synthesize iconImgV=_iconImgV;
@property(retain, nonatomic) UIImageView *bgImgV; // @synthesize bgImgV=_bgImgV;
@property(retain, nonatomic) XMHomePageProfileFinishInfo *finishInfo; // @synthesize finishInfo=_finishInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

