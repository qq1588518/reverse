//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGCDAsyncReadPacket, EAGCDAsyncSocketPreBuffer, EAGCDAsyncWritePacket, NSData, NSMutableArray, NSString, NSURL;
@protocol GCDAsyncSocketDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface EAccountGCDAsyncSocket : NSObject
{
    unsigned int flags;
    unsigned short config;
    id <GCDAsyncSocketDelegate> delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    int socket4FD;
    int socket6FD;
    int socketUN;
    NSURL *socketUrl;
    int stateIndex;
    NSData *connectInterface4;
    NSData *connectInterface6;
    NSData *connectInterfaceUN;
    NSObject<OS_dispatch_queue> *socketQueue;
    NSObject<OS_dispatch_source> *accept4Source;
    NSObject<OS_dispatch_source> *accept6Source;
    NSObject<OS_dispatch_source> *acceptUNSource;
    NSObject<OS_dispatch_source> *connectTimer;
    NSObject<OS_dispatch_source> *readSource;
    NSObject<OS_dispatch_source> *writeSource;
    NSObject<OS_dispatch_source> *readTimer;
    NSObject<OS_dispatch_source> *writeTimer;
    NSMutableArray *readQueue;
    NSMutableArray *writeQueue;
    EAGCDAsyncReadPacket *currentRead;
    EAGCDAsyncWritePacket *currentWrite;
    unsigned long long socketFDBytesAvailable;
    EAGCDAsyncSocketPreBuffer *preBuffer;
    CDStruct_4210025a streamContext;
    struct __CFReadStream *readStream;
    struct __CFWriteStream *writeStream;
    struct SSLContext *sslContext;
    EAGCDAsyncSocketPreBuffer *sslPreBuffer;
    unsigned long long sslWriteCachedLength;
    int sslErrCode;
    int lastSSLHandshakeError;
    double alternateAddressDelay;
    void *IsOnSocketQueueOrTargetQueueKey;
}

