//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMsgNodeLaunchTask : NSObject
{
    _Bool _isRunning;
    unsigned int _debugMode;
    unsigned int _widgetType;
    unsigned int _lastUpdatedTime;
    NSString *_appId;
}

@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) unsigned int lastUpdatedTime; // @synthesize lastUpdatedTime=_lastUpdatedTime;
@property(nonatomic) unsigned int widgetType; // @synthesize widgetType=_widgetType;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)description;

@end

