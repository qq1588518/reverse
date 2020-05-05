//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString, WKWebView;

@interface TCWebViewLoadJs : NSObject <WKNavigationDelegate>
{
    NSString *_key;
    NSString *_openId;
    NSString *_appId;
    WKWebView *_webView;
}

+ (void)clear;
+ (id)getInstance;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)dealloc;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)loadJS:(id)arg1 openId:(id)arg2 andKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

