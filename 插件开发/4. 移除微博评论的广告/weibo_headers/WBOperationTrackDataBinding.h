//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBOperationTrackDataBindlingProtocol-Protocol.h"

@class NSString;
@protocol WBOperationTrackProtocol;

@interface WBOperationTrackDataBinding : NSObject <WBOperationTrackDataBindlingProtocol>
{
    _Bool _running;
    NSString *_name;
    id <WBOperationTrackProtocol> _owner;
    Class _swizzleClass;
}

@property(nonatomic) Class swizzleClass; // @synthesize swizzleClass=_swizzleClass;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(nonatomic) __weak id <WBOperationTrackProtocol> owner; // @synthesize owner=_owner;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)stop;
- (void)execute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

