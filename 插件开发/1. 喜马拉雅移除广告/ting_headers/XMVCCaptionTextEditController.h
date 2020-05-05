//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "XMVCPackStatusDelegate-Protocol.h"

@class NSString, UIControl, UITapGestureRecognizer, UITextView, UIView, XMHMenuView, XMVCColorInfoModel, XMVCFontInfoModel, XMVCLabelStickerInfo;

@interface XMVCCaptionTextEditController : UIViewController <UITextViewDelegate, XMVCPackStatusDelegate, UIGestureRecognizerDelegate>
{
    UIView *_menuBgView;
    XMHMenuView *_fontMenuView;
    XMHMenuView *_colorMenuView;
    UITextView *_textView;
    XMVCColorInfoModel *_colorInfo;
    XMVCFontInfoModel *_fontInfo;
    CDUnknownBlockType _callback;
    XMVCLabelStickerInfo *_info;
    XMVCFontInfoModel *_willCurrentFontInfo;
    CDUnknownBlockType _fontSelectedBlock;
    XMVCFontInfoModel *_defFontInfo;
    UITapGestureRecognizer *_tapGesture;
    UIControl *_bgControl;
}

+ (id)controllerWithInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIControl *bgControl; // @synthesize bgControl=_bgControl;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) XMVCFontInfoModel *defFontInfo; // @synthesize defFontInfo=_defFontInfo;
@property(copy, nonatomic) CDUnknownBlockType fontSelectedBlock; // @synthesize fontSelectedBlock=_fontSelectedBlock;
@property(retain, nonatomic) XMVCFontInfoModel *willCurrentFontInfo; // @synthesize willCurrentFontInfo=_willCurrentFontInfo;
@property(retain, nonatomic) XMVCLabelStickerInfo *info; // @synthesize info=_info;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) XMVCFontInfoModel *fontInfo; // @synthesize fontInfo=_fontInfo;
@property(retain, nonatomic) XMVCColorInfoModel *colorInfo; // @synthesize colorInfo=_colorInfo;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) XMHMenuView *colorMenuView; // @synthesize colorMenuView=_colorMenuView;
@property(retain, nonatomic) XMHMenuView *fontMenuView; // @synthesize fontMenuView=_fontMenuView;
@property(retain, nonatomic) UIView *menuBgView; // @synthesize menuBgView=_menuBgView;
- (void).cxx_destruct;
- (id)colorData;
- (id)fontData;
- (void)testData;
- (void)hidden;
- (void)showInController:(id)arg1;
- (void)setTextViewFontWithName:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)packStatus:(id)arg1 completionWithError:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (void)completion;
- (void)tapAction:(id)arg1;
- (void)backBtnClick:(id)arg1;
- (void)keyboardwillChange:(id)arg1;
- (void)willSelectedFontMenuWithItem:(id)arg1 allowBlock:(CDUnknownBlockType)arg2;
- (void)setupMenuViews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)initBackBtn;
- (void)initFontDatas;
- (void)initColorDatas;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

