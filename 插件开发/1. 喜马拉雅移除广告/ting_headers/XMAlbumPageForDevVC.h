//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

#import "PPMediaControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMAlbumGroupViewDelegate-Protocol.h"
#import "XMHwSoundCellDelegate-Protocol.h"
#import "XMSoundTableViewCellDelegate-Protocol.h"
#import "XMToastViewDelegate-Protocol.h"

@class MBProgressHUD, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PPMediaDevice, UIActionSheet, UIButton, UIImageView, UITableView, UIView, XMAlbumGroupView, XMAlbumItem, XMScrollLabel, XMServerPostRequest, XMServerRequest, XMToastView;

@interface XMAlbumPageForDevVC : XMBaseViewController <XMAlbumGroupViewDelegate, PPMediaControllerDelegate, XMHwSoundCellDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UIActionSheetDelegate, XMToastViewDelegate, XMSoundTableViewCellDelegate>
{
    UIImageView *_myPhotoImgView;
    UIImageView *_bgImgView;
    double _meImageOriginY;
    _Bool _handleBgImage;
    UIView *_tabView;
    double _groupViewOriginY;
    XMAlbumGroupView *_groupView;
    long long _pageId_sound;
    long long _maxPageId_sound;
    long long _pageSize;
    _Bool isScrollLoadMore;
    long long origin_pageId_sound;
    double scrollTotalHeight;
    _Bool hasStartAutoPlay;
    long long _pageId_album;
    long long _maxPageId_album;
    _Bool reloading_sound;
    _Bool reloading_album;
    int _tabIndex;
    _Bool _hasLoadSoundList;
    _Bool _hasLoadAlbumList;
    UIImageView *_tab_left_bgView;
    UIImageView *_tab_center_bgView;
    UIImageView *_tab_right_bgView;
    UIButton *_tabLeftButton;
    UIButton *_tabCenterButton;
    UIButton *_tabRightButton;
    double _topHeight;
    XMScrollLabel *_topTitleLabel;
    UIView *_sortTopView;
    float _topIOS7;
    double _headerImageOriginY;
    UIView *_toolbar;
    UIButton *_shareButton;
    _Bool _isNotTopChangeStatusBarFrame;
    _Bool _buyAlbumUsePoints;
    _Bool _shareAlbumAfterDownload;
    _Bool _shareAlbumWithNoPoints;
    float _albumInfoCellHeight;
    _Bool _hasLoadDev;
    PPMediaDevice *_myDevice;
    long long _willPlayIndex;
    long long _playingIndex;
    long long _indexForPl;
    long long _willPlayPage;
    long long _playingPage;
    _Bool _isPaused;
    _Bool _notCurrentQueue;
    _Bool _isBind;
    UIView *myGuideView;
    XMAlbumItem *albumItem;
    UITableView *soundTableView;
    XMServerRequest *myHttpRequest;
    NSMutableArray *otherAlbumList;
    NSMutableDictionary *shareDictionary;
    NSString *isAsc;
    MBProgressHUD *hudReverse;
    XMServerPostRequest *favAlbumRequest;
    MBProgressHUD *hudFavAlbum;
    UIActionSheet *myActionSheet;
    NSDictionary *dictAlbumRelation;
    XMServerRequest *albumRelationRequest;
    XMServerRequest *trackRelationRequest;
    XMServerRequest *albumCheckRequest;
    XMToastView *toastView;
    double _bottomBarHeight;
    NSMutableArray *_currPlTracks;
    NSString *_backupListName;
}

