//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUPersistenceProtocol-Protocol.h"

@class BUPersistenceOption, NSString;
@protocol BUPersistenceProtocol;

@interface BUDiskCache : NSObject <BUPersistenceProtocol>
{
    BUPersistenceOption *_option;
    id <BUPersistenceProtocol> _storage;
    NSString *_diskCacheDirectory;
}

+ (void)deleteWithName:(id)arg1;
+ (void)removeDiskCache;
+ (id)cachePath;
@property(copy, nonatomic) NSString *diskCacheDirectory; // @synthesize diskCacheDirectory=_diskCacheDirectory;
@property(retain, nonatomic) id <BUPersistenceProtocol> storage; // @synthesize storage=_storage;
@property(retain, nonatomic) BUPersistenceOption *option; // @synthesize option=_option;
- (void).cxx_destruct;
- (_Bool)save;
- (_Bool)removeObjectsForKeys:(id)arg1;
- (_Bool)removeAll;
- (_Bool)hasObjectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (void)updateObjectsForKeys:(id)arg1 WithBlock:(CDUnknownBlockType)arg2;
- (id)objectsForKeys:(id)arg1;
- (id)allObjects;
- (id)objectForKey:(id)arg1;
- (id)storageWithName:(id)arg1 type:(unsigned long long)arg2;
- (void)initStorage:(id)arg1;
- (void)setCustomStorage:(id)arg1;
- (void)initDirectory;
- (id)initWithName:(id)arg1 option:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

