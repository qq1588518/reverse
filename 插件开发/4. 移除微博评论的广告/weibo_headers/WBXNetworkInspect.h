//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBXNetworkInspect : NSObject
{
}

+ (void)loadFakeFailed:(unsigned long long)arg1 requestInstance:(id)arg2;
+ (void)sendFakeRequestWithDocumentURL:(id)arg1 requestInstance:(id)arg2;
+ (id)uniqueRequestIdentifier:(id)arg1;
+ (id)WBXDebuggerNetworkTimeStamp;
+ (void)loadFailed:(id)arg1 requestInstance:(id)arg2;
+ (void)receivedResponse:(id)arg1 requestInstance:(id)arg2;
+ (void)loadFinished:(id)arg1 responseObject:(id)arg2 requestInstance:(id)arg3;
+ (void)sendRequest:(id)arg1 documentURL:(id)arg2 requestInstance:(id)arg3;

@end

