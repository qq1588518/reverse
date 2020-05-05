//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "XMTableViewDelegateProtocol-Protocol.h"
#import "XMVXPageViewSubControllerProtocol-Protocol.h"

@class NSString, XMNRequest, XMTableViewDataSource;

@interface XMSearchRankViewController : XMSubLevelViewController <XMTableViewDelegateProtocol, UIScrollViewDelegate, XMVXPageViewSubControllerProtocol>
{
    _Bool _searchNewUser;
    CDUnknownBlockType _hotWordDidClickHandler;
    NSString *_categoryID;
    NSString *_categoryName;
    NSString *_hotword;
    NSString *_metadata;
    NSString *_srcCategoryId;
    NSString *_sourceName;
    XMTableViewDataSource *_tableDataSource;
    XMNRequest *_rankReq;
    long long _searchModel;
}

@property(nonatomic) long long searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) XMNRequest *rankReq; // @synthesize rankReq=_rankReq;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *srcCategoryId; // @synthesize srcCategoryId=_srcCategoryId;
@property(copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *hotword; // @synthesize hotword=_hotword;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) _Bool searchNewUser; // @synthesize searchNewUser=_searchNewUser;
@property(copy, nonatomic) CDUnknownBlockType hotWordDidClickHandler; // @synthesize hotWordDidClickHandler=_hotWordDidClickHandler;
- (void).cxx_destruct;
- (id)vxContentScrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)isLoadMoreViewNeeded;
- (void)triggerPullToRefresh;
- (_Bool)shouldShowNoNetView;
- (void)parseRankResponse:(id)arg1;
- (void)fetchCategorySearchRank;
- (void)setupBgDecoration;
- (double)contentBottomOffset;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCategoryID:(id)arg1 categoryName:(id)arg2 hotword:(id)arg3 metadata:(id)arg4 srcCategoryId:(id)arg5 sourceName:(id)arg6;
- (id)initWithCategoryID:(id)arg1 categoryName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

