//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMAlbumItem, XMKeywordItem, XMVipCategoryCell, XMVipCategoryItem;

@protocol XMVipCategoryCellDelegate <NSObject>
- (void)vipCategoryCell:(XMVipCategoryCell *)arg1 reloadCellWhenClickedKeyword:(XMKeywordItem *)arg2 andPosition:(long long)arg3;
- (void)vipCategoryCell:(XMVipCategoryCell *)arg1 willOpenAlbum:(XMAlbumItem *)arg2 andCategoryItem:(XMVipCategoryItem *)arg3 andPosition:(long long)arg4;
@end

