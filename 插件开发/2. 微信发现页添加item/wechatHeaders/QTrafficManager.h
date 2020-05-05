//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QMapContextDelegate-Protocol.h"

@class NSString, QMapContext, QMapRepeatTimer, QMediator, QTrafficServerEngine;

@interface QTrafficManager : NSObject <QMapContextDelegate>
{
    _Bool _enabled;
    QMediator *_mediator;
    QMapContext *_mapContext;
    QTrafficServerEngine *_server;
    QMapRepeatTimer *_timer;
}

@property(retain, nonatomic) QMapRepeatTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) QTrafficServerEngine *server; // @synthesize server=_server;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)mapContextDidMapStatusChangedBeforeDraw:(id)arg1;
- (void)startAutoRefresh;
- (void)invalidateTimer;
- (void)writeData:(id)arg1;
- (void)checkUpdate:(id)arg1;
- (void)refresh;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

