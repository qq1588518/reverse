//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray, NSDictionary;

@interface WBPageRankListCard : WBPageCard
{
    NSArray *_ranklist;
    NSDictionary *_headerDict;
    NSDictionary *_footerDict;
}

+ (Class)viewClass;
@property(retain, nonatomic) NSDictionary *footerDict; // @synthesize footerDict=_footerDict;
@property(retain, nonatomic) NSDictionary *headerDict; // @synthesize headerDict=_headerDict;
@property(retain, nonatomic) NSArray *ranklist; // @synthesize ranklist=_ranklist;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

