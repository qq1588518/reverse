//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol MongooseEventProtocol <NSObject>
- (long long)MG_commandReceived:(NSString *)arg1 usingSequenceNumber:(long long)arg2 withPayload:(NSData *)arg3 withRequestInfo:(struct NSObject *)arg4;
- (void)MG_noConnectionPresent;

@optional
- (void)didReceiveBroadcastWithData:(id)arg1 hupConnections:(NSArray *)arg2;
@end

