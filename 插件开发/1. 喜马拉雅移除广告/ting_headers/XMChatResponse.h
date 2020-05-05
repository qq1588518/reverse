//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, XMNRequest;

@interface XMChatResponse : NSObject
{
    NSString *_responseString;
    NSDictionary *_responseDictionary;
    long long _code;
    NSString *_message;
    NSDictionary *_data;
    NSNumber *_hasMore;
    long long _pageId;
    NSArray *_list;
    XMNRequest *_request;
    NSData *_responseData;
}

@property(readonly, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(readonly, nonatomic) XMNRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)isLocalError;
- (id)remoteErrorHintString;
- (id)errorHintString;
- (id)description;
@property(readonly, nonatomic) NSArray *list;
@property(readonly, nonatomic) long long pageId;
@property(readonly, nonatomic) _Bool hasMore;
@property(readonly, nonatomic) NSDictionary *data;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) long long code;
@property(readonly, nonatomic) NSDictionary *responseDictionary;
@property(readonly, nonatomic) NSString *responseString;
- (id)initWithResponseObject:(id)arg1 request:(id)arg2;

@end

