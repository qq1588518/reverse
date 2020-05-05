//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "WBInternalWebView-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSURL, NSURLRequest, UIScrollView, UIView, WKNavigation;
@protocol WBInternalWebViewDelegate;

@interface WBWKInternalWebView : WKWebView <WKNavigationDelegate, WKUIDelegate, WBInternalWebView>
{
    struct {
        unsigned int shouldStartLoad:1;
        unsigned int didStartLoad:1;
        unsigned int didFinishLoad:1;
        unsigned int didFailLoad:1;
        unsigned int didUpdateProgress:1;
        unsigned int didReceiveTitle:1;
    } _delegateHas;
    _Bool _debugModeEnabled;
    _Bool _hasResetCookieStore;
    id <WBInternalWebViewDelegate> _internalDelegate;
    UIView *headerView;
    NSURLRequest *_currentRequest;
    WKNavigation *_currentNavigation;
    NSArray *_temporaryDisabledGestures;
    NSString *_redirectRequestDomain;
    NSMutableArray *_temporaryCookies;
}

+ (void)resetConfiguration:(id)arg1 withOption:(unsigned long long)arg2;
+ (id)defaultWebViewConfiguration;
@property(retain, nonatomic) NSMutableArray *temporaryCookies; // @synthesize temporaryCookies=_temporaryCookies;
@property(retain) NSString *redirectRequestDomain; // @synthesize redirectRequestDomain=_redirectRequestDomain;
@property(retain, nonatomic) NSArray *temporaryDisabledGestures; // @synthesize temporaryDisabledGestures=_temporaryDisabledGestures;
@property(nonatomic) _Bool hasResetCookieStore; // @synthesize hasResetCookieStore=_hasResetCookieStore;
@property(retain, nonatomic) WKNavigation *currentNavigation; // @synthesize currentNavigation=_currentNavigation;
@property(retain, nonatomic) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView;
@property(nonatomic) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
@property(nonatomic) id <WBInternalWebViewDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
- (void).cxx_destruct;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (void)_jsbridge_documentReady;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)insertCookieToRequestWithCookie:(id)arg1 webView:(id)arg2 AndNavigationAction:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)removeKeyValueObservers;
- (void)registerKeyValueObservers;
- (void)restoreDisabledUserInteractions;
- (void)temporaryDisableUserInteractions;
- (id)wb_userScripts;
- (void)wb_removeAllUserScipts;
- (void)wb_addUserScript:(id)arg1;
- (id)stringByEvaluatingJavaScriptSynchronously:(id)arg1;
- (id)buildSetCookieScriptStringWithCookie:(id)arg1;
- (void)updateCookieFromHttpCookieWithhDomainArray:(id)arg1;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
- (void)wb_goForward;
- (void)wb_goBack;
- (_Bool)wb_loading;
- (_Bool)wb_canGoForward;
- (_Bool)wb_canGoBack;
- (void)wb_stopLoading;
- (void)wb_reload;
@property(readonly, retain, nonatomic) NSURLRequest *request;
- (void)wb_loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)wb_loadRequest:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 configOption:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL;
@property(nonatomic) _Bool allowsBackForwardNavigationGestures;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double estimatedProgress;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, retain, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *title;

@end

