//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSString, NSURL;

@interface YXLPKResultModel : YXModel
{
    long long _hero_rank_incr;
    long long _win_rank_incr;
    long long _pk_type;
    long long _score;
    long long _win_streak;
    long long _win;
    long long _level_incr;
    NSString *_pre_level_text;
    NSURL *_pre_star_icon;
    NSURL *_pre_level_icon;
    NSURL *_star_icon;
    NSURL *_level_icon;
    NSString *_level_text;
    long long _integral_change;
    long long _integral_rank_change;
    long long _total_integral;
    NSString *_level_incr_text;
    long long _monthly_first_random_pk;
    long long _sc;
}

@property(nonatomic) long long sc; // @synthesize sc=_sc;
@property(nonatomic) long long monthly_first_random_pk; // @synthesize monthly_first_random_pk=_monthly_first_random_pk;
@property(retain, nonatomic) NSString *level_incr_text; // @synthesize level_incr_text=_level_incr_text;
@property(nonatomic) long long total_integral; // @synthesize total_integral=_total_integral;
@property(nonatomic) long long integral_rank_change; // @synthesize integral_rank_change=_integral_rank_change;
@property(nonatomic) long long integral_change; // @synthesize integral_change=_integral_change;
@property(retain, nonatomic) NSString *level_text; // @synthesize level_text=_level_text;
@property(retain, nonatomic) NSURL *level_icon; // @synthesize level_icon=_level_icon;
@property(retain, nonatomic) NSURL *star_icon; // @synthesize star_icon=_star_icon;
@property(retain, nonatomic) NSURL *pre_level_icon; // @synthesize pre_level_icon=_pre_level_icon;
@property(retain, nonatomic) NSURL *pre_star_icon; // @synthesize pre_star_icon=_pre_star_icon;
@property(retain, nonatomic) NSString *pre_level_text; // @synthesize pre_level_text=_pre_level_text;
@property(nonatomic) long long level_incr; // @synthesize level_incr=_level_incr;
@property(nonatomic) long long win; // @synthesize win=_win;
@property(nonatomic) long long win_streak; // @synthesize win_streak=_win_streak;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(nonatomic) long long pk_type; // @synthesize pk_type=_pk_type;
@property(nonatomic) long long win_rank_incr; // @synthesize win_rank_incr=_win_rank_incr;
@property(nonatomic) long long hero_rank_incr; // @synthesize hero_rank_incr=_hero_rank_incr;
- (void).cxx_destruct;

@end

