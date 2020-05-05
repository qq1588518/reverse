//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMTableViewDelegateProtocol-Protocol.h"

@class NSString, XMTableViewDataSource;

@interface XMNowPlayingAssociationTracksViewController : XMSubLevelViewController <XMTableViewDelegateProtocol>
{
    long long _pageId;
    _Bool _hasMore;
    long long _trackId;
    XMTableViewDataSource *_tableDataSource;
}

@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)reloadData;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)onFailed:(id)arg1;
- (void)onFinished:(id)arg1;
- (void)requestData:(long long)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

