//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSDate, NSString;

@interface XMIMCsInfo : XMModel
{
    NSString *_csIp;
    long long _csPort;
    NSDate *_cribStartTime;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSDate *cribStartTime; // @synthesize cribStartTime=_cribStartTime;
@property(nonatomic) long long csPort; // @synthesize csPort=_csPort;
@property(retain, nonatomic) NSString *csIp; // @synthesize csIp=_csIp;
- (void).cxx_destruct;

@end

