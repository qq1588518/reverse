//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCustomModalViewController.h"

#import "WBVipMinipayAlertViewDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, SNHTTPRequestOperationWrapper, WBCustomAlertOverlayWindow, WBVipMinipayAlertView;

@interface WBVipMinipayViewController : WBCustomModalViewController <WBVipMinipayAlertViewDelegate>
{
    WBCustomAlertOverlayWindow *_showWindow;
    WBVipMinipayAlertView *_minipayAlertView;
    NSDictionary *_paraDic;
    NSDictionary *_contextParaDic;
    NSMutableDictionary *_completeDic;
    SNHTTPRequestOperationWrapper *_httpRequest;
}

+ (void)showMinipayAlertViewWithPara:(id)arg1 contextPara:(id)arg2;
@property(nonatomic) __weak SNHTTPRequestOperationWrapper *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(retain, nonatomic) NSMutableDictionary *completeDic; // @synthesize completeDic=_completeDic;
@property(retain, nonatomic) NSDictionary *contextParaDic; // @synthesize contextParaDic=_contextParaDic;
@property(retain, nonatomic) NSDictionary *paraDic; // @synthesize paraDic=_paraDic;
@property(retain, nonatomic) WBVipMinipayAlertView *minipayAlertView; // @synthesize minipayAlertView=_minipayAlertView;
@property(retain, nonatomic) WBCustomAlertOverlayWindow *showWindow; // @synthesize showWindow=_showWindow;
- (void).cxx_destruct;
- (struct CGPoint)minipayAlertViewCenter;
- (void)dismiss;
- (void)show:(id)arg1;
- (void)minipayAlertView:(id)arg1 monthType:(id)arg2 payType:(id)arg3;
- (void)minipayAlertViewDidCanceled:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

