//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GDTJsResponse : NSObject
{
    NSString *_callbackId;
    NSString *_message;
    long long _status;
    long long _keepStatus;
}

@property(nonatomic) long long keepStatus; // @synthesize keepStatus=_keepStatus;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
- (void).cxx_destruct;
- (id)ecapeString:(id)arg1;
- (id)encodedJsReponse;
- (id)initWithCallbackId:(id)arg1 message:(id)arg2 status:(long long)arg3 keepStatus:(long long)arg4;
- (id)initWithCallbackId:(id)arg1 message:(id)arg2 status:(long long)arg3;

@end

