//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardBaseTableViewController.h"

#import "ImmersiveHeaderViewDataSourceDelegate-Protocol.h"
#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "SNPopoverWindowDismissDelegate-Protocol.h"
#import "WBCardlistBottomSuspendViewDelegate-Protocol.h"
#import "WBContactRecentPickerViewControllerDelegate-Protocol.h"
#import "WBImmersiveHeaderViewContextDelegate-Protocol.h"
#import "WBOpenUrlSearchContextBaseVC-Protocol.h"
#import "WBPageCardTableViewCellProtocol-Protocol.h"
#import "WBPageEngineDelegate-Protocol.h"
#import "WBSearchTypeMenuDelegate-Protocol.h"
#import "WBTimeRecorderProtocol-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, UIBarButtonItem, UIButton, UIImage, UIImageView, UIView, WBCardListBaseItem, WBCardlistBottomSuspendView, WBContact, WBImmersiveHeaderViewContext, WBQAUnreadRemindHintBoard, WBSearchType, WBSearchTypeMenu, WBTimeRecorder;

@interface WBUniversalCardListViewController : WBCardBaseTableViewController <WBImmersiveHeaderViewContextDelegate, ImmersiveHeaderViewDataSourceDelegate, WBOpenUrlSearchContextBaseVC, WBTimeRecorderProtocol, WBContactRecentPickerViewControllerDelegate, WBCardlistBottomSuspendViewDelegate, WBPageEngineDelegate, PRLMTableViewWrapperDelegate, WBPageCardTableViewCellProtocol, SNPopoverWindowDismissDelegate, WBSearchTypeMenuDelegate>
{
    WBCardListBaseItem *cardListBaseItem;
    unsigned long long pageCount;
    long long count;
    long long maxCount;
    WBContact *selectedContact;
    UIButton *btnHead;
    UIImageView *imgAtt;
    _Bool isNeedCache;
    _Bool hasLoaded;
    UIBarButtonItem *spinnerButton;
    _Bool isNavigationBarTranslucent;
    _Bool isViewContextNavigationBarTranslucent;
    WBTimeRecorder *timeRecorder;
    _Bool _groupViewHidden;
    _Bool _rightNavigationItemHasSet;
    _Bool _fetchingData;
    _Bool _hasLoadedFilterGroup;
    _Bool _isNeedLoginRightItem;
    _Bool _isShowHeader;
    _Bool _isFullScreenMode;
    _Bool _cacheShowing;
    _Bool _needForceReloadData;
    _Bool _hasInterruptCard;
    _Bool _isNeedLoadMoreFollowedFromInterrupt;
    _Bool _isShowImageAlert;
    NSString *_rightNavigationItemScheme;
    unsigned long long _rightNavigationItemType;
    NSArray *menuButtons;
    WBImmersiveHeaderViewContext *_viewContext;
    WBCardListBaseItem *_cardListBaseItemFromNetwork;
    CDUnknownBlockType _hudCoverHitTest;
    WBSearchTypeMenu *_searchTypeMenu;
    NSMutableArray *_filterGroups;
    WBSearchType *_currentType;
    NSString *_rightNavigationItemContent;
    NSDictionary *_rightNavigationItemActionlog;
    UIView *_btnHeadContainer;
    UIImage *_arrowDownImage;
    UIImage *_arrowUpImage;
    WBQAUnreadRemindHintBoard *_qaUnreadHintBoard;
    long long _answerCount;
    WBCardlistBottomSuspendView *_bottomSuspendView;
}

