//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCSearchDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIButton, UIImageView, WCSearcher;

@interface MMMassSendContactSelectorViewController : MMUIViewController <WCSearchDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_arrAllContacts;
    NSMutableArray *_arrKeys;
    NSMutableDictionary *_dicContacts;
    MMTableView *_tableView;
    NSMutableArray *_arrFilteredContacts;
    NSMutableDictionary *_dicMatchTip;
    NSMutableSet *_setSelectedContacts;
    UIButton *_panelBtn;
    UIImageView *_toolView;
    WCSearcher *_searcher;
}

@property(retain, nonatomic) WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) NSMutableSet *setSelectedContacts; // @synthesize setSelectedContacts=_setSelectedContacts;
- (void).cxx_destruct;
- (void)onTopBarFrameChanged;
- (void)onDone:(id)arg1;
- (void)onDeSelectAll:(id)arg1;
- (void)onSelectAll:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)initToolView;
- (void)initSearchBar;
- (void)initTableView;
- (id)getRightBarButton:(_Bool)arg1;
- (void)initView;
- (void)initData;
- (id)parseContactKey:(id)arg1;
- (void)processContact:(id)arg1;
- (void)showAlertTooMany;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

