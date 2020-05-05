//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UTMCLifeCycleProtocol-Protocol.h"

@class NSString, UTDCache;

@interface UTDCacheManager : NSObject <UTMCLifeCycleProtocol>
{
    UTDCache *_cache;
}

@property(retain, nonatomic) UTDCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)size;
- (id)generateCacheKey:(id)arg1;
- (void)addLog:(id)arg1;
- (void)switchBackGround;
- (void)switchForeGround;
- (void)synchronizeData;
- (id)init;
- (void)synchronize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

