//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMEventHandler.h"

@class MMUser;

@interface MMUpdateUserStatusHandler : MMEventHandler
{
    long long _uid;
    long long _bTrashUser;
    MMUser *_user;
}

@property(retain, nonatomic) MMUser *user; // @synthesize user=_user;
@property(nonatomic) long long bTrashUser; // @synthesize bTrashUser=_bTrashUser;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)postHandling:(id)arg1;
- (_Bool)databaseHandling:(id)arg1;
- (_Bool)preHandling;
- (void)dealloc;

@end

