//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMVDataFileSourceDelegate-Protocol.h"
#import "XMVDataNetworkSourceDelegate-Protocol.h"

@class NSError, NSLock, NSString, XMVDataNetworkSource, XMVDataSourceQueue;
@protocol OS_dispatch_queue, XMVDataSourceManagerDelegate, XMVDataSourceProtocol;

@interface XMVDataSourceManager : NSObject <XMVDataFileSourceDelegate, XMVDataNetworkSourceDelegate>
{
    _Bool _didClosed;
    _Bool _didPrepared;
    _Bool _didCalledPrepare;
    _Bool _didCalledReceiveResponse;
    id <XMVDataSourceManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSError *_error;
    NSLock *_coreLock;
    XMVDataSourceQueue *_sourceQueue;
    id <XMVDataSourceProtocol> _currentSource;
    XMVDataNetworkSource *_currentNetworkSource;
}

@property(retain, nonatomic) XMVDataNetworkSource *currentNetworkSource; // @synthesize currentNetworkSource=_currentNetworkSource;
@property(retain, nonatomic) id <XMVDataSourceProtocol> currentSource; // @synthesize currentSource=_currentSource;
@property(retain, nonatomic) XMVDataSourceQueue *sourceQueue; // @synthesize sourceQueue=_sourceQueue;
@property(nonatomic) _Bool didCalledReceiveResponse; // @synthesize didCalledReceiveResponse=_didCalledReceiveResponse;
@property(nonatomic) _Bool didCalledPrepare; // @synthesize didCalledPrepare=_didCalledPrepare;
@property(retain, nonatomic) NSLock *coreLock; // @synthesize coreLock=_coreLock;
@property(readonly, nonatomic) _Bool didPrepared; // @synthesize didPrepared=_didPrepared;
@property(readonly, nonatomic) _Bool didClosed; // @synthesize didClosed=_didClosed;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <XMVDataSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)prepareNextNetworkSourceIfNeeded:(id)arg1;
- (id)sourceForPosition:(long long)arg1;
- (void)callbackForFailed:(id)arg1;
- (void)callbackForReceiveResponse:(id)arg1;
- (void)callbackForPrepared;
- (void)networkSourceHasUpdateDownloadSpeed:(id)arg1 speed:(double)arg2;
- (void)networkSource:(id)arg1 didFailed:(id)arg2;
- (void)networkSourceDidFinishedDownload:(id)arg1;
- (void)networkSourceHasAvailableData:(id)arg1;
- (void)networkSourceDidPrepared:(id)arg1;
- (void)fileSource:(id)arg1 didFailed:(id)arg2;
- (void)fileSourceDidPrepared:(id)arg1;
- (id)readDataFromPosition:(long long)arg1 size:(unsigned long long)arg2;
- (void)reloadSources;
- (void)close;
- (void)prepare;
- (void)putSource:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

