//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString, WAAppIdToUsernameTransfer;

@interface WAJSEventHandler_openBusinessView : WAJSEventHandler_BaseEvent <PBMessageObserverDelegate>
{
    WAAppIdToUsernameTransfer *_appID2UserNameTransfer;
    NSString *_bizTypeStr;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)navigateToMiniProgramWitAppID:(id)arg1 userName:(id)arg2 debugMode:(unsigned long long)arg3 pagePath:(id)arg4 extraData:(id)arg5 privateExtraData:(id)arg6 agentId:(id)arg7 navigationController:(id)arg8 sourceType:(unsigned int)arg9 preScene:(unsigned int)arg10 preSceneNote:(id)arg11 scene:(unsigned int)arg12 sceneNote:(id)arg13;
- (void)navigateToMiniProgramWithParam:(id)arg1 appID:(id)arg2 userName:(id)arg3 pagePath:(id)arg4;
- (void)handleAuthorizationForLaunchResponse:(id)arg1;
- (void)requestAuthorizationForLaunch:(id)arg1 queryStr:(id)arg2 referrerAppId:(id)arg3 params:(id)arg4;
- (void)mainThread_handleJSEvent:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

