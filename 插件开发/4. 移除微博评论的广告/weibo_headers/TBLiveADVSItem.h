//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveJSONModel.h"

@class NSString;

@interface TBLiveADVSItem : TBLiveJSONModel
{
    NSString *_missionId;
    long long _startTime;
    long long _endTime;
    NSString *_logoUrl;
    NSString *_shopId;
    NSString *_shopUrl;
    NSString *_text;
    NSString *_type;
    NSString *_uid;
}

@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *shopUrl; // @synthesize shopUrl=_shopUrl;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *missionId; // @synthesize missionId=_missionId;
- (void).cxx_destruct;

@end

