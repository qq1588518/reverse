//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface YXLiveDownloadManager : NSObject
{
    _Bool _isFristDownLoad;
    NSMutableArray *_downloadTaskArray;
    NSString *_downloadPath;
    NSString *_statisticsPath;
}

+ (id)sharedInStance;
@property(retain, nonatomic) NSString *statisticsPath; // @synthesize statisticsPath=_statisticsPath;
@property(retain, nonatomic) NSString *downloadPath; // @synthesize downloadPath=_downloadPath;
@property(retain, nonatomic) NSMutableArray *downloadTaskArray; // @synthesize downloadTaskArray=_downloadTaskArray;
@property(nonatomic) _Bool isFristDownLoad; // @synthesize isFristDownLoad=_isFristDownLoad;
- (void).cxx_destruct;
- (id)filefullNameKeepSpaceWith:(id)arg1;
- (id)filefullNameDataSpaceWith:(id)arg1;
- (_Bool)existsNameKeepSpace:(id)arg1;
- (_Bool)existsNameDataSpace:(id)arg1;
- (id)filefullWithNameKeepSpace;
- (id)filefullWithNameDataSpace;
- (_Bool)creatKeepSpace;
- (_Bool)creatDataSpace;
- (_Bool)unzipFile:(id)arg1 deleteWhenSuccess:(_Bool)arg2;
- (void)clearLocalGiftResource;
- (void)clearDownloadFiles;
- (unsigned long long)totalDownloadSize;
- (id)getFileURLFromCachesByFolder:(id)arg1 fileName:(id)arg2;
- (id)getFileURLFromDataSpaceCachesByFolder:(id)arg1 fileName:(id)arg2;
- (id)freeSpace;
- (_Bool)isAlreadyDownloadZipUrl:(id)arg1;
- (void)downloadFileToCaches:(id)arg1 giftId:(id)arg2 folder:(id)arg3 logParams:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)isExitDownLoadFile;

@end

