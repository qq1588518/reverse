//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WBVideoCachingItem;

@interface WBVideoCachingLogger : NSObject
{
    WBVideoCachingItem *_item;
    double _startTime;
    double _endTime;
    NSString *_cacheKey;
    NSString *_mid;
    NSString *_oid;
    NSString *_videoUrl;
    long long _videoQuality;
    long long _resultCode;
    long long _errorCode;
    NSString *_errorMsg;
    long long _fileSize;
    NSDictionary *_extraParams;
}

@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) long long videoQuality; // @synthesize videoQuality=_videoQuality;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *oid; // @synthesize oid=_oid;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) __weak WBVideoCachingItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)upload;
- (id)initWithItem:(id)arg1;

@end

