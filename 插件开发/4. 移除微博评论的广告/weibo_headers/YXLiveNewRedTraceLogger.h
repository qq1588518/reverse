//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXLiveBaseTraceLogger.h"

@class NSMutableString;

@interface YXLiveNewRedTraceLogger : YXLiveBaseTraceLogger
{
    NSMutableString *_redpacketIds;
}

@property(retain, nonatomic) NSMutableString *redpacketIds; // @synthesize redpacketIds=_redpacketIds;
- (void).cxx_destruct;
- (void)sendLogger;
- (void)addRedPacketId:(long long)arg1;
- (void)addGrabRedTracer:(id)arg1 anchorId:(id)arg2 memberId:(id)arg3 redPacketId:(id)arg4 grabAccount:(double)arg5 grabCurrency:(long long)arg6;
- (void)addGrabRedResult:(long long)arg1 requestResultMsg:(id)arg2;
- (void)addRedPacketList:(id)arg1 anchorId:(id)arg2 memberId:(id)arg3 isFirstGetList:(_Bool)arg4 requestStatus:(long long)arg5 requestResultMsg:(id)arg6;
- (id)getTraceID;

@end

