//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBImmersiveHeaderWrapViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, WBTopicHeaderMaskView;

@interface WBTopicHeaderWrapView : UIView <WBImmersiveHeaderWrapViewDelegate>
{
    _Bool _showBlurBg;
    int _width;
    int _height;
    id _delegate;
    id _object;
    UIImageView *_bgImgView;
    UIImageView *_avatarView;
    WBTopicHeaderMaskView *_maskView;
    UIView *_porSubView;
    UIView *_tagView;
    UIView *_lineView;
    UIButton *_bgViewBtn;
    UIButton *_avatarViewBtn;
    UILabel *_porSubLabel;
    UILabel *_tagLabel;
    NSString *_porSubText;
    NSString *_porSubColor;
    NSString *_porSubTextColor;
    UILabel *_titleLabel;
    UILabel *_midLabel;
    UILabel *_downLabel;
    NSString *_bgViewUrl;
    NSString *_porViewUrl;
    NSString *_midTextDes;
    NSString *_tagText;
    NSString *_tagTextCol;
    NSString *_tagCol;
}

@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) _Bool showBlurBg; // @synthesize showBlurBg=_showBlurBg;
@property(retain, nonatomic) NSString *tagCol; // @synthesize tagCol=_tagCol;
@property(retain, nonatomic) NSString *tagTextCol; // @synthesize tagTextCol=_tagTextCol;
@property(retain, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(retain, nonatomic) NSString *midTextDes; // @synthesize midTextDes=_midTextDes;
@property(retain, nonatomic) NSString *porViewUrl; // @synthesize porViewUrl=_porViewUrl;
@property(retain, nonatomic) NSString *bgViewUrl; // @synthesize bgViewUrl=_bgViewUrl;
@property(retain, nonatomic) UILabel *downLabel; // @synthesize downLabel=_downLabel;
@property(retain, nonatomic) UILabel *midLabel; // @synthesize midLabel=_midLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *porSubTextColor; // @synthesize porSubTextColor=_porSubTextColor;
@property(retain, nonatomic) NSString *porSubColor; // @synthesize porSubColor=_porSubColor;
@property(retain, nonatomic) NSString *porSubText; // @synthesize porSubText=_porSubText;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *porSubLabel; // @synthesize porSubLabel=_porSubLabel;
@property(retain, nonatomic) UIButton *avatarViewBtn; // @synthesize avatarViewBtn=_avatarViewBtn;
@property(retain, nonatomic) UIButton *bgViewBtn; // @synthesize bgViewBtn=_bgViewBtn;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIView *porSubView; // @synthesize porSubView=_porSubView;
@property(retain, nonatomic) WBTopicHeaderMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)p_createLabel;
- (id)p_createBtnAboveView:(id)arg1;
- (id)p_createTitleTagView;
- (id)p_createPorSubView;
- (void)setupGradientLayer:(id)arg1;
- (id)p_createMaskView;
- (id)p_createImgView;
- (id)p_createLineView;
- (void)p_addDownLabelContraints;
- (void)p_addMidLabelContraints;
- (void)p_addTitleLabelContraints;
- (void)p_addTagLabelContraints;
- (void)p_addTagViewContraints;
- (void)p_addPorSubLabelContraints;
- (void)p_addPorSubViewContraints;
- (void)p_addAvatarViewBtnContraints;
- (void)p_addAvatarViewContraints;
- (void)p_addBgBtnContraints;
- (void)p_addLineViewContraints;
- (void)p_addMaskViewContraints;
- (void)p_addBgImgContraints;
- (void)p_resetLayout;
- (void)p_schemeBtnPressed:(id)arg1;
- (void)avatarViewDidPressed:(id)arg1;
- (void)p_setColForTagView;
- (void)p_setColForPorSubView;
- (id)blurryImage:(id)arg1 withBlurLevel:(double)arg2;
- (id)downSizeOriginImage:(id)arg1 scaleToSize:(struct CGSize)arg2;
- (void)showBlurCoverWithAvatarImage:(id)arg1;
- (void)p_setBgAndAvatarViewImg;
- (void)p_setMidLabelTextColorNoBgImg;
- (void)p_createUIs;
- (void)p_resetData;
- (void)reloadUIElements;
- (double)viewHeightForObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

