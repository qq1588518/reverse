//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSHTTPURLResponse, NSString, NSURLRequest, NSURLSessionTask;

@interface BUBaseRequest : NSObject
{
    NSURLSessionTask *_requestTask;
    NSData *_responseData;
    id _responseJSONObject;
    id _responseObject;
    NSString *_responseString;
    NSError *_error;
    long long _requestMethod;
    NSData *_httpBody;
    CDUnknownBlockType _successCompletionBlock;
    CDUnknownBlockType _failureCompletionBlock;
    CDUnknownBlockType _constructingBodyBlock;
    long long _requestPriority;
}

@property(nonatomic) long long requestPriority; // @synthesize requestPriority=_requestPriority;
@property(copy, nonatomic) CDUnknownBlockType constructingBodyBlock; // @synthesize constructingBodyBlock=_constructingBodyBlock;
@property(copy, nonatomic) CDUnknownBlockType failureCompletionBlock; // @synthesize failureCompletionBlock=_failureCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType successCompletionBlock; // @synthesize successCompletionBlock=_successCompletionBlock;
@property(retain, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property(nonatomic) long long requestMethod; // @synthesize requestMethod=_requestMethod;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) id responseObject; // @synthesize responseObject=_responseObject;
@property(retain, nonatomic) id responseJSONObject; // @synthesize responseJSONObject=_responseJSONObject;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLSessionTask *requestTask; // @synthesize requestTask=_requestTask;
- (void).cxx_destruct;
- (_Bool)useCDN;
- (_Bool)allowsCellularAccess;
- (id)requestArgument;
- (double)requestTimeoutInterval;
- (id)requestHeaderFieldValueDictionary;
- (id)baseUrl;
- (id)cdnUrl;
- (id)requestUrl;
- (unsigned long long)bu_requestCachePolicy;
- (long long)responseSerializerType;
- (long long)requestSerializerType;
- (void)clearCompletionBlock;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)startWithCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)start;
@property(readonly, nonatomic, getter=isExecuting) _Bool executing;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) NSURLRequest *originalRequest;
@property(readonly, nonatomic) NSURLRequest *currentRequest;
- (id)responseHeaders;
@property(readonly, nonatomic) long long responseStatusCode;
@property(readonly, nonatomic) NSHTTPURLResponse *response;

@end

