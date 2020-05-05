//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStatusListEngineCustomModule.h"

@interface WBTimelineStatusListEngineCustomModule : WBStatusListEngineCustomModule
{
}

- (id)sqlForRequest:(id)arg1;
- (id)loadCacheStatusWithRequest:(id)arg1;
- (id)loadCacheFeedItemsWithRequest:(id)arg1;
- (_Bool)checkEnableLoadmoreNetwork:(id)arg1;
- (_Bool)checkEnableLoadmoreCache:(id)arg1;
- (id)feedItemsLoadMoreCacheRequest:(id)arg1 endIndex:(id)arg2;
- (id)feedItemsLoadMoreCacheRequest:(id)arg1;
- (id)statusLoadMoreCacheRequest:(id)arg1 endIndex:(id)arg2;
- (id)statusLoadMoreCacheRequest:(id)arg1;
- (id)statusInsertRequest;
- (id)statusLoadMoreRequest;
- (id)statusReloadRequest;
- (id)statusLoadRequest;
- (_Bool)shouldRemoveLocalStatusFromResultSet:(id)arg1;
- (_Bool)shouldInsertLocalStatusToResultSet:(id)arg1;
- (_Bool)canLoadMore;
- (_Bool)containsTrend;
- (long long)getWeiboIndexChangeSectionByGroupID:(id)arg1 type:(long long)arg2;
- (void)initStatusResultSet;
- (void)mergeLocalTrendItems;
- (void)applicationBecomeActive;
- (void)deactive;
- (void)active:(CDUnknownBlockType)arg1;
- (id)init;

@end

