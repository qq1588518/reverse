//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSession.h>

@interface NSURLSession (HttpProxyExtend)
+ (id)didSessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)didSessionWithConfiguration:(id)arg1;
+ (id)didSharedSession;
+ (void)load;
- (void)didFinishTasksAndInvalidate;
- (void)didInvalidateAndCancel;
- (void)urlSessionRequesetExceptionInvoke:(id)arg1;
- (id)didUploadTaskWithStreamedRequest:(id)arg1;
- (id)didUploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)didUploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)proxySessionPerformWithOriginSel:(SEL)arg1 proxySel:(SEL)arg2 withRequest:(id)arg3 withParam:(id)arg4;
- (id)didDownloadTaskWithURL:(id)arg1;
- (id)didDownloadTaskWithRequest:(id)arg1;
- (id)didDataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)didDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)didDataTaskWithURL:(id)arg1;
- (id)didDataTaskWithRequest:(id)arg1;
@end

