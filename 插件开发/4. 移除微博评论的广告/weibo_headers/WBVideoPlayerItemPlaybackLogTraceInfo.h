//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBVideoPlayerItemPlaybackLogTraceInfo : NSObject
{
    NSString *_name;
    NSString *_duration;
    NSString *_returnCode;
    NSString *_statusDescription;
}

@property(retain, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(retain, nonatomic) NSString *returnCode; // @synthesize returnCode=_returnCode;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end

