//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray;
@protocol XMMAStatisticsCollectorDelegate;

@protocol XMMAStatisticsCollectorProtocol
@property(nonatomic) __weak id <XMMAStatisticsCollectorDelegate> delegate;
- (void)removeAllRecords;
- (void)collectRecord:(id)arg1;
- (_Bool)removeRecords:(NSArray *)arg1;
- (NSArray *)takeFirstRecordsWithCount:(unsigned long long)arg1;
- (long long)countOfRecords;
@end

