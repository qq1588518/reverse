//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseArticleEngine.h"

#import "ArticlePreloadEngineDelegate-Protocol.h"

@class SNHTTPRequestOperationWrapper;

@interface WBWebArticleEngine : WBBaseArticleEngine <ArticlePreloadEngineDelegate>
{
    SNHTTPRequestOperationWrapper *loadExtendPropertyRequestOperationWrapper;
}

+ (void)applicationWillEnterForegroundWithArticlePreloadEngine:(id)arg1;
+ (void)articlePreloadEngine:(id)arg1 handlePreloadResponse:(id)arg2;
+ (id)articlePreloadEngine:(id)arg1 filterArticleIdsNeedToBeProload:(id)arg2;
+ (void)updateCacheWithArticleBodyDictionary:(id)arg1 forArticleId:(id)arg2;
+ (id)getArticleBodyDictionaryForArticleId:(id)arg1;
+ (void)saveArticleIntoCache:(id)arg1;
- (void).cxx_destruct;
- (id)_loadArticleFromDbOfId:(id)arg1;
- (void)cancelLoading;
- (void)loadExtendPropertiesFromNetWithArticleId:(id)arg1 withOptionalParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadArticleFromCacheWithArticleId:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

