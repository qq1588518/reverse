//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class XMSubsidyExchangeActivity;

@interface XMAblumSubsidyExchangeView : UIView
{
    XMSubsidyExchangeActivity *_activity;
    CDUnknownBlockType _buttonDidClick;
    CDUnknownBlockType _viewShouldHide;
}

@property(copy, nonatomic) CDUnknownBlockType viewShouldHide; // @synthesize viewShouldHide=_viewShouldHide;
@property(copy, nonatomic) CDUnknownBlockType buttonDidClick; // @synthesize buttonDidClick=_buttonDidClick;
@property(retain, nonatomic) XMSubsidyExchangeActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)albumDiscountClick:(id)arg1;
- (void)updateUIForAlbumSubsidyExchange;

@end