@property(copy, nonatomic) NSString *backupListName; // @synthesize backupListName=_backupListName;
@property(retain, nonatomic) NSMutableArray *currPlTracks; // @synthesize currPlTracks=_currPlTracks;
@property(nonatomic) double bottomBarHeight; // @synthesize bottomBarHeight=_bottomBarHeight;
@property(nonatomic) _Bool isBind; // @synthesize isBind=_isBind;
@property(retain, nonatomic) XMToastView *toastView; // @synthesize toastView;
@property(retain, nonatomic) XMServerRequest *albumCheckRequest; // @synthesize albumCheckRequest;
@property(retain, nonatomic) XMServerRequest *trackRelationRequest; // @synthesize trackRelationRequest;
@property(retain, nonatomic) XMServerRequest *albumRelationRequest; // @synthesize albumRelationRequest;
@property(retain, nonatomic) NSDictionary *dictAlbumRelation; // @synthesize dictAlbumRelation;
@property(retain, nonatomic) UIActionSheet *myActionSheet; // @synthesize myActionSheet;
@property(retain, nonatomic) MBProgressHUD *hudFavAlbum; // @synthesize hudFavAlbum;
@property(retain, nonatomic) XMServerPostRequest *favAlbumRequest; // @synthesize favAlbumRequest;
@property(retain, nonatomic) MBProgressHUD *hudReverse; // @synthesize hudReverse;
@property(retain, nonatomic) NSString *isAsc; // @synthesize isAsc;
@property(retain, nonatomic) NSMutableDictionary *shareDictionary; // @synthesize shareDictionary;
@property(retain, nonatomic) NSMutableArray *otherAlbumList; // @synthesize otherAlbumList;
@property(retain, nonatomic) XMServerRequest *myHttpRequest; // @synthesize myHttpRequest;
@property(readonly, nonatomic) UITableView *soundTableView; // @synthesize soundTableView;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem;
@property(retain, nonatomic) UIView *myGuideView; // @synthesize myGuideView;
- (void).cxx_destruct;
- (void)tableViewCell:(id)arg1 didClickFav:(id)arg2;
- (void)dealWithBackupResult:(_Bool)arg1;
- (void)onBackupQueueNotification:(id)arg1;
- (void)addAlbumToChannel;
- (void)parseCurrentQueueDict:(id)arg1;
- (void)onBrowseAlbumQueueNotification:(id)arg1;
- (void)setupForDevice;
- (void)onReceiveAVTransportNotification:(id)arg1;
- (void)onReceivePlayPauseNotification:(id)arg1;
- (void)createAlbumPlayList;
- (void)createPlayListFromIndex:(long long)arg1;
- (void)playWithIndexSucc;
- (void)playWithIndexFail;
- (void)createPlaylistFail;
- (void)playQueueWithIndexDidRespondWithResult:(_Bool)arg1;
- (void)playSelectedSound;
- (void)onCreatePlayListSuccess:(id)arg1;
- (void)playPauseTheDevice;
- (long long)indexForPlaylistWithTrackID:(long long)arg1;
- (void)albumInfoViewCellNeedRefresh;
- (void)albumInfoCell:(id)arg1 openURL:(id)arg2;
- (void)tagsClick:(id)arg1;
- (void)statusBarFrameWillChangeNotification:(id)arg1;
- (void)shareAlbumWithTitleImage:(id)arg1;
- (void)requestOtherAlbumForIndex:(long long)arg1;
- (void)requestOtherAlbumFailedSelector:(id)arg1;
- (void)requestOtherAlbumFinishedSelector:(id)arg1;
- (void)changeFavStateFailedSelector:(id)arg1;
- (void)changeFavStateFinishedSelector:(id)arg1;
- (void)requestChangeFavState;
- (void)changeFavState;
- (void)clearUIData;
- (void)albumInfoCell:(id)arg1 clickAtIndex:(int)arg2;
- (void)albumInfoCell:(id)arg1 clickTagString:(id)arg2;
- (void)albumGroupViewClickOnSegButton;
- (void)albumGroupView:(id)arg1 ClickOnSortButtonWithSortStatus:(id)arg2;
- (void)albumGroupView:(id)arg1 ClickOnSegmentAtIndex:(long long)arg2;
- (void)downloadSound:(id)arg1;
- (void)playerSound:(id)arg1;
- (void)requestAlbumCheck;
- (void)requestDataFinish;
- (void)requestRelationFor:(id)arg1;
- (void)requestAlbumRelation;
- (void)resetMJFooterStatus;
- (void)doneLoadData;
- (void)doRequestTableViewDataForPage:(long long)arg1;
- (void)retrieveDataFailedSelector:(id)arg1;
- (void)retrieveDataFinishedSelector:(id)arg1;
- (void)retrieveOtherAlbumDataFinishedSelector:(id)arg1;
- (void)reloadData;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)triggerPullToRefresh;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)getSoundIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tabViewButtonClicked;
- (void)addSubViewsOnTapView:(id)arg1;
- (void)back;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)safeReloadTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)groupViewTap:(id)arg1;
- (void)addGroupView;
- (void)fakePressSortOfGroupView:(id)arg1;
- (void)onShareBtnClick;
- (void)addTopView;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)onPlayingTrackPaused;
- (void)onPlayingTrackChanged;
- (id)initWithAlbumItem:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

