//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol VIRPCExecutor

@optional
- (void)executeReportByParams:(NSDictionary *)arg1 callback:(void (^)(VIRPCResponse *))arg2;
- (void)executeRPCCallBySceneId:(NSString *)arg1 bizId:(NSString *)arg2 extParams:(NSDictionary *)arg3 envData:(NSString *)arg4 showLoading:(_Bool)arg5 bizRequestData:(NSString *)arg6 callback:(void (^)(VIRPCResponse *))arg7;
- (void)executeRPCCallByKeyParams:(NSDictionary *)arg1 module:(NSString *)arg2 method:(NSString *)arg3 jsonParam:(NSString *)arg4 envData:(NSString *)arg5 showLoading:(_Bool)arg6 bizRequestData:(NSString *)arg7 callback:(void (^)(VIRPCResponse *))arg8;
@end

