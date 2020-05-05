//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "WBDraftJobDelegate-Protocol.h"
#import "WBPublishQueueTableViewTaskCellDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface WBDraftViewController : WBTableViewController <WBDraftJobDelegate, WBPublishQueueTableViewTaskCellDelegate>
{
    NSMutableArray *tasks;
    _Bool _isEditing;
}

+ (void)registerVideoElementInitBlock:(CDUnknownBlockType)arg1;
+ (void)registerDraftComposer:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)reSendTask:(id)arg1 didPressInCell:(id)arg2;
- (void)draftJobChanged;
- (void)reloadTasks;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)editButtonPressed:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateControls;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

