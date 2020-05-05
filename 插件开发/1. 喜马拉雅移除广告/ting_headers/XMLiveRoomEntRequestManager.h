//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMLiveRoomEntRequestManager : NSObject
{
}

+ (id)postExpiredMyGuardian:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)getAllMyGuardianInfo:(long long)arg1 roomId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getGuardianContributionRankInfo:(long long)arg1 roomId:(long long)arg2 pageId:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)getGuardianPowerInfo:(CDUnknownBlockType)arg1;
+ (id)reportShareSuccess:(long long)arg1 channel:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getGuardianUniqueGiftInfo:(CDUnknownBlockType)arg1;
+ (id)getGuardianIntroduction:(CDUnknownBlockType)arg1;
+ (id)getGuardianRankList:(long long)arg1 pageId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)reportGuardianFriendship:(long long)arg1 anchor:(long long)arg2 fans:(long long)arg3 type:(long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)getAnchorGuardianInfoCompletion:(CDUnknownBlockType)arg1;
+ (id)getGuardianDetailOfAnchor:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)quitGuardian:(long long)arg1 ofAnchor:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)renewGoldGuardian:(long long)arg1 ofAnchor:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)joinGoldGuardian:(long long)arg1 ofAnchor:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)joinGuardian:(long long)arg1 ofAnchor:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)openGuardian:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)postManualPush:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)getManualPushConfig:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)postUserReport:(long long)arg1 atUser:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)postToSetForbiddenUser:(long long)arg1 status:(_Bool)arg2 ofRoom:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)getForbiddenUserList:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)postToDeleteManager:(long long)arg1 ofRoom:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)postToAddManager:(long long)arg1 ofRoom:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getManagerList:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)postToDeletePresenter:(long long)arg1 ofRoom:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)postToAddPresenter:(long long)arg1 ofRoom:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getPresenterList:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)postChangeEntRoomFavoriteStatus:(long long)arg1 isFavorite:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getEntRoomEnterMsg:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)getEntUserInfo:(long long)arg1 roomId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)postUpdateEnt:(long long)arg1 title:(id)arg2 coverUrl:(id)arg3 ruleInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)postCreateEnt:(id)arg1 coverUrl:(id)arg2 ruleInfo:(id)arg3 mode:(long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)getEntRoomPlayUrl:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)getEntertainmentRankList:(long long)arg1 roomId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getMyRadioRoomListCompletion:(CDUnknownBlockType)arg1;
+ (id)getMyEntRoomListCompletion:(CDUnknownBlockType)arg1;
+ (id)getEntRoomInfo:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)getMyFavoriteEntListCompletion:(CDUnknownBlockType)arg1;
+ (id)getFavoriteEntRoomCompletion:(CDUnknownBlockType)arg1;
+ (id)getEntHomeRoomListOfPage:(long long)arg1 category:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getEntHomeCategoryListCompletion:(CDUnknownBlockType)arg1;

@end

