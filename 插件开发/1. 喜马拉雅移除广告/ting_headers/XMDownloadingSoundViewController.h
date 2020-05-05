//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubTableViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "XMNoDataTableViewCellDelegate-Protocol.h"
#import "XMSoundDownloadManagerDelegate-Protocol.h"
#import "XMSoundDownloadingCellDelegate-Protocol.h"
#import "XMSoundTableViewCellDelegate-Protocol.h"

@class NSLock, NSMutableArray, NSString, UIView, XMDownloadTopView, XMMutableArray;

@interface XMDownloadingSoundViewController : XMSubTableViewController <XMNoDataTableViewCellDelegate, XMSoundDownloadingCellDelegate, XMSoundTableViewCellDelegate, XMSoundDownloadManagerDelegate, UIAlertViewDelegate>
{
    int _currentSection;
    _Bool _clearingSound;
    unsigned long long _undownloadedVideoCount;
    unsigned long long _undownloadedTrackCount;
    NSLock *_coreLock;
    UIView *_headView;
    XMDownloadTopView *_downloadTopView;
    XMMutableArray *_sounds;
    NSMutableArray *_dbItems;
    NSMutableArray *_videos;
}

@property(retain, nonatomic) NSMutableArray *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) NSMutableArray *dbItems; // @synthesize dbItems=_dbItems;
@property(retain, nonatomic) XMMutableArray *sounds; // @synthesize sounds=_sounds;
@property(retain, nonatomic) XMDownloadTopView *downloadTopView; // @synthesize downloadTopView=_downloadTopView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)onAVDownloadStartDownloading;
- (void)onAVDownloadCancelAllDownloadedable;
- (void)onAVDownloadStartAllDownloadedable;
- (void)onAVDownloadUnDownloadedListChange;
- (void)initWithVIdeoDataSource:(id)arg1;
- (void)wifiChange;
- (void)onNoDataActionButtonClicked:(id)arg1;
- (void)soundDownloadingCell:(id)arg1 deleteSound:(id)arg2;
- (void)clearDownload;
- (void)onClear:(id)arg1;
- (void)pauseOrContinue:(id)arg1;
- (void)updateUI;
- (void)sortDataAndUpdateUI;
- (void)reloadDataAndUpdateUI;
- (void)resortData;
- (void)reloadData;
- (void)downloadSoundItem:(id)arg1;
- (void)getAllDownloadingSoundItems;
- (void)deleteDownloadingSoundItem:(id)arg1;
- (void)deleteSoundItem:(id)arg1;
- (void)download:(id)arg1;
- (void)cancelDownloadSound:(id)arg1;
- (void)soundUpdate:(id)arg1;
- (void)soundDownloadDidFinished:(id)arg1;
- (void)soundDownloadDidBegan:(id)arg1;
- (void)soundDownloadDidPaused:(id)arg1;
- (void)soundDownloadDidCancel:(id)arg1;
- (void)soundDownloadDidFailed:(id)arg1;
- (void)sound:(id)arg1 updateDownloadedPercent:(double)arg2;
- (void)soundDownloadStateUpdated:(id)arg1;
- (id)tableHeadView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateBadgeValue:(id)arg1;
- (void)reloadTopLabel;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (double)heightOffset;
- (void)addLeftButton;
- (void)addNotification;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

