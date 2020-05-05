//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABQAFHTTPRequestOperation, ABQChoreoNetworkEngine, NSDate, NSDictionary, NSString, NSTimer, NSURL;

@interface ABQChoreoServiceRequest : NSObject
{
    _Bool _isSynchronous;
    _Bool _isCompleted;
    int _maximumRetries;
    int _currentRetryCount;
    ABQAFHTTPRequestOperation *_operation;
    NSTimer *_cancelRequestTimer;
    double _timeout;
    NSDictionary *_requestParmsDictionary;
    NSDictionary *_additionalHeaders;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    Class _expectedResponseClass;
    NSString *_httpMethod;
    NSURL *_serviceUrl;
    ABQChoreoNetworkEngine *_engine;
    NSDate *_startTime;
}

+ (id)sharedLogFileHandle;
@property(copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) ABQChoreoNetworkEngine *engine; // @synthesize engine=_engine;
@property(readonly, copy, nonatomic) NSURL *serviceUrl; // @synthesize serviceUrl=_serviceUrl;
@property(readonly, copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(retain, nonatomic) Class expectedResponseClass; // @synthesize expectedResponseClass=_expectedResponseClass;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(retain, nonatomic) NSDictionary *requestParmsDictionary; // @synthesize requestParmsDictionary=_requestParmsDictionary;
@property _Bool isCompleted; // @synthesize isCompleted=_isCompleted;
@property _Bool isSynchronous; // @synthesize isSynchronous=_isSynchronous;
@property double timeout; // @synthesize timeout=_timeout;
@property(retain) NSTimer *cancelRequestTimer; // @synthesize cancelRequestTimer=_cancelRequestTimer;
@property int currentRetryCount; // @synthesize currentRetryCount=_currentRetryCount;
@property int maximumRetries; // @synthesize maximumRetries=_maximumRetries;
@property(retain, nonatomic) ABQAFHTTPRequestOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (id)makeLogStringWithRequestBody:(id)arg1;
- (void)cancelOperation;
- (void)startCancelTimer;
- (void)blockIfSynchronous;
- (void)start;
- (id)urlRequest;
- (id)initSynchronousWithParms:(id)arg1 serviceUrl:(id)arg2 httpMethod:(id)arg3 expectedResponseClass:(Class)arg4 additionalHeaders:(id)arg5 engine:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8 timeout:(double)arg9;
- (id)initSynchronousWithParms:(id)arg1 serviceUrl:(id)arg2 httpMethod:(id)arg3 expectedResponseClass:(Class)arg4 engine:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7 timeout:(double)arg8;
- (id)initWithParms:(id)arg1 serviceUrl:(id)arg2 httpMethod:(id)arg3 expectedResponseClass:(Class)arg4 additionalHeaders:(id)arg5 engine:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8 timeout:(int)arg9;
- (id)initWithParms:(id)arg1 serviceUrl:(id)arg2 httpMethod:(id)arg3 expectedResponseClass:(Class)arg4 engine:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7 timeout:(int)arg8;
- (id)initWithParms:(id)arg1 serviceUrl:(id)arg2 httpMethod:(id)arg3 expectedResponseClass:(Class)arg4 additionalHeaders:(id)arg5 engine:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (id)initWithParms:(id)arg1 serviceUrl:(id)arg2 httpMethod:(id)arg3 expectedResponseClass:(Class)arg4 engine:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)writeToRequestResponseLog:(id)arg1;

@end

