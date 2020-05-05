//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WBStoryStateAnnouncer;
@protocol OS_dispatch_queue;

@interface WBStoryStateManager : NSObject
{
    NSMutableDictionary *_stateDict;
    WBStoryStateAnnouncer *_announcer;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) WBStoryStateAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(retain, nonatomic) NSMutableDictionary *stateDict; // @synthesize stateDict=_stateDict;
- (void).cxx_destruct;
- (void)currentAccountWillChangeNotification:(id)arg1;
- (void)setState:(long long)arg1 forKey:(id)arg2;
- (long long)stateForKey:(id)arg1;
- (void)removeStateListener:(id)arg1 forKey:(id)arg2;
- (void)addStateListener:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;

@end

