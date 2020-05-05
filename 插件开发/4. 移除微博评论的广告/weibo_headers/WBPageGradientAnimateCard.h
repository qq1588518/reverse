//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray;

@interface WBPageGradientAnimateCard : WBPageCard
{
    NSArray *_gradientAnimateItems;
    unsigned long long _leftPadding;
    unsigned long long _rightPadding;
    unsigned long long _topPadding;
    unsigned long long _bottomPadding;
}

+ (Class)tableViewCellClass;
+ (Class)viewClass;
@property(nonatomic) unsigned long long bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) unsigned long long topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) unsigned long long rightPadding; // @synthesize rightPadding=_rightPadding;
@property(nonatomic) unsigned long long leftPadding; // @synthesize leftPadding=_leftPadding;
@property(retain, nonatomic) NSArray *gradientAnimateItems; // @synthesize gradientAnimateItems=_gradientAnimateItems;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

