//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "WXErrorViewDelegate-Protocol.h"

@class NSString, NSURL, UIView, WXErrorView, WXSDKInstance;

@interface WXEmbedComponent : WXComponent <WXErrorViewDelegate>
{
    _Bool _createFinished;
    _Bool _renderFinished;
    WXSDKInstance *_embedInstance;
    UIView *_embedView;
    long long _visible;
    NSURL *_sourceURL;
    WXErrorView *_errorView;
}

@property(retain, nonatomic) WXErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(nonatomic) long long visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool renderFinished; // @synthesize renderFinished=_renderFinished;
@property(nonatomic) _Bool createFinished; // @synthesize createFinished=_createFinished;
@property(retain, nonatomic) UIView *embedView; // @synthesize embedView=_embedView;
@property(retain, nonatomic) WXSDKInstance *embedInstance; // @synthesize embedInstance=_embedInstance;
- (void).cxx_destruct;
- (void)observeInstanceState:(id)arg1;
- (void)onclickErrorView;
- (void)_frameDidCalculated:(_Bool)arg1;
- (void)_updateState:(long long)arg1;
- (void)_renderWithURL:(id)arg1;
- (void)_layoutEmbedView;
- (void)refreshWeex;
- (void)updateAttributes:(id)arg1;
- (void)updateStyles:(id)arg1;
- (void)viewDidLoad;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

