//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WBMediaEditorCacheUploader, WBVideoEditorCache;

@interface WBJSVideoUploadTask : NSObject
{
    NSString *_localPath;
    WBVideoEditorCache *_cache;
    WBMediaEditorCacheUploader *_uploader;
    NSString *_fid;
}

@property(retain, nonatomic) NSString *fid; // @synthesize fid=_fid;
@property(retain, nonatomic) WBMediaEditorCacheUploader *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) WBVideoEditorCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
- (void).cxx_destruct;

@end

