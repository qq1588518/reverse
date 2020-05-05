//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageStatusCard.h"

@interface WBPageStatusTrendCard : WBPageStatusCard
{
    double _limitedTextHeight;
    double _contentViewWidth;
    unsigned long long _statusTrendStyle;
}

+ (Class)trendPageCardViewClass;
+ (Class)viewClass;
@property(nonatomic) unsigned long long statusTrendStyle; // @synthesize statusTrendStyle=_statusTrendStyle;
@property(readonly, nonatomic) double contentViewWidth; // @synthesize contentViewWidth=_contentViewWidth;
@property(nonatomic) double limitedTextHeight; // @synthesize limitedTextHeight=_limitedTextHeight;
- (_Bool)needBubbleBackgroundInTrend;
- (id)ownAnalysisParameters;
- (_Bool)trendCardIsFullScreen;
- (_Bool)trendCardIsScrollable;
- (_Bool)updateWithDictionary:(id)arg1;

@end

