//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch;

@interface AuthSettingCell : UITableViewCell
{
    int _per;
    UISwitch *_swc;
    CDUnknownBlockType _onSwitch;
}

@property(copy, nonatomic) CDUnknownBlockType onSwitch; // @synthesize onSwitch=_onSwitch;
@property(retain, nonatomic) UISwitch *swc; // @synthesize swc=_swc;
@property(nonatomic) int per; // @synthesize per=_per;
- (void).cxx_destruct;
- (void)_switchChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

