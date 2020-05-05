//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TBLiveWebViewLoaderDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface TBLiveWebContainerManager : NSObject <TBLiveWebViewLoaderDelegate>
{
    NSMutableArray *_webViewModelArray;
    NSString *_liveId;
}

+ (id)moduleNameWithType:(id)arg1;
+ (_Bool)isWeexRender:(id)arg1;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSMutableArray *webViewModelArray; // @synthesize webViewModelArray=_webViewModelArray;
- (void).cxx_destruct;
- (void)commitFailWithPage:(id)arg1 monitorPoint:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4 args:(id)arg5;
- (void)commitSuccessWithPage:(id)arg1 monitorPoint:(id)arg2 args:(id)arg3;
- (void)webViewLoader:(id)arg1 didCloseWebView:(id)arg2;
- (void)webViewLoader:(id)arg1 didTimeOutRenderWebView:(id)arg2;
- (void)webViewLoader:(id)arg1 didJSRuntimeWebView:(id)arg2 error:(id)arg3;
- (void)webViewLoader:(id)arg1 didFailedRenderWebView:(id)arg2 error:(id)arg3;
- (void)webViewLoader:(id)arg1 didSuccessRenderWebView:(id)arg2;
- (void)webViewLoader:(id)arg1 didFailedLoadWebView:(id)arg2 error:(id)arg3;
- (void)webViewLoader:(id)arg1 didFinishLoadWebView:(id)arg2;
- (void)webViewLoader:(id)arg1 didStartLoadWebView:(id)arg2;
- (void)webViewLoader:(id)arg1 didAddWebView:(id)arg2;
- (id)loaderWithRenderView:(id)arg1;
- (id)loaderWithBaseView:(id)arg1;
- (id)loaderWithView:(id)arg1;
- (void)pushComponentEvent:(id)arg1;
- (void)unSubscribeMessage:(id)arg1 forWebView:(id)arg2;
- (void)subscribeMessage:(id)arg1 forWebView:(id)arg2;
- (void)bringWebViewToFront:(id)arg1;
- (id)webViewLoaderIsLoadingOrLoadedWithUrl:(id)arg1;
- (id)webViewLoaderWithUrl:(id)arg1;
- (id)findWebViewWithUrl:(id)arg1;
- (_Bool)webViewIsOpeningOrOpened:(id)arg1;
- (void)renderSuccess:(id)arg1;
- (void)pushLiveInactivityEvent:(id)arg1;
- (void)pushLiveActivityEvent:(id)arg1;
- (void)pushContainerHideEvent:(id)arg1;
- (void)pushContainerShowEvent:(id)arg1;
- (void)pushScreenFlippedEvent:(id)arg1;
- (void)pushMediaPlayerEvent:(id)arg1 data:(id)arg2;
- (void)pushScreenOrientationEvent:(id)arg1;
- (void)pushMemoryEvent:(id)arg1;
- (void)pushMediaEvent:(id)arg1;
- (void)pushMessageEvent:(id)arg1;
- (void)pushActionReportEvent:(id)arg1;
- (void)setWebViewFrame:(struct CGRect)arg1 url:(id)arg2;
- (struct CGRect)getWebViewFrameWithUrl:(id)arg1;
- (void)hideWebView:(id)arg1;
- (void)showWebView:(id)arg1;
- (void)setUserInteractionEnabled:(id)arg1 view:(id)arg2;
- (void)setModalThreshold:(double)arg1 view:(id)arg2;
- (void)closeAllWebView;
- (void)closeWebView:(id)arg1 animation:(_Bool)arg2;
- (void)openWebViewWithUrl:(id)arg1 frame:(struct CGRect)arg2 vc:(id)arg3 params:(id)arg4 failedCallback:(CDUnknownBlockType)arg5 successCallback:(CDUnknownBlockType)arg6 accessPoint:(id)arg7;
- (void)openWebViewWithUrl:(id)arg1 frame:(struct CGRect)arg2 vc:(id)arg3 feedId:(id)arg4 enterAnimation:(unsigned long long)arg5 exitAnimation:(unsigned long long)arg6 isModal:(_Bool)arg7 loadingAnimate:(_Bool)arg8 hideWhenClickModal:(_Bool)arg9 onlyOneOpen:(_Bool)arg10 rendType:(id)arg11 bizData:(id)arg12 failedCallback:(CDUnknownBlockType)arg13 successCallback:(CDUnknownBlockType)arg14 accessPoint:(id)arg15;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

