//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XMSearchHotWordModel;

@protocol XMSerchCellNewDelegate <NSObject>

@optional
- (void)onHotWordClicked:(XMSearchHotWordModel *)arg1 tag:(long long)arg2;
- (void)renewHotWord;
- (void)cleanClick;
- (void)tagsClick:(NSString *)arg1 withSearchType:(NSString *)arg2;
@end

