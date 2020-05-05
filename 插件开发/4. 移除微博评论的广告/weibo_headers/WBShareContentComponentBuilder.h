//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBShareContentBuilderProtocol-Protocol.h"

@class NSString;

@interface WBShareContentComponentBuilder : NSObject <WBShareContentBuilderProtocol>
{
    NSString *key;
    CDUnknownBlockType _block;
}

+ (id)shareSourceForType:(long long)arg1;
+ (id)builderWithKey:(id)arg1 buildBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *key; // @synthesize key;
- (void).cxx_destruct;
- (id)buildComponentWithData:(id)arg1 contentType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

