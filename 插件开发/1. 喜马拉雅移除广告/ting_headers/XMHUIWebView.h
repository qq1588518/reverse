//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

#import "XMHWebViewMethodProtocol-Protocol.h"

@class NSString, NSURL, UIScrollView;

@interface XMHUIWebView : UIWebView <XMHWebViewMethodProtocol>
{
}

- (void)xmhRemoveAllUserScripts;
- (void)xmhAddUserScript:(id)arg1;
- (void)xmhRemoveScriptMessageHandlerForName:(id)arg1;
- (void)xmhAddScriptMessageHandler:(id)arg1 name:(id)arg2;
- (void)prepareForNoCrashes;
- (id)internalView;
- (void)xmhEvaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)locationURL:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSURL *url;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double estimatedProgress;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

