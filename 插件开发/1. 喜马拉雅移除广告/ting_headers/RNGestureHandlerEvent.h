//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTEvent-Protocol.h"

@class NSNumber, NSString, RNGestureHandlerEventExtraData;

@interface RNGestureHandlerEvent : NSObject <RCTEvent>
{
    NSNumber *_handlerTag;
    long long _state;
    RNGestureHandlerEventExtraData *_extraData;
    unsigned short _coalescingKey;
    NSNumber *_viewTag;
}

+ (id)moduleDotMethod;
@property(readonly, nonatomic) unsigned short coalescingKey; // @synthesize coalescingKey=_coalescingKey;
@property(readonly, nonatomic) NSNumber *viewTag; // @synthesize viewTag=_viewTag;
- (void).cxx_destruct;
- (id)arguments;
- (id)coalesceWithEvent:(id)arg1;
- (_Bool)canCoalesce;
@property(readonly, copy, nonatomic) NSString *eventName;
- (id)init;
- (id)initWithRactTag:(id)arg1 handlerTag:(id)arg2 state:(long long)arg3 extraData:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

