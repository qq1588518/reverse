//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSMutableURLRequest, NSURLResponse;
@protocol WBFPlayerNetworkTaskMetrics, WBFPlayerNetworking;

@protocol WBFPlayerNetworkerClient <NSObject>

@optional
- (void)playerNetworker:(id <WBFPlayerNetworking>)arg1 didCollectTaskMetrics:(id <WBFPlayerNetworkTaskMetrics>)arg2;
- (void)playerNetworker:(id <WBFPlayerNetworking>)arg1 didFailWithError:(NSError *)arg2;
- (void)playerNetworkerDidFinishLoading:(id <WBFPlayerNetworking>)arg1;
- (void)playerNetworker:(id <WBFPlayerNetworking>)arg1 didLoadData:(NSData *)arg2;
- (void)playerNetworker:(id <WBFPlayerNetworking>)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)playerNetworker:(id <WBFPlayerNetworking>)arg1 willRedirectToRequest:(NSMutableURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end

