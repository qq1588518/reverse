//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMCoreProvider, MMEventImmediateHandler;

@interface MMEventProcessor : NSObject
{
    MMCoreProvider *_core;
    MMEventImmediateHandler *_immediateHandler;
}

- (void).cxx_destruct;
- (_Bool)isEfectiveEvent:(id)arg1;
- (void)processEvents:(id)arg1;
- (void)processMultipleEvents:(id)arg1;
- (void)processSingleEvent:(id)arg1;
- (void)asyncUpdateSyncVersion:(long long)arg1;
- (void)updateSyncVersion:(long long)arg1 dbManager:(id)arg2;
- (id)initWithCoreProvider:(id)arg1;
- (void)dealloc;

@end

