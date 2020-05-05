//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDownloadDelegate-Protocol.h"

@class NSString, NSURLSession, NSURLSessionDownloadTask;

@interface BU_ZFImageDownloader : NSObject <NSURLSessionDownloadDelegate>
{
    NSURLSession *_session;
    NSURLSessionDownloadTask *_task;
    unsigned long long _totalLength;
    unsigned long long _currentLength;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _callbackOnFinished;
}

@property(copy, nonatomic) CDUnknownBlockType callbackOnFinished; // @synthesize callbackOnFinished=_callbackOnFinished;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) unsigned long long currentLength; // @synthesize currentLength=_currentLength;
@property(nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(retain, nonatomic) NSURLSessionDownloadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)startDownloadImageWithUrl:(id)arg1 progress:(CDUnknownBlockType)arg2 finished:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

