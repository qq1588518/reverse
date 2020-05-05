//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, XMBizListenModel;

@interface XMListenedHistoryManager : NSObject
{
    long long _state;
    NSDictionary *tagData;
    NSMutableArray *_listenedList;
    XMBizListenModel *_bizModel;
    NSString *_nonceCount;
    NSString *_nonceSec;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSString *nonceSec; // @synthesize nonceSec=_nonceSec;
@property(retain, nonatomic) NSString *nonceCount; // @synthesize nonceCount=_nonceCount;
@property(retain, nonatomic) XMBizListenModel *bizModel; // @synthesize bizModel=_bizModel;
@property(retain, nonatomic) NSMutableArray *listenedList; // @synthesize listenedList=_listenedList;
@property(retain, nonatomic) NSDictionary *tagData; // @synthesize tagData;
- (void).cxx_destruct;
- (id)bizRecordServer;
- (void)postBizOfflineList;
- (void)addBizOfflineData:(id)arg1;
- (id)md5WithBizParam:(id)arg1;
- (void)postBizRecord:(id)arg1 withToken:(id)arg2;
- (void)bizRecordEnd:(id)arg1;
- (void)bizRecordStart:(id)arg1;
- (void)requestNonceBlock:(CDUnknownBlockType)arg1;
- (id)videoTypeForItem:(id)arg1;
- (id)videoOnlineStatisticDictForSound:(id)arg1 playerType:(id)arg2;
- (id)videoOnlineStatisticDictForSound:(id)arg1;
- (void)onPostVideoOnlineStatisticFailedSelector:(id)arg1;
- (void)onPostVideoOnlineStatisticFinishedSelector:(id)arg1;
- (void)postVideoOnlineStatistic:(id)arg1;
- (void)postVideoOnlineStatistic:(id)arg1 playerType:(id)arg2;
- (void)onPostVideoListenedCountFailedSelector:(id)arg1;
- (void)onPostVideoListenedCountFinishedSelector:(id)arg1;
- (void)_postVideoListenedCount:(id)arg1 playerType:(id)arg2;
- (void)_postVideoListenedCount:(id)arg1;
- (void)postVideoListenedCount:(id)arg1 playerType:(id)arg2;
- (void)postVideoListenedCount:(id)arg1;
- (int)recordTypeForItem:(id)arg1;
- (id)offlineStatisticDictForSound:(id)arg1;
- (id)onlineStatisticDictForSound:(id)arg1;
- (void)onlinePostStatistic:(id)arg1;
- (void)offlinePostStatistic:(id)arg1;
- (void)uploadItem:(id)arg1;
- (void)onUploadItemFailedSelector:(id)arg1;
- (void)onUploadItemFinishedSelector:(id)arg1;
- (void)countSericeForTrack:(id)arg1;
- (void)addHistory:(id)arg1;
- (void)updateTrackListenedCount:(id)arg1;
- (void)onUpdateTrackListenedCountFailedSelector:(id)arg1;
- (void)onUpdateTrackListenedCountFinishedSelector:(id)arg1;
- (void)applicationWillTerminate;
- (void)reset;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