+ (void)searchTargetCardin:(id)arg1 toArray:(id)arg2;
+ (id)classNameWillCreateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
+ (id)recordClassType;
@property(retain, nonatomic) WBCardlistBottomSuspendView *bottomSuspendView; // @synthesize bottomSuspendView=_bottomSuspendView;
@property(nonatomic) long long answerCount; // @synthesize answerCount=_answerCount;
@property(retain, nonatomic) WBQAUnreadRemindHintBoard *qaUnreadHintBoard; // @synthesize qaUnreadHintBoard=_qaUnreadHintBoard;
@property _Bool isShowImageAlert; // @synthesize isShowImageAlert=_isShowImageAlert;
@property(retain, nonatomic) UIImage *arrowUpImage; // @synthesize arrowUpImage=_arrowUpImage;
@property(retain, nonatomic) UIImage *arrowDownImage; // @synthesize arrowDownImage=_arrowDownImage;
@property(retain, nonatomic) UIView *btnHeadContainer; // @synthesize btnHeadContainer=_btnHeadContainer;
@property(retain, nonatomic) NSDictionary *rightNavigationItemActionlog; // @synthesize rightNavigationItemActionlog=_rightNavigationItemActionlog;
@property(copy, nonatomic) NSString *rightNavigationItemContent; // @synthesize rightNavigationItemContent=_rightNavigationItemContent;
@property(nonatomic) _Bool isNeedLoadMoreFollowedFromInterrupt; // @synthesize isNeedLoadMoreFollowedFromInterrupt=_isNeedLoadMoreFollowedFromInterrupt;
@property(nonatomic) _Bool hasInterruptCard; // @synthesize hasInterruptCard=_hasInterruptCard;
@property(nonatomic) _Bool needForceReloadData; // @synthesize needForceReloadData=_needForceReloadData;
@property(nonatomic) _Bool cacheShowing; // @synthesize cacheShowing=_cacheShowing;
@property(nonatomic) _Bool isFullScreenMode; // @synthesize isFullScreenMode=_isFullScreenMode;
@property(nonatomic) _Bool isShowHeader; // @synthesize isShowHeader=_isShowHeader;
@property(nonatomic) _Bool isNeedLoginRightItem; // @synthesize isNeedLoginRightItem=_isNeedLoginRightItem;
@property(nonatomic) _Bool hasLoadedFilterGroup; // @synthesize hasLoadedFilterGroup=_hasLoadedFilterGroup;
@property(retain, nonatomic) WBSearchType *currentType; // @synthesize currentType=_currentType;
@property(retain, nonatomic) NSMutableArray *filterGroups; // @synthesize filterGroups=_filterGroups;
@property(retain, nonatomic) WBSearchTypeMenu *searchTypeMenu; // @synthesize searchTypeMenu=_searchTypeMenu;
@property(readonly, nonatomic) _Bool fetchingData; // @synthesize fetchingData=_fetchingData;
@property(copy, nonatomic) CDUnknownBlockType hudCoverHitTest; // @synthesize hudCoverHitTest=_hudCoverHitTest;
@property(retain, nonatomic) WBCardListBaseItem *cardListBaseItemFromNetwork; // @synthesize cardListBaseItemFromNetwork=_cardListBaseItemFromNetwork;
@property(readonly, nonatomic) WBTimeRecorder *timeRecorder; // @synthesize timeRecorder;
@property(retain, nonatomic) WBContact *selectedContact; // @synthesize selectedContact;
@property(retain, nonatomic) NSArray *menuButtons; // @synthesize menuButtons;
@property(nonatomic) unsigned long long rightNavigationItemType; // @synthesize rightNavigationItemType=_rightNavigationItemType;
@property(retain, nonatomic) NSString *rightNavigationItemScheme; // @synthesize rightNavigationItemScheme=_rightNavigationItemScheme;
@property(nonatomic) _Bool rightNavigationItemHasSet; // @synthesize rightNavigationItemHasSet=_rightNavigationItemHasSet;
@property(retain, nonatomic) WBCardListBaseItem *cardListBaseItem; // @synthesize cardListBaseItem;
- (void).cxx_destruct;
- (void)bottomSuspendViewDidPressClose:(id)arg1;
- (void)updateBottomSuspendViewFrame;
- (void)dismissBottomSuspendViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showBottomSuspendViewAnimated:(_Bool)arg1;
- (void)updateBottomSuspendViewWithData:(id)arg1;
- (void)dismissQARemind;
- (void)qaHintAction:(id)arg1;
- (void)showQARemindWithText:(id)arg1;
- (void)toolbarMenuDidFinishUnfollowCardListItem:(id)arg1;
- (void)toolbarMenuDidFinishFollowCardListItem:(id)arg1;
- (id)containerIdForFollowCardList;
- (_Bool)toolbarMenuIsFollowed;
- (id)bubbleTypeWithIndexPage:(id)arg1 tableView:(id)arg2;
- (Class)immersiveHeaderViewDataSourceClass;
- (void)setHeaderViewDataObject:(id)arg1;
@property(readonly, nonatomic) WBImmersiveHeaderViewContext *viewContext; // @synthesize viewContext=_viewContext;
- (void)immersiveHeaderViewContext:(id)arg1 configNavigationBarStyleWithTranslucentNumber:(id)arg2;
- (void)immersiveHeaderViewContextDidRefreshPage:(id)arg1;
- (void)replaceNewCards:(id)arg1 fromCard:(id)arg2 inCardlist:(id)arg3;
- (void)handleLoadMoreData:(id)arg1 ForPageCard:(id)arg2;
- (void)loadMoreCardsForPageCard:(id)arg1 Scheme:(id)arg2;
- (id)getPageType;
- (void)login;
- (void)getSinceIdFromResponse:(id)arg1;
- (void)deleteTimeLineItemWithNotification:(id)arg1;
- (void)handleTimelineItemDidRemoveNotification:(id)arg1;
- (void)pageCardUnreadCountDidUpdateNotification:(id)arg1;
- (id)linkItemIDWithItemID:(id)arg1;
- (void)shareCardlist;
- (void)addDefaultLeftBarWhenPresented;
- (void)refreshDataWithContainerId:(id)arg1;
- (void)didPressedRefreshButtonWithContainerId:(id)arg1;
- (void)refreshDataIfNeed:(id)arg1;
- (void)searchTypeMenu:(id)arg1 didSelectType:(id)arg2;
- (void)searchTypeMenu:(id)arg1 didSelectType:(id)arg2 forceReload:(_Bool)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)didEndDecelerating;
- (void)rightNavigationItemPressed:(id)arg1;
- (void)didPressedReviewsButtonInCell:(id)arg1;
- (void)replaceStatusCardStatus:(id)arg1 withStatusId:(id)arg2;
- (id)statusListForPageCards:(id)arg1;
- (void)changeFollowStateWithStatuses:(id)arg1 contact:(id)arg2 isFollowed:(_Bool)arg3;
- (void)handleContactUnFollow:(id)arg1;
- (void)handleContactFollow:(id)arg1;
- (void)handleStatusDidChangedNotification:(id)arg1;
- (void)handleLikeStateDidChangeNotification:(id)arg1;
- (void)handleWBQueueJobFinishedNotification:(id)arg1;
- (void)updateStatus:(id)arg1 withDict:(id)arg2;
- (void)handleVideoInfoEditSucceessNotification:(id)arg1;
- (void)commonButtonLikeButtonResponseNotification:(id)arg1;
- (void)commonButtonLikeButtonClickedNotification:(id)arg1;
- (void)postAppsListCardDidChangeNotification;
- (_Bool)handleActionWithTableViewCell:(id)arg1 mainView:(id)arg2 actionType:(int)arg3 pageCard:(id)arg4 actionPara:(id)arg5 withButton:(id)arg6;
- (id)analysisParameters;
- (id)fID;
- (id)openurlBaseViewController;
- (void)didSelectCard:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;
- (void)searchContextDidEnd:(id)arg1;
- (void)searchContextWillStartTransition:(id)arg1;
- (id)timeRecorder:(id)arg1 willStartRecordAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)currentUser;
- (_Bool)isNeedSeparator;
- (_Bool)isNeedEdgeInset;
- (id)apiPathForPageEngine:(id)arg1;
- (_Bool)cacheForEngine:(id)arg1;
- (Class)modelClassForPageEngine:(id)arg1;
- (void)didFinishLoadDatasFromCache;
- (void)didFinishPullRefreshing;
- (void)didBeginRefreshing;
- (void)resetSearchCountWithContainerID:(id)arg1;
- (void)setIsNeedCache:(_Bool)arg1;
- (unsigned long long)currentPageCount;
- (void)resetPagecount;
- (void)refreshLoadMoreFooterView;
- (void)tableViewWillReload:(id)arg1;
- (void)reloadViews;
- (void)showError:(id)arg1;
- (void)pageDataDidReceivedFromNetwork:(id)arg1 error:(id)arg2;
- (id)getTitle;
- (void)configSearchCards;
- (void)configImmersiveHeaderViewStyle;
- (void)configImmersiveHeaderViewWithHeaderCardIfNeeded:(id)arg1;
- (void)showImageAlertView;
- (void)didReceiveResult:(id)arg1 isLoadFromCache:(_Bool)arg2;
- (void)showEmptyContent;
- (void)loadMoreData;
- (id)maxIdForGuestRefresh;
- (id)sinceIdForGuestLoadMore;
- (void)shareToPrivateMessage;
- (void)createAndShareQRCode;
- (void)unfollowArticle;
- (void)addCancelFollowArticleButton:(id)arg1;
- (void)sharePageViaStatusWithGroupType:(unsigned long long)arg1;
- (void)navToChannelInfo:(id)arg1;
- (void)rightMoreItemPressed:(id)arg1;
@property(readonly, nonatomic) WBUniversalCardListViewController *currentCardListViewController;
- (_Bool)cardListCanShare;
- (void)finishLoadingData;
- (void)configTotalCountAndPageSizeWithDic:(id)arg1;
- (void)configFilterGroup:(id)arg1;
- (void)configSquareNewTipsIfNeed;
- (id)getExtraParamsIfNeed;
- (void)loadingFailedWithError:(id)arg1;
- (void)appendGuestParameters:(id)arg1 forLoadOrRefresh:(int)arg2;
- (void)loadPageWithParameters:(id)arg1 showHud:(_Bool)arg2;
- (void)loadPageFromCacheWithParameters:(id)arg1 showHud:(_Bool)arg2;
- (void)loadPageFromCacheWithParameters:(id)arg1 showHud:(_Bool)arg2 cacheOnly:(_Bool)arg3;
- (void)loadPage:(id)arg1 parameters:(id)arg2 showHud:(_Bool)arg3 cacheOnly:(_Bool)arg4;
- (void)loadPage:(id)arg1;
- (id)fetchParametersWithShowsLoadingHUDView:(_Bool)arg1;
- (void)refetchData:(id)arg1 showsLoadingHUDView:(_Bool)arg2 loadFromCacheOnly:(_Bool)arg3;
- (void)refetchDataAndShowsLoadingHUDView:(_Bool)arg1 loadFromCacheOnly:(_Bool)arg2;
- (void)refetchDataAndShowsLoadingHUDView:(_Bool)arg1;
- (void)loadFromCache;
- (_Bool)dataLoaded;
- (void)resetGroupPickerTitle;
- (int)needBlockNavigationTitleToPassNext;
- (void)popoverDidDismiss:(id)arg1;
- (void)resetTitleViewRightIcon:(_Bool)arg1;
- (void)btnHeadDown:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)createTitleView;
- (void)configurationPageSizeAndPageNumber;
- (_Bool)useImmersiveHeaderStyle;
- (void)configCardListHeaderWithCard:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)configTableViewStyle;
- (void)triggerPullRefresh;
- (void)refresh;
- (id)itemWithActivityIndicatorView;
- (void)loadSearchMenu;
- (id)getCustomedTitleText;
- (void)reloadUIElements;
- (void)updateTitleViewByIsNavBarTranslucent:(_Bool)arg1;
- (void)updateRightBarMoreItemByIsNavBarTranslucent:(_Bool)arg1;
- (void)updateRightBarItemByRightNavigationItemType:(unsigned long long)arg1 withIsNavBarTranslucent:(_Bool)arg2;
- (void)updateNavBarStyleByIsNavBarTranslucent:(_Bool)arg1;
- (void)updateArrowImageTranslucent:(_Bool)arg1;
- (void)updateHeadButtonTranslucent:(_Bool)arg1;
- (void)reloadNavitaionbarItem;
- (void)resetLeftBarButtonItem;
- (void)configSubviewsFrame;
- (void)setPeeking:(_Bool)arg1;
- (void)onViewControllerVisiable:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (void)dealloc;
- (id)initWithID:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)useIndenpendentNavigationBarWhenPoping;
- (_Bool)supportPushWrappedViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

