//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface XMLiveEntRankCountDownView : UIView
{
    UIView *_countDownView;
    UILabel *_countDownLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) UIView *countDownView; // @synthesize countDownView=_countDownView;
- (void)refreshWithRemainMills:(unsigned long long)arg1;
- (void)initSubViews;
- (id)init;

@end

