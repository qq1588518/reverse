//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, WXComponent, WXComponentValidateResult, WXModuleValidateResult, WXSDKInstance;

@protocol WXValidateProtocol <NSObject>
- (WXComponentValidateResult *)validateWithWXSDKInstance:(WXSDKInstance *)arg1 component:(NSString *)arg2 supercomponent:(WXComponent *)arg3;
- (WXModuleValidateResult *)validateWithWXSDKInstance:(WXSDKInstance *)arg1 module:(NSString *)arg2 method:(NSString *)arg3 args:(NSArray *)arg4 options:(NSDictionary *)arg5;
- (_Bool)needValidate:(NSURL *)arg1;
@end

