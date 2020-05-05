//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, XMHomePagePerson;

@interface XMHomePageGradeView : UIView
{
    CDUnknownBlockType _openAnchorWebView;
    CDUnknownBlockType _openVipWebView;
    CDUnknownBlockType _openUserWebView;
    CDUnknownBlockType _openCopyrightWebView;
    UIButton *_copyrightBtn;
    UIView *_line1;
    UIButton *_liveGradeBtn;
    UIView *_line2;
    UIButton *_vipGradeBtn;
    UIView *_line3;
    UIButton *_userGradeBtn;
    long long _itemCounts;
    XMHomePagePerson *_homepagePerson;
}

+ (double)viewHeightWithDataSource:(id)arg1;
@property(retain, nonatomic) XMHomePagePerson *homepagePerson; // @synthesize homepagePerson=_homepagePerson;
@property(nonatomic) long long itemCounts; // @synthesize itemCounts=_itemCounts;
@property(retain, nonatomic) UIButton *userGradeBtn; // @synthesize userGradeBtn=_userGradeBtn;
@property(retain, nonatomic) UIView *line3; // @synthesize line3=_line3;
@property(retain, nonatomic) UIButton *vipGradeBtn; // @synthesize vipGradeBtn=_vipGradeBtn;
@property(retain, nonatomic) UIView *line2; // @synthesize line2=_line2;
@property(retain, nonatomic) UIButton *liveGradeBtn; // @synthesize liveGradeBtn=_liveGradeBtn;
@property(retain, nonatomic) UIView *line1; // @synthesize line1=_line1;
@property(retain, nonatomic) UIButton *copyrightBtn; // @synthesize copyrightBtn=_copyrightBtn;
@property(copy, nonatomic) CDUnknownBlockType openCopyrightWebView; // @synthesize openCopyrightWebView=_openCopyrightWebView;
@property(copy, nonatomic) CDUnknownBlockType openUserWebView; // @synthesize openUserWebView=_openUserWebView;
@property(copy, nonatomic) CDUnknownBlockType openVipWebView; // @synthesize openVipWebView=_openVipWebView;
@property(copy, nonatomic) CDUnknownBlockType openAnchorWebView; // @synthesize openAnchorWebView=_openAnchorWebView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didClickCopyrightBtn;
- (void)didClickUserGradeBtn;
- (void)didClickVipGradeBtn;
- (void)didClickAnchorGradeBtn;
- (void)setDataSource:(id)arg1;
- (void)initializeSubViews;
- (id)init;

@end

