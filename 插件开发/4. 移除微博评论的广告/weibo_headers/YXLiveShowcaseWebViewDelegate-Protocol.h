//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WBAlertController, YXLiveShowcaseWebView;

@protocol YXLiveShowcaseWebViewDelegate <NSObject>

@optional
- (void)showcaseAwardWebView:(YXLiveShowcaseWebView *)arg1 didReceiveMessage:(NSDictionary *)arg2;
- (void)loadRequestFinishWebView:(YXLiveShowcaseWebView *)arg1;
- (void)getWkViewTitle:(NSString *)arg1;
- (void)showcaseWebView:(YXLiveShowcaseWebView *)arg1 didReceiveMessage:(NSDictionary *)arg2;
- (void)showAlertController:(WBAlertController *)arg1;
@end

