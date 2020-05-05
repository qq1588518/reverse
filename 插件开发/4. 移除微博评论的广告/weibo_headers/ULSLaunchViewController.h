//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ULSViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIActivityIndicatorView, UIImageView, ULSPublishLiveViewController, ULSWBLoginModel;
@protocol ULSLaunchViewControllerDelegate;

@interface ULSLaunchViewController : ULSViewController <UITextFieldDelegate>
{
    _Bool _isBlackStatusBar;
    id <ULSLaunchViewControllerDelegate> _delegate;
    UIImageView *_backgorundImageView;
    ULSWBLoginModel *_loginModel;
    UIActivityIndicatorView *_indicatorView;
    struct NSMutableDictionary *_paras;
    ULSPublishLiveViewController *_publishLiveVC;
}

@property(nonatomic) _Bool isBlackStatusBar; // @synthesize isBlackStatusBar=_isBlackStatusBar;
@property(retain, nonatomic) ULSPublishLiveViewController *publishLiveVC; // @synthesize publishLiveVC=_publishLiveVC;
@property(retain, nonatomic) NSMutableDictionary *paras; // @synthesize paras=_paras;
@property(nonatomic) __weak UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) ULSWBLoginModel *loginModel; // @synthesize loginModel=_loginModel;
@property(nonatomic) __weak UIImageView *backgorundImageView; // @synthesize backgorundImageView=_backgorundImageView;
@property(nonatomic) __weak id <ULSLaunchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)close;
- (void)instanceWBCubeLiveProtocol;
- (void)stopAnimated;
- (void)getConfigMessage;
- (id)openLiveRoomId:(long long)arg1 loginModel:(id)arg2 openBlock:(CDUnknownBlockType)arg3 close:(CDUnknownBlockType)arg4;
- (void)login;
- (void)viewDidLoad;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

