//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class WBMLGradientTextLabel, WBMLStrokeLine;

@interface WBMLStrokeButton : UIControl
{
    WBMLGradientTextLabel *_titleLabel;
    WBMLStrokeLine *_line;
    UIControl *_control;
}

@property(retain, nonatomic) UIControl *control; // @synthesize control=_control;
@property(retain, nonatomic) WBMLStrokeLine *line; // @synthesize line=_line;
@property(retain, nonatomic) WBMLGradientTextLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id actionObj;
- (void)setLineGradientColorStart:(id)arg1 endColor:(id)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

