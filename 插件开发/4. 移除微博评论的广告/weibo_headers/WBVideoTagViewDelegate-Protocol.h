//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBVideoTagView;

@protocol WBVideoTagViewDelegate <NSObject>
- (void)videoTagView:(WBVideoTagView *)arg1 didRemoveTag:(NSString *)arg2;
- (void)videoTagView:(WBVideoTagView *)arg1 didAddTag:(NSString *)arg2;
- (void)videoTagView:(WBVideoTagView *)arg1 selectedTag:(NSString *)arg2 hasSelected:(_Bool)arg3;
- (void)videoTagViewTextFieldDidClickReturn:(WBVideoTagView *)arg1;
- (void)videoTagViewTextFieldDidEndEditing:(WBVideoTagView *)arg1;
- (void)videoTagViewTextFieldDidBegainEditing:(WBVideoTagView *)arg1;
- (void)videoTagViewDidTap:(WBVideoTagView *)arg1;
- (void)videoTagViewDidScroll:(WBVideoTagView *)arg1;
@end

