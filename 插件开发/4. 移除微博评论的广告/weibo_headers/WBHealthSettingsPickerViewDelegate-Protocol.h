//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBHealthSettingsPickerView;

@protocol WBHealthSettingsPickerViewDelegate <NSObject>
- (NSString *)healthSettingsPickerView:(WBHealthSettingsPickerView *)arg1 stringForItem:(long long)arg2;
- (long long)numberOfItemsInHealthSettingsPickerView:(WBHealthSettingsPickerView *)arg1;
@end

