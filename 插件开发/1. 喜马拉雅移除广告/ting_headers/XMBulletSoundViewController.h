//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMSoundTableViewCellDelegate-Protocol.h"

@class NSMutableArray, NSString, XMServerRequest;

@interface XMBulletSoundViewController : XMSubLevelViewController <XMSoundTableViewCellDelegate>
{
    long long _pageId;
    long long _maxPageId;
    XMServerRequest *_soundRequest;
    NSMutableArray *_soundDatas;
}

@property(retain, nonatomic) NSMutableArray *soundDatas; // @synthesize soundDatas=_soundDatas;
@property(retain, nonatomic) XMServerRequest *soundRequest; // @synthesize soundRequest=_soundRequest;
- (void).cxx_destruct;
- (void)reloadDataFromDownloadNotification:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadFailed:(id)arg1;
- (void)onDownloadStart:(id)arg1;
- (void)onTrackBuyAlbumSuccess:(id)arg1;
- (void)onTrackBuySuccess:(id)arg1;
- (void)onPlayingTrackPaused;
- (void)onPlayingTrackChanged;
- (void)downloadSound:(id)arg1;
- (void)playerSound:(id)arg1;
- (void)soundTableViewCell:(id)arg1 buySound:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)onFailed:(id)arg1;
- (void)onFinished:(id)arg1;
- (void)requestRankData:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

