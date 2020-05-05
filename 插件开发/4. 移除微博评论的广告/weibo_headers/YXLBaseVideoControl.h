//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YXLivePlayerNetDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, YXLivePlayer;

@interface YXLBaseVideoControl : NSObject <YXLivePlayerNetDelegate>
{
    YXLivePlayer *_player;
    NSMutableDictionary *_logDictionary;
    NSDictionary *_playInfo;
}

@property(retain, nonatomic) NSDictionary *playInfo; // @synthesize playInfo=_playInfo;
@property(retain, nonatomic) NSMutableDictionary *logDictionary; // @synthesize logDictionary=_logDictionary;
@property(nonatomic) __weak YXLivePlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)playerStatusDidChanged:(long long)arg1;
- (void)player:(id)arg1 netStatisticsChanged:(int)arg2 msg:(id)arg3;
- (void)dealloc;
- (void)commonInit;
@property(readonly, nonatomic) __weak NSDictionary *playerLog;
- (void)updatePlayInfo:(id)arg1;
- (void)updatePlayerInstance:(id)arg1;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

