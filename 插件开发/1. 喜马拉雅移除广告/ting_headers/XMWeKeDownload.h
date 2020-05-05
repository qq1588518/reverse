//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMAVDownloadManagerDelegate-Protocol.h"

@class NSMutableArray, NSString, XMFMDB;

@interface XMWeKeDownload : NSObject <XMAVDownloadManagerDelegate>
{
    XMFMDB *_fmdb;
    NSMutableArray *_dbItems;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *dbItems; // @synthesize dbItems=_dbItems;
@property(retain, nonatomic) XMFMDB *fmdb; // @synthesize fmdb=_fmdb;
- (void).cxx_destruct;
- (void)xdcsTrackWithError:(id)arg1 userInfo:(id)arg2;
- (void)xdcsTrackWithCode:(long long)arg1 message:(id)arg2 userInfo:(id)arg3;
- (void)xmavdownloadManager:(id)arg1 downloadableDidFailed:(id)arg2;
- (void)xmavdownloadManager:(id)arg1 downloadableDidFinished:(id)arg2;
- (void)xmavdownloadManager:(id)arg1 downloadableDidCancel:(id)arg2;
- (void)xmavdownloadManager:(id)arg1 downloadableStateChange:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startAllNoneUserPauseDownload;
- (void)onWifiAvailableNotification;
- (void)onUserInfoChangedNotification;
- (void)postDownloadFailedNotification:(long long)arg1;
- (unsigned long long)freeDiskSpace;
- (id)downloadFileNameWithUrl:(id)arg1;
- (void)updateDownloadItemToDB:(id)arg1;
- (_Bool)deleteXMWKDBItem:(id)arg1;
- (void)reloadDBItems;
- (id)findDBItemWithTrackItem:(id)arg1;
- (void)requestDownloadUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)queryDBItemStateWithTrackKey:(id)arg1;
- (void)deleteDownloadItem:(id)arg1;
- (void)pause:(id)arg1;
- (void)startDownloadWithTrackItem:(id)arg1;
- (void)addKVOObserve:(id)arg1 item:(id)arg2;
- (id)allDownloadedDBItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

