//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "NSProgressReporting-Protocol.h"

@class NSDictionary, NSString, WBMediaUploadContentSource;
@protocol WBMediaUploadGeneralFileContentProcessConfiguring;

@protocol WBMediaUploadGeneralFileContentProcessing <NSObject, NSProgressReporting>
- (void)cancel;
- (void)startProcessingWithConfig:(id <WBMediaUploadGeneralFileContentProcessConfiguring>)arg1 completion:(void (^)(WBMediaUploadContentSource *, NSError *))arg2;
- (id)initWithContentSource:(WBMediaUploadContentSource *)arg1 cacheDirectory:(NSString *)arg2;

@optional
- (NSDictionary *)processingLogs;
@end

