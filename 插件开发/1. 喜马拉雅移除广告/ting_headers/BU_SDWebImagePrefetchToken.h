//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDWebImageOperation-Protocol.h"

@class BU_SDWebImagePrefetcher, NSArray, NSPointerArray, NSString;

@interface BU_SDWebImagePrefetchToken : NSObject <SDWebImageOperation>
{
    // Error parsing type: AQ, name: _skippedCount
    // Error parsing type: AQ, name: _finishedCount
    // Error parsing type: {atomic_flag="_Value"AB}, name: _isAllFinished
    unsigned long long _totalCount;
    NSArray *_urls;
    NSPointerArray *_loadOperations;
    NSPointerArray *_prefetchOperations;
    BU_SDWebImagePrefetcher *_prefetcher;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressBlock;
}

@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak BU_SDWebImagePrefetcher *prefetcher; // @synthesize prefetcher=_prefetcher;
@property(retain, nonatomic) NSPointerArray *prefetchOperations; // @synthesize prefetchOperations=_prefetchOperations;
@property(retain, nonatomic) NSPointerArray *loadOperations; // @synthesize loadOperations=_loadOperations;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
- (void).cxx_destruct;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

