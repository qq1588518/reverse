//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMUIViewControllerExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "XMailCommitBindCgiDelegate-Protocol.h"
#import "XMailPrepareBindCgiDelegate-Protocol.h"

@class MMUIViewController, NSString, XMailCommitBindCgi;
@protocol XMailBindMailControlLogicDelegate;

@interface XMailBindMailControlLogic : MMObject <MMWebViewDelegate, XMailCommitBindCgiDelegate, MMUIViewControllerExt, XMailPrepareBindCgiDelegate>
{
    id <XMailBindMailControlLogicDelegate> _delegate;
    MMUIViewController *_rootViewController;
    NSString *_defaultMailAddr;
    XMailCommitBindCgi *_commitBindCgi;
}

@property(retain, nonatomic) XMailCommitBindCgi *commitBindCgi; // @synthesize commitBindCgi=_commitBindCgi;
@property(retain, nonatomic) NSString *defaultMailAddr; // @synthesize defaultMailAddr=_defaultMailAddr;
@property(nonatomic) __weak MMUIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <XMailBindMailControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onXMailPrepareBindCgi:(id)arg1 success:(_Bool)arg2 loginUrl:(id)arg3 wxRegMailAddr:(id)arg4 wxMailRegUrl:(id)arg5 wxMailHeadUrl:(id)arg6;
- (void)onXMailCommitBindCgiSuccess:(id)arg1 mailAddr:(id)arg2;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onWebViewClickClose:(id)arg1;
- (void)MMUIViewControllerDidBePoped:(id)arg1;
- (void)MMUIViewControllerDidBeDismissed:(id)arg1;
- (void)exitIfBackToRootVC;
- (void)checkBeforeSwitchToMailAddr:(id)arg1 completionblock:(CDUnknownBlockType)arg2;
- (void)startCommitBindWxRegMailAddr:(id)arg1 fromViewController:(id)arg2;
- (void)stopLoading;
- (void)startLoading;
- (id)currentViewController;
- (void)showLoginMailWebViewWithUrl:(id)arg1 fromViewController:(id)arg2;
- (void)startLogic;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

