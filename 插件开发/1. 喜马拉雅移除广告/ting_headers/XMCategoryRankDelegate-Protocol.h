//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, XMAlbumItem, XMCategoryRankCell, XMCategoryRecModel;

@protocol XMCategoryRankDelegate <NSObject>

@optional
- (void)categoryRank:(XMCategoryRankCell *)arg1 clickMore:(XMCategoryRecModel *)arg2 info:(NSDictionary *)arg3;
- (void)categoryRank:(XMCategoryRankCell *)arg1 didclickAlbum:(XMAlbumItem *)arg2 atIndex:(long long)arg3 recModel:(XMCategoryRecModel *)arg4 info:(NSDictionary *)arg5;
@end

