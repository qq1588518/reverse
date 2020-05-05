//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSURL;

@interface ANSCleanupFilesOperation : NSOperation
{
    CDUnknownBlockType _successBlock;
    NSURL *_directoryUrl;
    long long _maximumPendingMultipartFiles;
}

@property(readonly, nonatomic) long long maximumPendingMultipartFiles; // @synthesize maximumPendingMultipartFiles=_maximumPendingMultipartFiles;
@property(readonly, nonatomic) NSURL *directoryUrl; // @synthesize directoryUrl=_directoryUrl;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (id)URLsByRemovingOldFiles:(id)arg1 withMaximumFileCount:(long long)arg2;
- (void)main;
- (id)initWithDirectoryURL:(id)arg1 maximumPendingMulitpartFiles:(long long)arg2;

@end

