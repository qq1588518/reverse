//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBasicWebViewController.h"

@class UIBarButtonItem, WBToolbar, WBToolbarButtonItem;

@interface WBUniversalWebViewController : WBBasicWebViewController
{
    WBToolbar *toolbar;
    WBToolbarButtonItem *backButtonItem;
    WBToolbarButtonItem *forwardButtonItem;
    WBToolbarButtonItem *stopButtonItem;
    WBToolbarButtonItem *refreshButtonItem;
    _Bool _hidesToolbar;
    UIBarButtonItem *_moreButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *moreButtonItem; // @synthesize moreButtonItem=_moreButtonItem;
@property(nonatomic) _Bool hidesToolbar; // @synthesize hidesToolbar=_hidesToolbar;
- (void).cxx_destruct;
- (id)previewActionItems;
- (void)viewDidPopFromPeeking;
- (void)viewDidStartPeeking;
- (void)updatePeekingState;
- (void)wb_webViewDidStartLoad:(id)arg1;
- (_Bool)allowsBackForwardNavigationGestures;
- (void)reloadUIElements;
- (_Bool)_shouldShowMoreMenu;
- (void)moreButtonPressed:(id)arg1;
- (void)stopButtonPressed:(id)arg1;
- (void)refreshButtonPressed:(id)arg1;
- (void)forwardButtonPressed:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)updateControls;
- (void)updateRightBarButtonItems;
- (void)dismissPresent;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resetToolbarVisibility;
- (void)layoutViews;
- (void)webpageContinuity;
- (_Bool)disablesSinaURL;
- (id)init;

@end

