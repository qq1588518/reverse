//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface XMMADrawAction : NSObject
{
    _Bool _reserve;
    CDUnknownBlockType _completedHandler;
    NSArray *_actionSeq;
}

@property(retain, nonatomic) NSArray *actionSeq; // @synthesize actionSeq=_actionSeq;
@property(copy, nonatomic) CDUnknownBlockType completedHandler; // @synthesize completedHandler=_completedHandler;
@property(nonatomic) _Bool reserve; // @synthesize reserve=_reserve;
- (void).cxx_destruct;

@end

