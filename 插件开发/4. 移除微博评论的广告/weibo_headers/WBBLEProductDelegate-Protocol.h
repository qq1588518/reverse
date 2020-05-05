//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSError, WBBLEProduct;

@protocol WBBLEProductDelegate <NSObject>
- (void)bleStateChanged:(WBBLEProduct *)arg1;
- (void)bleProduct:(WBBLEProduct *)arg1 stateChanged:(unsigned long long)arg2;

@optional
- (void)bleProduct:(WBBLEProduct *)arg1 didReceiveBufferData:(NSArray *)arg2;
- (void)bleProduct:(WBBLEProduct *)arg1 didReceiveOriginalData:(NSData *)arg2 error:(NSError *)arg3;
- (void)bleProduct:(WBBLEProduct *)arg1 didReceiveRecords:(NSArray *)arg2 error:(NSError *)arg3;
- (void)bleProduct:(WBBLEProduct *)arg1 didReceiveRealtimeData:(id)arg2 error:(NSError *)arg3;
@end

