//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface XMAudioSourceVipAlert : UIView
{
    UIView *_topBlackView;
    UIImageView *_coverIV;
    UILabel *_titleLB;
    UIButton *_actionBtn;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) UIImageView *coverIV; // @synthesize coverIV=_coverIV;
@property(retain, nonatomic) UIView *topBlackView; // @synthesize topBlackView=_topBlackView;
- (void).cxx_destruct;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)onAction;
- (id)init;

@end

