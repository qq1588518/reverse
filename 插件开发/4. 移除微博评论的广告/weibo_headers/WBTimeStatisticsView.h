//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface WBTimeStatisticsView : NSObject
{
    UIView *_topLine;
    UIView *_bottomLine;
    UIView *_markView;
}

@property(retain, nonatomic) UIView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
- (void).cxx_destruct;
- (void)removeAllSubViewsFromSuperView;
- (id)init;

@end

