//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SNHTTPRequestOperationWrapper;

@interface WBBatchFollowEngine : NSObject
{
    SNHTTPRequestOperationWrapper *_fetchRequestOperationWrapper;
}

- (void).cxx_destruct;
- (void)followBatchlyWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)followBatchlyContactUsersWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)followBatchlyUsersWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelAllRequests;
- (void)dealloc;

@end

