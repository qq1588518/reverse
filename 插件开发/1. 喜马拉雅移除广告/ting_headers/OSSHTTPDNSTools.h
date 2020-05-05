//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OSSHTTPDNSTools : NSObject
{
    _Bool ttlInQueue;
    struct _opaque_pthread_rwlock_t lock;
}

+ (long long)currentTimeInSec;
+ (_Bool)isLegalHost:(id)arg1;
+ (_Bool)isLegalIP:(id)arg1;
+ (id)sharedInstanceManage;
+ (void)initialize;
- (id)getHttpDnsURL;
- (void)resetTimeoutTaskFlags;
- (_Bool)setTimeoutTaskFlags;
- (id)getQueryBody:(int)arg1;
- (void)getIpFromJson:(id)arg1;
- (void)httpDnsRequest:(id)arg1;
- (id)init;

@end

