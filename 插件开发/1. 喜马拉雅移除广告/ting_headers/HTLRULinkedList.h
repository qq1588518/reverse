//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTLinkedList.h"

@interface HTLRULinkedList : HTLinkedList
{
    unsigned long long _capacity;
}

@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (id)fetch:(id)arg1;
- (id)add:(id)arg1 withKey:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

