//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "XMTalkGroupTableViewCellDelegate-Protocol.h"

@class NSMutableArray, NSString, XMGTAlbum;

@interface XMGroupListViewController : XMBaseTabelVC <XMTalkGroupTableViewCellDelegate>
{
    _Bool _hideOtherList;
    _Bool _reqFinished;
    _Bool _hasCreateGroupPermission;
    _Bool _hasMore;
    _Bool _firstEnter;
    _Bool _albumIsPaid;
    unsigned long long _userId;
    XMGTAlbum *_gtAlbum;
    unsigned long long _type;
    NSMutableArray *_gtList;
    NSMutableArray *_albumGtList;
    unsigned long long _createPermission;
    long long _minPrice;
    long long _maxPrice;
    long long _pageId;
}

@property(nonatomic) _Bool albumIsPaid; // @synthesize albumIsPaid=_albumIsPaid;
@property(nonatomic) _Bool firstEnter; // @synthesize firstEnter=_firstEnter;
@property(nonatomic) long long pageId; // @synthesize pageId=_pageId;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long maxPrice; // @synthesize maxPrice=_maxPrice;
@property(nonatomic) long long minPrice; // @synthesize minPrice=_minPrice;
@property(nonatomic) unsigned long long createPermission; // @synthesize createPermission=_createPermission;
@property(nonatomic) _Bool hasCreateGroupPermission; // @synthesize hasCreateGroupPermission=_hasCreateGroupPermission;
@property(retain, nonatomic) NSMutableArray *albumGtList; // @synthesize albumGtList=_albumGtList;
@property(retain, nonatomic) NSMutableArray *gtList; // @synthesize gtList=_gtList;
@property(nonatomic) _Bool reqFinished; // @synthesize reqFinished=_reqFinished;
@property(nonatomic) _Bool hideOtherList; // @synthesize hideOtherList=_hideOtherList;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) XMGTAlbum *gtAlbum; // @synthesize gtAlbum=_gtAlbum;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)createNewNotice;
- (void)createTalkingGroup;
- (void)showPopMenuView;
- (void)onRightButton:(id)arg1;
- (void)onNoDataActionButtonClicked:(id)arg1;
- (void)handleRespDict:(id)arg1 index:(long long)arg2;
- (void)requestFromIndex:(long long)arg1;
- (void)loadMore;
- (void)pullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)headerViewForPaidTips;
- (id)headerViewForTitle:(id)arg1 height:(double)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getDataListForSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateTitleIfNeed;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

