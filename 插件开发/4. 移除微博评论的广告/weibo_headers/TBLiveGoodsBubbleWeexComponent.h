//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "TBLiveColleagueProtocol-Protocol.h"
#import "WXModuleProtocol-Protocol.h"

@class NSString, TBLiveGoodsShowCaseView, TBLiveInteractiveView, WXSDKInstance;

@interface TBLiveGoodsBubbleWeexComponent : WXComponent <WXModuleProtocol, TBLiveColleagueProtocol>
{
    _Bool _haveAddEvent;
    TBLiveInteractiveView *_interactiveView;
    TBLiveGoodsShowCaseView *_goodsShowCaseView;
}

+ (id)identifier;
@property(nonatomic) _Bool haveAddEvent; // @synthesize haveAddEvent=_haveAddEvent;
@property(retain, nonatomic) TBLiveGoodsShowCaseView *goodsShowCaseView; // @synthesize goodsShowCaseView=_goodsShowCaseView;
@property(retain, nonatomic) TBLiveInteractiveView *interactiveView; // @synthesize interactiveView=_interactiveView;
- (void).cxx_destruct;
- (void)receivemsg:(id)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)addEvent:(id)arg1;
- (void)addGoodsShowCase;
- (id)loadView;
- (void)viewDidUnload;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

