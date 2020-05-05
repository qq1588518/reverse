//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSError, NSMutableData, NSString, UIActivityIndicatorView, WKWebView;
@protocol TCWebViewControllerDelegate;

@interface TCWebViewController : UIViewController <WKUIDelegate, WKNavigationDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    int _nloadCount;
    WKWebView *_webview;
    NSString *_webTitle;
    NSString *_requestURLStr;
    NSError *_error;
    id <TCWebViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_activityIndicatorView;
    _Bool _finished;
    NSMutableData *_theData;
    unsigned long long _retryCount;
}

@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSMutableData *theData; // @synthesize theData=_theData;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) id <TCWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *requestURLStr; // @synthesize requestURLStr=_requestURLStr;
@property(retain, nonatomic) NSString *webTitle; // @synthesize webTitle=_webTitle;
@property(retain, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadReqURL;
- (void)viewDidLoad;
- (void)doClose;
- (void)stopLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

