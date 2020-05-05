//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "XMTableViewDelegateProtocol-Protocol.h"

@class NSString, UIButton, UILabel, UIView, XMNRequest, XMTableViewDataSource;

@interface XMUserCopyrightListViewController : XMBaseTabelVC <XMTableViewDelegateProtocol>
{
    long long _uid;
    long long _pageNum;
    long long _totalCount;
    NSString *_name;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIView *_headerView;
    UILabel *_copyrightNameLabel;
    UILabel *_copyrightCountLabel;
    XMNRequest *_request;
    XMTableViewDataSource *_tableDataSource;
}

@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) XMNRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) UILabel *copyrightCountLabel; // @synthesize copyrightCountLabel=_copyrightCountLabel;
@property(retain, nonatomic) UILabel *copyrightNameLabel; // @synthesize copyrightNameLabel=_copyrightNameLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (id)initWithUid:(long long)arg1 name:(id)arg2;
- (void)p_updateWithEmptyWith:(_Bool)arg1;
- (void)handleWithList:(id)arg1;
- (void)p_reloadContent:(_Bool)arg1;
- (void)p_loadMore;
- (void)p_pullToRefresh;
- (void)loadMore;
- (void)pullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

