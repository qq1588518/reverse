//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXTrueLoveBaseModule.h"

@class NSMutableArray, UIButton, UILabel;

@interface YXTrueLoveFansRankingModule : YXTrueLoveBaseModule
{
    UILabel *titleLabel;
    NSMutableArray *headsArray;
    UIButton *rankingButton;
    CDUnknownBlockType _tapAudienceBlock;
    CDUnknownBlockType _rankingTapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType rankingTapBlock; // @synthesize rankingTapBlock=_rankingTapBlock;
@property(copy, nonatomic) CDUnknownBlockType tapAudienceBlock; // @synthesize tapAudienceBlock=_tapAudienceBlock;
- (void).cxx_destruct;
- (void)tapAudience:(id)arg1;
- (double)height;
- (void)seeAllList;
- (void)setData:(id)arg1;
- (id)initWithWidth:(double)arg1 type:(long long)arg2 container:(id)arg3;

@end

