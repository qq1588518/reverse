//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, XMAlbumCardModel, XMWebImageButton, YYLabel;

@interface XMRecFlowNewUserAlbumView : UIView
{
    XMWebImageButton *_coverImage;
    UIImageView *_tagView;
    UILabel *_infoLabel;
    YYLabel *_titleLabel;
    XMAlbumCardModel *_model;
}

@property(retain, nonatomic) XMAlbumCardModel *model; // @synthesize model=_model;
@property(retain, nonatomic) YYLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) XMWebImageButton *coverImage; // @synthesize coverImage=_coverImage;
- (void).cxx_destruct;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

