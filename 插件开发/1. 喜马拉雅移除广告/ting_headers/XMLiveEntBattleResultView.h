//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface XMLiveEntBattleResultView : UIView
{
    id _pkResult;
    UIView *_contentView;
    UIView *_backView;
    UIImageView *_retFlagView;
    UIImageView *_retEmptyView;
    UILabel *_retEmptyLabel;
    UIButton *_actionBtn;
    UILabel *_retWinLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *retWinLabel; // @synthesize retWinLabel=_retWinLabel;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *retEmptyLabel; // @synthesize retEmptyLabel=_retEmptyLabel;
@property(retain, nonatomic) UIImageView *retEmptyView; // @synthesize retEmptyView=_retEmptyView;
@property(retain, nonatomic) UIImageView *retFlagView; // @synthesize retFlagView=_retFlagView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id pkResult; // @synthesize pkResult=_pkResult;
- (void)onAction;
- (void)show;
- (void)handleResult;
- (void)initBase;
- (id)init;

@end

