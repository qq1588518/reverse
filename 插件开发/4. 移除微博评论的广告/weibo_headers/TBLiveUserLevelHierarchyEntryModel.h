//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveJSONModel.h"

@class NSArray, NSDictionary, NSString;

@interface TBLiveUserLevelHierarchyEntryModel : TBLiveJSONModel
{
    NSString *_scopeId;
    NSString *_subScopeId;
    NSString *_audienceExp;
    NSString *_audienceLevel;
    NSString *_expNeeded4NextLevel;
    NSString *_highestLevel;
    NSString *_briefUrl;
    NSString *_detailUrl;
    NSString *_weexUrl;
    NSArray *_rewards;
    NSArray *_levels;
    NSDictionary *_responeDict;
}

@property(retain, nonatomic) NSDictionary *responeDict; // @synthesize responeDict=_responeDict;
@property(retain, nonatomic) NSArray *levels; // @synthesize levels=_levels;
@property(copy, nonatomic) NSArray *rewards; // @synthesize rewards=_rewards;
@property(copy, nonatomic) NSString *weexUrl; // @synthesize weexUrl=_weexUrl;
@property(copy, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(copy, nonatomic) NSString *briefUrl; // @synthesize briefUrl=_briefUrl;
@property(copy, nonatomic) NSString *highestLevel; // @synthesize highestLevel=_highestLevel;
@property(copy, nonatomic) NSString *expNeeded4NextLevel; // @synthesize expNeeded4NextLevel=_expNeeded4NextLevel;
@property(copy, nonatomic) NSString *audienceLevel; // @synthesize audienceLevel=_audienceLevel;
@property(copy, nonatomic) NSString *audienceExp; // @synthesize audienceExp=_audienceExp;
@property(copy, nonatomic) NSString *subScopeId; // @synthesize subScopeId=_subScopeId;
@property(copy, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
- (void).cxx_destruct;

@end

