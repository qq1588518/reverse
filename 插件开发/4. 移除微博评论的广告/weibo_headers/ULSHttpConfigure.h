//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ULSHttpConfigure : NSObject
{
    long long _environmental;
    long long _serverTest;
}

+ (id)sharedHttpConfigure;
@property(nonatomic) long long serverTest; // @synthesize serverTest=_serverTest;
@property(nonatomic) long long environmental; // @synthesize environmental=_environmental;
- (id)thirdHttpServerForLog;
- (id)thirdHttpServer;
- (id)httpServer;
- (id)init;

@end

