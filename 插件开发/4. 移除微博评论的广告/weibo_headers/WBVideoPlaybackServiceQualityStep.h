//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBVideoPlaybackServiceQualityStep : NSObject
{
    double _time;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithName:(id)arg1 time:(double)arg2;

@end

