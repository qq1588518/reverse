//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UITextField;

@interface WBShopOrderFooterView : UIView
{
    UILabel *_deliveryLabel;
    UILabel *_moneyLabel;
    UILabel *_messageLabel;
    UITextField *_messageTxtField;
    UILabel *_totalLabel;
}

@property(retain, nonatomic) UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) UITextField *messageTxtField; // @synthesize messageTxtField=_messageTxtField;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UILabel *deliveryLabel; // @synthesize deliveryLabel=_deliveryLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

