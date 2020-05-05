//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, WBOPTCacheConfig;
@protocol WBOPTMemoryCacheDelegate;

@interface WBOPTMemoryCache : NSObject
{
    id <WBOPTMemoryCacheDelegate> _cacheDelegate;
    NSString *_name;
    NSMutableDictionary *_cacheDictionary;
    unsigned long long _cacheCount;
    WBOPTCacheConfig *_cacheConfig;
    NSMutableArray *_cacheKeyArray;
    struct _opaque_pthread_mutex_t _mutex;
}

@property(retain, nonatomic) NSMutableArray *cacheKeyArray; // @synthesize cacheKeyArray=_cacheKeyArray;
@property(retain, nonatomic) WBOPTCacheConfig *cacheConfig; // @synthesize cacheConfig=_cacheConfig;
@property(nonatomic) unsigned long long cacheCount; // @synthesize cacheCount=_cacheCount;
@property(retain, nonatomic) NSMutableDictionary *cacheDictionary; // @synthesize cacheDictionary=_cacheDictionary;
@property(nonatomic) struct _opaque_pthread_mutex_t mutex; // @synthesize mutex=_mutex;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <WBOPTMemoryCacheDelegate> cacheDelegate; // @synthesize cacheDelegate=_cacheDelegate;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)_appDidEnterBackgroundNotification;
- (void)_appDidReceiveMemoryWarningNotification;
- (void)unlock;
- (void)lock;
- (id)allCacheKeyAndValues;
- (_Bool)containsObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1 lock:(_Bool)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)init;

@end

