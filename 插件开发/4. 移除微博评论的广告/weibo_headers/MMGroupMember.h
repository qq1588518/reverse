//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMModel.h"

@class MMUser;

@interface MMGroupMember : MMModel
{
    long long _joinTime;
    MMUser *_user;
}

@property(retain, nonatomic) MMUser *user; // @synthesize user=_user;
@property(nonatomic) long long joinTime; // @synthesize joinTime=_joinTime;
- (void).cxx_destruct;
- (void)fromResultSet:(id)arg1;
- (id)initWithUser:(id)arg1 joinTime:(long long)arg2;
- (id)init;
- (void)dealloc;

@end

