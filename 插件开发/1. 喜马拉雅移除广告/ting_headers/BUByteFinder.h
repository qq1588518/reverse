//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BUByteFinder : NSObject
{
    NSString *_did;
    NSString *_dc;
}

+ (id)sdkVersion;
+ (id)host_appid;
+ (id)appName;
+ (id)appID;
+ (void)startHeimdallr;
+ (void)startLogsdkWithDC:(id)arg1 did:(id)arg2;
+ (id)sharedByteFinder;
@property(copy, nonatomic) NSString *dc; // @synthesize dc=_dc;
@property(copy, nonatomic) NSString *did; // @synthesize did=_did;
- (void).cxx_destruct;

@end

