//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PromiseActionStateContext : NSObject
{
    unsigned long long _state;
    id _obj;
    NSMutableArray *_handlers;
}

@property(retain, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)checkHasObject:(CDUnknownBlockType)arg1;
- (id)init;

@end

