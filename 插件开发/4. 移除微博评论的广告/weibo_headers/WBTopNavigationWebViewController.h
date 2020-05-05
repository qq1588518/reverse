//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBasicWebViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIBarButtonItem;

@interface WBTopNavigationWebViewController : WBBasicWebViewController <UIScrollViewDelegate>
{
    struct {
        unsigned int closeButtonVisibilityNeedsUpdate:1;
        unsigned int closeButtonVisible:1;
        unsigned int createWithOpenURL:1;
    } _flags;
    long long scrollDistance;
    double topNaviBackgroundAlpha;
    _Bool leftBarItemClose;
    _Bool _topNaviItemWhiteStyle;
    _Bool _showsMenuButton;
    _Bool _backgroundTransparent;
    _Bool _browserScrollObserverEnable;
    _Bool _immersive;
    _Bool _shareMenuEnabled;
    _Bool _showsConfigButton;
    UIBarButtonItem *_moreButtonItem;
    UIBarButtonItem *_configButtonItem;
    NSString *_configButtonItemTitle;
}

@property(nonatomic) _Bool showsConfigButton; // @synthesize showsConfigButton=_showsConfigButton;
@property(nonatomic) _Bool shareMenuEnabled; // @synthesize shareMenuEnabled=_shareMenuEnabled;
@property(copy, nonatomic) NSString *configButtonItemTitle; // @synthesize configButtonItemTitle=_configButtonItemTitle;
@property(nonatomic) _Bool immersive; // @synthesize immersive=_immersive;
@property(retain, nonatomic) UIBarButtonItem *configButtonItem; // @synthesize configButtonItem=_configButtonItem;
@property(retain, nonatomic) UIBarButtonItem *moreButtonItem; // @synthesize moreButtonItem=_moreButtonItem;
@property(nonatomic) _Bool browserScrollObserverEnable; // @synthesize browserScrollObserverEnable=_browserScrollObserverEnable;
@property(nonatomic) _Bool backgroundTransparent; // @synthesize backgroundTransparent=_backgroundTransparent;
@property(nonatomic) _Bool showsMenuButton; // @synthesize showsMenuButton=_showsMenuButton;
@property(nonatomic) _Bool topNaviItemWhiteStyle; // @synthesize topNaviItemWhiteStyle=_topNaviItemWhiteStyle;
- (void).cxx_destruct;
- (id)previewActionItems;
- (void)scrollViewDidScroll:(id)arg1;
- (void)wb_webViewDidStartLoad:(id)arg1;
- (void)wb_webViewDidFinishLoad:(id)arg1;
- (void)wb_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)getCloseItemWithStyle:(_Bool)arg1;
- (id)getBackItemWithStyle:(_Bool)arg1;
- (void)refreshNaviWithTopNaviItemStyle:(_Bool)arg1 andBackgroundAlpha:(double)arg2;
- (void)setTopNaviWhiteBackground:(double)arg1;
- (void)setTopNaviNormalBackground:(double)arg1;
- (void)setBrowserBackgroundTransparent;
- (void)setRightButtonItemsWhiteStyle:(_Bool)arg1;
- (void)setLeftButtonItemsWhiteStyle:(_Bool)arg1;
- (void)updateNavigationItemTitleColor:(id)arg1;
- (void)setTopNaviImmersiveScroll:(int)arg1;
- (void)setConfigButton:(id)arg1;
- (void)updateImmersiveStyle:(_Bool)arg1;
- (void)setTopNaviItemStyle:(_Bool)arg1;
- (void)setTopNaviTransparent:(_Bool)arg1;
- (void)layoutViews;
- (struct CGRect)webViewFrame;
- (struct CGRect)visibleArea;
- (void)updateControls;
- (void)setNavigationItemTitle:(id)arg1;
- (void)updateRightBarButtonItems;
- (void)updateLeftBarButtonItems;
- (void)configButtonPress;
- (void)closeButtonPressed:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (id)_actionSheetForMoreMenu;
- (_Bool)_shouldShowMoreMenu;
- (void)moreButtonPressed:(id)arg1;
- (_Bool)moreMenuActionSheetItemNeedsIcon;
- (_Bool)disablesSinaURL;
- (_Bool)panToNavigation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (id)uiCode;
- (id)type;
- (id)initWithHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)initWithFileURL:(id)arg1;
- (id)initWithURL:(id)arg1 parameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

