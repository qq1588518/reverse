//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMAlbumItem, XMNewPaidRecModuleItem, XMPaidRecAlbumCell;

@protocol XMPaidRecAlbumCellDelegate <NSObject>
- (void)paidRecAlbumCellClickMoreWithCell:(XMPaidRecAlbumCell *)arg1 withModule:(XMNewPaidRecModuleItem *)arg2;
- (void)paidRecAlbumCell:(XMPaidRecAlbumCell *)arg1 willOpenAlbum:(XMAlbumItem *)arg2 andPosition:(long long)arg3;
@end

