//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface WBMLVideoDataTipView : UIControl
{
    _Bool _reloadButtonHidden;
    UIImage *_image;
    NSString *_tipText;
    NSString *_reloadTipText;
    UIImageView *_imageView;
    UILabel *_label;
    UIButton *_reloadBtn;
}

@property(retain, nonatomic) UIButton *reloadBtn; // @synthesize reloadBtn=_reloadBtn;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool reloadButtonHidden; // @synthesize reloadButtonHidden=_reloadButtonHidden;
@property(copy, nonatomic) NSString *reloadTipText; // @synthesize reloadTipText=_reloadTipText;
@property(copy, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)addReloadTarget:(id)arg1 selector:(SEL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

