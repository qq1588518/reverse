//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol XMRefreshProtocol <NSObject>
@property(nonatomic) _Bool whiteRefreshStyle;
@property(nonatomic) _Bool hasLoadMore;
@property(nonatomic) _Bool hasPullToRefresh;
- (void)reloadData;
- (void)loadMore;
- (void)pullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)triggerInfiniteScrolling;
- (void)triggerPullToRefresh;
- (void)doneLoadData;
@end

