//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMVCProgressSlider.h"

@class UILabel, UIView;

@interface XMVCTipsProgressSlider : XMVCProgressSlider
{
    id _obj;
    UIView *_titleView;
    UILabel *_valTipLabel;
}

@property(retain, nonatomic) UILabel *valTipLabel; // @synthesize valTipLabel=_valTipLabel;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
- (void).cxx_destruct;
- (void)valueChanged;
- (struct CGPoint)tipLabelCenter;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateStatusWithEnabled:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)customInit;
- (id)init;

@end

