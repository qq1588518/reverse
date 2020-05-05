//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKScriptMessageHandler-Protocol.h"

@class NSString, WKWebView, XMXMLHttpRequestHandler;

@interface WKScriptMsgHandler : NSObject <WKScriptMessageHandler>
{
    WKWebView *_webView;
    XMXMLHttpRequestHandler *_xmlHandler;
}

@property(retain, nonatomic) XMXMLHttpRequestHandler *xmlHandler; // @synthesize xmlHandler=_xmlHandler;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)convertMessageFromMessageJson:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

