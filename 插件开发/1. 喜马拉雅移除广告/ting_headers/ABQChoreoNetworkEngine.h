//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABQAFHTTPRequestOperationManager, ABQAFNetworkReachabilityManager, ABQChoreoConfiguration;
@protocol KPILogging;

@interface ABQChoreoNetworkEngine : NSObject
{
    ABQChoreoConfiguration *_configuration;
    id <KPILogging> _kpiLoggingDelegate;
    ABQAFHTTPRequestOperationManager *_operationManager;
    ABQAFNetworkReachabilityManager *_reachabilityManager;
}

+ (id)gzipCompressedDataFromData:(id)arg1 withError:(id *)arg2;
+ (unsigned long long)assembleKeyFromFragmentsArray:(id)arg1 intoBuffer:(char *)arg2;
+ (id)keyFromFragmentsArray:(id)arg1;
+ (id)pasteBoardTokenFromFragmentsArray:(id)arg1;
@property(retain) ABQAFNetworkReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(retain) ABQAFHTTPRequestOperationManager *operationManager; // @synthesize operationManager=_operationManager;
@property(nonatomic) __weak id <KPILogging> kpiLoggingDelegate; // @synthesize kpiLoggingDelegate=_kpiLoggingDelegate;
@property(retain, nonatomic) ABQChoreoConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)choreoSignatureStringForCSR:(id)arg1;
- (id)choreoTokenString;
- (id)secureRequestUsingURL:(id)arg1;
- (id)securityRelatedHeadersDictionaryForURLString:(id)arg1;
- (id)urlRequestwithParms:(id)arg1 serviceUrl:(id)arg2 httpMethod:(id)arg3;
- (void)compressAndUploadFileAtPath:(id)arg1 serviceUrl:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)sendUploadRequestWithBody:(id)arg1 serviceUrl:(id)arg2 httpMethod:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)sendSynchronousRequestWithParms:(id)arg1 serviceUrl:(id)arg2 httpMethod:(id)arg3 expectedResponseClass:(Class)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6 timeout:(double)arg7;
- (void)sendRequestWithParms:(id)arg1 serviceUrl:(id)arg2 httpMethod:(id)arg3 expectedResponseClass:(Class)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6 timeout:(double)arg7;
- (void)sendRequestWithParms:(id)arg1 serviceUrl:(id)arg2 httpMethod:(id)arg3 expectedResponseClass:(Class)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (long long)numberOfPendingOperationsOnQueue;
- (void)cancelAllQueuedOperations;
- (void)enqueueOperation:(id)arg1;
- (void)setUpReachabilityManager;
- (_Bool)isNetworkReachable;
- (void)setOperationQueueSuspended:(_Bool)arg1;
- (id)init;

@end

