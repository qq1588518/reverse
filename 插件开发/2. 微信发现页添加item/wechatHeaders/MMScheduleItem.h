//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MMScheduleItem : NSObject <NSCopying>
{
    NSString *_displayStr;
    double _timeInterval;
}

@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) NSString *displayStr; // @synthesize displayStr=_displayStr;
- (void).cxx_destruct;
- (id)initWithDisplayStr:(id)arg1 time:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

