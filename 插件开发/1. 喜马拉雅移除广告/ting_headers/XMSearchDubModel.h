//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMSearchDubModel : XMModel
{
    NSString *_coverPath;
    NSString *_name;
    NSString *_iting;
    long long _uid;
    long long _duration;
    long long _countPlay;
    long long _trackId;
    long long _dubCategoryId;
}

@property(nonatomic) long long dubCategoryId; // @synthesize dubCategoryId=_dubCategoryId;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
@property(nonatomic) long long countPlay; // @synthesize countPlay=_countPlay;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *iting; // @synthesize iting=_iting;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *coverPath; // @synthesize coverPath=_coverPath;
- (void).cxx_destruct;

@end

