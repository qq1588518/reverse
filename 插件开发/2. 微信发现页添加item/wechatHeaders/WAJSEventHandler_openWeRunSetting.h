//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@interface WAJSEventHandler_openWeRunSetting : WAJSEventHandler_BaseEvent
{
    _Bool _bIsNotCheckDeviceNotSupport;
}

- (void)tryOpenSetting;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

@end

