//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSString;

@interface XAVideoSendDanmuParam : NSObject <XMMANativeMethodParamProtocol>
{
    NSString *_videoId;
    NSString *_slaveId;
    NSString *_text;
    NSString *_color;
}

@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

