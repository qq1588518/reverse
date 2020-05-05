//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface XMMAWebViewPoolConfiguration : NSObject
{
    int _masterPreloadCount;
    int _slavePreloadCount;
    NSURL *_masterHtmlUrl;
    NSURL *_slaveHtmlUrl;
}

@property(nonatomic) int slavePreloadCount; // @synthesize slavePreloadCount=_slavePreloadCount;
@property(nonatomic) int masterPreloadCount; // @synthesize masterPreloadCount=_masterPreloadCount;
@property(copy, nonatomic) NSURL *slaveHtmlUrl; // @synthesize slaveHtmlUrl=_slaveHtmlUrl;
@property(copy, nonatomic) NSURL *masterHtmlUrl; // @synthesize masterHtmlUrl=_masterHtmlUrl;
- (void).cxx_destruct;
- (id)init;

@end

