//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMEventHandler.h"

@class MMMessageReadNotifyInfo;

@interface MMMessageReadNotifyHandler : MMEventHandler
{
    MMMessageReadNotifyInfo *_messageReadNotifyInfo;
}

@property(retain, nonatomic) MMMessageReadNotifyInfo *messageReadNotifyInfo; // @synthesize messageReadNotifyInfo=_messageReadNotifyInfo;
- (void).cxx_destruct;
- (void)postHandling:(id)arg1;
- (_Bool)databaseHandling:(id)arg1;
- (_Bool)preHandling;

@end

