//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "XMVXPageViewSubControllerProtocol-Protocol.h"

@class NSString, XMRecommendAlbumsFlowPresenter, XMRecommendFlowModel;

@interface XMRecommendAlbumsFlowViewController : XMBaseTabelVC <XMVXPageViewSubControllerProtocol>
{
    _Bool _isNovel;
    XMRecommendFlowModel *_tabModel;
    XMRecommendAlbumsFlowPresenter *_presenter;
}

@property(retain, nonatomic) XMRecommendAlbumsFlowPresenter *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) _Bool isNovel; // @synthesize isNovel=_isNovel;
@property(nonatomic) __weak XMRecommendFlowModel *tabModel; // @synthesize tabModel=_tabModel;
- (void).cxx_destruct;
- (id)vxContentScrollView;
- (void)reloadDataIfNeed;
- (void)p_updatePresenter;
- (void)p_setUI;
- (void)loadMore;
- (void)pullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