+ (_Bool)getHost:(id *)arg1 port:(unsigned short *)arg2 family:(char *)arg3 fromAddress:(id)arg4;
+ (_Bool)getHost:(id *)arg1 port:(unsigned short *)arg2 fromAddress:(id)arg3;
+ (_Bool)isIPv6Address:(id)arg1;
+ (_Bool)isIPv4Address:(id)arg1;
+ (unsigned short)portFromAddress:(id)arg1;
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (id)hostFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)lookupHost:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
+ (void)unscheduleCFStreams:(id)arg1;
+ (void)scheduleCFStreams:(id)arg1;
+ (void)cfstreamThread;
+ (void)stopCFStreamThreadIfNeeded;
+ (void)startCFStreamThreadIfNeeded;
+ (void)ignore:(id)arg1;
+ (id)gaiError:(int)arg1;
- (void).cxx_destruct;
- (struct SSLContext *)sslContext;
- (struct __CFWriteStream *)writeStream;
- (struct __CFReadStream *)readStream;
- (int)socket6FD;
- (int)socket4FD;
- (int)socketFD;
- (_Bool)openStreams;
- (void)removeStreamsFromRunLoop;
- (_Bool)addStreamsToRunLoop;
- (_Bool)registerForStreamCallbacksIncludingReadWrite:(_Bool)arg1;
- (_Bool)createReadAndWriteStream;
- (void)cf_startTLS;
- (void)cf_abortSSLHandshake:(id)arg1;
- (void)cf_finishSSLHandshake;
- (void)ssl_shouldTrustPeer:(_Bool)arg1 stateIndex:(int)arg2;
- (void)ssl_continueSSLHandshake;
- (void)ssl_startTLS;
- (int)sslWriteWithBuffer:(const void *)arg1 length:(unsigned long long *)arg2;
- (int)sslReadWithBuffer:(void *)arg1 length:(unsigned long long *)arg2;
- (void)maybeStartTLS;
- (void)startTLS:(id)arg1;
- (void)doWriteTimeoutWithExtension:(double)arg1;
- (void)doWriteTimeout;
- (void)setupWriteTimerWithTimeout:(double)arg1;
- (void)endCurrentWrite;
- (void)completeCurrentWrite;
- (void)doWriteData;
- (void)maybeDequeueWrite;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)doReadTimeoutWithExtension:(double)arg1;
- (void)doReadTimeout;
- (void)setupReadTimerWithTimeout:(double)arg1;
- (void)endCurrentRead;
- (void)completeCurrentRead;
- (void)doReadEOF;
- (void)doReadData;
- (void)flushSSLBuffers;
- (void)maybeDequeueRead;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 maxLength:(unsigned long long)arg5 tag:(long long)arg6;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)resumeWriteSource;
- (void)suspendWriteSource;
- (void)resumeReadSource;
- (void)suspendReadSource;
- (_Bool)usingSecureTransportForTLS;
- (_Bool)usingCFStreamForTLS;
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg1;
- (void)getInterfaceAddress4:(id *)arg1 address6:(id *)arg2 fromDescription:(id)arg3 port:(unsigned short)arg4;
@property(readonly) _Bool isSecure;
@property(readonly) _Bool isIPv6;
@property(readonly) _Bool isIPv4;
- (unsigned short)connectedPortFromSocket6:(int)arg1;
- (unsigned short)connectedPortFromSocket4:(int)arg1;
- (id)connectedHostFromSocket6:(int)arg1;
- (id)connectedHostFromSocket4:(int)arg1;
- (unsigned short)connectedPort6;
- (unsigned short)connectedPort4;
- (id)connectedHost6;
- (id)connectedHost4;
@property(readonly) unsigned short connectedPort;
@property(readonly) NSString *connectedHost;
@property(readonly) _Bool isConnected;
@property(readonly) _Bool isDisconnected;
- (id)otherError:(id)arg1;
- (id)connectionClosedError;
- (id)writeTimeoutError;
- (id)readTimeoutError;
- (id)readMaxedOutError;
- (id)connectTimeoutError;
- (id)sslError:(int)arg1;
- (id)errnoError;
- (id)errnoErrorWithReason:(id)arg1;
- (id)badParamError:(id)arg1;
- (id)badConfigError:(id)arg1;
- (void)disconnect;
- (void)closeWithError:(id)arg1;
- (void)doConnectTimeout;
- (void)endConnectTimeout;
- (void)startConnectTimeout:(double)arg1;
- (void)didNotConnect:(int)arg1 error:(id)arg2;
- (void)didConnect:(int)arg1;
- (_Bool)connectWithAddress4:(id)arg1 address6:(id)arg2 error:(id *)arg3;
- (void)closeUnusedSocket:(int)arg1;
- (void)closeSocket:(int)arg1;
- (void)connectSocket:(int)arg1 address:(id)arg2 stateIndex:(int)arg3;
- (int)createSocket:(int)arg1 connectInterface:(id)arg2 errPtr:(id *)arg3;
- (_Bool)bindSocket:(int)arg1 toInterface:(id)arg2 error:(id *)arg3;
- (void)lookup:(int)arg1 didFail:(id)arg2;
- (void)lookup:(int)arg1 didSucceedWithAddress4:(id)arg2 address6:(id)arg3;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 viaInterface:(id)arg3 withTimeout:(double)arg4 error:(id *)arg5;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)preConnectWithInterface:(id)arg1 error:(id *)arg2;
- (void)setAlternateAddressDelay:(double)arg1;
- (double)alternateAddressDelay;
@property(getter=isIPv4PreferredOverIPv6) _Bool IPv4PreferredOverIPv6;
@property(getter=isIPv6Enabled) _Bool IPv6Enabled;
@property(getter=isIPv4Enabled) _Bool IPv4Enabled;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2 synchronously:(_Bool)arg3;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue;
- (void)setDelegateQueue:(id)arg1 synchronously:(_Bool)arg2;
@property __weak id <GCDAsyncSocketDelegate> delegate;
- (void)setDelegate:(id)arg1 synchronously:(_Bool)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;

@end

