//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class UILabel;

@interface VoipDescriptionButton : MMUIButton
{
    UILabel *m_bottomDescriptionLabel;
}

@property(retain, nonatomic) UILabel *m_bottomDescriptionLabel; // @synthesize m_bottomDescriptionLabel;
- (void).cxx_destruct;
- (double)totalHeight;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2;
- (void)setBottomTextColor:(id)arg1;
- (void)dealloc;

@end

