//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKMovie.h"

@class MovieSDKRankButtonInfo, NSNumber, NSString;

@interface MovieSDKMovieInRankHotPoll : MovieSDKMovie
{
    NSString *_rank_score;
    NSString *_topic_hot_count;
    NSNumber *_rank;
    MovieSDKRankButtonInfo *_buttonInfo;
    MovieSDKRankButtonInfo *_clickedButtonInfo;
    NSString *_ext_topic_hot_count;
    NSString *_ext_ticket_rate;
    NSString *_ext_score_count;
    NSString *_ext_hot_score;
    NSString *_link;
}

@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *ext_hot_score; // @synthesize ext_hot_score=_ext_hot_score;
@property(copy, nonatomic) NSString *ext_score_count; // @synthesize ext_score_count=_ext_score_count;
@property(copy, nonatomic) NSString *ext_ticket_rate; // @synthesize ext_ticket_rate=_ext_ticket_rate;
@property(copy, nonatomic) NSString *ext_topic_hot_count; // @synthesize ext_topic_hot_count=_ext_topic_hot_count;
@property(retain, nonatomic) MovieSDKRankButtonInfo *clickedButtonInfo; // @synthesize clickedButtonInfo=_clickedButtonInfo;
@property(retain, nonatomic) MovieSDKRankButtonInfo *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
@property(retain, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
@property(copy, nonatomic) NSString *topic_hot_count; // @synthesize topic_hot_count=_topic_hot_count;
@property(copy, nonatomic) NSString *rank_score; // @synthesize rank_score=_rank_score;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

