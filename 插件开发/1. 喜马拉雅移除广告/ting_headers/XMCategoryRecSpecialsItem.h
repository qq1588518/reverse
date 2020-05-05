//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMLongPressResponder-Protocol.h"

@class FLAnimatedImageView, NSString, UIImageView, UILabel, UILongPressGestureRecognizer, XMWebImageButton, XMWebImageView, YYLabel;

@interface XMCategoryRecSpecialsItem : UIView <XMLongPressResponder>
{
    UILabel *_subtitleLab;
    UILabel *_infoLabel;
    UILabel *_infoTextLabel;
    XMWebImageView *_payIcon;
    UIImageView *_originIcon;
    FLAnimatedImageView *_animationIcon;
    UILongPressGestureRecognizer *_longPress;
    id _item;
    XMWebImageButton *_coverImage;
    UIImageView *_infoIcon;
    UIView *_titleView;
    YYLabel *_titleLab;
}

@property(retain, nonatomic) YYLabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *infoIcon; // @synthesize infoIcon=_infoIcon;
@property(retain, nonatomic) XMWebImageButton *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPress; // @synthesize longPress=_longPress;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setAlbumAdInfoWithModel:(id)arg1;
- (id)attributedStringWithTitle:(id)arg1 tagImage:(id)arg2;
- (void)updateWithFindCardAlbumModel:(id)arg1;
- (void)updateWithSubjectItem:(id)arg1;
- (void)updateWithLiveItem:(id)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

