//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBUIViewItem.h"

@class WBContentShareDrawableTextItem, WBContentShareFCLItem;

@interface WBContentShareBottomBarItem : WBUIViewItem
{
    WBContentShareDrawableTextItem *timeItem;
    WBContentShareFCLItem *likeItem;
    WBContentShareFCLItem *commentItem;
    WBContentShareFCLItem *repostItem;
}

- (void).cxx_destruct;
- (void)layoutSubitems;
- (id)initWithStatus:(id)arg1;

@end

