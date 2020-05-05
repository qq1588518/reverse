//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface TPCondiction : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _waitMs;
}

@property(nonatomic) unsigned long long waitMs; // @synthesize waitMs=_waitMs;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void).cxx_destruct;
- (void)signal;
- (void)waitWithTimeoutBlock:(CDUnknownBlockType)arg1;
- (void)wait;
- (id)initWithCondiction:(long long)arg1 waitTime:(unsigned long long)arg2;
- (id)init;

@end

