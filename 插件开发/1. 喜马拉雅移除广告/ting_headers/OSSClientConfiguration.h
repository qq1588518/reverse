//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface OSSClientConfiguration : NSObject
{
    _Bool _enableBackgroundTransmitService;
    unsigned int _maxRetryCount;
    NSString *_backgroundSesseionIdentifier;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    NSString *_proxyHost;
    NSNumber *_proxyPort;
}

@property(retain, nonatomic) NSNumber *proxyPort; // @synthesize proxyPort=_proxyPort;
@property(retain, nonatomic) NSString *proxyHost; // @synthesize proxyHost=_proxyHost;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(retain, nonatomic) NSString *backgroundSesseionIdentifier; // @synthesize backgroundSesseionIdentifier=_backgroundSesseionIdentifier;
@property(nonatomic) _Bool enableBackgroundTransmitService; // @synthesize enableBackgroundTransmitService=_enableBackgroundTransmitService;
@property(nonatomic) unsigned int maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
- (void).cxx_destruct;
- (id)init;

@end

