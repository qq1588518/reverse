//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMAlbumCellDelegate-Protocol.h"
#import "XMCustomSearchBarDelegate-Protocol.h"
#import "XMNoDataTableViewCellDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView, XMCategoryItem, XMCustomSearchBar, XMMeBoughtHeaderView, XMNRequest;

@interface XMMeBoughtTracksViewController : XMSubLevelViewController <XMNoDataTableViewCellDelegate, XMAlbumCellDelegate, XMCustomSearchBarDelegate>
{
    long long _totleCount;
    long long _myKnowledgeMiroCourseCount;
    long long _myRealGoodsCount;
    long long _myMerchantVipCount;
    long long _myBookCount;
    _Bool _hasEverReqResponse;
    _Bool _showSearchResult;
    _Bool _showEmptySearchResult;
    NSMutableArray *dataArray;
    XMNRequest *_dataReq;
    XMCategoryItem *_categoryItem;
    UIView *_bottomView;
    XMMeBoughtHeaderView *_headerView;
    XMCustomSearchBar *_searchBar;
    NSMutableArray *_searchResults;
    XMNRequest *_searchReq;
    XMNRequest *_refundRequest;
    UIView *_emptyHeader;
    long long _searchNextPageId;
    long long _searchMaxPageId;
    long long _pageId;
    long long _maxPageId;
}

+ (void)refundStatus:(id)arg1;
+ (void)requstRefundWitAlbumItem:(id)arg1;
+ (void)requstRefund:(id)arg1;
+ (id)titleForRefund:(id)arg1;
@property(nonatomic) _Bool showEmptySearchResult; // @synthesize showEmptySearchResult=_showEmptySearchResult;
@property(nonatomic) long long maxPageId; // @synthesize maxPageId=_maxPageId;
@property(nonatomic) long long pageId; // @synthesize pageId=_pageId;
@property(nonatomic) long long searchMaxPageId; // @synthesize searchMaxPageId=_searchMaxPageId;
@property(nonatomic) long long searchNextPageId; // @synthesize searchNextPageId=_searchNextPageId;
@property(retain, nonatomic) UIView *emptyHeader; // @synthesize emptyHeader=_emptyHeader;
@property(retain, nonatomic) XMNRequest *refundRequest; // @synthesize refundRequest=_refundRequest;
@property(retain, nonatomic) XMNRequest *searchReq; // @synthesize searchReq=_searchReq;
@property(retain, nonatomic) NSMutableArray *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) _Bool showSearchResult; // @synthesize showSearchResult=_showSearchResult;
@property(retain, nonatomic) XMCustomSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) XMMeBoughtHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) XMCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(nonatomic) _Bool hasEverReqResponse; // @synthesize hasEverReqResponse=_hasEverReqResponse;
@property(retain, nonatomic) XMNRequest *dataReq; // @synthesize dataReq=_dataReq;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray;
- (void).cxx_destruct;
- (void)reloadTableViewData;
- (void)parseQuerySearchResponse:(id)arg1;
- (void)queryResultsWithSearchWord:(id)arg1 showEmptyResult:(_Bool)arg2;
- (void)customSearchBarShouldBeginEditing:(id)arg1;
- (void)customSearchBarSearchButtonClicked:(id)arg1;
- (void)customSearchBarTextDidChange:(id)arg1;
- (void)commentSuccess:(id)arg1;
- (void)requstRefundWithAlbumItem:(id)arg1;
- (void)onMail:(id)arg1;
- (void)albumCellDidClickCampGroupInfo:(id)arg1;
- (void)showMoreViewWithAlbumItem:(id)arg1 andRefundText:(id)arg2;
- (void)albumCellDidClickAfterSaleWithAlbum:(id)arg1;
- (void)openNoFindPaidContent;
- (void)openUrlView:(id)arg1;
- (void)onNoDataActionButtonClicked:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onRightBtnClicked;
- (void)onRequestDataFailed:(id)arg1;
- (void)reportCampGroupDidShow:(id)arg1;
- (void)onRequestDataFinished:(id)arg1;
- (void)requestRechargeData:(long long)arg1;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)setupSearchBar;
- (double)heightOffset;
- (void)customInitialize;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

