//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

@class UIButton, UILabel, UIView, UIVisualEffectView, XMAlbumItem, XMPlayListIntroPop, XMPlayListModel, XMWebImageView;

@interface XMPlayListDetailIntroViewController : XMSubLevelViewController
{
    XMPlayListModel *_model;
    XMAlbumItem *_albumItem;
    UIView *_navView;
    UIButton *_backButton;
    UIButton *_editButton;
    UILabel *_titleLabel;
    UIView *_headView;
    XMWebImageView *_coverBgIV;
    UIVisualEffectView *_effectView;
    UIView *_coverBgContent;
    XMWebImageView *_coverIV;
    XMPlayListIntroPop *_introPop;
}

@property(retain, nonatomic) XMPlayListIntroPop *introPop; // @synthesize introPop=_introPop;
@property(retain, nonatomic) XMWebImageView *coverIV; // @synthesize coverIV=_coverIV;
@property(retain, nonatomic) UIView *coverBgContent; // @synthesize coverBgContent=_coverBgContent;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) XMWebImageView *coverBgIV; // @synthesize coverBgIV=_coverBgIV;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *navView; // @synthesize navView=_navView;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
@property(retain, nonatomic) XMPlayListModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setupNav;
- (void)backDidClick;
- (void)viewDidLoad;
- (id)initWithPlayListModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

