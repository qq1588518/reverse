//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, VITask;

@protocol VIVersionStrategy <NSObject>
- (void)updateTask:(VITask *)arg1 withToken:(NSString *)arg2 andVerifyId:(NSString *)arg3;
- (NSString *)queryInitKeyWithParams:(NSDictionary *)arg1;
- (void)checkKeyParams:(NSDictionary *)arg1 onComplete:(void (^)(NSDictionary *))arg2;
@end

