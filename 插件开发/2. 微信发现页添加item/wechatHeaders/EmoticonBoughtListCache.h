//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface EmoticonBoughtListCache : MMObject <PBCoding>
{
    NSMutableArray *itemList;
}

+ (void)initialize;
+ (void)PBArrayAdd_itemList;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList;
- (void).cxx_destruct;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

