//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface BUAdCallListenModel : NSObject
{
    _Bool _isWebCall;
    _Bool _toListen;
    NSString *_ad_id;
    NSString *_log_extra;
    NSString *_position;
    NSDate *_dailTime;
    NSNumber *_dailActionType;
}

@property(nonatomic) _Bool toListen; // @synthesize toListen=_toListen;
@property(nonatomic) _Bool isWebCall; // @synthesize isWebCall=_isWebCall;
@property(retain, nonatomic) NSNumber *dailActionType; // @synthesize dailActionType=_dailActionType;
@property(retain, nonatomic) NSDate *dailTime; // @synthesize dailTime=_dailTime;
@property(copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *log_extra; // @synthesize log_extra=_log_extra;
@property(copy, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
- (void).cxx_destruct;
- (id)init;

@end

