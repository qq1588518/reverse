//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface XMMAInvokeURLInfo : NSObject
{
    NSString *_schemeName;
    NSString *_version;
    NSString *_interfaceName;
    NSString *_apiName;
    NSDictionary *_params;
    NSString *_callback;
}

+ (id)invokeURLInfoWithURLString:(id)arg1;
@property(copy, nonatomic) NSString *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *schemeName; // @synthesize schemeName=_schemeName;
- (void).cxx_destruct;
- (id)description;

@end

