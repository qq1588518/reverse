//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveJSONModel.h"

@class NSArray, NSString;

@interface TBLiveAdLayerTimeLineModel : TBLiveJSONModel
{
    long long _timestamp;
    NSString *_txtInfo;
    NSArray *_imgUrlList;
}

@property(retain, nonatomic) NSArray *imgUrlList; // @synthesize imgUrlList=_imgUrlList;
@property(copy, nonatomic) NSString *txtInfo; // @synthesize txtInfo=_txtInfo;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;

@end

