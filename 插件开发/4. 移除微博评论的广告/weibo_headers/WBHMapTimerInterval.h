//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface WBHMapTimerInterval : NSObject
{
    NSTimer *_timer;
    CDUnknownBlockType _action;
}

@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)_timerAction:(id)arg1;
- (void)_killPreTimer;
- (void)killTimer;
- (void)dispattchOnceAfterTimerInterval:(double)arg1 action:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

