//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "XMLiveEntHomeCollectionCellDelegate-Protocol.h"
#import "XMLiveRoomEntHomeListDelegate-Protocol.h"
#import "XMVXPageViewControllerDataSource-Protocol.h"
#import "XMVXPageViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIBarButtonItem, UIView, XMAdFocusImageView, XMLiveEntMsgBtn, XMLiveEntNowPlayingView, XMNRequest, XMPopMenuView, XMSegmentControl, XMVXPageViewController;

@interface XMLiveRoomEntHomeVC : XMBaseVC <XMLiveEntHomeCollectionCellDelegate, XMVXPageViewControllerDelegate, XMVXPageViewControllerDataSource, XMLiveRoomEntHomeListDelegate, UIScrollViewDelegate>
{
    long long _curCategory;
    double _lastOffset;
    double _lastShowTimeStamp;
    _Bool _noNetErr;
    _Bool _useDarkSkin;
    XMPopMenuView *_downMenu;
    XMAdFocusImageView *_focusView;
    XMNRequest *_categoryReq;
    UIView *_topView;
    UIBarButtonItem *_animBarItem;
    UIBarButtonItem *_menuBarItem;
    XMSegmentControl *_segmentControl;
    XMVXPageViewController *_pageCtrl;
    XMLiveEntMsgBtn *_chatEntrence;
    XMLiveEntNowPlayingView *_nowPlayingView;
    NSMutableArray *_categoryList;
    double _topInset;
}

- (void).cxx_destruct;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(retain, nonatomic) NSMutableArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) XMLiveEntNowPlayingView *nowPlayingView; // @synthesize nowPlayingView=_nowPlayingView;
@property(retain, nonatomic) XMLiveEntMsgBtn *chatEntrence; // @synthesize chatEntrence=_chatEntrence;
@property(retain, nonatomic) XMVXPageViewController *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) XMSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) UIBarButtonItem *menuBarItem; // @synthesize menuBarItem=_menuBarItem;
@property(retain, nonatomic) UIBarButtonItem *animBarItem; // @synthesize animBarItem=_animBarItem;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) XMNRequest *categoryReq; // @synthesize categoryReq=_categoryReq;
@property(retain, nonatomic) XMAdFocusImageView *focusView; // @synthesize focusView=_focusView;
@property(retain, nonatomic) XMPopMenuView *downMenu; // @synthesize downMenu=_downMenu;
@property(nonatomic) _Bool useDarkSkin; // @synthesize useDarkSkin=_useDarkSkin;
- (double)heightOffset;
- (id)viewControllerAtIndex:(long long)arg1;
- (id)vxPageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)vxPageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)chatEntrenceMoveIn:(_Bool)arg1;
- (void)vxPageViewController:(id)arg1 onSubviewController:(id)arg2 didScrollWithScrollView:(id)arg3;
- (void)vxPageViewController:(id)arg1 floatingViewOriginDidChange:(struct CGPoint)arg2;
- (void)vxPageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)homeListVCDidClickEntItem:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)handleCategoryList:(id)arg1;
- (void)loadCategoryList;
- (void)loadEntList;
- (long long)preferredStatusBarStyle;
- (void)onMenuClick;
- (void)onChatEntrence;
- (void)onPlayingViewClick;
- (void)unreadCountDidChange:(id)arg1;
- (void)onLivePlayerDidStart:(id)arg1;
- (void)checkNowPlaying;
- (void)checkShowEmptyView;
- (void)triggerPullToRefresh;
- (void)loadLocalCategoryList;
- (void)initCustom;
- (void)addNotification;
- (void)addNowPlayingView;
- (void)addChatEntrence;
- (void)addSegmentControl;
- (void)addPageViewController;
- (void)addMenuItem;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

