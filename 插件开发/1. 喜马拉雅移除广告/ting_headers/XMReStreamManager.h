//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMReBaseMangager.h"

#import "XMReSessionURLProtocolDelegate-Protocol.h"

@class NSString;

@interface XMReStreamManager : XMReBaseMangager <XMReSessionURLProtocolDelegate>
{
}

+ (id)sharedInstance;
- (void)stopStreamWorking;
- (void)startStreamWorking;
- (void)stopHttpRequest:(id)arg1;
- (void)startHttpRequest:(id)arg1;
- (_Bool)checkHttpRequestIsRunning:(id)arg1;
- (void)stopStreamURLProtocol:(struct streamURLPotocol *)arg1;
- (void)cancelStreamURLProtocol:(struct streamURLPotocol *)arg1;
- (_Bool)startStreamURLProtocol:(struct streamURLPotocol *)arg1;
- (_Bool)startStreamURLProtocol:(struct streamURLPotocol *)arg1 oldStream:(id)arg2;
- (void)urlProtocolDidEndRequest:(id)arg1;
- (_Bool)addAuthenticationToRequest:(struct __CFHTTPMessage *)arg1 withResponse:(struct __CFHTTPMessage *)arg2 isProxy:(_Bool)arg3;
- (void)urlProtocolNeedProxyConfigurationForHttpStream:(struct __CFReadStream *)arg1;
- (_Bool)urlProtocolNeedHttpAuthenHttpMessage:(struct __CFHTTPMessage *)arg1 httpResponse:(struct __CFHTTPMessage *)arg2 isProxy:(_Bool)arg3;
- (id)getHttpProxyDictinary;
- (void)setSteamProxyProperty:(struct __CFReadStream *)arg1 withProxyType:(id)arg2;
- (id)getSharedRequestSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

