//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString;
@protocol WBStatusProtocol;

@interface YXExtPageDoubleVideoLiveLeftRightCard : WBPageCard
{
    _Bool _isIconShow;
    _Bool _redCouponExist;
    id <WBStatusProtocol> _status;
    NSString *_bottomLiveTitle;
    NSString *_bottomLiveTitleScheme;
    NSString *_recommendTitle;
    NSString *_position;
    NSString *_recommendIcon;
    NSString *_recommendBg;
    long long _anchorLevel;
    NSString *_anchorLevelIcon;
    NSString *_anchorPKIcon;
    NSString *_billboardIcon;
    NSString *_billboardText;
    NSString *_recommendBgColorStart;
    NSString *_recommendBgColorEnd;
    NSString *_redCouponUrl;
}

@property(copy, nonatomic) NSString *redCouponUrl; // @synthesize redCouponUrl=_redCouponUrl;
@property(nonatomic) _Bool redCouponExist; // @synthesize redCouponExist=_redCouponExist;
@property(copy, nonatomic) NSString *recommendBgColorEnd; // @synthesize recommendBgColorEnd=_recommendBgColorEnd;
@property(copy, nonatomic) NSString *recommendBgColorStart; // @synthesize recommendBgColorStart=_recommendBgColorStart;
@property(copy, nonatomic) NSString *billboardText; // @synthesize billboardText=_billboardText;
@property(copy, nonatomic) NSString *billboardIcon; // @synthesize billboardIcon=_billboardIcon;
@property(copy, nonatomic) NSString *anchorPKIcon; // @synthesize anchorPKIcon=_anchorPKIcon;
@property(copy, nonatomic) NSString *anchorLevelIcon; // @synthesize anchorLevelIcon=_anchorLevelIcon;
@property(nonatomic) long long anchorLevel; // @synthesize anchorLevel=_anchorLevel;
@property(copy, nonatomic) NSString *recommendBg; // @synthesize recommendBg=_recommendBg;
@property(copy, nonatomic) NSString *recommendIcon; // @synthesize recommendIcon=_recommendIcon;
@property(nonatomic) _Bool isIconShow; // @synthesize isIconShow=_isIconShow;
@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *recommendTitle; // @synthesize recommendTitle=_recommendTitle;
@property(retain, nonatomic) NSString *bottomLiveTitleScheme; // @synthesize bottomLiveTitleScheme=_bottomLiveTitleScheme;
@property(retain, nonatomic) NSString *bottomLiveTitle; // @synthesize bottomLiveTitle=_bottomLiveTitle;
@property(retain, nonatomic) id <WBStatusProtocol> status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

