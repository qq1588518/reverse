//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface QPolylineSegmentColor : NSObject
{
    int _startIndex;
    int _endIndex;
    UIColor *_color;
    UIColor *_borderColor;
    unsigned long long _indexOfColorPair;
}

@property(nonatomic) unsigned long long indexOfColorPair; // @synthesize indexOfColorPair=_indexOfColorPair;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) int startIndex; // @synthesize startIndex=_startIndex;
- (void).cxx_destruct;

@end

