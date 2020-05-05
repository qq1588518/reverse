//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JSValue, NSArray, NSString, NSURL, WBXCallJSMethod;

@protocol WBXBridgeProtocol <NSObject>
@property(readonly, nonatomic) JSValue *exception;
- (void)resetEnvironment;
- (JSValue *)callJSMethod:(NSString *)arg1 args:(NSArray *)arg2;
- (void)executeJavascript:(NSString *)arg1;
- (void)executeJSFramework:(NSString *)arg1;

@optional
- (void)registerCallDomCommands:(NSDictionary * (^)(NSString *, NSArray *))arg1;
- (JSValue *)executeJavascript:(NSString *)arg1 withSourceURL:(NSURL *)arg2;
- (void)registerCallNativeModule:(NSInvocation * (^)(NSString *, NSString *, NSString *, NSArray *, NSDictionary *))arg1;
- (void)removeTimers:(NSString *)arg1;
- (void)unload;
- (void)executeJsMethod:(WBXCallJSMethod *)arg1;
@end

