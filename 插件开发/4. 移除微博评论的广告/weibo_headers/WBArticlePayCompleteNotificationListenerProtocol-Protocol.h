//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WBArticlePayCompleteNotificationListener;

@protocol WBArticlePayCompleteNotificationListenerProtocol <NSObject>
- (void)refreshViewsOnPayCompleteWithPayCompleteNotificationListener:(WBArticlePayCompleteNotificationListener *)arg1 wbExtendType:(NSString *)arg2;
- (_Bool)articlePayCompleteNotificationListener:(WBArticlePayCompleteNotificationListener *)arg1 shouldProcessByWbExtendParamValueDic:(NSDictionary *)arg2;

@optional
- (_Bool)articlePayCompleteNotificationListener:(WBArticlePayCompleteNotificationListener *)arg1 vipClubPayResultIsValidWithUid:(NSString *)arg2 vUid:(NSString *)arg3;
@end

