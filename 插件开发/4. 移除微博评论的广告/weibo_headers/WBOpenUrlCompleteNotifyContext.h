//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOpenUrlContextBase.h"

@class NSDictionary, NSString;

@interface WBOpenUrlCompleteNotifyContext : WBOpenUrlContextBase
{
    NSString *_bizName;
    NSString *_openScheme;
    NSString *_remoteSignCode;
    NSDictionary *_checkParams;
    NSDictionary *_notifyParams;
}

@property(retain, nonatomic) NSDictionary *notifyParams; // @synthesize notifyParams=_notifyParams;
@property(retain, nonatomic) NSDictionary *checkParams; // @synthesize checkParams=_checkParams;
@property(copy, nonatomic) NSString *remoteSignCode; // @synthesize remoteSignCode=_remoteSignCode;
@property(copy, nonatomic) NSString *openScheme; // @synthesize openScheme=_openScheme;
@property(copy, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
- (void).cxx_destruct;
- (id)signCodeOfDictionary:(id)arg1;
- (void)startContext;
- (void)parseUrlAndRefreshValues:(id)arg1;

@end

