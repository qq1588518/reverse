//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMBBSRequest : NSObject
{
}

+ (void)handleComplaint:(unsigned long long)arg1 communityId:(unsigned long long)arg2 operation:(long long)arg3 banDuration:(long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)requestComplaintsOfCommunity:(unsigned long long)arg1 pageId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestMyCollectedArticleList:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestMyArticlesWithEndTimestamp:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestMyCommunityWithCompletion:(CDUnknownBlockType)arg1;
+ (void)requestCommunityHomeWithPageId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)recordArticleRead:(unsigned long long)arg1 communityId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)recordCommunityShared:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteArticle:(unsigned long long)arg1 communityId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)editArtile:(unsigned long long)arg1 communityId:(unsigned long long)arg2 title:(id)arg3 content:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)requestArticleEditContent:(unsigned long long)arg1 communityId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestAlbumArtielListInCommunity:(unsigned long long)arg1 albumdId:(unsigned long long)arg2 pageId:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestQuestionArticleListWithTabId:(id)arg1 community:(unsigned long long)arg2 order:(id)arg3 pageId:(long long)arg4 endTs:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)requestCommonArticleListWithTabId:(id)arg1 community:(unsigned long long)arg2 order:(id)arg3 pageId:(long long)arg4 endTs:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)requestAboutArticleListWithTabId:(id)arg1 community:(unsigned long long)arg2 order:(id)arg3 pageId:(long long)arg4 endTs:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)requestIdolArticleListWithTabId:(id)arg1 community:(unsigned long long)arg2 order:(id)arg3 pageId:(long long)arg4 endTs:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)requestCategoryArticleListWithTabId:(id)arg1 community:(unsigned long long)arg2 order:(id)arg3 pageId:(long long)arg4 endTs:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)requestEssenceArticleListWithTabId:(id)arg1 community:(unsigned long long)arg2 order:(id)arg3 pageId:(long long)arg4 endTs:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)requestNewArticleListWithTabId:(id)arg1 community:(unsigned long long)arg2 order:(id)arg3 pageId:(long long)arg4 endTs:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)requestHotArticleListWithTabId:(id)arg1 community:(unsigned long long)arg2 order:(id)arg3 pageId:(long long)arg4 endTs:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)searchCommunity:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestSquareListWithTabId:(id)arg1 pageId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestSquareTabWithCompletion:(CDUnknownBlockType)arg1;
+ (void)requestCommunityPublishMenu:(long long)arg1 bizId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestCommunityBaseInfo:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)muteCommunity:(unsigned long long)arg1 mute:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)stickCommunity:(unsigned long long)arg1 stick:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)readNoticeWithNoticeId:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestNoticeWithPageId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestCommunityPopInfo:(unsigned long long)arg1 popId:(id)arg2 source:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)updateCommunityBrandImage:(id)arg1 communityId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)modifyCommunityConfig:(id)arg1 value:(id)arg2 communityId:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestCommunityProfile:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestCommunityInfo:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestDiscover50RecommendCommunityWithCompletion:(CDUnknownBlockType)arg1;
+ (void)requestDiscoverRecommendCommunityWithCompletion:(CDUnknownBlockType)arg1;
+ (id)appendTimestampForParam:(id)arg1;
+ (void)followUser:(unsigned long long)arg1 follow:(_Bool)arg2 bizType:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)getRequestWithBaseURL:(id)arg1 path:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)postRequestWithBaseURL:(id)arg1 path:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)appendTimestampForPath:(id)arg1;
+ (CDUnknownBlockType)XMNRequestHandlerWithCompletion:(CDUnknownBlockType)arg1;
+ (id)xmUploadURL;
+ (id)mDomain;
+ (id)mobileDomain;
+ (id)shareInstance;
+ (void)moveArticle:(unsigned long long)arg1 toCategory:(unsigned long long)arg2 community:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)orderCategory:(id)arg1 community:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)deleteCategory:(unsigned long long)arg1 community:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)editCategory:(unsigned long long)arg1 name:(id)arg2 community:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)addCategoryWithName:(id)arg1 community:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestCategoryOfCommunity:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestIntimateWeiXinInfo:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestAccessToIntimateCommunity:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)ignoreIntimateQuestion:(unsigned long long)arg1 community:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)answerIntimateQuestion:(unsigned long long)arg1 conent:(id)arg2 community:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)deleteIntimateQuestion:(unsigned long long)arg1 community:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestIntimateQuestion:(unsigned long long)arg1 community:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)askIntimateQuestion:(id)arg1 community:(unsigned long long)arg2 hostId:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestIntimateHostListOfCommunity:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)changeIntimateConfig:(id)arg1 value:(id)arg2 community:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)changeIntimateQuestionPlaceholder:(id)arg1 community:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)changeIntimateFreeShare:(_Bool)arg1 community:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)changeIntimateMemberCommentPermisssion:(_Bool)arg1 community:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)changeIntimatePublishPermisssion:(long long)arg1 community:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestIdolTrack:(unsigned long long)arg1 pageId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestIdolAlbum:(unsigned long long)arg1 pageId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)orderRecommendTopic:(id)arg1 communityId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)deleteRecommendTopic:(unsigned long long)arg1 fromCommunity:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)addRecommendTopic:(unsigned long long)arg1 toCommunity:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestRecommendTopicListInCommunity:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestCommunityTopicList:(unsigned long long)arg1 pageId:(long long)arg2 order:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestEditInfoOfTopic:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteCommunityTopic:(unsigned long long)arg1 communityId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)editCommunityTopic:(unsigned long long)arg1 communityId:(unsigned long long)arg2 detail:(id)arg3 coverUrl:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)createCommunityTopicWithTitle:(id)arg1 detail:(id)arg2 coverUrl:(id)arg3 albumId:(unsigned long long)arg4 communityId:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)requestCommunityTopicRecommendAlubm:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeBlacklists:(long long)arg1 uid:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)addBlacklists:(long long)arg1 uid:(long long)arg2 duration:(long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)removeCommunityManager:(long long)arg1 uid:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)addCommunityManager:(long long)arg1 uid:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)requestBlacklistWithCommunityId:(long long)arg1 key:(id)arg2 pageId:(long long)arg3 pageSize:(long long)arg4 block:(CDUnknownBlockType)arg5;
- (void)requestManagersWithCommunityId:(long long)arg1 key:(id)arg2 pageId:(long long)arg3 pageSize:(long long)arg4 block:(CDUnknownBlockType)arg5;
- (void)cancelTopCollectedArticle:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)topCollectedArticle:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)exitCommunity:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)joinCommunity:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)requestJoinedCommunityListFromPage:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)requestMyCommunityBlock:(CDUnknownBlockType)arg1;
- (void)disbandCommunity:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)requestCreateConfigBlock:(CDUnknownBlockType)arg1;
- (void)checkCommunityWithName:(id)arg1 intro:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)createCommunityWithName:(id)arg1 intro:(id)arg2 logo:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)editCommunityProfile:(long long)arg1 name:(id)arg2 intro:(id)arg3 logo:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)createEditRequest:(id)arg1 param:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)createPostRequest:(id)arg1 param:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)createGetRequest:(id)arg1 param:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)uploadLogoJPGImageData:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)bbsServerURL;

@end

