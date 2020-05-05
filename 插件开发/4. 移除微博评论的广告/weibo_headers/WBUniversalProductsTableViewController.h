//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "WBSkinning-Protocol.h"

@class NSMutableArray, NSString, SNHTTPRequestOperationWrapper, WBPRLMTableViewWrapper, WBPage;

@interface WBUniversalProductsTableViewController : WBTableViewController <PRLMTableViewWrapperDelegate, WBSkinning>
{
    NSMutableArray *cards;
    WBPRLMTableViewWrapper *prWrapper;
    NSString *pageId;
    NSString *itemID;
    NSString *pageCardTitle;
    long long pageNumber;
    long long count;
    long long maxCount;
    _Bool hasGetTitle;
    _Bool hasLoaded;
    _Bool _rightNavigationItemHasSet;
    WBPage *_page;
    NSString *_rightNavigationItemScheme;
    unsigned long long _rightNavigationItemType;
    NSString *containerID;
    SNHTTPRequestOperationWrapper *_currentRequestWrapper;
}

@property(retain, nonatomic) SNHTTPRequestOperationWrapper *currentRequestWrapper; // @synthesize currentRequestWrapper=_currentRequestWrapper;
@property(retain, nonatomic) NSString *containerID; // @synthesize containerID;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=pageId;
@property(nonatomic) unsigned long long rightNavigationItemType; // @synthesize rightNavigationItemType=_rightNavigationItemType;
@property(retain, nonatomic) NSString *rightNavigationItemScheme; // @synthesize rightNavigationItemScheme=_rightNavigationItemScheme;
@property(nonatomic) _Bool rightNavigationItemHasSet; // @synthesize rightNavigationItemHasSet=_rightNavigationItemHasSet;
@property(retain, nonatomic) WBPage *page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableArray *cards; // @synthesize cards;
@property(retain, nonatomic) NSString *pageCardTitle; // @synthesize pageCardTitle;
@property(nonatomic) long long count; // @synthesize count;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (id)fID;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)bubbleTypeWithIndexPage:(id)arg1 tableView:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reloadUIElements;
- (void)rightNavigationItemPressed:(id)arg1;
- (void)loadMoreData;
- (void)reloadData;
- (void)moreButtonPressed:(id)arg1;
- (void)finishLoadingData;
- (void)configScrollToIndex;
- (void)getData;
- (id)networkClient;
- (id)currentQueryParameters;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)configurationPageSizeAndPageNumber;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithPageCard:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

