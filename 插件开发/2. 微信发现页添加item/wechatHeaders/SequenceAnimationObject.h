//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SequenceAnimationObject : NSObject
{
    _Bool _m_isAnimating;
    NSMutableArray *_m_animations;
}

@property(retain, nonatomic) NSMutableArray *m_animations; // @synthesize m_animations=_m_animations;
@property(nonatomic) _Bool m_isAnimating; // @synthesize m_isAnimating=_m_isAnimating;
- (void).cxx_destruct;
- (void)doNextAnimation;
- (void)addAnimationWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;

@end

