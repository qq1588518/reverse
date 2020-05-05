//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBVideoApplicationStateObserver : NSObject
{
    _Bool _foreground;
    long long _currentApplicationState;
}

+ (id)sharedObserver;
@property(readonly, nonatomic) _Bool foreground; // @synthesize foreground=_foreground;
@property(readonly, nonatomic) long long currentApplicationState; // @synthesize currentApplicationState=_currentApplicationState;
- (void)_willTerminate:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (void)_didBecomeActive:(id)arg1;
- (void)_willResignActive:(id)arg1;
- (void)updateApplicationState;
- (id)init;
- (void)dealloc;

@end

