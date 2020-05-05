//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AQHAPMessengerDelegate-Protocol.h"
#import "MongooseEventProtocol-Protocol.h"
#import "SocksDelegate-Protocol.h"

@class AQHAP, MongooseDaemon, NSString, SocksServer;
@protocol ABQMipNetIPInterface, AQHAPCommandControlDelegate;

@interface TCPIPManager : NSObject <MongooseEventProtocol, SocksDelegate, AQHAPMessengerDelegate>
{
    struct NSObject *_interface;
    MongooseDaemon *_server;
    SocksServer *_proxy;
    id <AQHAPCommandControlDelegate> _delegate;
    AQHAP *_hap;
}

@property(retain) AQHAP *hap; // @synthesize hap=_hap;
@property(retain) id <AQHAPCommandControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) SocksServer *proxy; // @synthesize proxy=_proxy;
@property(retain) MongooseDaemon *server; // @synthesize server=_server;
@property(retain, nonatomic) NSObject<ABQMipNetIPInterface> *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;
- (void)statusDidChangeTo:(_Bool)arg1 forAppWithName:(id)arg2;
- (void)startProfileSync;
- (void)flushHMIMessageQueue;
- (void)didReceiveBroadcastWithData:(id)arg1 hupConnections:(id)arg2;
- (void)sendBroadcastToConnectedAppsWithData:(id)arg1;
- (void)poke;
- (_Bool)shouldGrantSocksRequest:(id)arg1;
- (id)socksPassword;
- (id)socksUsername;
- (_Bool)sendMessageWithPayload:(id)arg1 contentType:(id)arg2 fromAppWithName:(id)arg3;
- (_Bool)sendResponseWithSequenceNumber:(int)arg1 payload:(id)arg2 contentType:(id)arg3 fromAppWithName:(id)arg4;
- (long long)MG_commandReceived:(id)arg1 usingSequenceNumber:(long long)arg2 withPayload:(id)arg3 withRequestInfo:(struct NSObject *)arg4;
- (void)MG_noConnectionPresent;
- (long long)LWIP_sendMessageofType:(id)arg1 usingSequenceNumber:(long long)arg2 withPayload:(id)arg3 fromAppWithName:(id)arg4;
- (id)initWithHAP:(id)arg1 httpServer:(struct NSObject *)arg2 messageDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

