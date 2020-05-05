//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMUseCaseCallback-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"
#import "WCPayPayMoneyLogicDelegate-Protocol.h"

@class NSString, WCPayMallPayStruct, WCPayPayMoneyLogic;

@interface WCPayPayMoneyFromMallLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyLogicDelegate, WCPayLogicMgrExt, MMUseCaseCallback>
{
    WCPayMallPayStruct *m_oWCPayMallPayStruct;
    WCPayPayMoneyLogic *m_payLogic;
}

- (void).cxx_destruct;
- (void)call:(id)arg1;
- (void)OnGetMallPrepayRequest:(id)arg1 AppSource:(id)arg2 Error:(id)arg3;
- (_Bool)gotoViewController:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)dealloc;
- (void)setWCPayMallPayStruct:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

