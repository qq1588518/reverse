//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTBaseAdNetworkAdapterProtocol-Protocol.h"

@class UIColor, UIImage, UIView, UIWindow;

@protocol GDTSplashAdNetworkAdapterProtocol <GDTBaseAdNetworkAdapterProtocol>
@property(nonatomic) struct CGPoint skipButtonCenter;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(nonatomic) long long fetchDelay;
- (void)cancelLoad;
- (void)loadAdAndShowInWindow:(UIWindow *)arg1 withBottomView:(UIView *)arg2 skipView:(UIView *)arg3;
@end

