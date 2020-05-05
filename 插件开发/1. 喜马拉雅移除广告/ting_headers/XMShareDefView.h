//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSBaseView.h"

@class NSArray, NSMutableArray, UIView;

@interface XMShareDefView : XMSBaseView
{
    _Bool _showHotBanner;
    _Bool _doubleStyle;
    NSArray *_platforms;
    NSArray *_customPlatformActions;
    NSMutableArray *_items;
    UIView *_header;
    XMSBaseView *_adView;
    XMSBaseView *_controlView;
    long long _interfaceStyle;
}

@property(nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
@property(nonatomic) _Bool doubleStyle; // @synthesize doubleStyle=_doubleStyle;
@property(nonatomic) _Bool showHotBanner; // @synthesize showHotBanner=_showHotBanner;
@property(retain, nonatomic) XMSBaseView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) XMSBaseView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) UIView *header; // @synthesize header=_header;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *customPlatformActions; // @synthesize customPlatformActions=_customPlatformActions;
@property(retain, nonatomic) NSArray *platforms; // @synthesize platforms=_platforms;
- (void).cxx_destruct;
- (id)lineView:(struct CGRect)arg1;
- (id)containerViewItems:(struct CGRect)arg1;
- (id)scrollViewItems:(struct CGRect)arg1;
- (id)creatHeader;
- (void)onButtonPressed:(id)arg1;
- (void)onCustomPlatDidClick:(id)arg1;
- (double)itemsBottom;
- (double)itemsTop;
- (void)layoutSubviews;
- (void)setup7MoreCountStyle;
- (void)setup3To7CountStyle;
- (void)setup3CountStyle;
- (void)setup2CountStyle;
- (void)setupCustomMoreStyle;
- (void)setupControlStyle;
- (void)setup;
- (void)showHotBannerImage:(id)arg1;
- (id)initWithPlatforms:(id)arg1 headerView:(id)arg2 adView:(id)arg3 customControlView:(id)arg4 customPlatformActions:(id)arg5 customDoubleStyle:(_Bool)arg6 showHotBanner:(_Bool)arg7 interfaceStyle:(long long)arg8;
- (id)initWithPlatforms:(id)arg1 headerView:(id)arg2 adView:(id)arg3 customControlView:(id)arg4 customPlatformActions:(id)arg5 customDoubleStyle:(_Bool)arg6 showHotBanner:(_Bool)arg7;
- (id)initWithPlatforms:(id)arg1 headerView:(id)arg2 adView:(id)arg3;
- (void)dealloc;

@end

