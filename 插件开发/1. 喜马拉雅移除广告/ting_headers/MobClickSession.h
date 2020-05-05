//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MobClickSession : NSObject
{
    _Bool _observerRegistered;
    _Bool _appInBackGround;
    _Bool _appBeKilling;
    _Bool _appCrashed;
    int _sessionStatus;
    double _lastLaunchTime;
}

+ (void)startWithAppkey:(id)arg1;
+ (void)profileSignOff;
+ (void)profileSignInPUID:(id)arg1 withProvider:(id)arg2;
+ (void)profileSignInPUID:(id)arg1;
+ (void)signInPUID:(id)arg1 provider:(id)arg2;
+ (id)sharedInstance;
@property(nonatomic) double lastLaunchTime; // @synthesize lastLaunchTime=_lastLaunchTime;
@property(nonatomic) int sessionStatus; // @synthesize sessionStatus=_sessionStatus;
@property(nonatomic) _Bool appCrashed; // @synthesize appCrashed=_appCrashed;
@property(nonatomic) _Bool appBeKilling; // @synthesize appBeKilling=_appBeKilling;
@property(nonatomic) _Bool appInBackGround; // @synthesize appInBackGround=_appInBackGround;
@property(nonatomic) _Bool observerRegistered; // @synthesize observerRegistered=_observerRegistered;
- (void)setUMAutoEventBinding:(id)arg1 AutoEventBindingMD5:(id)arg2;
- (void)autoEventBinding:(id)arg1;
- (void)ensureSessionLaunch;
- (long long)endSessionTime;
- (void)beginSessionTime;
- (void)appInactivate:(id)arg1;
- (void)appActivate:(id)arg1;

@end

