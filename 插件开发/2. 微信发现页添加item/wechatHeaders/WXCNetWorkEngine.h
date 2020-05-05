//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WXCNetworkStatusDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol WXCNetWorkProxyDelegate;

@interface WXCNetWorkEngine : MMService <WXCNetworkStatusDelegate, MMServiceProtocol>
{
    unsigned int _uiLastNetworkStatus;
    int _lastValidNetType;
    int _taskSeq;
    id <WXCNetWorkProxyDelegate> _proxyDelegate;
    NSMutableArray *_netTaskArray;
}

@property(nonatomic) int taskSeq; // @synthesize taskSeq=_taskSeq;
@property(retain, nonatomic) NSMutableArray *netTaskArray; // @synthesize netTaskArray=_netTaskArray;
@property(nonatomic) __weak id <WXCNetWorkProxyDelegate> proxyDelegate; // @synthesize proxyDelegate=_proxyDelegate;
- (void).cxx_destruct;
- (void)notifyNetworkChange;
- (void)WXCReachabilityChange:(unsigned int)arg1;
- (void)startNetworkWatcher;
- (void)initNetworkWatcher;
- (void)proxySendRequest:(int)arg1 reqData:(id)arg2 cmd:(int)arg3;
- (_Bool)isProxyInit;
- (id)getWxUserName;
- (void)postRespData:(id)arg1 taskId:(int)arg2 retCode:(int)arg3 buffer:(id)arg4;
- (id)findByTaskId:(int)arg1;
- (int)getTaskSeq;
- (int)addTask:(id)arg1 cmdTag:(id)arg2 cmd:(int)arg3 buffer:(id)arg4 compressMethod:(int)arg5 cryptMethod:(int)arg6 router:(int)arg7 backfillData:(id)arg8;
- (id)genCmdBodyData:(int)arg1 buffer:(id)arg2 compressMethod:(int)arg3 cryptMethod:(int)arg4 router:(int)arg5 taskId:(int)arg6 cmdTag:(id)arg7;
- (int)getNetTaskType:(int)arg1;
- (int)getCmdZipMethod:(int)arg1;
- (int)getCmdCryptMethod:(int)arg1;
- (id)genReadPackageData:(id)arg1;
- (id)genWritePackageData:(id)arg1 body:(id)arg2;
- (id)makeProtocolHead:(int)arg1 compressMethod:(int)arg2 cryptMethod:(int)arg3 unZipSize:(unsigned long long)arg4 router:(int)arg5 taskId:(int)arg6;
- (int)doSendTaskImpl:(int)arg1 callback:(id)arg2 cmd:(int)arg3 cmdTag:(id)arg4 cmdBuffer:(id)arg5 compressMethod:(int)arg6 cryptMethod:(int)arg7 netTaskType:(int)arg8 backfillData:(id)arg9;
- (void)notifyUserChanged;
- (_Bool)handleMultiTalkNotFriendNotify:(id)arg1;
- (_Bool)handleMultiTalkBannerNotify:(id)arg1 WxGroupId:(id)arg2;
- (_Bool)handleMultiTalkNotify:(id)arg1;
- (_Bool)handleMultiTalkResp:(int)arg1 seq:(int)arg2 data:(id)arg3;
- (int)doSendTask:(id)arg1 cmd:(int)arg2 cmdTag:(id)arg3 cmdBuffer:(id)arg4;
- (int)doSendTaskForceUseNetType:(int)arg1 router:(int)arg2 callback:(id)arg3 cmd:(int)arg4 cmdTag:(id)arg5 cmdBuffer:(id)arg6 backfillData:(id)arg7;
- (int)doSendTaskForceUseNetType:(int)arg1 listener:(id)arg2 cmd:(int)arg3 cmdTag:(id)arg4 cmdBuffer:(id)arg5;
- (int)doSendTaskWithRouter:(int)arg1 callback:(id)arg2 cmd:(int)arg3 cmdTag:(id)arg4 cmdBuffer:(id)arg5 backfillData:(id)arg6;
- (int)doSendTaskWithRouter:(int)arg1 callback:(id)arg2 cmd:(int)arg3 cmdTag:(id)arg4 cmdBuffer:(id)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

