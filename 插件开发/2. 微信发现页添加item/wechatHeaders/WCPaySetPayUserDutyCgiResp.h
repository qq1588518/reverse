//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPaySetPayUserDutyCgiResp : NSObject
{
    unsigned int _retcode;
    NSString *_retmsg;
}

+ (id)genFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *retmsg; // @synthesize retmsg=_retmsg;
@property(nonatomic) unsigned int retcode; // @synthesize retcode=_retcode;
- (void).cxx_destruct;

@end

