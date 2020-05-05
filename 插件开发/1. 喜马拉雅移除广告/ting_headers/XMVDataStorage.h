//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMVLock.h"

#import "XMVDataLoaderDelegate-Protocol.h"

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface XMVDataStorage : XMVLock <XMVDataLoaderDelegate>
{
    long long _maxCacheLength;
    long long _segmentLength;
    long long _preloadLength;
    NSObject<OS_dispatch_queue> *_loaderQueue;
    NSMutableArray *_loaderList;
}

+ (id)storage;
@property(retain, nonatomic) NSMutableArray *loaderList; // @synthesize loaderList=_loaderList;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loaderQueue; // @synthesize loaderQueue=_loaderQueue;
@property(nonatomic) long long preloadLength; // @synthesize preloadLength=_preloadLength;
@property(nonatomic) long long segmentLength; // @synthesize segmentLength=_segmentLength;
@property(nonatomic) long long maxCacheLength; // @synthesize maxCacheLength=_maxCacheLength;
- (void).cxx_destruct;
- (void)parseM3U8WithData:(id)arg1;
- (void)removeLoader:(id)arg1;
- (void)addLoader:(id)arg1;
- (void)loader:(id)arg1 didFailed:(id)arg2;
- (void)loaderDidFinished:(id)arg1 data:(id)arg2;
- (void)loaderDidClosed:(id)arg1;
- (void)loadDataWithURL:(id)arg1;
- (void)deleteAllCaches;
- (void)deleteCacheWithURL:(id)arg1;
- (long long)totalCacheLength;
- (id)readerWithRequest:(id)arg1;
- (id)completeFileURLIfExistedWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

