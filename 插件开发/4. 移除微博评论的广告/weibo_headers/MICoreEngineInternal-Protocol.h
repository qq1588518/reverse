//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMDispatchQueue, NSObject;
@protocol OS_dispatch_queue;

@protocol MICoreEngineInternal <NSObject>
- (MMDispatchQueue *)pushDataProcessingQueue;
- (NSObject<OS_dispatch_queue> *)workerQueue;
@end

