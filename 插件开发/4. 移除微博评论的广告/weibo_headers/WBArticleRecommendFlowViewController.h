//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, PRLMTableViewWrapper, UIViewController, WBArticleRecommendFlowEngine, WBRecommendFlowModel, WKFeedViewControllerState;

@interface WBArticleRecommendFlowViewController : WBTableViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned long long pageNo;
    unsigned long long _page;
    _Bool isLoaingMore;
    _Bool hasMore;
    _Bool isPullRefresh;
    _Bool _enableLoadMore;
    NSString *_articleId;
    CDUnknownBlockType _loadCompletionCallback;
    UIViewController *_rootViewController;
    PRLMTableViewWrapper *_prlmWrapper;
    WKFeedViewControllerState *_feedState;
    WBRecommendFlowModel *_commendFlowModel;
    WBArticleRecommendFlowEngine *_recommendFlowEngine;
}

@property(retain, nonatomic) WBArticleRecommendFlowEngine *recommendFlowEngine; // @synthesize recommendFlowEngine=_recommendFlowEngine;
@property(retain, nonatomic) WBRecommendFlowModel *commendFlowModel; // @synthesize commendFlowModel=_commendFlowModel;
@property(copy, nonatomic) WKFeedViewControllerState *feedState; // @synthesize feedState=_feedState;
@property(nonatomic) __weak PRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(copy, nonatomic) CDUnknownBlockType loadCompletionCallback; // @synthesize loadCompletionCallback=_loadCompletionCallback;
@property(copy, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(nonatomic) _Bool enableLoadMore; // @synthesize enableLoadMore=_enableLoadMore;
- (void).cxx_destruct;
- (void)reloadVisbleCell;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)clickFeedAction:(id)arg1;
- (void)configSubviewsFrame;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)updateReadStatus:(id)arg1 indexpath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)clickVideo:(id)arg1;
- (void)forceReloadData;
- (void)refreshViewsByFeedState:(id)arg1 commendFlowModel:(id)arg2;
- (void)refreshData;
- (void)loadNextPageData;
- (void)resetPropertyValues;
- (void)cancelLoadingForArticleId:(id)arg1;
- (void)cancelLoading;
- (void)setDataEmptyAndRefreshViews;
- (void)setFactoryTableView:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;
- (void)setFactoryTableView:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 loadCompletionCallback:(CDUnknownBlockType)arg4;
- (id)initWithArticleId:(id)arg1 rootViewController:(id)arg2 strategy:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

