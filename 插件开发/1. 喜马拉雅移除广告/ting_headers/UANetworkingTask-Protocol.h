//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURLRequest;

@protocol UANetworkingTask <NSObject>
@property(readonly, copy, nonatomic) NSString *taskId;
- (void)cancel;
- (void)beginNetworkingTaskWithRequest:(NSURLRequest *)arg1 completion:(void (^)(NSHTTPURLResponse *, NSData *, NSError *))arg2;

@optional
@property(copy, nonatomic) NSDictionary *certInfo;
@property(nonatomic) _Bool cellularTunnel;
@end

