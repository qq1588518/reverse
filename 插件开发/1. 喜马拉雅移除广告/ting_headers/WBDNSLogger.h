//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSFileHandle, NSMutableDictionary, NSString, WBDNSLogFile;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WBDNSLogger : NSObject
{
    unsigned long long _maxFileSize;
    unsigned long long _maxFileNum;
    NSString *_logDirectory;
    NSDateFormatter *_dateFormatter;
    NSFileHandle *_currentFileHandle;
    WBDNSLogFile *_currentLogFile;
    NSObject<OS_dispatch_queue> *_loggerQueue;
    NSObject<OS_dispatch_source> *_currentLogFileVnode;
    NSMutableDictionary *_runningUploadTask;
    NSString *_cookieStr;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *cookieStr; // @synthesize cookieStr=_cookieStr;
- (void).cxx_destruct;
- (void)removeFile:(id)arg1;
- (id)unsortedLogFilePaths;
- (id)unsortedLogFiles;
- (id)getUploadbody2:(id)arg1;
- (id)getUploadBody:(id)arg1 fileData:(id)arg2;
- (void)uploadLogFile:(id)arg1;
- (void)uploadLogFiles;
- (id)sortedLogFiles;
- (void)deleteOldLogFiles;
- (id)createNewLogFile;
- (id)newLogFileName;
- (void)maybeRollLogFileDueToSize;
- (void)rollLogFileNow;
- (id)currentLogFile;
- (id)currentLogFileHandle;
- (void)logMessage:(id)arg1;
- (id)getLogDirectory;
- (id)defaultLogDirectory;
- (id)initWithLogDirectory:(id)arg1;
- (void)dealloc;
- (id)init;

@end

