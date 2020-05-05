//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMAdViewProtocol-Protocol.h"
#import "XMThirdPartAdViewUtilRootProtocol-Protocol.h"
#import "XMViewSupportRealExposureProtocol-Protocol.h"

@class NSString, XMAdItem, XMThirdPartAdViewUtil;

@interface XMBaseAdView : UIView <XMThirdPartAdViewUtilRootProtocol, XMAdViewProtocol, XMViewSupportRealExposureProtocol>
{
    XMAdItem *_adItem;
    XMThirdPartAdViewUtil *_thirdPartAdUtil;
    CDUnknownBlockType _commonAdViewClickAction;
    CDUnknownBlockType _commonAdViewDidCloseAction;
}

@property(copy, nonatomic) CDUnknownBlockType commonAdViewDidCloseAction; // @synthesize commonAdViewDidCloseAction=_commonAdViewDidCloseAction;
@property(copy, nonatomic) CDUnknownBlockType commonAdViewClickAction; // @synthesize commonAdViewClickAction=_commonAdViewClickAction;
@property(readonly, nonatomic) XMThirdPartAdViewUtil *thirdPartAdUtil; // @synthesize thirdPartAdUtil=_thirdPartAdUtil;
@property(retain, nonatomic) XMAdItem *adItem; // @synthesize adItem=_adItem;
- (void).cxx_destruct;
- (void)adViewShouldHideAction;
- (void)adViewDidClickAction;
- (void)clean;
- (void)viewDidExposureInWindow;
- (_Bool)isViewShowInWindow;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

