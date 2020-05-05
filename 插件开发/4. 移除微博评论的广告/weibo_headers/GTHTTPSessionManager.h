//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSLock, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession;
@protocol GTHTTPSessionManagerDelegate;

@interface GTHTTPSessionManager : NSObject <NSURLSessionDataDelegate>
{
    _Bool _cancelAllSession;
    id <GTHTTPSessionManagerDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    NSURLSession *_urlSession;
    NSURLSession *_invalidatedSession;
    NSMutableDictionary *_sessionTaskItemDictionary;
    NSLock *_lock;
}

+ (id)sharedManager;
@property(nonatomic) _Bool cancelAllSession; // @synthesize cancelAllSession=_cancelAllSession;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *sessionTaskItemDictionary; // @synthesize sessionTaskItemDictionary=_sessionTaskItemDictionary;
@property(retain, nonatomic) NSURLSession *invalidatedSession; // @synthesize invalidatedSession=_invalidatedSession;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <GTHTTPSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)invalidateAndCancelAllSessionTask:(_Bool)arg1;
- (void)finishAllSessionTaskAndInvalidate:(_Bool)arg1;
- (void)cancelRequestWithParameters:(id)arg1;
- (_Bool)requestObject:(long long)arg1 withRequest:(id)arg2 parameters:(id)arg3 progress:(CDUnknownBlockType)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (_Bool)requestObject:(long long)arg1 fromURL:(id)arg2 withParameters:(id)arg3 progress:(CDUnknownBlockType)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (_Bool)urlIsRequesting:(id)arg1;
- (_Bool)requestIsExist:(id)arg1;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

